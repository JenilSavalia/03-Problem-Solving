#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//49. Given an array and two indices, swap the elements at those indices.
//Input: arr = [1, 2, 3, 4], i = 1, j = 3
//Output: [1, 4, 3, 2]

int main(){


char input[] = {1, 2, 3, 4};
int i = 1;
int j = 3;
int temp;

temp = input[i];
input[i] = input[j];
input[j] = temp;


for(i=0;i<sizeof(input)/sizeof(input[0]);i++){
	
	printf("%d\n",input[i]);

}


}


