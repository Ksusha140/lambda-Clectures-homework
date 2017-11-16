//
//  stack.h
//  lambda
//
//  Created by Ксения Афанасьева on 16.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#ifndef stack_h
#define stack_h

typedef struct stack_element {
    void * element;
    struct stack_element * prev;
} stack_element;

typedef struct stack {
    int element_size;
    struct stack_element * head;
    void * buffer;
} stack;

stack * create_stack(int _element_size);
void delete_stack(stack * _stack);
int push(stack * _stack, void * _element);
void * pop(stack * _stack);
void print_stack(stack * _stack,
                 void (* print_head)(void),
                 void (* print_body)(void * _element),
                 void (* print_foot)(void));

#endif /* stack_h */
