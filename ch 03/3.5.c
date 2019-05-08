/*
 * Considering the equations of motion to calculate the position (s) and the velocity (v) of a particle at 
 * a given instant [t], given its acceleration [a], initial position [s0] and initial velocity [v0].
 * 
 * To write a program that receives the values of [v0], [s0], [a] and [t] and both calculates and displays 
 * the values of [s] and [v].
 */

#include <stdio.h>

int main(void) {
    double v0, s0, a, t, s, v;

    printf("Initial velocity (v0): ");
    scanf("%lf", &v0); getchar();

    printf("Initial position (s0): ");
    scanf("%lf", &s0); getchar();

    printf("Acceleration (a): ");
    scanf("%lf", &a); getchar();

    printf("Instant (t): ");
    scanf("%lf", &t); getchar();

    s = s0 + v0 * t + a * (t * t) / 2;
    v = v0 + a * t;

    printf("Position (s) at instant [t]: %.2f\n", s);
    printf("Velocity (v) at instant [t]: %.2f\n", v);

    getchar();
    return 0;
}