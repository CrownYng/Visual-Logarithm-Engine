#include <iostream>
#include <cmath>
int decomposeNum(int num);
int main(){
    int num;
    
   
     
    std::cout<<"Input a number to find its ln value: ";
    std::cin>>num;
    decomposeNum(num);
}
int decomposeNum( int num){
    
    
    int exp;
    double mantissa=std::frexp(num,&exp);
    std::cout<<"The mantissa value is: " <<mantissa <<"\n";
    std::cout<<"The standard exponent is: " <<exp <<"\n";
    std::cout<<"Ln(" <<num <<") is  " <<"ln(2 exponent " << exp <<") ×  " <<"ln(" <<mantissa<<")";
    
    return mantissa,exp;
}
    