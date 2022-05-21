#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void delay(int);

int main()
{
    int d1, d2, d3, d4, d5, d6,temp, YourMoney = 1000, BetMoney = 10, ChoosenNumber = 1, counter, counter2 =-1, END =0;
    char ch;
    while(END == 0){
        system("CLS");
        counter2++;
        counter = 0;
        printf("Times bet = %d\n", counter2);
        if(BetMoney > YourMoney)
        BetMoney = YourMoney;

        srand(time(0));
        d1 = rand()%6 +1;
        d2 = rand()%6 +1;
        d3 = rand()%6 +1;
        d4 = rand()%6 +1;
        d5 = rand()%6 +1;
        d6 = rand()%6 +1;
        printf("\nRolls are: %d, %d, %d, %d, %d, %d\n\n", d1, d2, d3, d4, d5, d6);
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
            YourMoney = YourMoney + BetMoney*counter;
            printf("Your money = %d\n", YourMoney);
        }
        else{
            printf("\nYOU LOST :( \n\n");
            YourMoney = YourMoney - BetMoney;
            printf("Your money = %d\n", YourMoney);
        }
        delay(1);
    }

    printf("YOU NOW HAVE %d and made/lost %d", YourMoney, YourMoney-1000);
    getch();


{

}
}
void delay(int number_of_seconds)
    {
        // Converting time into milli_seconds
        int milli_seconds = 1000 * number_of_seconds;
        // Storing start time
        clock_t start_time = clock();
        // looping till required time is not achieved
        while (clock() < start_time + milli_seconds);
    }
