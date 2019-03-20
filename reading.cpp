#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<graphics.h>
#include<windows.h>
#include<unistd.h>

using namespace std;


/* Reading text file using fStream library... */

void KARL_READING()

{
    int op,k,i=0;
    char F_name[50];
    char a,b[10];
    ifstream F_in;

    READING:
            system("cls");
            cout<<"\t\t\t\t\t\tKARL READING MODE -\"CHANDAN SHARMA\" \n";
            cout<<"\n\t\t\tPlease provide Extension after file name e.g .txt  , .dat etc";
            cout<<"\n\nEnter File:";
            gets(F_name);


       if(access(F_name,F_OK)==-1)
        {
        cout<<"\nSTATUS:";
        perror(ERROR);
        cout<<endl;
        cout<<"KARL:TRY AGAIN IN ";
        time_wait(5);
        goto READING;
        }

        F_in.open(F_name);
        system("cls");
        cout<<"\t\t\t\t\t\tKARL READING MODE -\"CHANDAN SHARMA\" \n\n";

        while(!F_in.eof())
        {
            a=F_in.get();
            cout<<a;
        }

        F_in.close();
        cout<<"\n\nKARL:ANOTHER FILE/STORY PRESS 1::";
        op=getche();

        if(op=='1')
               goto READING;
        else
            return;
        }

        main()
        {  KARL_READING();
            return 0;
        }
