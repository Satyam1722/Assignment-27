#include<iostream>
using namespace std;

class Complex {
   int a;
   int b;
public:
	void set(int x,int y){
		a=x;b=y;
	}
	void show(){
		cout<<"a="<<a<<" b="<<b<<endl;
	}

	friend Complex operator+(Complex,Complex);

};

	Complex operator+(Complex c,Complex d){
          Complex temp;
          temp.a=d.a+c.a;
          temp.b=d.a+c.b;
          return temp;
	}

int main(){
	Complex c1,c2,c3,c4,c5;
	c1.set(1,2);
	c2.set(3,4);
	c3=c1+c2;
	c1.show();
	c2.show();
	cout<<"addition: ";
	c3.show();
	return 0;
}