#include <stdio.h>
#include <string.h>

//43. The "Max Consecutive Ones" problem is a common algorithmic challenge that involves finding the maximum 
//number of consecutive 1s in a binary array.
//Problem Statement Given a binary array, find the maximum number of consecutive 1s in the array.
//Example
//Input: [1, 1, 0, 1, 1, 1]
//Output: 3 (the longest sequence of 1s is 111)


int main(){
	
int i;

int count = 0;
int arr[] = {1, 1, 0, 1, 1,0, 1};
int max_count = 0;

int len  = sizeof(arr)/sizeof(arr[0]);

for(i=0;i<len;i++){

    if(arr[i]==1){
	count++;
    }
    else{
    count=0;	
	}

    if(count>max_count){
	max_count=count;
    }

}
printf("%d",max_count);
}






