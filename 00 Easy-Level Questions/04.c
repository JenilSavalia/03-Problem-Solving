#include <stdio.h>
#include <string.h>


//4. Write a function to check whether a given character is a vowel or consonant.


int main(){
	
	char input;
	printf("enter Character: ");
	scanf("%c",&input);
	
	if(input=='a' || input=='e' || input=='i'|| input=='o' || input=='u' || input=='A' || input=='E' || input=='I' || input=='O' || input=='U'){
		printf("its vovel");
	}
	else{
		printf("its consonant");
	}
	
}

