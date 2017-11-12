//
//  task5.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task5.h"

void print_result(int sum, int neg_count) {
    printf("RESULT:\n");
    printf("Sum of positive numbers: %d\n", sum);
    printf("Number of negative numbers: %d\n", neg_count);
}

int getN(int *n) {

    printf("Enter natural n: ");
    int s = scanf("%d", n);
    printf("\n");
    if(s != 1) {
        printf("Error occure while reading n value\n");
        return 0;
    }
    if(*n <= 0) {
        printf("n cannot be less or equal 0\n");
        return 0;
    }
    
    return 1;
}

void print_task5_with_while_result() {
    int n;
    if(!getN(&n)) {
        return;
    }
    
    int arr[n];
    int i = 0;
    while(i < n) {
        printf("a%d = ", i+1);
        int s = scanf("%d", &arr[i]);
        printf("\n");
        if(s != 1) {
            printf("Error occure while reading a%d value\n", i+1);
            return;
        }
        i++;
    }
    
    i = 0;
    int sum = 0;
    int neg_count = 0;
    while(i < n) {
        if(arr[i] < 0) {
            neg_count++;
        } else {
            sum += arr[i];
        }
        i++;
    }
    
    print_result(sum, neg_count);
}

void print_task5_with_dowhile_result() {
    int n;
    if(!getN(&n)) {
        return;
    }
    
    int arr[n];
    int i = 0;
    do {
        printf("a%d = ", i+1);
        int s = scanf("%d", &arr[i]);
        printf("\n");
        if(s != 1) {
            printf("Error occure while reading a%d value\n", i+1);
            return;
        }
        i++;
    } while(i < n);
    
    i = 0;
    int sum = 0;
    int neg_count = 0;
    do {
        if(arr[i] < 0) {
            neg_count++;
        } else {
            sum += arr[i];
        }
        i++;
    } while(i < n);
    
    print_result(sum, neg_count);
}

void print_task5_with_for_result() {
    int n;
    if(!getN(&n)) {
        return;
    }
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("a%d = ", i+1);
        int s = scanf("%d", &arr[i]);
        printf("\n");
        if(s != 1) {
            printf("Error occure while reading a%d value\n", i+1);
            return;
        }
    }
    
    int sum = 0;
    int neg_count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            neg_count++;
        } else {
            sum += arr[i];
        }
    }
    
    print_result(sum, neg_count);
}
