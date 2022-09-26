#include <iostream>
using namespace std;

void bubbleSort(int* arr,int n){
    for (int i = 1; i < n; i++) // for round 1 to n-1
    {
        for (int j = 0; j < n-i; j++) //loop till n-i as n+1 is out of bound & at the end of each round ith largest element is at its correct pos
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    

}
int main()
{
    int arr[] = {21, 24, 63, 81, 12, 8};

    bubbleSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
