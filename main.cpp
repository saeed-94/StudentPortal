#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//*********************************Class******************************************


class Student{
	public:
		int Code,Id;
		char Name[30], Lname[30], Field[30];
	
		Student *Link;
		void Input();
		void Print();
		void DataStudent();
		int GetId(){return Id;}
			
};


class Course{
public:
	Course *Link;
    char Cname[35],Description [100];
    int Unit,Ccode,Cid;
    void Cinput();
    virtual void Descript()=0;
	void Cprint();
	void ShowListCourse();
	int GetCid(){return Cid;}
	   
};

class  TheoreticalCourse : public Course{
public:
	TheoreticalCourse *Link;
    void Descript()
	{
        cout<<"\n"<<"Please Enter Description Theoretical Course:";
        cin>>Description;
        Link=NULL;
	}
    
};

class  PracticalCourse : public Course{
public:
	PracticalCourse *Link;
    void Descript()
	{
        cout<<"\n"<<"Please Enter Description PracticalCourse Course:";
        cin>>Description;
        
	}
	
};

class RegistrationCourse:public Student{
public:	
	RegistrationCourse *Link;
	int unit;
	char Rncourse[35];
	void PrintCourse();
	
	void GiveCourse()
	{
        cout<<"Please Enter Course: ";
		cin>>Rncourse; 
		cout<<"Please Enter Unit: ";
		cin>>unit;    

	}
	
};

class GradeCourse:public Student{
public:
	GradeCourse *Link;
	int grade;
	char Gncourse[35];
	void PrintGrade();
	
	void Givegrade()
	{
        cout<<"Please Enter Course: ";
		cin>>Gncourse;    
        cout<<"Please Enter Grade: ";
		cin>>grade;
	}
	
};

//**************************************Pointers*******************************
Student *Start;
Course *CStart;
TheoreticalCourse *TStart;
PracticalCourse *PStart;
GradeCourse *GStart;
RegistrationCourse *RStart;

//***************************Function Students********************************


void Student::Input()
{
	cout<<"\nEnter Students Code:";
	cin>>Code;
	cout<<"\nPlease Enter First Name:";
	cin>>Name;
	cout<<"\nPlease Enter Last Name:";
	cin>>Lname;
	cout<<"\nPlease Enter Field:";
	cin>>Field;
	cout<<"\nPlease Enter ID:";
	cin>>Id;
	Link=NULL;
	
}

void Student::Print()
{
	cout<<Code<<":"<<Name<<"\t"<<Lname<<"\t"<<Field<<"\t"<<Id<<endl;
}

void Add()
{
	Student *Temp=new Student();
	Temp->Input();
	if(Start==NULL)
	{
		Start=Temp;
	}
	else
	{
		Student *play=new Student();
		play=Start;
		while(play->Link!=NULL)
		{
			play=play->Link;
		}
		play->Link=Temp;
	}
}

void ShowList()
{
	system("cls");
	Student *play=Start;
	while(play!=NULL)
	{
		play->Print();
		play=play->Link;
	}
	getch();
}

void DeleteStudent()
{
	if(Start!=NULL)
	{
		int KeyDel;
		cout<<"Please Enter ID:";
		cin>>KeyDel;
		if(Start->GetId()==KeyDel)
		{
			Start=Start->Link;
		}
		else
		{
			Student *play=new Student();
			Student *prev=new Student();
			play=Start;
			prev=NULL;
			while(play!=NULL)
			{
				if(play->GetId()==KeyDel)
				{
					prev->Link=play->Link;
					delete(play);
					return;
				}
				
				prev=play;
				play=play->Link;
			}
		}
	}
	else
	{
		cout<<"\nNot Exist Data\n";
	}
	
}

