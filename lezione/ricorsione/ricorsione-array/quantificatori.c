//Scrivere una funzione che restituisca true 
//se esiste almeno un pari in ogni colonna della matrice sfrangiata.

#include <stdio.h>
#include <stdbool.h>

#define	D1 3 
#define D2 4



bool testPari(int col,int righe, int m[][col],int rag[]);
bool testDispari(int col,int righe, int m[][col],int rag[]);

int main(void) {
	
	
    int MatrixA[D1][D2] = {{0,1,2,3},{1,5},{6,7,8}};
    
	int ArrayA[D1]={4,2,3};
	
	
    int ArrayB[D1]={4,2,3};
	
	printf("TutteRigheEsisteColonnapari=%d",testPari(D2,D1,MatrixA,ArrayA));
	printf("\nEsisteRigaTutteColonneDispari=%d",testDispari(D2,D1,MatrixA,ArrayA));
}

bool testPari(int col,int righe, int m[][col],int rag[])
{
    //ogni riga ha un pari
	bool result;
	
	
	bool tutteRighe = true;
	for(size_t i = 0; i < righe && tutteRighe ; i++)
	{
		bool esisteColonna = false;
		for(size_t j = 0 ; j < rag[i] && !esisteColonna; j++)
		{
			//if((m[i][j]%2) == 0)
			//{
			//	esisteColonna = true;
			//}
			esisteColonna = ((m[i][j]%2) == 0);
		}
		
		//if(!esisteColonna)
		//{
		//	tutteRighe = false;
		//}
		
		tutteRighe = esisteColonna;
	}
	
	result = tutteRighe;
	
	return result;
	
}


bool testDispari(int col,int righe, int m[][col],int rag[])
{
    //esiste una  riga che ha tutti dispari
	bool result;
	
	
	bool esisteRiga = false;
	for(size_t i = 0; i < righe &&  !esisteRiga ; i++)
	{
		bool ogniColonna = true;
		for(size_t j = 0 ; j < rag[i] && ogniColonna; j++)
		{
			//if((m[i][j]%2) == 0)
			//{
			//	esisteColonna = true;
			//}
			ogniColonna = (m[i][j]%2) != 0;
		}
		
		//if(!esisteColonna)
		//{
		//	tutteRighe = false;
		//}
		
		esisteRiga = ogniColonna;
	}
	
	result = esisteRiga;
	
	return result;	
}


bool testEsisteRigaOgniColonnaMaggioreEsisteUnoArray(
int col,int righe, int m[][col],int rag[], int a[], int aLen)
{
    //esiste una  riga che ha tutti dispari
	bool result;
	
	
	bool esisteRiga = false;
	for(size_t i = 0; i < righe &&  !esisteRiga ; i++)
	{
		bool ogniColonna = true;
		for(size_t j = 0 ; j < rag[i] && ogniColonna; j++)
		{
			//if((m[i][j]%2) == 0)
			//{
			//	esisteColonna = true;
			//}
			bool esisteEleArrayMinore = false;
			for(size_t k = 0 ; k<aLen ; k++)
			{
				if(a[k] < m[i][j))
					
				//TOFINSH ...
				
			}
			
			
			ogniColonna = (m[i][j]%2) != 0;
		}
		
		//if(!esisteColonna)
		//{
		//	tutteRighe = false;
		//}
		
		esisteRiga = ogniColonna;
	}
	
	result = esisteRiga;
	
	return result;
	
}