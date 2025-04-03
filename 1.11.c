#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    float z;
    printf("Digite dois numeros inteiros e um real: ");
    scanf("%d %d %f", &x, &y, &z);

    float a, b, c;
    a = 2*x + y/2;
    b = 3*x + z;
    c = pow (z, 3);

    printf("%.2f, %.2f, %f", a, b, c);
    return 0;
}