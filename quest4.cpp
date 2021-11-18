#include <iostream>

using namespace std;

void printUptoN(int n){
    if(n>1)
        printUptoN(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the upper limit= ";
    cin>>n;
    
    cout<<"First "<<n<<" natural numbers are : ";
    printUptoN(n);
    
    return 0;
}