#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int num_elements;
        cin>>num_elements;
        int sum=1000;
        cout<<sum<<" ";
        for(int i=2; i<=num_elements; i++){
            int element;
            cin>>element;
            sum+=element;
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
}

