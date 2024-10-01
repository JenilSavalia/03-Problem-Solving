#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//45. Given a sentence, return the longest word in it.
//Input: "I love programming in JavaScript"
//Output: "programming"

int main(){

int i,j,k;
char input[] = "I love jenilsavalia in JavaScript ";
int itt = 0;
int arr[4];


for(i=0;i<strlen(input);i++){

	if(input[i] == ' '){
	arr[itt] = i;
	itt = itt + 1;
	printf("%d\n",i);
	}
	
}


int max_diff = abs(arr[1] - arr[0]);
int index1 = 0, index2 = 1;
int arr_len = sizeof(arr)/sizeof(arr[0]);


for(j=0;j<arr_len;j++){
	
	int diff = abs(arr[j+1]-arr[j]);
    printf("%d\n",arr[j+1]-arr[j]);

    if(diff > max_diff){
	  max_diff = diff;
	  index1=j;
	  index2=j+1;
	}

}

printf("%d\n",index1);
printf("%d\n",index2);
for(k=arr[index1];k<arr[index2];k++){
	printf("%c",input[k]);
}


}


