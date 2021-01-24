#include<bits/stdc++.h>
using namespace std;

class Student{
	private: 
	float marks;
	public:
		int roll;
		char name[100];
	Student(){
	cout<<"Simple Constructor Being Called As Soon As The object being Created"<<endl;
	cout<<"This exists but are not visible, we are overwriting the existing constructor"<<endl;
	}
	// Parametrised Constructor 
	Student(float m )
	{   
	   cout<<"This is parametrised Constructor and will be called depending on the parameters with which object is being created "<<endl;
		marks = m;
	}
    void Print(){
    	cout<<name<<endl;
    	cout<<marks<<endl;
    	cout<<roll<<endl;
	}
	void setdata(float p,int r,char k[]){
		marks = p;
		roll = r;
		strcpy(name,k);
	}	
 };
int main(){
//Student s1;
//s1.setdata(250,33,"rahul");
//s1.Print();
Student s2(56);
//s2.Print();
s2.setdata(0,33,"sahhhul");
//s2.Print();
// Copy constructor (Shallow and deep copy ) : Shallow coppy creates problem when there is a dynamic memory alocation otherwise it works 
//fine for the case of dynamic memory allocation since the address is also being copied it modifies the value for all the objects rather
// than doing it for the desired one.(self observation For the copy constructor contructor is being called only once for the original object
// from which we are copying.
// Demo of Shallow Copy
Student s3(s2);
s3.Print();
Student S4(768);
return 0;
}

