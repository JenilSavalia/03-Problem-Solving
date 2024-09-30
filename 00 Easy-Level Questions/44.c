#include <stdio.h>
#include <string.h>

//44. Given a string, return all possible substrings of that string. 
//This includes all substrings of every length, from length 1 to the length of the string itself.
//Example:
//Input: "abc"
//Output: ["a", "ab", "abc", "b", "bc","c"]


//note : Substring: A continuous part of the string.

int main(){

int i,j;
char input[6];
printf("Enter String : ");
scanf("%s",&input);

for(i=0;i<strlen(input);i++){
	
	printf("%c ",input[i]);
	
	for(j=i+1;j<strlen(input);j++){
		
		printf("%c%c",input[i],input[j]);
		printf("\n");
		break;
	}
		
}
printf("%s ",input);
}




