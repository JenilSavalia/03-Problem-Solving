#include <stdio.h>
#include <string.h>

//40. Given two numbers, generate an array containing all numbers between them (inclusive).
// Example: Input: 1,5 Output: [1, 2, 3, 4, 5]

int main(){
	
int i,start,end,j;	


printf("Start : ");
scanf("%d",&start);
printf("End : ");
scanf("%d",&end);
int arr[end-start+1];


for(i=0;i<=end-start;i++){
	
	arr[i] = start+i;

}

int len = sizeof(arr)/sizeof(arr[0]);

for(j=0;j<len;j++){
	printf("%d\n",arr[j]);
}



}




