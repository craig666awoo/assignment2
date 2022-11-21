#include<iostream>
using namespace std;

int main(){
//GRADE OF  STUDENT
    string name;
    int score;
    cout<<"Your Name ";
    getline(cin, name);
    cout<<"Your Score ";
    cin>>score;
    if(score<40){
        cout<<name <<" You have an F";
    }
    else if(score>=40 && score<=49){
        cout<<name <<" You have a D";
    }
    else if(score>=50 && score<=59){
        cout<<name <<" You have a C";
    }
    else if(score>=60 && score<=69){
        cout<<name <<" You have a B";
    }
    else if(score>70){
        cout<<name <<" You have an A";
    }
    else{
        cout<<"Invalid score";
    }


//MAX NUMBER USING SWITCH CASE
    int option, a, b;
    cout<<"1'determine the maximum number\n";
    cout<<"2.determine the least number\n";
    cout<<"Which option do you want executed?\n";
    cin>>option;

    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;

    switch (option)
    {
    case 1:
    
    if(a>b){
        cout<<"The maximum number is "<<a;
    }
    else if(b>a)
    {
        cout<<"The maximum number is "<<b;
    }
    else{
        cout<<"The numbers are equal";
    }
    break;

    default:
    cout<<"Invalid Input";
    }    
}
