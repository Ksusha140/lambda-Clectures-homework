//
//  task4.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task4.h"

void print_element(int i, double x) {
    if(i >= 10) {
        printf("x%d = %10.3lf\n", i, x);
    } else {
        printf("x%d = %11.3lf\n", i, x);
    }
}

void print_progression_with_while() {
    int i = 1;
    double x = 0, xprev = 0;
    while(i <= 20) {
        if(i == 2) {
            x = 5./8;
        } else if(i > 2) {
            double tmp = x;
            x = x/2 + (3./4)*xprev;
            xprev = tmp;
        }
        
        print_element(i, x);
        i++;
    }
}

void print_progression_with_dowhile() {
    int i = 1;
    double x = 0, xprev = 0;
    do {
        if(i == 2) {
            x = 5./8;
        } else if(i > 2) {
            double tmp = x;
            x = x/2 + (3./4)*xprev;
            xprev = tmp;
        }
        
        print_element(i, x);
        i++;
    } while(i <= 20);
}

void print_progression_with_for() {
    double x = 0, xprev = 0;
    for(int i = 1; i <= 20; i++) {
        if(i == 2) {
            x = 5./8;
        } else if(i > 2) {
            double tmp = x;
            x = x/2 + (3./4)*xprev;
            xprev = tmp;
        }
        
        print_element(i, x);
    }
}
