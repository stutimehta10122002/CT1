#include<stdio.h>
   
int main ()   
{  
    float celsius;  
    printf ("Enter the Temperature in Celsius: ");  
    scanf ("%f", &celsius);  
    float kelvin;  
    kelvin = celsius + 273.15;     
    printf ("\nThe value of temperature in kelvin = %f", kelvin);  
    return (0);  
} 
