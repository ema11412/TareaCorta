//Quick Sort
//Codificado por sAfOrAs
#include <iostream>
#define largo 100
#include <ctime>
#include "leearreglo.h"

using namespace std;

void quicksort(int A[],int izq, int der )
{ 

int i, j, x , aux; 
i = izq; 
j = der; 
x = A[ (izq + der) /2 ]; 
    do{ 
        while( (A[i] < x) && (j <= der) )
        { 
            i++;
        } 
 
        while( (x < A[j]) && (j > izq) )
        { 
            j--;
        } 
 
        if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        }
         
    }while( i <= j ); 
 
    if( izq < j ) 
        quicksort( A, izq, j ); 
    if( i < der ) 
        quicksort( A, i, der ); 




}
 
int main () 
{
    int A[largo],n;
    do{
    cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>largo)
            cout<<"Debe ingresar un valor  > a 0 y < a "<<largo<<endl;
    }while(n<=0||n>largo);
    leeCadena(n,A);
    
    double time1= clock();
    quicksort(A,0,n-1);

    double time2 = clock();
    double time3 = time2 - time1;
    cout<< " Tiempo : " << time3 <<endl;
    muestraCadena(n,A);
   
}