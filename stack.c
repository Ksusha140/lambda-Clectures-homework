//
//  stack.c
//  lambda
//
//  Created by Ксения Афанасьева on 16.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "stack.h"
#include <stdlib.h>
#define true 1

stack * create_stack(int _element_size) {
    stack * _stack = (stack *)malloc(sizeof(stack));
    if(!_stack) {
        return NULL;
    }
    _stack->head = NULL;
    _stack->buffer = NULL;
    _stack->element_size = _element_size;
    
    return _stack;
}

void delete_stack(stack * _stack) {
    while(pop(_stack)) {}
    free(_stack->buffer);
    free(_stack);
}

int push(stack * _stack, void * _element) {
    stack_element * _s = (stack_element *)malloc(sizeof(stack_element));
    if(!_s) {
        return -1;
    }
    _s->prev = _stack->head;
    _stack->head = _s;
    
    _s->element = _element;
    
    return 0;
}

void * pop(stack * _stack) {
    free(_stack->buffer);
    if(!_stack->head) {
        _stack->buffer = NULL;
        return NULL;
    }
    _stack->buffer = _stack->head->element;
    stack_element * newhead = _stack->head->prev;
    free(_stack->head);
    
    _stack->head = newhead;
    
    return _stack->buffer;
}

void print_stack(stack * _stack,
                 void (* print_head)(void),
                 void (* print_body)(void * _element),
                 void (* print_foot)(void)) {
    print_head();
    stack * _s = create_stack(_stack->element_size);
    void * buff = NULL;
    while((buff = pop(_stack))) {
        push(_s, buff);
        print_body(buff);
    }
    
    buff = NULL;
    while((buff = pop(_s))) {
        push(_stack, buff);
    }
    print_foot();
}
