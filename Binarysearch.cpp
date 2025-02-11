#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end)/2;

        if(a[mid] == key) {
            return mid;
        }
        if(a[mid] < key) {
            start = mid + 1;
        }
        if(a[mid] > key) {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int index = binarySearch(a,n, key);
    if(index != -1) {
        cout<<"Element found at "<<index<<endl;
        }
    else {
        cout<<"Element not found!"<<endl;
        }
    
    return 0;
}
