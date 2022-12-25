#include<iostream>
using namespace std;

class Matrix{
	int a[3][3];
public:
	void set(int b[][3]){
		int i,j;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				a[i][j]=b[i][j];
			}
		}
	}

   void show(){
   	int i,j;
   	for(i=0;i<3;i++){
   		for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
   		}
   		cout<<endl;
   	}
   }

   Matrix operator-(){
   	Matrix temp;
     for(int i=0;i<3;i++){
     	for(int j=0;j<3;j++){
     		temp.a[i][j]=-a[i][j];
     	}
     }
     return temp;
   }

};

int main(){
 int a[3][3];
 cout<<"enter matrix element (3*3) "<<endl;
  int i,j;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cin>>a[i][j];
			}
		}

 Matrix m1,m2;
 m1.set(a);
 m2=-m1;
 m2.show();
 return 0;

}