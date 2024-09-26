#include <stdio.h>
#include <string.h>


//7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
//"red" = "Stop"
//"yellow" = "Slow down"
//"green" = "Go"


int main(){
	
	char light[10];

	
	printf("Light Color: ");
	scanf("%s",&light);
	
	
	int red = strcmp(light,"red");
	int yellow = strcmp(light,"yellow");
    int green = strcmp(light,"green");

if(red==0){
	printf("Stop");
}
else if(yellow==0){
	printf("Slow down");
}
else if(green==0){
	printf("Go");
}
else{
	printf("Input Incorrect");
}
	
}

