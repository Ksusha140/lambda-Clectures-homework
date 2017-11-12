//
//  task3.c
//  lambda
//
//  Created by Ксения Афанасьева on 12.11.17.
//  Copyright © 2017 Ксения Афанасьева. All rights reserved.
//

#include "task3.h"

void print_fartocel_headerrow() {
    printf("|%7c%5c | %7c%5c|\n", 'F', ' ', 'C', ' ');
}

void print_fartocelrow(double f) {
    printf("|%12.2lf | %12.2lf|\n", f, celsius(f));
}

void print_fartocel_table_with_while() {
    double f = 0;
    
    print_fartocel_headerrow();
    while(f <= 150) {
        print_fartocelrow(f);
        f += 10;
    }
}

void print_fartocel_table_with_dowhile() {
    double f = 0;
    
    print_fartocel_headerrow();
    do {
        print_fartocelrow(f);
        f += 10;
    } while(f <= 150);
}

void print_fartocel_table_with_for() {
    print_fartocel_headerrow();
    for(double f = 0; f <= 150; f += 10) {
        print_fartocelrow(f);
    }
}
