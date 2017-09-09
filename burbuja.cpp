//Metodo Burbuja

#include <iostream>
#include <stdio.h>
#include <ctime> 

using namespace std;
 
int main()
{
    int a[50],n,i,j,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl; 
    
    for(i=0;i<n;++i)
        cin>>a[i];
    

    //Bubble
    double time1=clock();
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    double time2=clock();
    double time3=time2-time1;


    cout<<"Tiempo : " << time3<<endl;
    cout<<"Array after bubble sort:"<<endl;
    for(i=0;i<n;++i)
        cout<<" "<<a[i];
        
    return 0;
}
