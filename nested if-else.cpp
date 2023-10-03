#include<bits/stdc++.h>
using namespace std;
//nested if else statement
int main()
{
    int age;
    cout << "Enter age: " << endl;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for job";
    }
    else if (age <= 57){
        cout << "eligible for a job";
        if(age >= 55){
            cout << "but retirement soon";
        }
    }
    else{
        cout << "retirement time";
    }
}

//condition
if(condn){
statement;
}
else if (condn) {
statement;
if(condn){
staement;
}
}
note: in nested if else statement we can only apply if statement(nested) in else-if or if statement 
