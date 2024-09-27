#include <stdio.h>
#include <string.h>

//27.Write a program to extract the file extension from a given filename.
//Example: Input: "document.pdf", Output: "pdf".

int main(){

char input[50];
printf("input file.ext : ");
scanf("%s",&input);
int i;
int count = 0;

for(i=0;i<strlen(input);i++){
	count++;
	if(input[i]=='.'){
		break;
	}
		
}

for(i=count
;i<strlen(input);i++){
printf("%c",input[i]);	
		
}

}

