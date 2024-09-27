#include <stdio.h>
#include <string.h>

//29.Write a program to find all pairs in an array whose sum is equal to a given number.
//Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

int main(){

int target,i,j,a,b;
printf("Enter Target : ");
scanf("%d",&target);
int array[] = {2,7,11,1,8,0,9};
int len = sizeof(array)/sizeof(array[0]);

for(i=0;i<len;i++){
	
	for(j=i+1;j<len;j++){
		a = array[i];
		b = array[j];
		if((a+b)==target){
			printf("%d %d\n",i,j);
		}
		
	}
		
}

}

