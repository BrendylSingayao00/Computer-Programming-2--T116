//TEMPERATURE CONVERTER

/* Create a program that convert a floating integer value
from a specific temperature measurement into amother. 
The program should ideally accept three (3) input from the user;
(1) the value to be converted (2) the original masurement
(3) the converted measurement. The output should be the value after 
conversion. */



#include <stdio.h>
int main()
{
    float originalTemp, convertedTemp;
    char selection, converted;
    
    printf("  [f]- Fahrenhiet\n\n  [c]-Celcius\n\n  [k]-kelvin \n\n");
    printf("Input orignal temperature value: ");
    scanf("\n%f", &originalTemp);
    printf("Select orignal temperature scale (f,c,k): ");
    scanf("\n%c", &selection);
    printf("Select converted temperature scale(f,c,k): ");
    scanf("\n%c", &converted);
    
    if (selection == 'f' || selection == 'F')   // Farenhiet 
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = (originalTemp - 32) * 5 / 9;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = (originalTemp - 32) * 5 / 9 + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = originalTemp;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'c' || selection == 'C')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = originalTemp;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = originalTemp + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = (originalTemp * 9 / 5) + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'k' || selection == 'K')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = originalTemp - 273.15;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = originalTemp;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = (originalTemp - 273.15) * 9 / 5 + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else
    {
        printf("%c is not a valid input!", converted);
        return -1;
    }
    printf("%.2f %c = %.2f %c", originalTemp, selection, convertedTemp, converted);
    return 0;
}