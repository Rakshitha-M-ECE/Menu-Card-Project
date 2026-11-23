/*
name: Rakshitha M
date: 28/10/2026
description : Menu card

*/
#include <stdio.h>
int main()
{   
    int option=-1, i=1, cost, payment,quantity;
    int c1=0, c2=0, c3=0, c4=0, c5=0;
    float total=0, gst, final_total;


    printf("\n-----WELCOME TO BANGTAN CAFE-----\n\n");


    do
    {
    label1:
    printf("\n1.Veg Momos  249/-\n2.Hakka Noodles  180/-\n3.White Sauce Pasta  249/-\n4.French Fries   180/-\n5.Fried Chicken  350/-\n");
    printf("\nPlease order food/ To exit enter '0'\n");

    if (scanf("%d", &option) != 1) //if option is charcter the loop runs infinite times so to check it 
    {   
    while (getchar() != '\n');   // clear bad input
    printf("Please enter a number.\n");
    continue;
    }  

    if(option>=1 && option<=5) //Taking quantity input for food list in menu card
    {
    printf("Enter the number of quantity\n");
    scanf("%d",&quantity);
    }


    switch(option)
    {
        case 1:
        c1+=quantity;
        cost= 249*c1; //initializing the cost of veg momos
        total += cost;
       
        printf("%d-Veg Momos added to the cart\n",c1);
        break; //add count++

        case 2:
        c2+=quantity;
        cost= 180*c2; //initializing the cost of Hakka Noodles
        total += cost;
        
        printf("%d-Hakka Noodles added to the cart\n",c2);
        break;

        case 3:
        c3+=quantity;
        cost= 249*c3;  //initializing the cost of white sauce pasta
        total += cost;
        printf("%d-White sauce pasta added to the cart\n",c3);
        break;

        case 4:
        c4+=quantity;
        cost= 180*c4; //initializing the cost of French fries
        total += cost;
        printf("%d-French fries added to the cart\n",c4);
        break;

        case 5:
        c5+=quantity;
        cost= 350*c5; //initializing the cost of Fried Chicken
        total += cost;
        c5+=quantity;
        printf("%d,Fried chicken added to the cart\n",c5);
        break;
        
        case 0: // This acts as Exit when user enters '0'
        break;
        
        default:
        printf("Sorry! The option is not available\n\n");
        goto label1;
        
    }
    
    
    } while(option>=1 && option<=5);
    

    // GST BILL CALCULATION
     gst = total * 5.0 / 100; //calculating GST of 5%
     final_total = total + gst; //final bill
    
    //Printing the BILL with order list
    if(total>0){
    printf("\n-----------ORDER LIST------------\n");
    if(c1){
      printf("%d. Veg Momos           %d*249 rs\n",i++,c1);
    }
    if(c2){
      printf("%d. Hakka Noodles       %d*180 rs\n",i++,c2);
    }
    if(c3){
      printf("%d. White sauce pasta   %d*249 rs\n",i++,c3);
    }
    if(c4){
      printf("%d. French fries        %d*180 rs\n",i++,c4);
    }
    if(c5){
      printf("%d. Fried Chicken       %d*350 rs\n",i++,c5);
    }


    printf("--------------------------------------\n");
    printf("Total               = %g rs\n",total);
    printf("GST(5%%)             = %g rs\n",gst);
    printf("Total Amount        = %g rs\n",final_total);
    printf("---------------------------------------\n");
    

    //PAYMENT METHOD INPUT FROM USER
    do 
    {
    printf("Select Payment Method: 1. Cash 2. UPI 3. Card\n");
    scanf("%d", &payment);
    } while (payment < 1 || payment > 3);

    switch(payment)  //payment method choice based on input
    {
      case 1:
        printf("Payment method: Cash\n");
        printf("Please pay Rs. %g\n", final_total);
        printf("---------------------------------------\n");
        printf("Payment successful!\n");
        break;

      case 2:
        printf("Payment method: UPI\n");
        printf("Please scan the QR code to pay Rs. %g\n",final_total);
        printf("---------------------------------------\n");
        printf("UPI payment done successfully!\n");
        break;

      case 3:
        printf("Payment method: Card\n");
        printf("Please swipe or insert your card.\n");
        printf("---------------------------------------\n");
        printf("Card payment done successfully!\n");
        break;
     }
     }
      printf("\n---------Thankyou, Visit Again---------\n\n");
      return 0;
}