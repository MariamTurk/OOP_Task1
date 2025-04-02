#include <iostream>

using namespace std;

class Student
{
    int id;
    string name ;
    int marks [5] ;

public :

     // Default constructor
    Student() {
        id = 0;
        name = "";
        for (int i = 0; i < 5; i++) {
            marks[i] = 0;
        }
    }

    // Parameterized constructor
    Student(int i, string n, int m1, int m2, int m3, int m4, int m5) {
        id = i;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    //set
    void set_id (int i){
    id = i ;
    }

    void set_name (string n){
    name = n ;
    }

    //get
    string get_name (){return name;}

    int get_id () {return id ;}

    // methods

    void read_marks (){
        for(int i = 0 ; i < 5 ;i++){
            cout <<"pleas enter mark " <<i+1<<endl;
            cin>>marks[i];
        }
    }

    double calc_avg() {
        int sum =0;
        for (int i=0 ; i<5 ; i++){
            sum+=marks[i];
        }
        return sum/5;

    }

    void printInfo(){
        cout<<"Name : " << name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"AVG : " << calc_avg() << endl;

    }

};

int get_max(Student arr[5]){
    int maxx = INT_MIN ;
    for(int i =0 ; i< 5 ; i++){
        if (arr[i].calc_avg()>maxx){
            maxx = arr[i].calc_avg();
        }
        return maxx;
    }

}

int main()
{
    Student arr[5] ;
    string name ;
    int id ;

    for (int i=0;i<5;i++){
        cout<<"pleas enter the id for student "<<i+1<<endl;
    cin>>id;
          arr[i].set_id(id);
          cout<<"pleas enter the name for student "<<i+1<<endl;
          cin>>name;
          arr[i].set_name(name);
          cout<<"pleas enter the marks for student "<<i+1<<endl;
          arr[i].read_marks();

    }

int maxx = get_max(arr);

for(int i=0 ;i<5 ; i++){
    if (arr[i].calc_avg() == maxx){
        arr[i].printInfo();
    }
}
    return 0;
}
