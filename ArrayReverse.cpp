#include<iostream>
using namespace std;

int main() {
    //inputting array size
    int n;
    cin>>n;

    //inputting elements of the array
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int s = 0;
    int e = n-1;
    while (s < e)
    {
        int t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;

        s++;
        e--;
    }

    cout<<"Reversed array :"<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
