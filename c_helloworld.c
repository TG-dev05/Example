#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num){
bool flag = true;
for(int i = 2;i<num-1;i++){
    if(num%i==0){
        flag = false;
    }
}
return flag;

}

int main(){

int num = 19;

if(isPrime(num)==false){
    printf("Not prime");
}
else{
    printf("Prime");
}

return 0;
}
