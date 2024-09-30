#include <stdio.h>
#include <string.h>

//39. Given a string, check if all brackets are closed properly.
// Example:Input: "{[()]}" Output: true

int main(){
	
int i;	
char arr[] = "{[()]}";


int a = 0;
int b = 0;
int c = 0;

for(i=0;i<strlen(arr);i++){
	
if(arr[i]=='{'){
	a++;
}
if(arr[i]=='}'){
	a--;
}
if(arr[i]=='['){
	b++;
}
if(arr[i]==']'){
	b--;
}
if(arr[i]=='('){
	c++;
}
if(arr[i]==')'){
	c--;
}

}

if(a==0 && b==0 && c==0){
	printf("true");
}
else{
	printf("false");
}

}