void SearchStudent()
{
	if(Start!=NULL)
	{
		int KeySearch,key=-1;
		cout<<"Please Enter ID:";
		cin>>KeySearch;
		if(Start->GetId()==KeySearch)
		{
			Start->Print();
			key=1;
		}
		else
		{
			Student *play=Start;
			while(play!=NULL)
			{
				if(play->GetId()==KeySearch)
				{
					play->Print();
					key=-1;
				}
				play=play->Link;
			}
		}
		if(key==-1)
		{
			cout<<"\nID Not Find\n";
		}
	}
	
	else
	{
		cout<<"\nNot Exist Data\n";
	}
}


//*****************************************Function Course************************************************************

void Course::Cinput()
{
	cout<<"\nEnter Course Code:";
	cin>>Ccode;
	cout<<"\nPlease Enter Course Name:";
	cin>>Cname;
	cout<<"\nPlease Enter Course Unit:";
	cin>>Unit;
	cout<<"\nPlease Enter Course ID:";
	cin>>Cid;
	Link=NULL;

}

void Course::Cprint()
{
	cout<<Ccode<<":"<<Cname<<"\t"<<Unit<<"\t"<<Cid<<endl;
	
}

//*****************************************Function Theoretical Course************************************************************

void TheoreticalCourseAdd()
{
	TheoreticalCourse *Temp=new TheoreticalCourse();
	Temp->Cinput();
	Temp->Descript();
	if(TStart==NULL)
	{
		TStart=Temp;
	}
	else
	{
		TheoreticalCourse *Tplay=new TheoreticalCourse();
		Tplay=TStart;
		while(Tplay->Link!=NULL)
		{
			Tplay=Tplay->Link;
		}
		Tplay->Link=Temp;
	}
}

void DeleteTheoreticalCourse()
{
	if(TStart!=NULL)
	{
		int KeyDel;
		cout<<"Please Enter ID:";
		cin>>KeyDel;
		if(TStart->GetCid()==KeyDel)
		{
			TStart=TStart->Link;
		    cout<<"\nSuccessful Delete\n";

		}
		else
		{
			TheoreticalCourse *Tplay=new TheoreticalCourse();
			TheoreticalCourse *Tprev=new TheoreticalCourse();
			Tplay=TStart;
			Tprev=NULL;
			while(Tplay!=NULL)
			{
				if(Tplay->GetCid()==KeyDel)
				{
					Tprev->Link=Tplay->Link;
					cout<<"\nSuccessful Delete\n";
					delete(Tplay);
					return;
				}
				
				Tprev=Tplay;
				Tplay=Tplay->Link;
				cout<<"\nSuccessful Delete\n";
			}
		}
	}
	else
	{
		cout<<"\nNot Exist Data\n";
	}
	
}

void SearchTheoreticalCourse()
{
	if(TStart!=NULL)
	{
		int KeySearch,key=-1;
		cout<<"Please Enter ID:";
		cin>>KeySearch;
		if(TStart->GetCid()==KeySearch)
		{
			TStart->Cprint();
			key=1;
		}
		else
		{
			TheoreticalCourse *Tplay=TStart;
			while(Tplay!=NULL)
			{
				if(Tplay->GetCid()==KeySearch)
				{
					Tplay->Cprint();
					key=-1;
				}
				Tplay=Tplay->Link;
			}
		}
		if(key==-1)
		{
			cout<<"\nID Not Find\n";
		}
	}
	
	else
	{
		cout<<"\nNot Exist Data\n";
	}
}

void ShowListTheoreticalCourse()
{
	system("cls");
	TheoreticalCourse *Tplay=TStart;
	while(Tplay!=NULL)
	{
		Tplay->Cprint();
		Tplay=Tplay->Link;
	}
	getch();
}

//*****************************************Function Practical Course************************************************************

void PracticalCourseAdd()
{
	PracticalCourse *Temp=new PracticalCourse();
	Temp->Cinput();
	Temp->Descript();
	if(PStart==NULL)
	{
		PStart=Temp;
	}
	else
	{
		PracticalCourse *Pplay=new PracticalCourse();
		Pplay=PStart;
		while(Pplay->Link!=NULL)
		{
			Pplay=Pplay->Link;
		}
		Pplay->Link=Temp;
	}
}

