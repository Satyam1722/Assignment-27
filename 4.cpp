	#include<iostream>
	using namespace std;

	class Time{
		int h;
		int m;
		int s;
	public:

     friend istream& operator>> (istream &in , Time &t){
      	in>>t.h>>t.m>>t.s;
      	return in;
      }

     friend ostream& operator<< (ostream &os , Time &t){
      	os<<t.h<<" "<<t.m<<" "<<t.s<<endl;
      	return os;
      }


      bool operator==(Time t){
      	if((h==t.h) && (m==t.m) && (s==t.s))
      	{
      		return true;
      	}
      	return false;
      }

	};

	int main(){
		Time t1,t2;
		cin>>t1;
		cin>>t2;
		cout<<t1;
		cout<<t2;
		if(t1==t2)
			cout<<"equal"<<endl;
		else
			cout<<"not  equal "<<endl;
		return 0;
	}