#include <stdio.h>

int main(){

    int a ;
    int b ;

    printf("Welcome to the exponential calculator.\nWrite down the number, base first and exponent second: ");
    scanf("%d, %d", &a, &b);
    
    int c;
    int d;
    double e;
    double f;
    // c = a^b
    
    if (b == 0){
        c = 1;
        printf("%d", c);
    }else if (b > 0)
    {
        c = a;
        while (b != 1)
        {
            c *= a; 
            b--;
            d = c;
        }
        printf("%d", d);
        
    }else if (b < 0)
    {
         c = a;
        while (b != -1)
        {
            c *= a; 
            b++;
            d = c;
        }
        d = c;
        f = d;
        e = 1/f;
        printf("%lf", e);
    }
    
    

    



}