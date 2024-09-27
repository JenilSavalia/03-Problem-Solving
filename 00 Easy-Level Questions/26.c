#include <stdio.h>
#include <string.h>

//26. Write a program to check if a string ends with a specific character.
//Example: Input: ("codinggita", "a"), Output: true.

int main(){

char input;
printf("input Character : ");
scanf("%c",&input);

char str1[] = "codinggita";
int i;

if(str1[strlen(str1)-1]==input){
	printf("True");
}
else{
	printf("False");
}

}

