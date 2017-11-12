//
//  mystring.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "mystring.h"

int stringlenght(char* str) {
    int i = 0;
    while(*(str+i) != '\0') {
        i++;
    }
    
    return i;
}

int stringcompare(char* str1, char* str2) {
    int i = 0, result = 0;
    
    while(result == 0) {
        char ch1 = *(str1+i);
        char ch2 = *(str2+i);
        
        if(ch1 == '\0' && ch2 != '\0') {
            result = -1;
        } else if(ch1 != '\0' && ch2 == '\0') {
            result = 1;
        } else if(ch1 == '\0' && ch2 == '\0') {
            break;
        } else {
            if(ch1 < ch2) {
                result = -1;
            } else if(ch1 > ch2) {
                result = 1;
            } else {
                result = 0;
            }
        }
        i++;
    }
    
    return result;
}

int stringswap(char* str1, char* str2) {
    int i = 0;
    while(true) {
        char ch1 = *(str1+i);
        char ch2 = *(str2+i);
        
        char tmp = ch1;
        *(str1+i) = ch2;
        *(str2+i) = tmp;
        
        if(ch1 == '\0' && ch2 == '\0') {
            break;
        } else if(ch1 == '\0') {
            i++;
            while(*(str2+i) != '\0') {
                *(str1+i) = *(str2+i);
                i++;
            }
            *(str1+i) = '\0';
            break;
        } else if(ch2 == '\0') {
            i++;
            while(*(str1+i) != '\0') {
                *(str2+i) = *(str1+i);
                i++;
            }
            *(str2+i) = '\0';
            break;
        }
        i++;
    }
    
    return 0;
}
