//
//  task2.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task2.h"

void print_fartocel_table() {
    printf("Printing out Farengeit to Celsius table\n");
    for(double f = 0; f <= 150; f += 10) {
        printf("%12.2lf  %12.2lf\n", f, celsius(f));
    }
}
