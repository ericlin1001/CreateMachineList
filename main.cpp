#include<iostream>
#include<stdio.h>
using namespace std;
void printw(int i,int width){
	if(i<10)cout<<"0";
	cout<<i;
}
int main(){
	for(int i=150;i<=200;i++){
		cout<<"chen-510";
		printw(i,2);
		cout<<endl;
	}
	return 0;
}
