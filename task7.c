//
//  task7.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task7.h"

void create_and_sort_array() {
    srand((unsigned int)time(NULL));
    int n = 10 + rand()%10;
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = rand()%30*pow(-1, rand()%2);
    }
    
    printf("ORIGINAL ARRAY:\n");
    for (int i = 0; i < n; i++) {
        printf("sorted[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
    
    mysort(arr, n);
    
    printf("SORTED ARRAY:\n");
    for (int i = 0; i < n; i++) {
        printf("sorted[%d] = %d\n", i, arr[i]);
    }
}
