#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int number,guess ,nguesses=1;
  srand(time(0));
  number = rand()%10 +1 ;
  //printf("The number is %d \n", number );

 do{
    printf("Guess the number between 1 to 10 \n");
    scanf("%d" ,&guess);

    if(guess>number){
    printf("Number is smaller than guessed\n");
    }
    else if(guess<number){
    printf("Number is bigger than guessed \n");
    }
    else{
    printf("You guessed it in %d attempts \n" ,nguesses);
    }
    nguesses++;
 }while(guess!=number);

  return 0;
  }
