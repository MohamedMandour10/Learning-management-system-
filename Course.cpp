#include "Course.h"

Course::Course(string n,string D,string hall,string T)
{
    name=n;
    ID=D;
    time=T;
    lecHall=hall;


}
void Course::add_profs(vector<Professor> pr){
      profs=pr;


}
void Course::add_students(map<Student,float>stu){
    students.first=stu.first;
    students.second=stu.second;

}
string Course::get_couse(){
return name;
}
string Course::get_hall(){
return lecHall;
}
string Course::get_time(){
return time;
}
string Course::gt_ID(){
return ID;
}
vector<professor> Course::get_prof(){
return  profs
}

Course::~Course()
{
    //dtor
}
