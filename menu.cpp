#include "student.h"
#include "menu.h"
extern bool running;

temp obj;

void ByteBrains()
{
    char choice;
    cout<<"\n---------------------------\n";
    cout<<"1- Add Student Record\n";
    cout<<"2- Edit Student Record\n";
    cout<<"3- View All Student Record\n";
    cout<<"4- Search Student Record\n";
    cout<<"5- Delete Student Record\n";
    cout<<"6- Exit\n";
    cout<<"---------------------------\n";
    cout<<"Enter choice: ";
    cin>>choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch(choice){
        case '1': obj.addStu(); break;
        case '2': obj.editStu(); break;
        case '3': obj.viewStu(); break;
        case '4': obj.searchStu(); break;
        case '5': obj.deleteStu(); break;
        case '6': cout<<"Exiting...\n"; running = false; return;
        default: cout<<"Invalid Choice...!\n";
    }
}
