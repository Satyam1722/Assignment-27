#include<iostream>
using namespace std;

class fraction {
	long numerator;
	long denominator;
public:
	fraction(){
		numerator=0;
		denominator=0;
	}

	void set(int x,int y){
		numerator=x;
		denominator=y;
	}

	void show(){
		cout<<numerator<<" "<<denominator<<endl;
	}

	fraction operator++(){
		fraction temp;
	    temp.numerator=++numerator;
	    temp.denominator=++denominator;
	    return temp;
	}

	fraction operator++(int dummy){
		fraction temp;
		temp.numerator=numerator++;
		temp.denominator=denominator++;
		return temp;
	}

   friend istream & operator>>(istream &in,fraction &f);
   friend ostream & operator<<(ostream &os,fraction &f);

};

 istream & operator>>(istream &in,fraction &f){
 	in>>f.numerator>>f.denominator;
 	return in;
 }

 ostream & operator<<(ostream &os,fraction &f){
 	os<<f.numerator<<"/"<<f.denominator<<endl;
 	return os;
 }

int main(){
	fraction f1,f2;
	cin>>f1;
	f2=f1++;
    cout<<f1<<f2;
    return 0;
}