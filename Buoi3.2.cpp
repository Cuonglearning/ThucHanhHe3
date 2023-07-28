#include<iostream>
using namespace std;
int main(){
	int n,S=1,P=0;
	cout<<"Nhap so nguyen duong n:";cin>>n;
	for(int i=1;i<=n;i++){
		S=S*i;
		P=P+S;
	}
	cout<<"Ket qua:"<<P;
}
