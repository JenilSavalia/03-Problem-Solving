#include <stdio.h>
#include <string.h>

//22. Write a program to find the length of a given string.

int main(){

char str1[] = "Jenil";

int i = 0;
int count = 0;

while(str1[i]!='\0'){
	count++;
	i++;
}

printf("%d",count);
    return 0;

}

