#include <stdio.h>
int main()
{
    int option,i=1;
    printf("WELCOME TO BANGTAN CAFE\n\n");
    do{
    printf("1.Veg Momos  249/-\n2.Hakka Noodles  180/-\n3.White Sauce Pasta  249/-\n4.French Fries   180/-\n5.Fried Chicken  350/-\n");
    printf("Please order your food:\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("Veg Momos\n");
        break;

        case 2:
        printf("Hakka Noodles\n");
        break;

        case 3:
        printf("White sauce pasta\n");
        break;

        case 4:
        printf("French fries\n");
        break;

        case 5:
        printf("Fried Chicken\n");
        break;

        default:
        printf("Sorry! The option is not available\n");
    }
} while(option>=1 && option<=4);
     printf("Thankyou, Visit Again\n");
    return 0;
}

   