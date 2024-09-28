#include <stdio.h>
#include <string.h>

//35. Print an inverted right-angled triangle pattern with n rows.

int main(){
int n,i,j;
int star = '*';
printf("No of rows : ");
scanf("%d",&n);

for(i=n;i>0;i--){
	
	for(j=i;j>0;j--){
		printf("%c",star);
	}
	printf("\n");
}

}

//#for NON-INVERTED RIGHT-ANGLED TRIANGLE

//int main(){
//int n,i,j;
//int star = '*';
//printf("No of rows : ");
//scanf("%d",&n);
//
//for(i=0;i<n;i++){
//	
//	for(j=0;j<=i;j++){
//		printf("%c",star);
//	}
//	printf("\n");
//}
//
//}


