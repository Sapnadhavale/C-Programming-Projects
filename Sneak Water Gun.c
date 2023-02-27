# include <stdio.h>
# include <stdlib.h>
# include <time.h>


    int SWG(char you,char comp){
        if(you==comp){
            return 0;
        }

        if(you=='w' && comp=='g'){
            return 1;
        }
        else if(you=='g' && comp=='w'){
            return -1;
        }

         if(you=='s' && comp=='w'){
            return 1;
        }
        else if(you=='w' && comp=='g'){
            return -1;
        }

        if(you=='g' && comp=='s'){
            return 1;
        }
        else if(you=='s' && comp=='g'){
            return -1;
        }
    }

  int main () {
    char you ,comp;

    srand(time(0));
    int number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if (number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }

    printf("Enter s for sneak,w foe water and g for gun:\n");
    scanf("%c",&you);
    int result=SWG(you,comp);

    if(result==0){
        printf("Game is tie\n");
    }
    else if(result==-1){
        printf("You loose!\n");
    }
    else{
        printf("You win!\n");
    }
    printf("You chose %c and comp chose %c\n",you,comp);
    return 0;
  }