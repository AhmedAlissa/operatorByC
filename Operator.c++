#include <iostream>
using namespace std;
int main(){
 char oper;
 float num1;
 float num2;
 cout<<"enter an operator(+,-,*,/) :";
 cin>>oper;
 cout<<"enter two number\n";
 cin>>num1;
 cin>>num2;

switch(oper){
case '+':
cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
break;
case '-':
cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
break;
case '*':
cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
break;
case '/':
cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
break;
default :cout<<"erorr the operator is not correct\n";

}
cout<<"thanks you for using our operator";
return 0;







}