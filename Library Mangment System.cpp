#include<iostream>
using namespace std;
//functions prototypes
void Add_Books();
void Scearch_Books();
void Edit_Books();
void Book_Details();
void Issue_Books();
void Return_Books();
void Add_Cutomers();
void Customer_Details();
void Delete_Customers();
void Edit_Customer();
//structures
struct books{
	int bid;
	string bname;
	int quant;
	string auth;
};
struct customer{
	int cid;
	string cname;
	string issb;
	string phone_no;
};
//global variables
books kitab[50]={};
customer cus[50]={};
//functions
void Add_Books()
{
	cout<<"\n==============================";
	for(int i=0;i<50;i++)
	{
		if(kitab[i].auth=="")
		{
			kitab[i].bid=i+1;
			cout<<"\nENTER THE NAME OF THE BOOKS: ";	
			cin.ignore();
			getline(cin,kitab[i].bname);
			cout<<"\nENTER THE NAME OF THE AUTHOR OF BOOKS: ";
			cin.ignore();
			getline(cin,kitab[i].auth);
			cout<<"\nENTER THE QUANTAITY OF BOOKS: ";
			cin>>kitab[i].quant;
				cout<<"\n==============================";
			break;
		}
		else
		{
			continue;
		}
		
	}
	
}
void Scearch_Books()
{
	int x,b;
	do{
		cout<<"\n==============================";
	cout<<"\nScearch Book by ID of Book: ";
	cin>>x;
	if(x==kitab[x-1].bid)
	{
		cout<<"\nNAME OF THE BOOK : "<<kitab[x-1].bname;
		cout<<"\nAUTHOR OF THE BOOK : "<<kitab[x-1].auth;
		cout<<"\nAvailable Quantities of Book : "<<kitab[x-1].quant;
			cout<<"\n==============================";
		break;
	}
	else
	{
		cout<<"\n==============================";
		cout<<"\n===Wrong Entry book dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry: ";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			break;
		}
		
	}
}while(true);
}
void Edit_Books()
{
	int a,b;
	cout<<"\n==============================";
	do{
		cout<<"\nEnter the ID of Book whose detail you want to edit: ";
	cin>>a;
	if(a==kitab[a-1].bid)
	{
		cout<<"\nENTER THE NAME OF THE BOOK: ";	
		cin.ignore();
		cin.ignore();
		getline(cin,kitab[a-1].bname);
		cout<<"\nENTER THE NAME OF THE AUTHOR OF BOOK: ";
		cin.ignore();
		cin.ignore();
		getline(cin,kitab[a-1].bname);
		cout<<"\nENTER THE QUANTAITY OF BOOK: ";
		cin>>kitab[a-1].quant;
			cout<<"\n==============================";
		break;
	}
	else
	{
		cout<<"\n==============================";
		cout<<"\n===Wrong Entry book dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry: ";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			return;
		}
	}
	}while(true);	
}
void Book_Details()
{
	cout<<"\n==============================";
	for(int a=0;a<50;a++)
	{
		if(kitab[a].bname!="")
		{
			cout<<"\n==============================";
			cout<<"\nBOOK-ID : "<<kitab[a].bid;
			cout<<"\nBOOK-NAME : "<<kitab[a].bname;
			cout<<"\nBOOK-AUTHOR : "<<kitab[a].auth;
			cout<<"\nBOOK-QUANTITY : "<<kitab[a].quant;
			continue;
		}
		else
		{
			continue;
		}
	}
}
void Add_Cutomers()
{
	cout<<"\n==============================";	
	for(int i=0;i<50;i++)
	{
		if(cus[i].cname=="")
		{
			cus[i].cid=i+1;
			cout<<"\nENTER THE NAME OF THE CUSTOMER: ";	
			cin.ignore();
			getline(cin,cus[i].cname);
			cout<<"\nENTER THE PHONE NUMBER OF CUSTOMER: ";
			cin>>cus[i].phone_no;
			break;			
		}
		else
		{
			continue;
		}
		
	}
}
void Issue_Books()
{	
	int a,c,b;
	cout<<"\n==============================";
	do{
	cout<<"\nEnter the ID OF CUSTOMER: ";
	cin>>a;
	if(a==cus[a-1].cid)
	{
		cout<<"\nEnter the ID of book  you want to issue:";
		cin>>c;
		cus[a-1].issb=kitab[c-1].bname;
		kitab[c-1].quant=kitab[c-1].quant-1;
		cout<<"\n==============================";
		cout<<"\n===BOOK HAS BEEN ISSUED TO "<<cus[a-1].cname<<"===";
		cout<<"\n==============================";
		break;
	}
	else
	{
		cout<<"\n==============================";
		cout<<"\n===Wrong Customer dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			return;
		}
	}
	}while(true);
}
void Return_Books()
{
	int a,c,b;
	cout<<"\n==============================";
	do{
		cout<<"\nEnter the ID of Customer :";
		cin>>a;
		if(a==cus[a-1].cid)
		{
		cout<<"\nEnter the book number you want to Return:";
		cin>>c;
		cus[a-1].issb=kitab[c-1].bname;
		kitab[c-1].quant=kitab[c-1].quant+1;
		cout<<"\n==============================";
		cout<<"\n===BOOK HAS BEEN Returned BY "<<cus[a-1].cname<<"===";
		cout<<"\n==============================";
		break;
		}
		else
		{
			cout<<"\n==============================";
		cout<<"\n===Wrong Customer dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry ";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			return;
		}
	}
		}while(true);
	
}
void Customer_Details()
{
	cout<<"\n==============================";
	for(int a=0;a<50;a++)
	{
		if(cus[a].cname!="")
		{
			cout<<"\n==============================";
			cout<<"\nCUSTOMER-ID :"<<cus[a].cid;
			cout<<"\nCUSTOMER-NAME :"<<cus[a].cname;
			cout<<"\nCUSTOMER-PHONE NUMBER :"<<cus[a].phone_no;
			if(cus[a].issb!="")
			{
				cout<<"\nBOOK-ISSUED TO HIM: "<<cus[a].issb;
			}
			
			
		}
		else
		{
			continue;
		}
	}
	
}
void Delete_Customers()
{
	int x,b;
	cout<<"\n==============================";
	do{
	cout<<"\nEnter the ID of Customer you want to delete :";
	cin>>x;
	if(x==cus[x-1].cid)
	{
		cus[x-1].phone_no="";
		cus[x-1].cname="";
		cus[x-1].issb="";
		cout<<"\n==============================";
		cout<<"\n===Customer has been deleted===";
			cout<<"\n==============================";
			break;
	}
	else
	{
		cout<<"\n==============================";
		cout<<"\n===Wrong Customer dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			return;
		}	
	}
	}while(true);
}
void Edit_Customer()
{
	int a,b;
	cout<<"\n==============================";
	do{
		cout<<"\nEnter the ID of Customer whose detail you want to edit:";
	cin>>a;
	if(a==cus[a-1].cid)
	{
		cout<<"\nENTER THE NAME OF THE Customer:";	
		cin.ignore();
		getline(cin,cus[a-1].cname);
		cout<<"\nENTER THE PHONE NUMBER: ";
		cin.ignore();
		getline(cin,cus[a-1].phone_no);
		break;
	}
	else
	{
		cout<<"\n==============================";
		cout<<"\n===Wrong Entry customer dosent exists===";
		cout<<"\nEnter any numberic key to go to main menu or 1 to Retry entry";
		cin>>b;
		cout<<"\n==============================";
		if(b==1)
		{
			continue;
		}
		else 
		{
			return;
		}
	}
	}while(true);	
}
int main()
{
	int a;
	do{
	cout<<"\n==============================";
	cout<<"\n****Library Managment System****";
	cout<<"\n==============================";
	cout<<"\n****Options for Books:****";
	cout<<"\n==============================";
	cout<<"\n1.Add Books\n2.Scearch Books\n3.Edit Books\n4.Book Details\n5.Issue Books\n6.Return Books";
	cout<<"\n==============================";
	cout<<"\n****Options for Customer:****";
	cout<<"\n==============================";
	cout<<"\n7.Add Cutomers\n8.Customer Details\n9.Delete Customers\n10.Edit Customer";
	cout<<"\n==============================";
	cout<<"\n****{any other number to end the program}****\n= ";
	cin>>a;
	if(a==1)
	{
		Add_Books();
	}
	else if(a==2)
	{
		Scearch_Books();
	}
	else if(a==3)
	{
		Edit_Books();
	}
	else if(a==4)
	{
		Book_Details();
	}
	else if(a==5)
	{
		Issue_Books();
	}
	else if(a==6)
	{
		Return_Books();
	}
	else if(a==7)
	{
		Add_Cutomers();
	}
	else if(a==8)
	{
		Customer_Details();
	}
	else if(a==9)
	{
		Delete_Customers();
	}
	else if(a==10)
	{
		Edit_Customer();	
	}
	else
	{
		return 0;
	}
}while(true);
	return 0;	
}
