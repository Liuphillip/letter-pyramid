#include <iostream>
#include <string>
using namespace std;


void pyramid (string);

void pyramid (string a){
    int size_of_string {0};
    size_of_string = a.size();
    int counter = size_of_string;
    
    for(int i {1} ; i <= size_of_string ; i++){
        for(int a {0} ; a < counter ; a++){
            cout << " ";
        }
        counter--;
        
        for(int j {0} ; j < i ; j++){
            cout << a.at(j);
        }
        if(i!=0){
            for(int k {i-1} ; k > 0 ; k--){
                cout << a.at(k-1);
            }   
        }
        
        cout << endl;
    }
    
}

int main(){
    string x;
    cout << "Enter a string" << endl;
    cin >> x;
    pyramid(x);
    
    
}
