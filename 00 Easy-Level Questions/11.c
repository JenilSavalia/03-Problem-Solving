#include <stdio.h>
#include <string.h>

int main(){

int arr[] = {1, 2, 2, 3, 4, 4, 5};
int temp[] = {arr[0]};
int i ,j;
int count = 0;
int arr_len = sizeof(arr)/sizeof(arr[0]);
int temp_len = sizeof(temp)/sizeof(temp[0]);

for(i=0;i<arr_len;i++){
	
	for(j=0;j<=temp_len;j++){
		count = 0;
		if(arr[i]==temp[j]){
			count = count + 1;
		}
	}
	
			if(count==0){
			temp[temp_len] = arr[i];
			temp_len = temp_len + 1;
		}
}

for(j=0;j<=temp_len;j++){
printf("%d",temp[j]);
}

}


