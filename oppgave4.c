#include <stdio.h>

int my_numbers(int startnum, int endnum){

    for (int i = startnum; i <= endnum; i++){
        int return_number = 5%i;
        if (i%2 == 1){
            printf  ("%d is odd \n", i);
        }
        if (i%2 == 0) {
            printf ("%d is even \n", i);
        } if (5%i == 5) {
            printf ("5 is a prime factor ");
        } else {
            printf ("5 is not a prime factor ");
        }
    }
}

int main()
{
    my_numbers(1,10);

    printf ("\n");
    return 0;
}