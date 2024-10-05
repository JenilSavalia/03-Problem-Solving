#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//52.Given an array nums, the running sum of an array is defined as runningSum[i] = sum(nums[0]…nums[i]).
//Example:
//Input: nums = [1, 2, 3, 4]
//Output: [1, 3, 6, 10]
//Explanation:
//runningSum[0] = 1
//runningSum[1] = 1 + 2 = 3
//runningSum[2] = 1 + 2 + 3 = 6
//runningSum[3] = 1 + 2 + 3 + 4 =10



	
int main(){

int i,j,k=0;
char input[] = {1, 2, 3, 4};
int len = sizeof(input)/sizeof(input[0]);
int runningSum[] = {0};
int sum = 0;

for(i=0;i<len;i++){
	sum = 0;
	for(j=0;j<=i;j++){
		sum = sum + input[j];
	}
	printf("%d\n",sum);
	runningSum[k] = sum;
	k++;
}

}

