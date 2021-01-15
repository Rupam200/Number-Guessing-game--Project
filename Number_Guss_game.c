#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number , guess, Total_guess=1;
    srand(time(0));
    number = rand()%100 + 1;  //generate random number between 1 to 100
    //printf("The Number is %d \n", number);

    //Keep running untill the number is guessed
    do
    {
     printf("Guess The Int Number Between 1 to 100 \n");
     scanf("%d", &guess);
     if (guess>number)
     {
         printf("Lower Number Please\n");
     }
     else if (guess<number)
     {
        printf("Higher Number Please\n");
     }
     else{
         printf("You Guessed It in %d attempts \n",Total_guess);
     }
     Total_guess++;
     
     
    } while (guess!=number);
    
    return 0;
}


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//     int number , guess, Total_guess=1;
//     srand(time(0));
//     number = rand()%100 + 1;  //generate random number between 1 to 100
//     //printf("The Number is %d \n", number);

//     //Keep running untill the number is guessed

//     while (guess!=number){
//      printf("Guess The Int Number Between 1 to 100 \n");
//      scanf("%d", &guess);
//      if (guess>number)
//      {
//          printf("Lower Number Please\n");
//      }
//      else if (guess<number)
//      {
//         printf("Higher Number Please\n");
//      }
//      else{
//          printf("You Guessed It in %d attempts \n",Total_guess);
//      }
//      Total_guess++;
     
     
//     }
    
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//     int number , guess, Total_guess;
//     srand(time(0));
//     number = rand()%100 + 1;  //generate random number between 1 to 100
//     //printf("The Number is %d \n", number);

//     //Keep running untill the number is guessed

//     for(Total_guess=1;guess!=number;Total_guess++){
//      printf("Guess The Int Number Between 1 to 100 \n");
//      scanf("%d", &guess);
//      if (guess>number)
//      {
//          printf("Lower Number Please\n");
//      }
//      else if (guess<number)
//      {
//         printf("Higher Number Please\n");
//      }
//      else{
//          printf("You Guessed It in %d attempts \n",Total_guess);
//      }
//     }
    
//     return 0;
// }