#ifndef USER_H
#define USER_H
#include<vector>
#include<utility>
#include<iostream>
#include<Professor.h>
#include<Student.h>
using namespace std;

class course
{
    public:
        course(string name,string D,string lec_hall,string T);
        void add_profs( vector<Professor> pro);
        void add_students();
        string get_couse();
        string get_hall();
        string get_time();
        string gt_ID();
        vector<Professor> get_prof();





        virtual ~course();


    protected:

    private:
        string name="pleas enter your name";
        string ID="921133";
        vector<Professor> profs;
        pair<Student,float>students;
        string lec_holl="9384";
        string time="12.5:2 pm";

};

#endif