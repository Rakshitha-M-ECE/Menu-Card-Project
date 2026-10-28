#include <stdio.h>
int main()
{
    int chocolate=13,choice1=0,choice2=0;
    while(chocolate>0){
              printf("chocolate remaining=%d",chocolate);
        printf("Player 1 turn\n Pick chocolates (0 t0 3): ");
        scanf("%d",&choice1);
        
        if(choice1<=0 && choice1>3)
        continue;
        if(choice1)
        chocolate-=choice1;
       else{
       
        printf("chocolate remaining=%d",chocolate);
        printf("Player 2 turn\n Pick chocolates (0 t0 3): ");
        scanf("%d",&choice2);
        if(choice2<=0 && choice2>3)
        continue;
         chocolate-=choice2;
       }

    }
return 0;
}