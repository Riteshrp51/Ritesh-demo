// Linear Search 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }

    int loc=0, item;
    cout<<"Enter the item to search:";
    cin>>item;
    for(int i=1;i<=n;i++) {
        if(item == arr[i]) {
            loc = i;
        }
    }
    if(loc == 0) {
        cout<<"Item not found"<<endl;
    }
    else {
        cout<<"Item found at position "<<loc<<endl;
    }
    return 0;
}