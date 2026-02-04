#include <iostream>
#include <vector>
#include <map>
#inlcude <algortihm>

using namespace std;


class Student{
 public:
     string STU_NUM;
     map<string,int> grades;
     void display(grades){
       for(auto&p:grades){
        cout<<p.first<<":"<<p.second<<endl;
       }
     }
     float gpa(grades){
       float num = 0;
       for(auto&p:grades){
           if(p.second=>75){
            num+=4;
           }
       else if(p.second>=70&&p.second<75){
           num+=3.3;
       }
       else if(p.second>=60&&p.second<70){
           num+=3.0
       }
       else if(p.second>=50&&p.second<60){
          num+=2.0;
       }
       else if(p.second>=40&&p.second<50){
          num+=1.0;
       }
       else{
        num+=0.0;
       }

       }
      return num/grades.size();
     }
     void course(string s){
       if(grades.find(s)!= grades.end()){
         cout<<s<<":"<<grades.at(s);
       }

     }
     int num_courses(){
       return grades.size();
     }

};


int main(){




}
