#include <iostream>

using namespace std;

void quickSort(int *arr, int left, int right){

if(arr[left] <= arr[right]) return;

int pivot = arr[(left+right)/2];

int i = left-1, j = right+1;

while(1){

    while(pivot>arr[++i]);

    while(pivot<arr[--j]);


    if(i<=j){
        swap(arr[i],arr[j]);
    }else {
        break;
    }

}

    if(j > left)
    quickSort(arr, left, j);
    if(i<right)
    quickSort(arr, i, right);

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

  quickSort(arr, 0, n-1);
   
   for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
   }

    delete arr;
    return 0;
} 