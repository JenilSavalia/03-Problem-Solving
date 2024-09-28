#include <stdio.h>
#include <string.h>

//31. Write a program to repeat a string a specified number of times.
//Example: Input: ("hello", 3), Output: "hellohellohello".

int main(){

char string[20];
int repeat,i;
printf("Enter String , Repeat : ");
scanf("%s",&string);
scanf("%d",&repeat);
int len = strlen(string);

for(i=0;i<repeat;i++){
printf("%s",string);	
}

}


