#include<stdio.h>
int main()
{
    int row,col,space;
    char x='a';
    for(row=1;row<=7;row++)
    {
        x='a';
        for(col=7;col>=row;col--)
            {
                printf("%c",x);
                x++;
            }
        for(space=2;space<(2*row)-1;space++)
            printf(" ");
        if(row==1)
           {
               x-=2;
        for(col=7;col>row;col--)
            {
                printf("%c",x);
                x--;
            }
           }
           else
           {
               x--;
               for(col=7;col>=row;col--)
               {
                   printf("%c",x);
                   x--;
               }
           }
        printf("\n");
    }

}
