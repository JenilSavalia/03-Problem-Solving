#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>



int main() {
  int matrix[3][4] = { {0, 1, 2, 0},{3, 0, 0, 4},{5,6,0,7}};

int i,j,count = 0;
for(i=0;i<3;i++){
   
   for(j=0;j<4;j++){
   if(matrix[i][j]!=0)
   count++;
   }

}

 printf("%d",count);
  return 0;
}
