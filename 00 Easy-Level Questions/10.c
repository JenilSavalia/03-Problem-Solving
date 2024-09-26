#include <stdio.h>
#include <string.h>


//10. Given an array of integers, count how many numbers are even and how many are odd.
//Example
//Input: [1, 2, 3, 4, 5]
//Output: Even: 2, Odd: 3



int main(){

int i;
int even = 0;
int odd = 0;
int arr[] = {1, 2, 3, 4, 5};
int arr_len = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<arr_len;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	
	printf("Even : %d , Odd : %d",even,odd);
}

