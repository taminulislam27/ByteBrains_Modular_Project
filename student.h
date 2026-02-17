#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<limits>
using namespace std;

struct Student {
    string roll, name, fname, address;
    string blood, donor, phone, tshirt, active;
};

class temp{
    string rollNum,name,fName,address,search;
    string blood, donor, phone, tshirt, active;
    fstream file;
public:
    void addStu();
    void viewStu();
    void searchStu();
    void deleteStu();
    void editStu();
};

#endif
