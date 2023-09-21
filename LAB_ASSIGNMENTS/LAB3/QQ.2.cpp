#include<iostream>
using namespace std;
int binary(int arr[],int size, int search, int &iteration){
    int start=0;
    int final=size-1;
    int mid=(start+final)/2;
    while(start<=final){
        iteration++;
        if(arr[mid]==search){
            return mid;
        }
        else if(arr[mid]<search){
            start=mid+1;
        }
        else{
            final=mid-1;
        }
        mid=(start+final)/2;
    }
    return -1;
}
int main(){
    cout<<"enter no of students"<<endl;
    int size,search;
    int iteration;
    cin>>size;
    int arr[size];
    cout<<"enter roll no of students"<<size<<"student"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter roll no to search"<<endl;
    cin>>search;
    int index=binary(arr,size,search,iteration)+1;
    if(index!=0){
        cout<<"roll no found at index"<<index<<endl;
        cout<<"no of iterations"<<iteration<<endl;

    }
    else{
        cout<<"student not found";
    }
    return 0;
}