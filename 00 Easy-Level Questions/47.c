#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//47. Given an array of integers, find the first element that repeats. If no element repeats, return -1.
//Input: [10, 5, 3, 4, 3, 5, 6]
//Output: 5

int main(){

char input[] = {10, 5, 3, 4, 32,6};
int len = sizeof(input)/sizeof(input[0]);
int i,j,k;
bool check = false;
for(i=0;i<strlen(input);i++){
	
	for(j=i+1;j<len;j++){
		
		if(input[i]==input[j]){
			check = true;
			k++;
			printf("%d",input[i]);
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


