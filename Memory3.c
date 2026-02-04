#include <stdio.h>
#include <stdlib.h>

int main(){

char** ptr;//This is the pointer to each string;
int num;
scanf("%d",&num);
ptr = calloc(num,sizeof(*ptr));//This allocates the amount of memory for string
if(ptr == NULL){//This terminates the program if the allocation doesn't work
    printf("The allocation didn't work.?");
    return 1;
}
else{
    for(int i = 0;i<num;i++){
        printf("Number of characters:");
        int tnum;
        scanf("%d",&tnum);
        ptr[i] = malloc((tnum*sizeof(char)+1));
        if(ptr[i]==NULL){
            break;
        }
        scanf("%s",ptr[i]);
    }

for(int j = 0;j<num;j++){
    printf("%s\n",ptr[j]);
    free(ptr[j]);
    ptr[j]=NULL;
}

}

free(ptr);
ptr = NULL;


return 0;
}
