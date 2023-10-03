#include<bits/stdc++.h>
using namespace std;
//write that takes an input of age and print of you are adult ot not
//if-else statement
int main()
{
    int age;
    cout << "Enter the age:"<< endl; 
    cin >> age;
    if(age >= 18){
        cout << "You are an adult";
    }
    else{
        cout << "Your not an adult";
    }
    
    return 0;
    
}
