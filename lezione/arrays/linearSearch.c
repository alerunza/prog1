#include <stdio.h>
#define SIZEA 5

int linearSearch(int a[], int lenA, int key);

void linearSearch2(int a[], int lenA, int key,int ris[]);

int main(){
	int original[SIZEA] ={0,2,2,3,4};	
	int index;
	int value;
	
	int risultati[SIZEA]={-1};
	
	value = 2;
	index = linearSearch(original,SIZEA,value);
	printf("Valore %d trovato all'indice %d\n\n",value,index);
	
	
	linearSearch2(original,SIZEA,value,risultati);
	for (int i = 0;i<SIZEA;i++)
	{
     printf("indice %d\n",risultati[i]);	
	}
 
}

int linearSearch(int a[], int lenA, int key) {
 int ret = -1;
 for (int i = 0;i<lenA&&ret==-1;i++)
 {
  if (a[i] == key) {
   ret = i;
  }
 }
  return ret;
}

void linearSearch2(int a[], int lenA, int key,int ris[]) {
 int ret = -1;
 //int ris[lenA];
 
 int  numR =0;
 for (int i = 0;i<lenA;i++)
 {
  if (a[i] == key) {
   ris[numR]  = i;
   numR++;  
  }
 }
 // return ris;
}