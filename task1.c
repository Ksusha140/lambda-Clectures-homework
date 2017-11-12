//
//  task1.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task1.h"

void print_celsius_from_farenheit() {
    
    double f;
    
    while(true) {
        printf("Enter Farenheit(or 's' to stop): ");
        int s = scanf("%lf", &f);
        printf("\n");
        if(s != 1) {
            printf("Input of Farenheit ended\n");
            return;
        }
        
        printf("Celsii: %lf\n", celsius(f));
    }
}

double celsius(double f) {
    return (5./9)*(f-32);
}
