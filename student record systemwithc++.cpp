#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#include<fstream>
#include <string.h>
#include <stdlib.h>
#include<windows.h>
using namespace std;

    int rno;
    char fname[15], lname[15],course[15],dob[15],mo[20],add[25],city[15],email[25];
    int sub1,sub2,sub3,sub4,total;
    float per;

     /* Password sat up this file */
     void set_password()
    {
         string pass = "shadesh";
         string input, name ;
         cout<<endl<<"\tEnter your name :-->";
         cin>>name;
         cout <<endl<< "\tWhat is your password :--> ";
         cin >> input;
         if (input==pass){
        cout <<endl<< "\tCorrect" << endl;
        }
        else
        {
           cout <<endl<< "\tWrong" << endl;
        }

    }

    /* ADD student information */
    void Add_std()
    { 
        cout<<endl<<"\tEnter your Fast name :--> ";
        cin>>fname;
        cout<<endl;

        cout<<endl<<"\tEnter the last name :--> ";
        cin>>lname;
        cout<<endl;

        cout<<endl<<"\tEnter your Id  :-->" ;
        cin>>rno;
        cout<<endl;

        cout<<endl<<"\tEnter the course :--> ";
        cin>>course;
        cout<<endl;

        cout<<endl<<"\tEnter your date of birth :--> ";
        cin>>dob;
        cout<<endl;

        cout<<endl<<"\tEnter Your Mobile Number :--> ";
        cin>>mo;
        cout<<endl;

        cout<<endl<<"\tEnter Your Address :--> ";
        cin>>add;
        cout<<endl;

        cout<<endl<<"\tEnter Your City :--> ";
        cin>>city;
        cout<<endl;

        cout<<endl<<"\tEnter Your email :--> ";
        cin>>email;
        cout<<endl;

        cout<<endl<<"\tEnter Your 1st subject :--> ";
        cin>>sub1;
        cout<<endl;

        cout<<endl<<"\tEnter Your 2nd subject :--> ";
        cin>>sub2;
        cout<<endl;

        cout<<endl<<"\tEnter Your 3rd subject :--> ";
        cin>>sub3;
        cout<<endl;

        cout<<endl<<"\tEnter Your 4th subject :--> ";
        cin>>sub4;
        cout<<endl;
        
        total = sub1 + sub2 + sub3 + sub4;
        per = total / 4;
    }

    /* Modify student information*/
    void modify()
    {
        int ch;
        cout<<endl<< "\tModify information"<<endl;

        cout<<endl<<"enter your fast name :--> "<<fname;
        cout<<endl<<"enter your last name :--> "<<lname;
        cout<<endl<<"enter your address   :--> "<<add;
        cout<<endl<<"enter your mobile no :--> "<<mo;
        cout<<endl<<"enter your email     :--> "<<email;

        cout<<endl<<"Mark of 1st subject :--> "<<sub1;
        cout<<endl<<"Mark of 2nd subject :--> "<<sub2;
        cout<<endl<<"Mark of 3rd subject :--> "<<sub3;
        cout<<endl<<"Mark of 4th subject :--> "<<sub4;

        cout<<endl<<"\tEnter your choice :-->> ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<endl<<"\tEnter your fast name :->";
            cin>>fname;
            cout<<endl;
            break;
            case 2:
            cout<<endl<<"\tEnter your last name :->";
            cin>>lname;
            cout<<endl;
            case 3:
            cout<<endl<<"\tEnter your Address :->";
            cin>>add;
            cout<<endl;
            case 4:
            cout<<endl<<"\tEnter your Mobile number :->";
            cin>>mo;
            cout<<endl;
            case 5:
            cout<<endl<<"\tEnter your email :->";
            cin>>email;
            cout<<endl;

            case 6:
            cout<<endl<<"\tEnter your 1st sub :->";
            cin>>sub1;
            cout<<endl;
            case 7:
            cout<<endl<<"\tEnter your 2nd sub :->";
            cin>>sub2;
            cout<<endl;
            case 8:
            cout<<endl<<"\tEnter your 3rd sub :->";
            cin>>sub3;
            cout<<endl;
            case 9:
            cout<<endl<<"\tEnter your 4th sub :->";
            cin>>sub4;
            cout<<endl;

            default:
            cout<<endl<<"\t Invalid choice " <<endl<<"Try Again";

        }


    }

    /* Deleted any student information this recodr */
    void Deleted()
    {
        int arr[10], tot=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;

    }

    /* studnt srarch information manajment system */
    void search_std()
    {
        cout<< "k";

    }

    /* student mark and great syatem in this project */
    void Mark_sheet()
    {
        cout<<endl<<"\tMark of 1st subject   :--> "<<sub1;
        cout<<endl<<"\tMark of 2nd subject   :--> "<<sub2;
        cout<<endl<<"\tMark of 3rd subject   :--> "<<sub3;
        cout<<endl<<"\tMark of 4th subject   :--> "<<sub4;
        cout<<endl<<"\tTotal mark of Subject :-->"<<total;
        cout<<endl<<"\tPercentage :-->"<<per;

        if(per>=90 && per<=100)
        {
            cout<<endl<<"\tYour Grade is :--> A+";
            cout<<endl;
        }
        else if(per>=80 && per<=90)
        {
            cout<<endl<<"\tYour Grade is :--> A";
            cout<<endl;
        }
        else if(per>=70 && per<=80)
        {
            cout<<endl<<"\tYour Grade is :--> A-";
            cout<<endl;
        }
        else if(per>=60 && per<=70)
        {
            cout<<endl<<"\tYour Grade is :--> B+";
            cout<<endl;
        }
        else if(per>=50 && per<=60)
        {
            cout<<endl<<"\tYour Grade is :--> B ";
            cout<<endl;
        }
        else if(per>=40 && per<=50)
        {
            cout<<endl<<"\tYour Grade is :--> A-";
            cout<<endl;
        }
        else
        {
            cout<<endl<<"\tYou Are Fail....";
            cout<<endl;
        }

    }

    /* Display studnt record system information*/
    void display()
    {
        cout<<endl<<"\t=======>>> SUMMARY REPOET <<<========"<<endl<<endl;
        cout<<endl<<"\tenter your fast name     :--> "<<fname;
        cout<<endl<<"\tenter your last name     :--> "<<lname;
        cout<<endl<<"\tenter your id            :--> "<<rno;
        cout<<endl<<"\tenter your course        :--> "<<course;
        cout<<endl<<"\tenter your date of birth :--> "<<dob;
        cout<<endl<<"\tenter your address       :--> "<<add;
        cout<<endl<<"\tenter your city          :--> "<<city;
        cout<<endl<<"\tenter your mobile no     :--> "<<mo;
        cout<<endl<<"\tenter your email         :--> "<<email<<endl;  

        cout<<endl<<"\t=======>>> MARK SHEET REPORT <<<========"<<endl<<endl;
        cout<<endl<<"\tMark of 1st subject   :--> "<<sub1;
        cout<<endl<<"\tMark of 2nd subject   :--> "<<sub2;
        cout<<endl<<"\tMark of 3rd subject   :--> "<<sub3;
        cout<<endl<<"\tMark of 4th subject   :--> "<<sub4;
        cout<<endl<<"\tTotal mark of Subject :-->"<<total;
        cout<<endl<<"\tPercentage            :-->"<<per;

        if(per>=90 && per<=100)
        {
            cout<<endl<<"\t\tYour Grade is :--> A+";
            cout<<endl;
        }
        else if(per>=80 && per<=90)
        {
            cout<<endl<<"\t\tYour Grade is :--> A";
            cout<<endl;
        }
        else if(per>=70 && per<=80)
        {
            cout<<endl<<"\t\tYour Grade is :--> A-";
            cout<<endl;
        }
        else if(per>=60 && per<=70)
        {
            cout<<endl<<"\t\tYour Grade is :--> B+";
            cout<<endl;
        }
        else if(per>=50 && per<=60)
        {
            cout<<endl<<"\t\tYour Grade is :--> B ";
            cout<<endl;
        }
        else if(per>=40 && per<=50)
        {
            cout<<endl<<"\t\tYour Grade is :--> A-";
            cout<<endl;
        }
        else
        {
            cout<<endl<<"\t\tYou Are Fail....";
            cout<<endl;
        }
        cout<<endl<<"\t=======>>> END OF THE MARK SHEET <<<========"<<endl<<endl;

    }

    /* Exit studnet information manaj mant system */
    void Exit()
    {
        cout<< "Press Enter the Exit";

    }

/* Main function this project every step */
int main()
{
        int ch;
        cout<< " \t                  "<<endl;
        cout<< "\t Student Record system "<<endl;
        cout<< "\t 1. set password ."<<endl;
        cout<< "\t 2. add student ."<<endl;
        cout<< "\t 3. Modify student."<<endl;
        cout<< "\t 4. Deleted student ."<<endl;
        cout<< "\t 5. Search student ."<<endl;
        cout<< "\t 6. Mark sheet ."<<endl;
        cout<< "\t 7. Display ."<<endl;
        cout<< "\t 8. Exit."<<endl;
        
        while(1)
        {
            cout<<endl<< "\t Enter Your choice :--->";
                cin>>ch;
        switch(ch)
        {
        case 1:
            set_password();
            break;
        case 2:
            Add_std();
            break;
        case 3:
            modify();
            break;
        case 4:
            Deleted();
            break;
        case 5:
            search_std();
            break;
        case 6:
        Mark_sheet();
            break;
        case 7:
            display();
            break;
        case 8:
            Exit();
            break;
        default:
            break;
        }
      }

    return 0;
}
