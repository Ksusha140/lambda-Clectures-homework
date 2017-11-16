//
//  task13.c
//  lambda
//
//  Created by Ксения Афанасьева on 16.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task13.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void test_stack(void) {
    stack * charstack = create_stack(sizeof(char));
    char * c = malloc(charstack->element_size);
    *c = 'a';
    push(charstack, c);
    delete_stack(charstack);
}

void print_char_element(void * element) {
    printf("%c\n", *((char *)element));
}
