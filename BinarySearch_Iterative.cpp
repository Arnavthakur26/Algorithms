#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=arr[0];
    int end=size-1;

    // int mid= (start+end)/2;

    int mid= start + (end-start)/2; //for edge cases -> if start + end > INT_MAX

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if (arr[mid<key]){
            start=mid+1;
        }
        mid=(start+end)/2;
                    
    }
    return -1;

}

int main()
{
    int arr[]={2,4,6,8,12,18};

    int index=binarySearch(arr,6,12);

    cout<<"Key 12 is at index "<<index<<endl;
}