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

   Matrix operator+(Matrix m){
   	Matrix temp;
     for(int i=0;i<3;i++){
     	for(int j=0;j<3;j++){
     		temp.a[i][j]=a[i][j]+m.a[i][j];
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

 Matrix m1,m2,m3;
 m1.set(a);
 		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
 m2.set(a);
 m3=m1+m2;
 cout<<"first matrix"<<endl;
 m1.show();
 cout<<"second matrix"<<endl;
 m2.show();
 cout<<"addition :"<<endl;
 m3.show();
 return 0;

}