//
//  mysortstr.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "mysortstr.h"

int mysortstr(char arr[][STR_MAX_LENGTH], int n) {
    if(n <= 0) {
        return 1;
    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(stringcompare(arr[i], arr[j]) == 1) {
                stringswap(arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}
