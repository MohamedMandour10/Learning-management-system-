#include "course.h"

course::course(string n,string D,string hall,string T)
{
    name=n;
    ID=D;
    time=T;
    lec_hall=hall;


}
void course::add_profs( vector<professor> pr){
      profs=pr;


}
void course::add_students(pair<Student,float>stu){
    students.first=stu.first;
    students.second=stu.second;

}
string course::get_couse(){
return name;
}
string course::get_hall(){
return lec_hall;
}
string course::get_time(){
return time;
}
string course::gt_ID(){
return ID;
}
vector<professor> course::get_prof(){
return  profs
}

course::~course()
{
    //dtor
}