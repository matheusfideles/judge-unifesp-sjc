#include <stdio.h>
#include <math.h>

int main() {
    double a = 0, b = 0, c = 0, r1 = 0, r2 = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = pow(b, 2) - 4*a*c;

    if(delta < 0 || a == 0){
        printf("Impossivel calcular\n");
    }
    else if(delta >= 0){
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}