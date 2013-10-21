/* 
 * File:   main.c
 * Author: palmyman
 *
 * Created on October 21, 2013, 1:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
typedef struct TCircle {
    double x, y, r;
} TCircle;

int hasIntersection(TCircle circle1, TCircle circle2) {
    double centerDiff;
    centerDiff = sqrt(pow(circle1.x - circle2.x, 2) + pow(circle1.y - circle2.y, 2));
    if(centerDiff > (circle1.r + circle2.r)) return 0;
    if(centerDiff == (circle1.r + circle2.r)) return 1;
    if(centerDiff < (circle1.r + circle2.r) && centerDiff > abs(circle1.r - circle2.r)) return 2;    
    if(centerDiff < (circle1.r + circle2.r) && centerDiff == abs(circle1.r - circle2.r)) return -1;
    if(centerDiff < abs(circle1.r - circle2.r)) return -2;
    return 3;
}

int inputCheck(float r, int check) {
    if (check == 3)
        if (r > 0)
            return 1;
    printf("Nespravny vstup.\n");//Invalid input
    return 0;
}

int readCircle(TCircle newCircle) {
    int check;
    check = scanf("%f %f %f", &newCircle.x, &newCircle.y, &newCircle.r);
    if(!inputCheck(newCircle.r, check))
        return 0;
    return 1;
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

