#include <stdio.h>
#include <stdlib.h>


int main(){

char*ptr;
int num;
scanf("%d",&num);
ptr = malloc((num*sizeof(*ptr))+1);

if(ptr == NULL){
    printf("The allocation didn't work.");
    return 1;
}
else{
scanf("%s",ptr);
printf("%s",ptr);

free(ptr);
ptr = NULL;


return 0;

}


}
