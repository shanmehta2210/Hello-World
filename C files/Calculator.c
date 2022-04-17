#include <stdio.h>


int main(){
    double n1;
    double n2;
    double result;
    int operation;
    int result_int;
    int n1_int;
    int n2_int;
   
   // This thing is strong enough to perform calculations such as 8 ^ 1000, even 3 ^ 10,00,000 
    
    
    printf("Welcome to the best digital calculator in the world!!\n");
    printf("Please write the required operations in all lowercase, and try to avoid spelling errors.\n");
    printf("Write the numbers(in this form - 5, 7): ");
    scanf("%lf, %lf", &n1, &n2);
    printf("Write 1 for addition, 2 for subtraction, 3 for division, 4 for multiplication, 5 for exponent, 6 for finding remainder. \n(The last two only function for integral values so they will be rounded down)\n");
    printf("So, what operation would you like to perform: ");
    scanf("%d", &operation);
    

    switch (operation)
    {
    case 1:
        result = n1 + n2;
        printf("The result is %f", result);
        break;
    case 2:
        result = n1 - n2;
        printf("The result is %f", result);
        break;
    case 4:
        result = n1 * n2;
        printf("The result is %f", result);
        break;
    case 3:
        result = n1 / n2;
        printf("The result is %f", result);
        break;
    case 6:
        n1_int = n1;
        n2_int = n2;
        result = n1_int % n2_int;
        result_int = result;
        printf("The result is %d", result_int);
        break;
    case 5:

        int a = n1;
        int b = n2;
        int c;
        int d;
        double f;
        double e;

        if (b == 0){
        c = 1;
        printf("%d", c);
    }else if (b > 0)
    {
        c = a;
        while (b > 1)
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
        break;
    default:
        break;
    }


}




