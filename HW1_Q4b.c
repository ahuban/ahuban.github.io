#include <stdio.h>
#include <math.h>

void computeHomeValue(void);

int main()
{
    computeHomeValue();
    system("pause"); 
    
    return 0;
}
    
    void
    computeHomeValue(void)
    {
    int popularity, size, homeValue;
    
    printf("To calculate the value of your house, please enter the popularity value ---->\n");
    scanf("%d", &popularity);
    
    printf("Please enter the size of your house ----> \n");
    scanf("%d", &size);
    
    homeValue = (pow(popularity,3) + pow(size,2)) * 10000;
    
    printf("The value of your house is %d . \n", homeValue);         
                      
    }
