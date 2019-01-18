#include<iostream>
#include "sha256.h"
#include"records.h"
#include<string>
#define ENTER 13
#define TAB 9
#define BKSP 8
using namespace std;
int main()
{
	cout<<"Welcome to Student records"<<endl;
	string s[4];
	s[0]="mrigank";
	s[1]="hritik";
	s[2]="abhijeet";
	s[3]="kushal";
	string pass=sha256("Student@12345");
	cout<<"Enter the User-name"<<endl;
	string s1;
	cin>>s1;
	cout<<"Enter the password"<<endl;
	string pa;
	cin>>pa;
	int valid=0;
	string p=sha256(pa); 
	for(int i=0;i<4;i++)
	{
		if(s1==s[i]&&pass==p)
		{
			valid=1;
		}
	}
	if(valid!=1)
	{
		cout<<"The User-name or password is incorrect"<<endl;	
	}
	if(valid==1)
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1.Add Records"<<endl;
		cout<<"2.List Records"<<endl;
		cout<<"3.Modify Records"<<endl;
		cout<<"4.Delete Records"<<endl;
		cout<<"5.Exit Program"<<endl;
		int choice;
		cin>>choice;
		records r;
		while(choice!=5)
		{
			if(choice==1)
			{
				r.AddRecord();
			}
			else if(choice==2)
			{
				r.ListRecords();
			}
			else if(choice==3)
			{
				r.ModifyRecords();
			}
			else if(choice==4)
			{
				r.DeleteRecords();
			}
			cout<<"Enter your choice"<<endl;
			cout<<"1.Add Records"<<endl;
			cout<<"2.List Records"<<endl;
			cout<<"3.Modify Records"<<endl;
			cout<<"4.Delete Records"<<endl;
			cout<<"5.Exit Program"<<endl;
			cin>>choice;
		}
	}
}