//Created by Prateek Shukla
//Copyright ACT 2018 Prateek Shukla. All rights reserved.

#include <iostream>
using namespace std;
int main(){
	
	cout<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<"Mark registry system"<<endl;
	int enter,value,a,y,n;
	char print;
	cout<<"Number of students in your class"<<endl;
	cin>>enter;
	cout<<"Enter the marks according to their roll num:"<<endl;
	
	
	int array[enter];
	for(a=0;a<enter;a++)
	cin>>array[a];
	
	cout<<"MARKS ENTERED"<<endl;
	
	cout<<"Press 'P' to print"<<endl;
	cin>>print;
	
	if(print=='p'&& print=='P'){
		

	}
			cout<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<"Mark Sheet"<<endl;
	
	cout<<"student 1-"<<" "<<array[0]<<endl;   //write the name of the students
	cout<<"student 2  -"<<" "<<array[1]<<endl;;  //write the name of the students
	cout<<"student 3   -"<<" "<<array[2]<<endl;    //write the name of the students
	cout<<"student 4 -"<<" "<<array[3]<<endl;     //write the name of the students
	cout<<"student 5 -"<<" "<<array[4]<<endl;   //write the name of the students
	cout<<"student 6 -"<<" "<<array[5]<<endl;
	cout<<"student 7 -"<<" "<<array[6]<<endl;
	cout<<"student 8 -"<<" "<<array[7]<<endl;
	cout<<"student 9   -"<<" "<<array[8]<<endl;
	cout<<"student 10 -"<<" "<<array[9]<<endl;

	//increase the number of students according to values in the array :) 
	
	
	
	
	
	
}



