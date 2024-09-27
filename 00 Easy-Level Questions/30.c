#include <stdio.h>
#include <string.h>

//30. Write a program to input an integer 'n' and print the sum of all its even digits and
//the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
//Explanation:
//The sum of even digits = 2 + 4 + 6 = 12
//The sum of odd digits = 1 + 3 + 5 = 9

int main(){

int integer,i,j;
int odd = 0;
int even = 0;
printf("Enter Integer : ");
scanf("%d",&integer);

while(integer!=0){
	if((integer%10)%2==0){
	even = even + integer%10 ;
	}
	else{
	odd = odd + integer%10;
	}

	integer = integer/10;
}

printf("Even : %d\n odd : %d",even,odd);

}

