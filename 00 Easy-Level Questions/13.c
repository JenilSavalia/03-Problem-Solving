#include <stdio.h>
#include <string.h>

//13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.


int main(){

int arr[] = {1, 2, 6, 4, 5};
int i;
int len = sizeof(arr)/sizeof(arr[0]);
int check = 0;

for(i=0;i<len;i++){
	if(arr[i]==3){
		check = 1;
	}

}
	if(check==1){
		printf("true");
	}
	else{
		printf("false");
	}

}


