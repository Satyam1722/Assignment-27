#include<iostream>
#include<string.h>
using namespace std;
class mystring{
	char str[100];
public:
	void set(char c[]){
		strcpy(str,c);
	}

	void show(){
		cout<<str;
	}

	mystring operator!(){
		mystring temp;
		int i=0;
		while(str[i]){
			if(str[i]>='a' && str[i]<='z'){
				temp.str[i]=str[i]-32;
			}

			if(str[i]>='A' && str[i]<='Z'){
				temp.str[i]=str[i]+32;
			}
			i++;

		}

		return temp;
	}

};

int main(){
	mystring m1,m2;
	char s1[]="SaTyAm";
	m1.set(s1);
	m2=!m1;
	m2.show();
	return 0;
}