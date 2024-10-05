#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//48.Given a string, return a new string with all vowels removed.
//Input: "hello"
//Output: "hll"

//int main(){
//
//int i,j = 0;
//char input[] = "hello";
//char new[strlen(input)];
//
//for(i=0;i<strlen(input);i++){
//	
//	if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'){
//		
//
//	}
//	else{
//		
//	new[j] = input[i];
//	j++;
//	
//	}
//	
//
//}
//
//	printf("%s",new);
//
//}



int main(){
	int i,j;
    char input[]="hello";
    int len1=strlen(input);
    char newstring[len1];
    char vowels[]="AEIOUaeiou";
    int len2=strlen(vowels);
    int k=0;
    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            if(input[i]!=vowels[j]){
                newstring[k]=input[i];
                k++;
            }
        }
    }
    printf("%s",newstring);
}

