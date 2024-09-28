#include <stdio.h>
#include <string.h>

//36. Print a pyramid pattern with n rows.

int main(){
int n,i,j,k;
int star = '*';
printf("No of rows : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
	
	for(k=1;k<=n-i;k++){
	printf(" ");
		
	}	
	
	for(j=1;j<=2*i-1;j++){
		
	printf("%c",star);
	
	}
	printf("\n");
}

}


//  2
// 222
//22222

