#include<stdio.h>

int main()
{

    char x = 'R';
    int n = 4;
    float p = 7.179;

    printf("The value of variable x is %c and it is stored at %p\n", x, &x);
    printf("The value of variable n is %d and it is stored at %p\n", n, &n);
    printf("The value of variable p is %f and it is stored at %p\n", p, &p);





    return 0;
}