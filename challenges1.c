#include <stdio.h>

int main()
{
	int x, y, sum, reduce;
    float a, b, sum1, reduce1;
    scanf("%d %d", &x, &y);
    sum = x + y;
    reduce = x - y;
    printf("%d %d\n", sum, reduce);
    scanf("%f %f", &a, &b);
    sum1 = a + b;
    reduce1 = a - b;
    printf("%.1f %.1f", sum1, reduce1);    
   
    return 0;
}