void DeletePracticalCourse()
{
	if(PStart!=NULL)
	{
		int KeyDel;
		cout<<"Please Enter ID:";
		cin>>KeyDel;
		if(PStart->GetCid()==KeyDel)
		{
			PStart=PStart->Link;
		    cout<<"\nSuccessful Delete\n";

		}
		else
		{
			PracticalCourse *Pplay=new PracticalCourse();
			PracticalCourse *Pprev=new PracticalCourse();
			Pplay=PStart;
			Pprev=NULL;
			while(Pplay!=NULL)
			{
				if(Pplay->GetCid()==KeyDel)
				{
					Pprev->Link=Pplay->Link;
					cout<<"\nSuccessful Delete\n";
					delete(Pplay);
					return;
				}
				
				Pprev=Pplay;
				Pplay=Pplay->Link;
				cout<<"\nSuccessful Delete\n";
			}
		}
	}
	else
	{
		cout<<"\nNot Exist Data\n";
	}
	
}

void SearchPracticalCourse()
{
	if(PStart!=NULL)
	{
		int KeySearch,key=-1;
		cout<<"Please Enter ID:";
		cin>>KeySearch;
		if(PStart->GetCid()==KeySearch)
		{
			PStart->Cprint();
			key=1;
		}
		else
		{
			PracticalCourse *Pplay=PStart;
			while(Pplay!=NULL)
			{
				if(Pplay->GetCid()==KeySearch)
				{
					Pplay->Cprint();
					key=-1;
				}
				Pplay=Pplay->Link;
			}
		}
		if(key==-1)
		{
			cout<<"\nID Not Find\n";
		}
	}
	
	else
	{
		cout<<"\nNot Exist Data\n";
	}
}

void ShowListPracticalCourse()
{
	system("cls");
	PracticalCourse *Pplay=PStart;
	while(Pplay!=NULL)
	{
		Pplay->Cprint();
		Pplay=Pplay->Link;
	}
	getch();
}

//*****************************************Function Registration Course************************************************************

void RegistrationCourseAdd()
{
	RegistrationCourse *Temp=new RegistrationCourse();
	Temp->Input();
	Temp->GiveCourse();
	if(RStart==NULL)
	{
		RStart=Temp;
	}
	else
	{
		RegistrationCourse *Rplay=new RegistrationCourse();
		Rplay=RStart;
		while(Rplay->Link!=NULL)
		{
			Rplay=Rplay->Link;
		}
		Rplay->Link=Temp;
	}
}

void DeleteRegistrationCourse()
{
	if(RStart!=NULL)
	{
		int KeyDel;
		cout<<"Please Enter ID:";
		cin>>KeyDel;
		if(RStart->GetId()==KeyDel)
		{
			RStart=RStart->Link;
		}
		else
		{
			RegistrationCourse *Rplay=new RegistrationCourse();
			RegistrationCourse *Rprev=new RegistrationCourse();
			Rplay=RStart;
			Rprev=NULL;
			while(Rplay!=NULL)
			{
				if(Rplay->GetId()==KeyDel)
				{
					Rprev->Link=Rplay->Link;
					delete(Rplay);
					return;
				}
				
				Rprev=Rplay;
				Rplay=Rplay->Link;
			}
		}
	}
	else
	{
		cout<<"\nNot Exist Data\n";
	}
	
}

void ShowListRegistration()
{
	system("cls");
	RegistrationCourse *Rplay=RStart;
	while(Rplay!=NULL)
	{
		Rplay->PrintCourse();
		Rplay=Rplay->Link;
	}
	getch();
}

void RegistrationCourse::PrintCourse()
{
	cout<<Code<<":"<<Name<<"\t"<<Lname<<"\t"<<Field<<"\t"<<Id<<"\t"<<Rncourse<<"\t"<<unit<<endl;
	
}

