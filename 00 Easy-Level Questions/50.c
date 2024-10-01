#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//50. Given a string and a character, count how many times the character appears in the string.
//Input: str = "hello world", char = "o"
//Output: 2


	
int main(){

int i,j = 0;
char input[] = "hello worldo";
char target = 'o';

for(i=0;i<strlen(input);i++){
	
	if(input[i] == target){
		
j++;
	}
	
}

	printf("%d",j);

}

