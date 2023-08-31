//including the header files in the program
#include<iostream>
#include<cstring>
using namespace std;
//main function declaration of the program
int main()
{
	//variable declaration performed to use the variables in the program
	int no;
	cout<< "enter the no of students"<<endl;
	cin>>no;
	string name,name_max,name_min;
	double marks,sum=0,max=0,min=100;
	//for loop to enter the marks and names of the students
	for(int i=1;i<=no;i++)
	{
		cout<<"Enter the name of the student"<<endl;;
		cin>>name;
		cout<<"Enter the marks of the student"<<endl;
		cin>>marks;
		sum=sum+marks;
		//updating the maximum grades of the students 
		if(max<marks)
		{
		max=marks;
		name_max=name;
	}
	//updating the minimum grades of the students
		if(min>marks)
		{
		min=marks;
		name_min=name;
	}
	//printing out the name and marks of the student
		cout<<name<<" ";
		cout<<marks<<endl;
	}
	//calculating the average of the marks of the students
	int average=sum/no;
	//printing out the average, maximum and minimum grades
	cout<<"Average marks of the students are "<<average<<endl;
	cout<<"Maximum grades are " << max<<" of " <<name_max<<endl;
	cout<<"Minimum grades are " << min<<" of "<<name_min;
}
