#include <stdio.h>
#include <string.h>


//9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].


int main(){
int i,j,temp;
int nums[] = {4,2,8,5,1};
int nums_len = sizeof(nums)/sizeof(nums[0]);

for(i=0;i<nums_len;i++){
	
	for(j=i+1;j<nums_len;j++){
		if(nums[i]>nums[j]){
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}

	}
			
	
}
	
	for(i=0;i<nums_len;i++){
		printf(", %d",nums[i]);
	}
	
}

