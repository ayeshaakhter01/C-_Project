#include<stdlib.h>
#include<fstream>
#include <iostream>
#include <iostream>
#include <fstream>
#include<cctype>
#include<iomanip>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

class Bank_Account
{
public:
    int Money_Deposit;
	char type;
	int acno;
    void new_account();
    void deposit_money();
    void withdraw_money();
    void transfer_money();
    void account_details();
    void last_details();
    void transaction_detail();

};
int main_exit;
char name[50];
int diposit_amt,amt=10000,acc_no;
int menu();

int divider()
{
    for(int i=0;i<80;i++)
    {
        cout<<"-";
    }
}
int withdraw_amt;
int transfer_amt;
int new_account();
int deposit_money();
int withdraw_money();
int transfer_money();
int account_details();
int last_details();
int transaction_detail();
int main()
{
    int choice;
   system("cls");

       while(1)
         {
             menu();

        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {

        case 1:
            new_account();
            break;
        case 2:
            deposit_money();
            break;
        case 3:
            withdraw_money();
            break;
        case 4:
            transfer_money();
            break;
        case 5:
            account_details();
            break;
        case 6:
             transaction_detail();
            break;

        case 7:
            last_details();
            exit(0);
            break;
        default:
            cout<<"invalid choice!!!!";
        }


         }



}
int menu()
{
        cout<<"\n                         MAIN MENU      \n";
        divider();

        cout<<"\n\n\n     1.Create Account\n\n\n";
        cout<<"     2.Deposit Money\n\n\n";
        cout<<"     3.Withdraw Money\n\n\n";
        cout<<"     4.Transfer Money\n\n\n";
        cout<<"     5.Account Details\n\n\n";
        cout<<"     6.Transcition Details\n\n\n";
        cout<<"     7.Exit\n\n";

}
int new_account()
{
    system("cls");
char x1[10],x2[10],x3[10],x4[10],x5[10],x6[10],x7[10],x8[10],x9[10],x10[10],x11[10];
     cout<<"\n\n!!!!!CREATE ACCOUNT!!!!!";

 cout<<"\n\nFIRST NAME: ";
 cin>>x1;

 cout<<"\n\n\nLAST NAME: ";
 cin>> x2;

 cout<<"\n\nFATHER's NAME: ";
 cin>>x3;

 cout<<"\n\nMOTHER's NAME: ";
 cin>>x4;

 cout<<"\n\nADDRESS: ";
 cin>> x5;

 cout<<"\n\nACCOUNT TYPE::\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:";
 cin>>x6;

 cout<<"\n\nDATE OF BIRTH..";
 cout<<"\nDATE-";
 cin>>x7;
 cout<<"\nMONTH-";
 cin>>x8;
 cout<<"\nYEAR-";
 cin>>x9;

 cout<<"\n\nPHONE NUMBER: ";
 cin>>x10;

 cout<<"\n\nUSERNAME:  ";
 cin>>x11;
 cout<<"\n******Account created successfully!******\n";
 cout<<"\n\n\nPress Enter key to go main menu........\n";
 std::getchar();
 system("cls");
}
int deposit_money()
{   system("cls");

    time_t tm;
    time(&tm);
    ofstream outfile;
    outfile.open("D:\\program.txt");

    char x[10];
    cout<<"\n\n\n\nEnter account name= ";
    cin>>x;
    cout<<"Enter your account no= ";
    cin>>acc_no;
    cout<<"\n\n\n******Depositing Money******\n";
    divider();
    cout<<"\n    Enter the amount: ";
    cin>>diposit_amt;
    amt=amt+diposit_amt;
    cout<<"    MONEY DEPOSITED\n";
    cout<<"    Current balance: "<<amt<<endl;
    outfile<<"    Rs = "<<diposit_amt<<" had been deposited to your account"<<endl;
    outfile<<"    Date /time of transaction %s"<<ctime(&tm)<<endl;
    outfile.close();
    cout<<"Press Enter key to go main menu........\n";
    std::getchar();
    //system("cls");

}


int withdraw_money()
{
    system("cls");

    time_t tm;
    time(&tm);
    ofstream outfile;
    outfile.open("D:\\program.txt");
    char x[10];
    cout<<"\n\n\n\nEnter account name= ";
    cin>>x;
    cout<<"Enter your account no= ";
    cin>>acc_no;

    cout<<"\n\n    ******WITHDRAW MONEY******\n";
    divider();
    cout<<"\n    Enter the amount: ";
    cin>>withdraw_amt;
    amt=amt-withdraw_amt;
    cout<<"    MONEY WITHDRAWN\n";
    cout<<"    Current balance "<<amt;
    outfile<<"    Rs = "<<withdraw_amt<<" had been withdrawn to your account\n";
    outfile<<"    Date /time of transaction %s"<<ctime(&tm)<<endl;
    outfile.close();
    cout<<"\n\n\nPress Enter key to go main menu........\n";
    std::getchar();
    //system("cls");
}

int transfer_money()
{
    system("cls");

    int ac;
    time_t tm;
    time(&tm);
    ofstream outfile;
    outfile.open("D:\\program.txt");
    char x[10];
    cout<<"\n\n\n\nEnter account name= ";
    cin>>x;
    cout<<"Enter your account no= ";
    cin>>acc_no;

    cout<<"\n\n      ******TRANSFERRING MONEY******\n";
    divider();
    cout<<"\n    Enter the amount: ";
    cin>>transfer_amt;
    cout<<"    Enter the ac no which you want to transfer: ";
    cin>>ac;
    if(amt<transfer_amt)
    {
        cout<<"    You dont have sufficieant balance\n";

    }
    else
    {
        amt=amt-transfer_amt;
        cout<<"    Money Transfered\n";
        cout<<"    Current balance: "<<amt;
    outfile<<"    Rs = "<<transfer_amt<<"had been transfered to your account\n";
    outfile<<"    Date /time of transaction %s"<<ctime(&tm)<<endl;
    }
    outfile.close();

     cout<<"\n\n\nPress Enter key to go main menu........\n";
      std::getchar();
  //system("cls");
}
int account_details()
{
    system("cls");
    int i;
    char x[10];
    cout<<"\n\n\n\nEnter account name= ";
    cin>>x;
    cout<<"Enter your account no= ";
    cin>>acc_no;
    cout<<"\n\n\n   ******ACCOUNT DETAIL******\n";
    for(i=0;i<50;i++)
    {
        cout<<"-";

    }
    cout<<"\n    Name: "<<x<<endl;
    cout<<"    Account No: "<<acc_no<<endl;
    cout<<"    Total Balane: "<<amt<<endl;
    cout<<"\n\n\nPress Enter key to go main menu........\n";
    std::getchar();
    //system("cls");

}

int transaction_detail()
{
    system("cls");

    ofstream outfile;
    outfile.open("D:\\program.txt");

    char c=fgetc(ptr);
    if(!outfile)
    {
         printf("NO recent transaction\n");

    }
    if(outfile.is_open())
    {

        cout<<"\n\n\n    ******Transation Details******\n\n\n"<<endl;

        {

            c=fgetc(ptr);
        }
    }
    std::getchar();

    //system("cls");
}
int last_details()
{   system("cls");
    cout<<"      press any key For exting....";
    return 0;
    std::getchar();
}

