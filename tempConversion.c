//(Temperature Conversions) Write a program that converts integer Fahrenheit temperatures from 0 to 212 degrees to floating-point Celsius temperatures with 3 digits of precision. Perform the calculation using the formula

// C Libraries
#include <stdio.h>
// function prototype
double calculateTempInC(double tempInFarenheit);
int main()
{
    //for loop that loops through temperatures between 0 and 212, and prints out a statement that expresses the conversions. 
    for (int tempInFarenheit = 0; tempInFarenheit <= 212; tempInFarenheit++)
    {
        printf("%d degrees in Farenheit is %.3lf degrees in Celcius\n", tempInFarenheit, calculateTempInC(tempInFarenheit));
    }

    return 0;
}
// function performing the math for converting F to C.
double calculateTempInC(double tempInFarenheight)
{
    double celcius = 5.0 / 9.0 * (tempInFarenheight - 32);
    return celcius;
}