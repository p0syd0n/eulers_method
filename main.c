#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

double dydx(double x, double y) { 
        return x * pow(y, 2);     
}

int main(int argc, char *argv[]) {
        double initial[2] = {1.0, -1.0};
        double goal = 15.0;

        int steps = atoi(argv[1]);
        double delta_x = (goal - initial[0])/steps;
        double current[2];
        memcpy(current, initial, sizeof(initial));
        for (int _ = 0; _ < steps; _++) {
                current[1] = current[1] + (delta_x * dydx(current[0], current[1]));
                current[0] = current[0] + delta_x;
        }
        printf("(%f, %f)\n", current[0], current[1]);
        return 1;
}
