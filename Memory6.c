#include <stdio.h>
#include <stdlib.h>
int main(){

int*ptr;
int memory = 8;//This is the initial amount of memory allocated for the dynamic array
ptr = calloc(memory,sizeof(int));//This is the initial allocation of memory;
if(ptr==NULL){//The allocation didn't work.
    printf("The allocation didn't work.");
    return 1;
}
else{
    int num;
    char temp;
    int i = 0;//This is a variable used assigning of values in the dynamic array as well as checking how full the array is.
    while(scanf("%d%c",&num,&temp)==2){
         ptr[i] = num;
         i++;
         if(temp=='\n'){
            break;
         }
         if(i==memory-1){
            int*ptr2;
            ptr2 = realloc(ptr,memory*2*sizeof(int));
            if(ptr2==NULL){
                printf("The reallocation didn't work.");
                free(ptr);
                ptr = NULL;
                return 1;
            }

            memory*=2;
            ptr = ptr2;
         }

    }

for(int j = 0;j<i;j++){
    printf("%d ",ptr[j]);
}

free(ptr);
ptr = NULL;

return 0;
}




}
