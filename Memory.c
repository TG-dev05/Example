#include <stdio.h>
#include <stdlib.h>


int main(){

int n,m;

int*ptr;
int*ptr2;

scanf("%d",&n);//This is to get the initial size of the array.
ptr = calloc(n,sizeof(*ptr));//This is the first allocation.

if(ptr==NULL){//This is an error checking block of code.
    printf("The memory allocation didn't work.");
    return 1;
}
else{
    for(int x = 0;x<n;x++){
        scanf("%d",ptr+x);
    }
scanf("%d",&m);
ptr2 = realloc(ptr,m*sizeof(*ptr));
ptr = ptr2;
if(m<=n){//If the new amount of memory is less, print only the values that matter.
    for(int x = 0;x<m;x++){
        printf("%d ",ptr[x]);
    }
}

else{//If the new amount allow the user to input additional values.
   for(int y = n;y<m;y++){
    scanf("%d",ptr+y);
   }
   for(int z = 0;z<m;z++){
     printf("%d ",ptr[z]);
   }
}

free(ptr);
free(ptr2);
ptr = NULL;
ptr2 = NULL;

return 0;
}

}
