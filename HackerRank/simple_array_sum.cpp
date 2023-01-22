#include<iostream>
using namespace std;

int simpleArraySum(int *ar, int n){
    int sum = 0;
    for(int a = 0; a < n; a++){
        sum = sum + ar[a];
    }
    return sum;
}

int main(){
    int n;
    int *ar = new int[n];
    size:
    cout << "ENTER ARRAY SIZE: ";
    cin >> n;
    if(n > 0){
        for(int a = 0; a < n; a++){
        	element:
            cin >> ar[a];
            if(ar[a] >= 1000){
                cout << "ELEMENTS OF ARRAY SHOULD BE GREATER THEN 1000.....PLEASE TRY AGAIN" << endl << endl;
                goto element;
            }
        }
    }
    else{
        cout << "SIZE OF ARRAY SHOULD BE GREATER THEN 0..... PLEASE TRY AGAIN" << endl << endl;
        goto size;
    }
    cout << "\nSum = " << simpleArraySum(ar, n) << endl;
}
