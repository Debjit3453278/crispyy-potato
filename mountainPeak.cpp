#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int s = 0, e = n-1;
    while (s < e)
    {
        int mid = s/2 + e/2;
        if(arr[mid] < arr[mid+1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
    }
    cout<<"Peak of the mountain array = "<<arr[s];
     
    return 0;
}