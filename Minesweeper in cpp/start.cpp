#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void initialize();
void display();
void setvalues();
void processingUnit();


char matrix[10][10];
char values[10][10];
char input[] = {'a','a','a'};

int main()
{
setvalues();
initialize();

while(1){
         printf("\n\n");
display();

processingUnit();


}
}

void initialize()
{
    for(int i=0; i<10; i++){
    for(int i2=0; i2<10; i2++){
        if(i<8 && i2<8)
            matrix[i][i2] = '_';
        else
            matrix[i][i2] = ' ';
        }
    }
    matrix[0][9] = 'a';     matrix[9][0] = '1';
    matrix[1][9] = 'b';     matrix[9][1] = '2';
    matrix[2][9] = 'c';     matrix[9][2] = '3';
    matrix[3][9] = 'd';     matrix[9][3] = '4';
    matrix[4][9] = 'e';     matrix[9][4] = '5';
    matrix[5][9] = 'f';     matrix[9][5] = '6';
    matrix[6][9] = 'g';     matrix[9][6] = '7';
    matrix[7][9] = 'h';     matrix[9][7] = '8';

}
void display()
{


    for( int i=0; i<10; i++){
    for( int i2=0; i2<10; i2++){
            //printf("%d ",i2);
       printf("%c ",matrix[i][i2]);
        }
    printf("\n");
    }
    printf("\n\n");
    printf("Press the corresponding number and alphabet(example 'b2') to clear surface or add 'f' to mark flag(example 'b2f'):\n");
    scanf("%s",&input);
}


void setvalues()
{
    values[0][0] = '1';    values[0][1] = '*';    values[0][2] = '1';    values[0][3] = ' ';    values[0][4] = ' ';    values[0][5] = ' ';    values[0][6] = ' ';    values[0][7] = ' ';
    values[1][0] = '1';    values[1][1] = '1';    values[1][2] = '1';    values[1][3] = ' ';    values[1][4] = '1';    values[1][5] = '1';    values[1][6] = '1';    values[1][7] = '1';
    values[2][0] = ' ';    values[2][1] = ' ';    values[2][2] = ' ';    values[2][3] = '1';    values[2][4] = '*';    values[2][5] = '1';    values[2][6] = '1';    values[2][7] = '*';
    values[3][0] = ' ';    values[3][1] = ' ';    values[3][2] = ' ';    values[3][3] = '2';    values[3][4] = '2';    values[3][5] = '2';    values[3][6] = '2';    values[3][7] = '1';
    values[4][0] = ' ';    values[4][1] = ' ';    values[4][2] = ' ';    values[4][3] = '1';    values[4][4] = '*';    values[4][5] = '2';    values[4][6] = '1';    values[4][7] = ' ';
    values[5][0] = ' ';    values[5][1] = ' ';    values[5][2] = ' ';    values[5][3] = '2';    values[5][4] = '4';    values[5][5] = '*';    values[5][6] = '3';    values[5][7] = '1';
    values[6][0] = ' ';    values[6][1] = ' ';    values[6][2] = ' ';    values[6][3] = '1';    values[6][4] = '*';    values[6][5] = '*';    values[6][6] = '*';    values[6][7] = '1';
    values[7][0] = ' ';    values[7][1] = ' ';    values[7][2] = ' ';    values[7][3] = '1';    values[7][4] = '2';    values[7][5] = '3';    values[7][6] = '2';    values[7][7] = '1';
}

void processingUnit()
{
    system("cls");
    int fdigit, sdigit;
    fdigit = (int)(input[0]);
    sdigit = (int)(input[1]);
    fdigit = fdigit - 96;
    sdigit = sdigit - 48;

        if(input[2] == 'f')
        {
            matrix[fdigit-1][sdigit-1] = 'f';

        }
        else if( values[fdigit-1][sdigit-1] == '*' )
        {
            printf("YOU DEAD BRUH!!!\n");
             matrix[fdigit-1][sdigit-1] = values[fdigit-1][sdigit-1];
             for( int i=0; i<10; i++){
                for( int i2=0; i2<10; i2++){
                    printf("%c ",matrix[i][i2]);
                        }
                        printf("\n");
                    }
            getch();
            exit(0);
        }
        else  if(values[fdigit-1][sdigit-1] == 'f' && input[2] != 'f' )
        {
            printf("Remove Flag first");
        }
        else  if(values[fdigit-1][sdigit-1] == 'f' && input[2] == 'f' )
        {
           matrix[fdigit-1][sdigit-1] = '_';
        }
        else{
            matrix[fdigit-1][sdigit-1] = values[fdigit-1][sdigit-1];
        }

        if( matrix[0][1] == 'f' && matrix[2][4] == 'f' && matrix[2][7] == 'f' && matrix[4][4] == 'f'  )
            printf("noice");


}
