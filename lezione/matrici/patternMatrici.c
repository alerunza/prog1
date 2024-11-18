#include <stdio.h>
#include <stdbool.h>

#define DIM1 10

void printMatrix(int r, int c, const  int m[][c]);
int sommaDiagonale(int r, int c, const int m[][c]);
bool tuttiCompresiMN(int min, int max,int r, int c, const int m[][c]);

int main(void) {
    int matrP[DIM1][DIM1]={0};
    int i,j;

    for (i=0; i<DIM1; i++) {
        for (j=0; j<DIM1; j++) {
            matrP[i][j] = (i+1)*(j+1);
        }
    }

    printMatrix(DIM1,DIM1,matrP);

    printf("La somma della diagonale e' %d \n", sommaDiagonale(DIM1, DIM1, matrP));
    printf("Sono compresi tra %d e %d? %d\n", 2, 100, tuttiCompresiMN(2, 100, DIM1, DIM1, matrP));
    
    return 0;
}

void printMatrix(int r, int c, const int m[][c]){
	for(int i = 0 ; i<r ; i++){
		for(int j =0 ; j<c ; j++){
			printf("%3d ",m[i][j]);
		}
        printf("\n");
	}
}

int sommaDiagonale(int r, int c, const int m[][c]){
	int min = r;
	
	if (c < min) {min = c;}
	int ret = 0;
	
	for(int i = 0 ; i<min ; i++)
	{
		ret += m[i][i];
	}
	
	/*for(int i = 0 ; i<r ; i++)
	{
		for(int j =0 ; j<c ; j++)
		{
			if(i==j) ret += m[i][j];
		}
	}*/
	
	return ret;
}

bool tuttiCompresiMN(int min, int max,int r, int c, const int m[][c]){
	bool ret = true;

	for(int i = 0 ; i<r && ret ; i++){
		for(int j =0 ; j<c  && ret ; j++){
           if(!( min <= m[i][j] && m[i][j] <= max)) 
			   ret = false;
		}
	}
	
	return ret;
}