#include<iostream>
using namespace std;

// return type nameofthefunction(){
// 	// task
// }
// no return no argument
void printstatement(){//function decleration
	// function definition
	cout<<"hello world"<<endl; //
	cout<<"coding blocks"<<endl;
	cout<<"this is a pen"<<endl;
	cout<<"humpty dumpty"<<endl;



}
// // no return with arguments
// void mult(int a,int b){//parametrs/arguments


// 	int mu=a*b;
// 	cout<<"mult is : "<<mu<<endl;


// }
// return arguments
float addof3(int x,float f,int z){
	float s=x+f+z;
	return s;
}

// return no arguments
int sumof2nos(){
	int x,y;//10/89
	cin>>x>>y;
	int sum=x+y;
	return sum;
}


void mult(int a,int b);//forawrd decleration

int main(){

	// task 1

	// int a=60,b=70;

	// cout<<"sum is : "<<a+b<<endl;


	// task 2

	// functionname();
	printstatement();//function calling

	printstatement();
	printstatement();
	printstatement();
	printstatement();
	int s=sumof2nos();
	cout<<s<<endl;

	cout<<sumof2nos()<<endl;


	mult(5,7);

	cout<<addof3(6,4.7,8)<<endl;




	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// task 
	// cout<<"mult is : "<<a*b<<endl;
	



	return 0;
}

// no return with arguments
void mult(int a,int b){//parametrs/arguments


	int mu=a*b;
	cout<<"mult is : "<<mu<<endl;


}






