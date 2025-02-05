#include <stdio.h>

int e2R(const size_t aLen, const int* a, size_t left, size_t right){

    if(left + 1 == right){
        if((a[left] % 2 != 0) || a[left] % 5 == 0){
            return 1;
        } else{
            return 0;
        }
    } else if(left >= right){
        return 0;
    } else{
        size_t middle = left + (right - left) / 2;

        return e2R(aLen, a, left, middle) + e2R(aLen, a, middle, right);
    }
}

int e2(const size_t aLen, const int* a){
    return e2R(aLen, a, 0, aLen);
}

int main(void){
    const size_t aLen1 = 4;
    int a1[aLen1] = {7, 4, 10, 99};
    printf("Test 1: %d (Expected: 3)\n", e2(aLen1, a1));

    const size_t aLen2 = 5;
    int a2[aLen2] = {2, 4, 6, 8, 10};
    printf("Test 2: %d (Expected: 1)\n", e2(aLen2, a2));

    const size_t aLen3 = 3;
    int a3[aLen3] = {1, 3, 5};
    printf("Test 3: %d (Expected: 3)\n", e2(aLen3, a3));

    const size_t aLen4 = 6;
    int a4[aLen4] = {2, 4, 6, 8, 10, 12};
    printf("Test 4: %d (Expected: 1)\n", e2(aLen4, a4));

    const size_t aLen5 = 4;
    int a5[aLen5] = {15, 25, 35, 45};
    printf("Test 5: %d (Expected: 4)\n", e2(aLen5, a5));

    return 0;
}