#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d1, d2, d3, d4, d5, d6,temp, YourMoney = 1000, BetMoney, ChoosenNumber, counter, counter2 =-1, END =0;
    char ch;
    while(END == 0){
        system("CLS");
        counter2++;
        counter = 0;
        printf("Times bet = %d\n", counter2);
        printf("Your money = %d\n", YourMoney);
        printf("Money you want to bet =");
        scanf("%d",&BetMoney);
        printf("Number to which you want to bet =");
        scanf("%d",&ChoosenNumber);
        printf("\n    press any key to roll\n");
        getch();
        srand(time(0));
        d1 = rand()%6 +1;
        d2 = rand()%6 +1;
        d3 = rand()%6 +1;
        d4 = rand()%6 +1;
        d5 = rand()%6 +1;
        d6 = rand()%6 +1;
        printf("\nRolls are: %d, %d, %d, %d, %d\n\n", d1, d2, d3, d4, d5, d6);
            if(ChoosenNumber == d1)
            counter++;
            if(ChoosenNumber == d2)
            counter++;
            if(ChoosenNumber == d3)
            counter++;
            if(ChoosenNumber == d4)
            counter++;
            if(ChoosenNumber == d5)
            counter++;
            if(ChoosenNumber == d6)
            counter++;
        if(counter >= 2)
        {
            printf("\nYOU WON %d  :) \n\n", BetMoney*counter);
            printf("Your money = %d\n", YourMoney);
            YourMoney = YourMoney + BetMoney*counter;
        }
        else{
            printf("\nYOU LOST :( \n\n");
            printf("Your money = %d\n", YourMoney);
            YourMoney = YourMoney - BetMoney;
        }
        printf("\n***************Press 'q' to quit***********\n");
        ch = getch();
        temp = ch;
         if ( temp == 81 || temp == 113)
            break;
    }
    printf("YOU NOW HAVE %d and made/lost %d", YourMoney, YourMoney-1000);
    getch();
}
