#include<iostream>
#include<map>
#include<string>
using namespace std;
class friendpage
{ 
private:
  string name,emailid;          // declaring variables
    map<string,string>my;
    map<string,string>::iterator itr;

public:
   friendpage()     //constructor of friendpage class
  {
     cout<<"friend class constructor is involked "<<endl; 
   }
void option()
{
    
    int opt; 
    cout<< "   FRIENDS PAGE    "<<endl;
    cout<< "1. Enter the Name of the User and email-id "<<endl;
    cout<< "2. Edit an existing user details "<<endl;
    cout<< "3. Delete the user based on name/email-id "<<endl;
    cout<< "4. Search the entire user list by name "<<endl;
    cout<< "5. Display the list "<<endl;
    cout<< "6. Exit"<<endl;
    cout<< "Choose an option"<<endl;
    cin>>opt;

 switch(opt)       //Calling functions by using switch case
 {
            case 1:
                    addlist();  // declaring add function
                    break;
            case 2:
                    edit();       // declaring edit function
                    break;
            case 3:
                    deleterecord(); // declaring delete function
                    break;
            case 4:
                    search();    // declaring search function
                    break;
            case 5: 
                    display();    // declaring display function
                    break;
            case 6:
                    exit(0);   
                
         }    
}

void addlist()
    {
     int n;
     cout<<" Enter no: of users:- "<<endl;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cout<<" Enter the username:- "<<endl;
         cin>>name;
         cout<<" Enter the emailid:- "<<endl;
         cin>>emailid;
         my.insert(make_pair(name,emailid));
     }
        option();
    }
    
    void edit()
    {
       string Newname;
         cout<<" Enter name to edit"<<endl;
         cin>>name;
         cout<<" Enter new name"<<endl;
         cin>>Newname;
         cout<<" Enter new emailid"<<endl;
         cin>>emailid;
         my.erase(name);
         my.insert(make_pair(Newname,emailid));

       option();
    }
 
     void deleterecord()
    {
        string del;
        cout<<" Enter name to delete :- "<<endl;
        cin>>del;
        my.erase(del);
        option();
    }

    void search()
  {
    cout << "Enter the name to search";
    cin>>name;
    for(itr=my.begin();itr!= my.end();itr++)
      {
    if (itr->first==name)
      cout <<"Data available"<<endl;
    else
      cout <<"Data not available"<<endl;
          
      }
      option();
    }
    
     void display()
  {
    cout << "Display the users list:\n";
    for (itr = my.begin(); itr!= my.end();itr++)
      {
    cout <<"Name:"<< itr->first<<endl;
    cout <<"Emailid:" <<itr->second<<endl;
      }
        option();
 }
        
    ~friendpage()       //destructor of friendpage class
    {
        cout<<" friend class destructor is involked "<<endl;
    }
};

int main(int argc,char *argv[])
{

    if(argc>1)
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
    friendpage ob;    // creating object
    ob.option();     // Calling function
	}
return 0;
}

        
        
        
        
        
        
        
        
        
        
        
        
        

