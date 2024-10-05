#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
//Input: "hello"
//Output: 2 (because 'l' repeats first)
//Input: "abcdef"
//Output: -1

int main(){

char input[] = "abccdeff";
int i,j,k;
bool check = false;
for(i=0;i<strlen(input);i++){
	
	for(j=i+1;j<strlen(input);j++){
		
		if(input[i]==input[j]){
			check = true;
			k++;
			printf("%d",i);
			break;
		}
		
	}
	
		if(check == true){
			break;
		}
	
}
if(k!=1){
	printf("-1");
}


}


