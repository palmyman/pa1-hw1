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
    double centerDiff, radialDiff, radialSum;
    centerDiff = sqrt(pow(circle1->x - circle2->x, 2) + pow(circle1->y - circle2->y, 2));
    radialDiff = circle1->r - circle2->r;
    if (radialDiff < 0) radialDiff *= -1;
    radialSum = circle1->r + circle2->r;
    printf("centerDiff: %lf\nradialDiff: %lf\nradialSum: %lf\n", centerDiff, radialDiff, radialSum);
    if (radialDiff < radialSum && radialSum < centerDiff) { // outside, no intersec.
        printf("Kruznice lezi vne sebe, zadny prekryv.\n");
        return 0;
    }
    if (radialDiff < radialSum && radialSum == centerDiff) { // outside, one intersec,
        printf("Vnejsi dotyk, zadny prekryv.\n");
        return -1;
    }
    if (radialDiff < centerDiff && centerDiff < radialSum) { // two intersec. -> evalVolume
        printf("Kruznice se protinaji, prekryv: 37.475800\n");
        return 2;
    }
    if (centerDiff == radialDiff) { // inside, one intersec. -> evalVolume        
        if (circle1->r < circle2->r) printf("Vnitrni dotyk, kruznice #1 lezi uvnitr kruznice #2, prekryv: %lf\n", M_PI * pow(circle1->r, 2));
        else printf("Vnitrni dotyk, kruznice #2 lezi uvnitr kruznice #1, prekryv: %lf\n", M_PI * pow(circle2->r, 2));
        return 1;
    }
    if (centerDiff < radialDiff) { // inside, no intersec -> evalVolume
        if (circle1->r < circle2->r) printf("Kruznice #1 lezi uvnitr kruznice #2, prekryv: %lf\n", M_PI * pow(circle1->r, 2));
        else printf("Kruznice #2 lezi uvnitr kruznice #1, prekryv: %lf\n", M_PI * pow(circle2->r, 2));
        return 3;
    }
    if (circle1->x == circle2->x && circle1->y == circle2->y && circle1->r == circle2->r) { // identic -> evalVolume
        printf("Kruznice splyvaji, prekryv: %lf\n", M_PI * pow(circle1->r, 2));

        return 4;
    }
    return 100;
}

int inputCheck(float r, int check) {
    if (check == 3)
        if (r > 0)
            return 1;
    printf("Nespravny vstup.\n"); //Invalid input

    return 0;
}

int readCircle(TCIRCLE & newCircle) {
    int check;
    check = scanf("%lf %lf %lf", &newCircle.x, &newCircle.y, &newCircle.r);
    if (!inputCheck(newCircle.r, check))

        return 0;
    return 1;
}

double evalVolume(TCIRCLE circle1, TCIRCLE circle2) {

    return 0;
}

int main(int argc, char** argv) {
    int inter;
    TCIRCLE circle1, circle2;
    printf("Zadejte parametry kruznice #1:\n");
    if (!readCircle(circle1)) return 0;
    printf("Zadejte parametry kruznice #2:\n");
    if (!readCircle(circle2)) return 0;

    inter = hasIntersection(&circle1, &circle2);


    printf("%d\n", inter);

    return (EXIT_SUCCESS);
}

