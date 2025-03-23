#include <stdio.h>
#include <math.h>

int main(void)

{
    int popularity, size, homeValue;
          
    printf("To calculate the value of your house, please enter the popularity value ---->\n");
    scanf("%d", &popularity);
    
    printf("Please enter the size of your house ----> \n");
    scanf("%d", &size);
    
    homeValue= (pow(popularity,3) + pow(size,2)) * 10000;
    
    printf("The value of your house is %d . \n", homeValue);
    system("pause");
    
    return 0;
}
