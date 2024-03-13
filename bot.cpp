#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

void wishme(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir"<<endl;
        string phrase = "Good Morning Sir";

    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon sir"<<endl;
        string phrase = "Good Afternoon sir";
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening sir"<<endl;
        string phrase = "Good Evening sir";

    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}
void sum()
{
    int num1, num2;
    char op;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the Operator (+, -, *, /): ";
    cin>>op;
    if(op=='+')
        cout<<endl<<"Addition Result = "<<num1+num2;
    else if(op=='-')
        cout<<endl<<"Subtraction Result = "<<num1-num2;
    else if(op=='*')
        cout<<endl<<"Multiplication Result = "<<num1*num2;
    else if(op=='/')
        cout<<endl<<"Division Result = "<<num1/num2;
    else
        cout<<endl<<"Wrong Operator!";

}


int main()
{
    system("cls");

    cout<<"\t\t\t<==================== W E L C O M E =======================================>"<<endl;
    cout<<"\t\t\t<=================== I'M A Chat Bot =================================>"<<endl;
    cout<<"\t\t\t<================= I'M HERE TO HELP YOU ===================================>"<<endl<<endl;

    char password[20];
    char ch[100];
    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "admin")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you sir...."<<endl<<endl;

                string phrase = "How can i help you sir";

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello sir....."<<endl;
                    string phrase = "Hello sir";
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    exit(0);
                }

                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'M A Chat Bot"<<endl;
                    string phrase = "I'M A Chat Bot";
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    datetime();
                }
                else if(strcmp(ch, "sum") == 0 || strcmp(ch, "Sum") == 0){
                    sum();
                }
                   else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google....."<<endl;
                    string phrase = "opening google";
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opeining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    system("start https://www.youtube.com");
                }
                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";

                }


            }while(1);
        }
        else
                {
                    system("cls");
    cout<<"\t\t\t<==================== W E L C O M E =======================================>"<<endl;
    cout<<"\t\t\t<=================== I'M A Chat Bot =================================>"<<endl;
    cout<<"\t\t\t<================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY  ===================================>"<<endl<<endl;


                    cout << "======================" << endl;
                    cout << "= Incorrect Password =" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";

                }
    } while (1);


    return 0;
}
