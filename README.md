//# c-program
//program to create strong password including at least one capital, one small case letter, one number and one special symbol.
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[100];
    int i,asci_var,sybl=0,num=0,capltr=0,smltr=0;
    cout<<"enter a password :";
    gets(a);  // input : enter a password : Sachin@123 output : Valid
    //33 to 47 symbols          48 to 57 number         58 to 64 A-Z and        97 to 122 a-z <-- Ascii values 
    //sybl=+1                   num=+1                  capltr=+1              smltr=+1       <-- Variables for counting caracters
    for(i=0;a[i]!='\0';i++)
    {
        asci_var=(int)a[i];
       // cout<<"asci_var"<<asci_var<<"\n";
        if(asci_var>=33 && asci_var<=47 || asci_var>=58 && asci_var<=64 ){sybl++;}
        if(asci_var>=48 && asci_var<=57){num++;}
        if(asci_var>=65 && asci_var<=90){capltr++;}
        if(asci_var>=97 && asci_var<=122){smltr++;}
    }
    //cout<<"sybl "<<sybl<<"\nnum "<<num<<"\ncapltr "<<capltr<<"\nsmltr "<<smltr<<"\n";
    if(sybl>0 && num>0 && capltr>0 && smltr>0){cout<<"Valid";}   //if at lest one number,capital letter, smallcase letter, and special symbol Required.
    else{cout<<"Invalid";} //if not then password is invalid. 
}
