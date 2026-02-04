#include <stdio.h>

int main(){

int nums[] = {10,9,8,7,6,5,4,3,2,1};
int length = sizeof(nums)/sizeof(nums[0]);

for(int i = 0;i<length-1;i++){
    for(int j = 0;j<length-i-1;j++){
        if(nums[j]>nums[j+1]){
            int temp = nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
}
for(int x = 0;x<length;x++){
    printf("%d ",nums[0]);
}


return 0;
}
