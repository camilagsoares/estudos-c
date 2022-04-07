#include <stdio.h>

int main() {
    int *px;
    int *py, *pz;
    int x = 2, y = 3, z = 5;

    px = &x;
    py = &y;
    pz = &z;

    printf("Valores das variaveis: \n");
    printf(" x = %d, y= %d, z = %d \n \n", x,y,z);
    printf(" x = %d, y= %d, z = %d \n \n", *px, *py, *pz);
    printf("Endereços das variaveis: \n");
    printf(" x = %d, y= %d, z = %d \n \n", &x,&y,&z);
    printf(" x = %d, y= %d, z = %d \n \n", px, py, pz);
    printf("Endereço dos ponteiros: \n");
    printf(" x = %d, y= %d, z = %d \n \n", px,py,pz);
    printf(" x = %d, y= %d, z = %d \n \n", &px, &py, &pz);

    return 0;
}