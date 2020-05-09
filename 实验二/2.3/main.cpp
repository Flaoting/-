#include <iostream>
#include <string>
#include "People.h"
#include "people.cpp"
using namespace std;
int main(){
    float mo,fa;
    char se,spo,die;
    cout<<"Please input father's height:  "; cin>>fa; cout<<endl;
    cout<<"Please input mother's height:  "; cin>>mo; cout<<endl;
    cout<<"Please input gender F for female and M for male."<<endl;
    cin.ignore();
    cout<<"Please input gender :"; cin>>se; cout<<endl;
    cout<<"Please input Y or N ,represent Yes or NO!";
    cin.ignore();
    cout<<endl;
    cout<<"Habit of Diet ? "; cin>>die; cout<<endl;
    cin.ignore();
    cout<<"Please input Y or N ,represent Yes or NO!";
    cout<<endl;
    cout<<"Like exercise ? "; cin>>spo; cout<<endl;
    People people(fa,mo,se,spo,die);
    people.forecastHeight();
    cout<<"The prediction of height is :";
    cout<<people.getHeight()<<endl;
    cout<<"Thank you !!!";
    system("pause");
    return 0;
    
}

