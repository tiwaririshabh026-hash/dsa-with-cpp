#include <iostream>
using namespace std;
int main(){
    int arr[]={9,2,3,1,-1,-2,6,};
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<sz;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}