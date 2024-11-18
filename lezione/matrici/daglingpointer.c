#include <stdio.h>
#include <stdlib.h>

int* copy(int a[], int size);

int main(void) {
    int nums[4]={3,4,5,6};
    
    int* nums2 = copy(nums, 4);//dangling pointer HERE
    
    for(int i=0;i<4;i++){
        printf("%d ",nums2[i]);
    }
    printf("\n");
}

int* copy(int a[], int size){
    int i;

    int a2[size];
    
    for(int i=0;i<size;i++){
        a2[i] = a[i];
    
    }

    return a2;
} 