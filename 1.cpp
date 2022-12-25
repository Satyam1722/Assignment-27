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
		cout<<"a= "<<a<<" b= "<<b<<endl;
	}

	Complex operator+(Complex c){
          Complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return temp;
	}

	Complex operator-(Complex c){
		Complex temp;
		temp.a=a-c.a;
		temp.b=b-c.b;
		return temp;
	}

	bool operator==(Complex c){
          if(a==c.a && b==c.b)
          	return true;
          else
          	return false;
	}

	Complex operator*(Complex c){
		Complex temp;
	    temp.a=(a*c.a)-(b*c.b);
		temp.b=(a*c.b)+(b*c.a);
		return temp;
	}


};

int main(){
	Complex c1,c2,c3,c4,c5;
	c1.set(1,2);
	c2.set(3,4);
	c3=c1+c2;
	c4=c1-c2;
	c5=c1*c2;
	c1.show();
	c2.show();
	if(c1==c2)
		cout<<"both are equal "<<endl;
	else
		cout<<"both are not equal"<<endl;
	cout<<"addition: ";
	c3.show();
	cout<<"subtraction: ";
	c4.show();
	cout<<"multipication: ";
	c5.show();
	return 0;
}