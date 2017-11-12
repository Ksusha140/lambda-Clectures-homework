//
//  task9.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task9.h"

void mysortstr_test() {
    int n = 5;
    char arr[][STR_MAX_LENGTH] = {"Good afternoon", "Need help?", "Jojo", "Hello, my friend!", "Jojoba"};
    mysortstr(arr, n);
    printf("SORTED STRINGS:\n");
    for (int i = 0; i < n; i++) {
        printf("sorted[%d] = %s\n", i, arr[i]);
    }
}
