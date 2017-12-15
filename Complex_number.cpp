#include <iostream>

using namespace std;

struct ComplexT{
float real,img;
};
ComplexT operator+(ComplexT v1, ComplexT v2){
ComplexT result;
result.real=v1.real+v2.real;
result.img=v1.img+v2.img;
return result;
}
int main(){
ComplexT c1,c2,c3;
c3=c1+c2; // c1+(c2)
}
