#include<iostream>
using namespace std;
int main(){
	int n,i=2;
	float S=0;
	cout<<"Nhap mot so nguyen duong:";cin>>n;
	while(i<=(2*n)){
		S=S+1.0/(2*n);
		i=i+2;
	}
	cout<<"Ket qua:"<<S;
}
