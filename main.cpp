#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void printw(int i,int width){
	//if(i<10)cout<<"0";
	cout<<i;
}
int main(int argc,char **argv){
	int from=150,to=200;
	char prefix[100]="chen-510",postfix[100]="";
	if(argc>=3){
		from=atoi(argv[1]);
		to=atoi(argv[2]);
		if(argc>=4){
			strcpy(prefix,argv[3]);
		}
		if(argc>=5){
			strcpy(postfix,argv[4]);
		}
	}else{
		cout<<"Usage: genRangeList FROM TO [PREFIX] [POSTFIX]\n"
			"	This generates a comptiable machinefile list.\n"
			"	The default value of PREFIX is chen-510, \n	while The default value of POSTFIX is NONE.\n"
			"Example: \n"
			"	genRangeList 1 13\n"
			"	genRangeList 50 61 chen-510 :4\n"
			"	genRangeList 50 54 chen-510 :4|tee machinefile\n"
			"Author: Eric Lin(463222898@qq.com)\n";
		return 0;	
	}
	//cout<<"#Generate range:"<<from<<","<<to<<endl;
	for(int i=from;i<=to;i++){
		cout<<prefix;
		printw(i,2);
		cout<<postfix;
		cout<<endl;
	}
	return 0;
}
