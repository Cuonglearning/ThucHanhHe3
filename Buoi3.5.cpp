#include<iostream>
using namespace std;
int main(){
	int a,b,n;
	cout<<"Nhap hai so a va b:";cin>>a>>b;
	n=min(a,b);
	while(n>0){
		if((a%n==0)&&(b%n==0)){
			cout<<"uoc chung lon nhat cua "<<a<<" va "<<b<<" la:"<<n;
			break;
		}
		n--;
	}
}
