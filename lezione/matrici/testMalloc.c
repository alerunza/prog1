#include <stdio.h>
#include <stdlib.h>

//provare in c visualizer

void printArray(int a[], int len);
int* copyBad(int a[], int size);
int* copy(int a[], int size);


void testStack(int size);
char* testHeap(int size);

int main(void) {
  /*
  // test dangling pointer
  int nums[4] = {7, 4, 3, 5};
  printArray(nums,4);
  printf("--------------------\n");
  int* nums2 = copy(nums, 4);
  printArray(nums2,4);
  printf("--------------------\n");
  */

  /*
  // test size
  int size;
  printf("Insert size to test:");
  scanf("%d",&size);
  
  testStack(size);  
  puts("ok Stack");	

  char* pAH = testHeap(size);
  if(pAH!=NULL)
    puts("ok Heap");	
  else
    puts("too big!");
  */
  
  ///* Test free
  int* a1 = (int*) malloc(1000 * sizeof(int));
  int a2[1000];
  int* a3;
  int* a4 = NULL;
  //free(a1); //OK
  //free(a1); //Già free
  //free(a2); //No heap
  //free(a3); //No heap
  //free(a4); //No heap
  //*/
  

  return 0;
}

void printArray(int a[], int len){
    for(int i=0;i<len;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}

int* copyBad(int a[], int size){
    int a2[size];
    
    for(int i=0;i<size;i++){
        a2[i] =  a[i];
    }
    return a2;
}

int* copy(int a[], int size){
    //int a2[size];
    int* a2 = (int*) malloc(size * sizeof(int));

    for(int i=0;i<size;i++){
        a2[i] =  a[i];
    }
    return a2;
}

void testStack(int size){
    char testArray[size];	
    
    for(size_t i=0;i<size;i++)
        testArray[i] = 's'; 
}

char* testHeap(int size){
    char* testArray2 = (char*) malloc(size * sizeof(char));	
    
    for(size_t i=0;i<size && testArray2!=NULL;i++)
        testArray2[i] = 'h'; 

    return testArray2;
}