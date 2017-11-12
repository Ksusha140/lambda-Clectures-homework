//
//  task8.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task8.h"

void stringlength_test(void) {
    char str[STR_MAX_LENGTH];
    printf("Enter string for string lenght:\n");
    gets(str);
    
    printf("stringlength result = %d\n", stringlenght(str));
}

void stringcomparission_test(void) {
    char str1[STR_MAX_LENGTH], str2[STR_MAX_LENGTH];
    printf("Enter strings for comparisson:\n");
    printf("str1: ");
    gets(str1);
    printf("str2: ");
    gets(str2);
    
    printf("stringcompare result = %d\n", stringcompare(str1, str2));
}

void stringswap_test(void) {
    char str1[STR_MAX_LENGTH], str2[STR_MAX_LENGTH];
    printf("Enter strings for swap:\n");
    printf("str1: ");
    gets(str1);
    printf("str2: ");
    gets(str2);
    
    stringswap(str1, str2);
    printf("Strings after swap:\n");
    printf("str1: %s\nstr2: %s\n", str1, str2);
}
