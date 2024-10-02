#include <stdio.h>
#include <string.h>

//38. Given a temperature in Celsius, convert it to Fahrenheit.
// Example:Input: 0 Output: 32.

int main(){
	
float celsius;
printf("Temp in Celsius : ");
scanf("%f",&celsius);

float fahrenheit = (celsius * 1.8) + 32;
printf("%.2f",fahrenheit);

}




