#include <stdio.h>

int main() {

    int i = 0;
    int a;
    int d;
    int n;
    double sum = 1/a;
    


    printf("A harmonic Series, is a series, where each term is 1/(the corresponding term of an A.P\n");
    printf("Now usually finding the sum of such a series would be impossible, but, We here decided to make it possible");
    printf("Write down the first term and the common difference, and the no. of terms you want the sum of(All integers Please)in this form a, d, n: ");
    scanf("%d, %d, %d", &a, &d, &n);

    double a_float = (double)a;
    double d_float = (double)d;

    for ( i = 1; i <= n; i++)
    {
        float nTerm = a + (i-1)*d;
        sum = sum + 1/nTerm;
    }
    
    printf("%lf", sum);

}