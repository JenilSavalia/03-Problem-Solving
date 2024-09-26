#include <stdio.h>
#include <string.h>

//15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].

//Question Updated by me

//delete number giver by user and return "Element Not Found" if element is not there in array



int main(){
int input,i,j;
int index = -1;
int nums[5] = {1,2,3,4,5};
int len = sizeof(nums)/sizeof(nums[0]);
printf("Enter Number to Delete {1, 2, 3, 4,5} : ");
scanf("%d",&input);

//finding index of input num

for(i=0;i<len;i++){
	if(nums[i]==input){
		index=i;
		break;
	}
}
		
// Push left

if(index!=-1){
	for(j=index;j<len-1;j++){
	nums[j] = nums[j+1];
}

for(i=0;i<len-1;i++){
printf("%d\n",nums[i]);
}

}

else{
	printf("Element Not Found");
}


}


