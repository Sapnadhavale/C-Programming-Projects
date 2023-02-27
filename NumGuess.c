# include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number , guess , nguesses=1;
    srand(time(0));
    number= rand() % 50 +1;
    do{
        printf("Enter a number betwwen 1 to 50\n");
        scanf("%d",&guess);
        if (guess > number){
            printf("You guess higher number guess low number.\n");
        }
        else if (guess < number){
            printf("You guess lower number guess high number.\n");
        }
        else {
            printf("You guess right number. In a guesses %d\n",nguesses);
        }
        nguesses ++;

    }while(guess != number);

    return 0;
}