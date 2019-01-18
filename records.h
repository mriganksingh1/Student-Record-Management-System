#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
class records
{
	private:
		vector<string> name;
		vector<int> admno;
		vector<string> address;
		vector<string> transport;
		vector<string> gaurdian;
		vector<long long int> contactno;
	public:
		void AddRecord()
		{
			string s,a,t,g;
			int n;
			long long int c;
			cout<<"Enter the Child name"<<endl;
			cin>>s;
			cout<<"Enter the admission number of the child"<<endl;
			cin>>n;
			cout<<"Enter the Gaurdian name"<<endl;
			cin>>g;
			cout<<"Enter the Address of the child"<<endl;
			cin>>a;
			cout<<"Enter the contact number"<<endl;
			cin>>c;
			cout<<"Enter the mode of transport"<<endl;
			cin>>t;
			name.push_back(s);
			admno.push_back(n);
			gaurdian.push_back(g);
			address.push_back(a);
			contactno.push_back(c);
			transport.push_back(t);
		}
		void ListRecords()
		{
			for(int i=0;i<name.size();i++)
			{
				cout<<name[i]<<" ";
				cout<<admno[i]<<" ";
				cout<<address[i]<<" ";
				cout<<transport[i]<<" ";
				cout<<gaurdian[i]<<" ";
				cout<<contactno[i]<<" ";
			}
		}
		void ModifyRecords()
		{
			int y;
			cout<<"Enter the addmission number of student of whose record you want to modify"<<endl;
			cin>>y;
			long long int indexno=-1;
			for(long long int i=0;i<admno.size();i++)
			{
				if(y==admno[i])
				{
					indexno=i;
					break;
				}
			}
			if(indexno==-1)
			{
				cout<<"Enter the correct addmission number"<<endl;
			}
			else
			{
				cout<<"Enter the property which you want to modify"<<endl;
				cout<<"1.Name"<<endl;
				cout<<"2.Gaurdian Name"<<endl;
				cout<<"3.Address"<<endl;
				cout<<"4.Contact no."<<endl;
				cout<<"5.Mode of transport"<<endl;
				cout<<"6.Exit"<<endl;
				int choice;
				cin>>choice;
				while(choice!=6)
				{
					if(choice==1)
					{
						cout<<"Enter the new Name"<<endl;
						cin>>name[indexno];
					}
					else if(choice==2)
					{
						cout<<"Enter the new Gaurdian Name"<<endl;
						cin>>gaurdian[indexno];
					}
					else if(choice==3)
					{
						cout<<"Enter the new Address"<<endl;
						cin>>address[indexno];
					}
					else if(choice==4)
					{
						cout<<"Enter the new contact no."<<endl;
						cin>>contactno[indexno];
					}
					else if(choice==5)
					{
						cout<<"Enter the new mode of transport"<<endl;
						cin>>transport[indexno];
					}
					cin>>choice;
				}	
			}
			
		}
		void DeleteRecords()
		{
			int y;
			cout<<"Enter the addmission number of student of whose record you want to modify"<<endl;
			cin>>y;
			long long int indexno=-1;
			for(long long int i=0;i<admno.size();i++)
			{
				if(y==admno[i])
				{
					indexno=i;
					break;
				}
			}
			if(indexno==-1)
			{
				cout<<"Enter the correct addmission number"<<endl;
			}
			else
			{
				name[indexno]='\0';
				address[indexno]='\0';
				gaurdian[indexno]='\0';
				transport[indexno]='\0';
				contactno[indexno]=INT_MIN;
				int a=admno[indexno];
				admno[indexno]=INT_MIN;
				cout<<"The records have been deleted for the addmission number "<<a<<endl;
			}
		}	
};