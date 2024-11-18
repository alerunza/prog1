#include <stdio.h>
#include <assert.h>
#define D1 3
#define D2 4
#define ROWS 3
#define COLS 4

void stampa(size_t rows,size_t cols,int m[rows][cols],int rags[]); 

int main(void) {
	int test[D1 * D2];
	
	
	char fruit[3][7]= {"Apple", "Pear","Orange"};
	for(int i=0 ; i<3 ; i++)
	{
	 for(int j=0 ;  j<7 ; j++)
	 {
	   printf(">%c< ",fruit[i][j]);			   
	 }
	 printf("\n");			   
    }
 
	int MatrixA[D1][D2] = {{0,1,2,3},{4,5},{6,7,8}};
	int ArrayA[D1]={4,2,3};
	
	int m[ROWS][COLS]={{18,15,18,26},{15,29},{15,16,23}};
	int rags[ROWS] = {4, 2, 3};
	stampa(ROWS, COLS, m, rags);
 	 
}

void stampa(size_t rows,size_t cols,int m[rows][cols],int rags[]) 
{
	   for (size_t  i = 0; i < rows; i++) 
	   {
		assert (rags[i] <= cols);
		for(size_t j = 0;j<rags[i];j++) 
		{
         printf("%2d ", m[i][j]);
	    }
		printf("\n");
	   }
}