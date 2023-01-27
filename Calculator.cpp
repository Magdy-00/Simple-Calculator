#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"If you wanna to take the square root op should be '|' \n";
    cout<<"for power op should be '^' \n";
    cout<<"+ for addition \n";
    cout<<"- for subtraction \n";
    cout<<"/ for division \n";
    cout<<"* for multiplication \n";
    cout<<"The op '|' only takes one number \n"; 
    int num1;
    int num2;
    char op;
    cout<<"Enter an operator: \n";
    cin>>op;
    if(op=='|'){
        cout<<"Enter the number: \n";
        cin>>num1;
    }
    else {
    cout<<"Enter the frist number: \n";
    cin>>num1;
    cout<<"Enter the second  number: \n";
    cin>>num2;
    }
    switch (op) {
        //power operation
    case '^':
    cout<<pow(num1, num2);        
        break;
    case '|':
    cout<<sqrt(num1);
        break;
    case '+': {
    cout<<num1 + num2;
    break;
    }
    case '/':
    cout<<num1/num2;
        break;
    case '-':
    cout<<num1-num2;
        break;
    case '*':
    cout<<num1*num2;
        break;
    default:
        cout<<"Wrong operator";
}

    return 0;
}