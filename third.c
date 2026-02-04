#include <stdio.h>
#include <stdlib.h>






int main(){

int* ptr,ptr2;

ptr = calloc(12,sizeof(*ptr));

int size = 12 * sizeof(*ptr);

printf("The amount of data allocated to the first pointer is %d bytes.\n",size);

size = 18*sizeof(*ptr);

ptr2 = calloc(18,sizeof(*ptr));

printf("The amount of data allocated to the second pointer is %d bytes.",size);

free(ptr);
free(ptr2);
ptr = NULL;
ptr2 = NULL;

return 0;
}
