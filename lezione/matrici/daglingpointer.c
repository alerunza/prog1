#include <stdio.h>
#include <stdlib.h>

int* copy(int a[], int size);

int main(void) {
    int nums[4]={3,4,5,6};
    
    for(int i=0;i<4;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");

    int* nums2 = copy(nums, 4);//dangling pointer HERE
    
    for(int i=0;i<4;i++){
        printf("%d ",nums2[i]);
    }
    printf("\n");
}

int* copy(int a[], int size){
    int i;

    // non va bene e di conseguenza si usa il malloc 
    //int a2[size];
    
    //heap array
    int* a2 = (int*) malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++){
        a2[i] = a[i];
    }

    return a2;
} 