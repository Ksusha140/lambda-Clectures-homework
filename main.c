//
//  main.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include <stdio.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"
#include "task13.h"

int main(int argc, const char * argv[]) {
    
    //test functions here
    
    //task1
    printf("Task1 test\n\n");
    print_celsius_from_farenheit();
    printf("\n\n");

    //task2
    printf("Task2 test\n\n");
    print_fartocel_table();
    printf("\n\n");

    //task3
    printf("Task3 test\n\n");
    printf("While loop:\n");
    print_fartocel_table_with_while();
    printf("Do-While loop:\n");
    print_fartocel_table_with_dowhile();
    printf("For loop:\n");
    print_fartocel_table_with_for();
    printf("\n\n");

    //task4
    printf("Task4 test\n\n");
    printf("While loop:\n");
    print_progression_with_while();
    printf("Do-While loop:\n");
    print_progression_with_dowhile();
    printf("For loop:\n");
    print_progression_with_for();
    printf("\n\n");

    //task5
    printf("Task5 test\n\n");
    printf("While loop:\n");
    print_task5_with_while_result();
    printf("Do-While loop:\n");
    print_task5_with_dowhile_result();
    printf("For loop:\n");
    print_task5_with_for_result();
    printf("\n\n");

    //task7
    printf("Task7 test\n\n");
    create_and_sort_array();
    printf("\n\n");

    //task8
    printf("Task8 test\n\n");
    stringlength_test();
    stringcomparission_test();
    stringswap_test();
    printf("\n\n");
    
    //task13
    printf("Task13 test\n\n");
    test_stack();
    printf("\n\n");
    
    return 0;
}
