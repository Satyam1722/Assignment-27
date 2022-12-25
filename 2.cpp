#include<iostream>
using namespace std;

class natural{
	int a;
public:
	void set(int x){
		a=x;
	}
	void show(){
		cout<<a;
	}
	natural operator++(){
		natural temp;
		temp.a=++a;
		return temp;
	}
	natural operator--(){
	  natural temp;
	  temp.a=--a;
	  return temp;
	}
};

int main(){
	natural n1,n2,n3,n4;
	n1.set(4);
	n2.set(9);
	n3=++n1;
	n4=--n2;
	n3.show();
	cout<<endl;
	n4.show();
	return 0;

}