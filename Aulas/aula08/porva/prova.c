#include <stdio.h>
  
int main(){

    int x = 10;
    {
        int y= x * 2 ;
        {
            int y = x + 1;
            int x = 1; 
            printf("%d,%d \n", x++,y--);
        }
    }






    return 0;
}