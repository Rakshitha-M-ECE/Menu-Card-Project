/*
name: Rakshitha M
date: 28/10/2026
description : Menu card

*/
#include <stdio.h>
int main()
{   
    int option, i=1, payment,quantity;
    int c1=0, c2=0, c3=0, c4=0, c5=0;
    float total=0, gst, final_total;


    printf("\n-----WELCOME TO BANGTAN CAFE-----\n\n");


    do
    {
   
    printf("\n1.Veg Momos  249/-\n2.Hakka Noodles  180/-\n3.White Sauce Pasta  249/-\n4.French Fries   180/-\n5.Fried Chicken  350/-\n---------------------------------\n6.To Remove any Item From Cart\n7.View Cart\n0. Check out");
    printf("\n\nPlease order food/ To exit enter '0'\n");

    if (scanf("%d", &option) != 1) //if option is charcter the loop runs infinite times so to check it 
    {   
    while (getchar() != '\n');   // clear bad input
    printf("Please enter a number.\n");
    continue;
    }  

     if (option >= 1 && option <= 5)  // quantity for add
        {
            printf("Enter the quantity: ");
            if (scanf("%d", &quantity) != 1 || quantity < 1)
            {
                while (getchar() != '\n');
                printf("Invalid quantity\n");
                continue;
            }
        }


    switch(option)
    {
        case 1:
        c1+=quantity;
        printf("\n%d-Veg Momos added to the cart\n",c1);
        break; //add count++

        case 2:
        c2+=quantity;
        printf("\n%d-Hakka Noodles added to the cart\n",c2);
        break;

        case 3:
        c3+=quantity;
        printf("\n%d-White sauce pasta added to the cart\n",c3);
        break;

        case 4:
        c4+=quantity;
        printf("\n%d-French fries added to the cart\n",c4);
        break;

        case 5:
        c5+=quantity;
        printf("\n%d,Fried chicken added to the cart\n",c5);
        break;

        case 6: 
        {
        int r;
        printf("Enter item number to remove: ");
        if( scanf("%d", &r)!=1)
         {   
           while (getchar() != '\n');   // clear bad input
           printf("Invalid number\n");
           continue;
         }  
        if (r == 1 && c1 > 0) 
        { 
          c1--; 
          printf("Veg Momos removed\n"); 
        }
        else if (r == 2 && c2 > 0) 
        { 
            c2--; 
            printf("Hakka Noodles removed\n"); 
        }
        else if (r == 3 && c3 > 0) 
        { 
           c3--; 
           printf("White sauce pasta removed\n"); 
        }
        else if (r == 4 && c4 > 0) 
        { 
         c4--; 
         printf("French fries removed\n"); 
        }
        else if (r == 5 && c5 > 0) 
        { 
        c5--; 
        printf("Fried chicken removed\n"); 
        }
        else 
         printf("That item is not in your cart\n");
        break;     
       }

        case 7:  //to check card before billing 
      if (c1 + c2 + c3 + c4 + c5 == 0)
        {
          printf("\nYour cart is empty.\n");

        }
        else
       {  
          int j=1;
          printf("\n------------ YOUR CART ------------\n");
          if (c1) 
            printf("%d. Veg Momos           249 x %d\n",j++, c1);
          if (c2) 
            printf("%d. Hakka Noodles       180 x %d\n",j++,c2);
          if (c3) 
            printf("%d. White sauce pasta   249 x %d\n",j++, c3);
          if (c4) 
            printf("%d. French fries        180 x %d\n",j++, c4);
          if (c5) 
            printf("%d. Fried Chicken       350 x %d\n",j++, c5);
          printf("-----------------------------------\n");
          }
        break;

        case 0: // This acts as Exit when user enters '0'
        break;
    
        
        default:
        printf("Sorry! The option is not available\n\n");    
    }
    
    
    } while(option!=0);
    
    //ToTAL CALCULATION
    total=c1*249+c2*180+c3*249+c4*180+c5*350;
    

    if(total == 0)
   {
    printf("Your cart is empty. Thank you!\n");
  }

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
            if (scanf("%d", &payment) != 1)
            {
                while (getchar() != '\n');
                payment = 0;             // forces the loop to ask again
            }
            if (payment < 1 || payment > 3)
                printf("Invalid payment option!\n");
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