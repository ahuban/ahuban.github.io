#include <stdio.h>
#include <math.h>

int computeHomeValue (int popularity, int size);

int main(void)
{
    int popularity, size;
    
    printf("To calculate the value of your house, please enter the popularity value ---->\n");
    scanf("%d", &popularity);
    
    printf("Please enter the size of your house ----> \n");
    scanf("%d", &size);
      
    printf("The value of your house is %d . \n", computeHomeValue (popularity, size));
    system("pause");
    
    return 0;
    }
    
    int 
    computeHomeValue (int popularity_x, int size_x)
    {
    return (pow(popularity_x,3) + pow(size_x,2)) * 10000;
    }
