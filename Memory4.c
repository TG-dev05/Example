#include <stdio.h>
#include <stdlib.h>

int main(){

int r;
int c;
int**matrix;
scanf("%d",&r);
scanf("%d",&c);

matrix = calloc(r,sizeof(*matrix));//Allocates memory for the matrix
if(matrix==NULL){//This terminates the program when memory allocation.
    printf("The allocation didn't work.");
    return 1;
}
else{
  for(int i = 0;i<r;i++){
    matrix[i]= calloc(c,sizeof(int));//This allocates memory for a row of the matrix
    if(matrix[i]==NULL){//This terminates input loop if the memory allocation doesn't work.
        return 1;
    }
    else{
        for(int j = 0;j<c;j++){//This is the input code for when the memory allocation works.
            int num;
            scanf("%d",&num);
            matrix[i][j]=num;
        }
    }
  }
for(int p = 0;p<r;p++){
    if(matrix[p]==NULL){
        return 1;
    }
    else{
        for(int q = 0;q<c;q++){
            printf("%d ",matrix[p][q]);
        }
    }
printf("\n");
free(matrix[p]);
matrix[p] = NULL;

}


free(matrix);
matrix = NULL;

return 0;
}
}
