#include <stdio.h>
#include <stdlib.h>


int main(){

FILE* fptr;
fptr = fopen("Trial.txt","r");

char MyString[100];

fgets(MyString,100,fptr);

while(fgets(MyString,100,fptr)){
    printf("%s",MyString);
}


fclose(fptr);

return 0;
}
