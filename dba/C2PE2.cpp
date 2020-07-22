#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubbleSort(int arr[], int n){
    int i,j;
    bool flag;
    for(i=0;i<n-1;i++){
        flag=false;
        for (j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        //if no swap happen in inner loop i.e all items are already sorted, so need for further iterate the outer loop
        if(flag==false){
            break;
        }
    }
}
void showArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int arr[]={90,78,60,54,34,65,70,100};
    int n=7;
    bubbleSort(arr,n);
    cout<<"Sorted Array:"<<endl;
    showArray(arr,n);
    return 0;
}
