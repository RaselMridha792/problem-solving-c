#include <stdio.h>

int main () {
      // for(int i = 1; i < 100; i++){
      //       printf("%d\n", i);
      // }

      // print 1 to 100 even number using for loop
      // for(int i = 1; i < 100; i+=2){
      //       printf("%d\n", i);
      // }

      // print 1 to n number. n is an input
      // int n;
      // printf("enter value of n: ");
      // scanf("%d", &n);
      // int sum = 0;
      // for(int i = 1; i<=n; i++){
      //       sum = sum + i;
      // }
      // printf("%d\n", sum);

      // Print Multiplication Table
      int a;
      scanf("%d", &a);
      int Multiplication = 0;
      for(int i = 0; i < 10; i++){
            Multiplication = Multiplication + a;
            printf("%d\n", Multiplication);
      }
    return 0;
}