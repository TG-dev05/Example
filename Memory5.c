#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
char*ptr;//This is the pointer to the string.
int memory = 16;//This is the initial amount of memory allocated for the string.
ptr = malloc((memory*sizeof(char)+1));//This allocates the initial amount of memory.
if(ptr==NULL){
    printf("The allocation didn't work.");
    return 1;
}

else{
int length = 0;
int i = 0;
while(true){
  char c;
  scanf("%c",&c);
  if(c==10){
    break;
  }
   length++;
   ptr[i]=c;
   i++;
   if(length==memory-1){
      char*ptr2;
      ptr2=realloc(ptr,memory*2*sizeof(char));
      memory = memory*2;
      if(ptr2 == NULL){
        printf("The reallocation didn't work.");
        free(ptr);
        ptr = NULL;
        return 1;
        }
      ptr = ptr2;
   }
ptr[length]='\0';
}

printf("%s",ptr);
free(ptr);
ptr = NULL;

return 0;

}
}
