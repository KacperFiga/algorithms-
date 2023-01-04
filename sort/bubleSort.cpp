#include <iostream>

using namespace std;

void selectionSort(int *arr, int n){

for(int i = 0;  i < n - 1; i++)
    for(int j = 0; j<n-i-1; j++)
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);


}

int main(){
   int n, *arr;

    do{
    cout<<"Enter array size: ";
    cin>>n;
    }while(n<=0);

    arr = new int[n];

    for(int i = 0; i<n; i++){
        cout<<"enter value of " << i+1 <<" array element "; cin>>arr[i];
    }

  selectionSort(arr, n);
   
   for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}