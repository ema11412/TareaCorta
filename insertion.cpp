#include <iostream>
#include <ctime>

using namespace std; 

void insertion_sort(int arr[], int length);

int main(){

int l[17]={1,5,9,3,4,80,5,6,9,7,4,5,2,5,4,1,2};
insertion_sort(l,17);
return 0;
}



void insertion_sort (int arr[], int length){

	double time1 = clock();

	int temp;
	for (int i = 0; i < length; i++){
		int j = i;
		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
	}

	double time2 = clock();
	double time3 = time2-time1; 

	cout<< "Tiempo : "<<time3<<endl;
	cout<< "Ordenada : "<<endl;
	for(int i=0;i<length;++i)
        cout<<" "<<arr[i];
}