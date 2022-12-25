#include<iostream>
#include<string.h>
using namespace std;

class Cstring{
char s[100];
public:
	void set(char c[]){
		strcpy(s,c);
	}

	void show(){
		cout<<s;
	}

	Cstring operator+(Cstring c){
		Cstring temp;
		strcpy(temp.s,s);
		strcat(temp.s,c.s);
		return temp;
	}

	bool operator==(Cstring c){
	    if(strcmp(s,c.s)==0)
	    	return true;
	    else
	    	return false;
		
	}

};

int main(){
	Cstring c1,c2,c3;
	char s1[]="satyam",s2[]="satyam";
	c1.set(s1);
	c2.set(s2);
	c3=c1+c2;
	if(c1==c2)
		cout<<"both are equal "<<endl;
	else
		cout<<"both are not equal"<<endl;
	c3.show();
	return 0;


}