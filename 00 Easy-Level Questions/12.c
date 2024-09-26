#include <stdio.h>
#include <string.h>

//12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.



int main(){
int arr[] = {1, 2, 3, 4, 5};
int len = sizeof(arr)/sizeof(arr[0]);
arr[len] = 6;
len++;
int i;

for(i=0;i<len;i++){
	printf("%d\n",arr[i]);
}


}


