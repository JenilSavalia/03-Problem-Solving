#include <stdio.h>
#include <string.h>

//19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

int main(){
int i,j,temp;
int nums[] = {1,2,3,4};
int nums_len = sizeof(nums)/sizeof(nums[0]);
int check = 0;

for(i=0;i<nums_len;i++){
	
	for(j=i+1;j<nums_len;j++){
		if(nums[i]>nums[j]){
        check++;
		}

	}
}
	if(check>0){
		printf("false");
	}
	else{
		printf("true");
	}
	
}


