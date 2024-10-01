#include <stdio.h>
#include <string.h>

//43. The "Max Consecutive Ones" problem is a common algorithmic challenge that involves finding the maximum 
//number of consecutive 1s in a binary array.
//Problem Statement Given a binary array, find the maximum number of consecutive 1s in the array.
//Example
//Input: [1, 1, 0, 1, 1, 1]
//Output: 3 (the longest sequence of 1s is 111)


int main(){
	
int i,j;

int count = 0;
char arr[] = {1, 1, 0, 1, 1, 1};

int len  = sizeof(arr)/sizeof(arr[0]);

for(i=0;i<len;i++){

if(arr[i]==1){
	count++;
}

if(arr[i]!=1){
	printf("%d\n",count);
	count=0;
}


}

}






