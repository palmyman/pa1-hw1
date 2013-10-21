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
} TCIRCLE;

int hasIntersection(TCIRCLE * circle1, TCIRCLE * circle2) {
    double centerDiff;
    centerDiff = sqrt(pow(circle1->x - circle2->x, 2) + pow(&circle1->y - &circle2->y, 2)); 
    if(centerDiff > (circle1->r + circle2->r)) return 0;
    if(centerDiff == (circle1->r + circle2->r)) return 1;
    if(centerDiff < (circle1->r + circle2->r) && centerDiff > abs(circle1->r - circle2->r)) return 2;    
    if(centerDiff < (circle1->r + circle2->r) && centerDiff == abs(circle1->r - circle2->r)) return -1;
    if(centerDiff < abs(circle1->r - circle2->r)) return -2;
    return 3;
}

int inputCheck(float r, int check) {
    if (check == 3)
        if (r > 0)
            return 1;
    printf("Nespravny vstup.\n");//Invalid input
    return 0;
}

int readCircle(TCIRCLE & newCircle) {
    int check;
    check = scanf("%lf %lf %lf", &newCircle.x, &newCircle.y, &newCircle.r);
    if(!inputCheck(newCircle.r, check))
        return 0;
    return 1;
}

double evalVolume(TCIRCLE circle1, TCIRCLE circle2) {
    return 0;
}

int main(int argc, char** argv) {
    
    TCIRCLE testCircle;
    int status = readCircle(testCircle);
    printf("%lf", testCircle.r);

    return (EXIT_SUCCESS);
}