void GradeCourse::PrintGrade()
{
	cout<<Code<<":"<<Name<<"\t"<<Lname<<"\t"<<Field<<"\t"<<Id<<"\t"<<Gncourse<<"\t"<<grade<<endl;
	
}

//*****************************************Function Grade Course************************************************************

void GradeCourseAdd()
{
	GradeCourse *Temp=new GradeCourse();
	Temp->Input();
	Temp->Givegrade();
	if(GStart==NULL)
	{
		GStart=Temp;
	}
	else
	{
		GradeCourse *Gplay=new GradeCourse();
		Gplay=GStart;
		while(Gplay->Link!=NULL)
		{
			Gplay=Gplay->Link;
		}
		Gplay->Link=Temp;
	}
}

void ShowListGrade()
{
	system("cls");
	GradeCourse *Gplay=GStart;
	while(Gplay!=NULL)
	{
		Gplay->PrintGrade();
		Gplay=Gplay->Link;
	}
	getch();
}

//******************************Function Main*************************************

int main(int argc, char** argv) {
	
	system("cls");
	cout<<"\nEnter 'Y' Go to Home |: ";
	char ch,ch2;
	cin>>ch2;
	
	do
	{
		cout<<"\n\t\t\t ********Student Portal Menu***********\n\n";
		cout<<"\t\t\t *1) Add a Student \n"<<endl;
		cout<<"\t\t\t *2) Remove a Student \n"<<endl;
		cout<<"\t\t\t *3) Search a Student\n"<<endl;
		cout<<"\t\t\t *4) Add a Theoretical Course \n"<<endl;
		cout<<"\t\t\t *5) Add a Practical Course \n"<<endl;
		cout<<"\t\t\t *6) Add a Grade Course \n"<<endl;
		cout<<"\t\t\t *7) Add a Registration Course \n"<<endl;
		cout<<"\t\t\t *8) Remove a Theoretical Course \n"<<endl;
		cout<<"\t\t\t *9) Remove a Practical Course \n"<<endl;
		cout<<"\t\t\t *A) Remove a Registration Course \n"<<endl;
		cout<<"\t\t\t *B) Search a Theoretical Course \n"<<endl;
		cout<<"\t\t\t *C) Search a Practical Course \n"<<endl;
		cout<<"\t\t\t *D) List of Students\n"<<endl;
		cout<<"\t\t\t *E) List of Theoretical Course\n"<<endl;
		cout<<"\t\t\t *F) List of Practical Course\n"<<endl;
		cout<<"\t\t\t *G) List of Grade Course\n"<<endl;
		cout<<"\t\t\t *H) List of Registration Course\n"<<endl;
		cout<<"\t\t\t *I) EXIT\n"<<endl;
		cout<<"\t\t\t *************************************\n\n";
		cout<<"\t\t\t Enter Your Choice <1-9> or <A-I>: ";
		cin>>ch;
		switch(ch)
		{
			case'1': Add();break;
			
			case'2': DeleteStudent(); break;
			
			case'3': SearchStudent(); break;
			
			case'4': TheoreticalCourseAdd(); break;
			
			case'5': PracticalCourseAdd(); break;
			
			case'6': GradeCourseAdd(); break;
			
			case'7': RegistrationCourseAdd(); break;
			
			case'8': DeleteTheoreticalCourse(); break;
			
			case'9': DeletePracticalCourse(); break;
			
			case'A': DeleteRegistrationCourse(); break;
			
			case'B': SearchTheoreticalCourse(); break;
			
			case'C': SearchPracticalCourse(); break;
			
			case'D': ShowList(); break;
			
			case'E': ShowListTheoreticalCourse(); break;
			
			case'F': ShowListPracticalCourse(); break;
			
			case'G': ShowListGrade(); break;
			
			case'H': ShowListRegistration(); break;
				
			case'I': exit(0); break;
		}
		
	cout<<"\nEnter 'Y' Continue | Menu |: "; 
	cin>>ch2;
	
	} while(ch2 != 'n' || ch2!='N' );
	
	return 0;
}
