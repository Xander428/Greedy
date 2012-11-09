#include <stdio.h>
#include <cs50.h>
#include <math.h>

/*********************************************************
*           Alex Westwood - Xander428
*                     CS50x         
*  
*                   Greedy.c
*
*   Program that generates the smallest number of 
*   coins possible to give to the customer based on
*   users entry.
*
*   I have used Australian Currency where we have
*       $2, $1, 50c, 20c, 10c, 5c, and 1c coins.
*
*********************************************************/


int main(void)
{

    printf("How much change is owed to the customer?\n");
    float change = GetFloat();

    if (change <=0)
    {
        {
        printf("Please enter a number greater than 0!\n");
        }
        change = GetFloat();
    }
    
    int totalcents = (change*100);
    
//Declare different coin variables and set them all to 0
    
    int totalcoins, twodollars, onedollars, fifties, twenties, tens, fives, pennies;
    totalcoins = 0;
    twodollars = 0;
    onedollars = 0;
    fifties = 0;
    twenties = 0;
    tens = 0;
    fives = 0;
    pennies = 0;

/* Execute a scaling constant check on users input amount reducing the total number of cents as you go.
*  While also keeping track of every additional coin that fits in.
*/
    
    {
        while (totalcents >=200)
        {
            totalcents = (totalcents - 200);
            totalcoins++;
            twodollars++;
        }
        while (totalcents >=100)
        {
            totalcents = (totalcents - 100);
            totalcoins++;
            onedollars++;
        }
        while (totalcents >=50)
        {
            totalcents = (totalcents - 50);
            totalcoins++;
            fifties++;
        }
        while (totalcents >=20)
        {
            totalcents = (totalcents - 20);
            totalcoins++;
            twenties++;
        }
        while (totalcents >=10)
        {
            totalcents = (totalcents - 10);
            totalcoins++;
            tens++;
        }
        while (totalcents >=5)
        {
            totalcents = (totalcents - 5);
            totalcoins++;
            fives++;
        }
        while (totalcents >=1)
        {
            totalcents = (totalcents - 1);
            totalcoins++;
            pennies++;
        }
    }
       
        printf("\nThanks for that!\nYour change will be in the form of:\n\n%d Two Dollar Coins\n%d One Dollar Coins\n%d Fifty Cent Coins\n%d Twenty Cent Coins\n%d Ten Cent Coins\n%d Five Cent Coins\n%d One Cent Coins\n", twodollars, onedollars, fifties, twenties, tens, fives, pennies);
        printf("\nThis is the smallest number of coins possible, a total of %d.\n", totalcoins);
    
    return 0;
}
