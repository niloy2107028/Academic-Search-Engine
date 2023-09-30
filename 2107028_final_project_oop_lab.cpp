#include <bits/stdc++.h>

/*
This project is dedicated to the development of an academic search engine.
Designed specifically for my university, KUET.
With the aim of enhancing the efficiency and simplicity of academic endeavors.
*/


/*
Designed by
name      :Sohaib hasan niloy
roll      :2107028
dept      :cse
university:kuet
*/

using namespace std;

int no_of_student = 0;
int no_of_teacher = 0;
int no_of_officer_and_stuff = 0;
int no_of_books = 0;
int no_of_complaint = 0;

class people;
class student;
class teacher;
class officers_and_stuffs;
class hall;
class library;
class schedule;
class complain_harassment;
class count_cgpa;
class academic_search_engine;

class people                      // 1.Object and class //2.Constructor and destructor  //3.Abstruct class with pure virtual function
{
public:
    string people_name;
    string people_dept;
    string people_email;
    string people_id;
    void set()
    {
        cout << "Enter name: ";
        cin >> people_name;
        cout << "Enter department: ";
        cin >> people_dept;
        cout << "Enter id: ";
        cin >> people_id;
        cout << "Enter email: ";
        cin >> people_email;
    }
    virtual void get() = 0; // 5.pure virtual function

    people() {} // constructor destructor
    people(string name, string dept, string id, string email)
    {
        people_name = name;
        people_dept = dept;
        people_email = email;
        people_id = id;
    }
    ~people() {}

    friend academic_search_engine; // friend class
};

class student : public people     // 4.Inheritance   //5.Output operator overloading
{ 
private:
    string student_batch;
    string student_hometown;
    string student_hall;
    string student_date_of_birth;
    string student_blood;
    float student_result;
    int student_year;
    int student_semister;

public:
    void set()
    {
        cout <<endl<< "Enter student's details:" << endl;
        cout <<endl<< "Enter name: ";
        cin >> people_name;
        cout << "Enter roll: ";
        cin >> people_id;
        cout << "Enter department: ";
        cin >> people_dept;
        cout << "Enter batch: ";
        cin >> student_batch;
        cout << "Enter year (intiger) : ";
        cin >> student_year;
        cout << "Enter semister (intiger) : ";
        cin >> student_semister;
        cout << "Enter hometown: ";
        cin >> student_hometown;
        cout << "Enter date of birth: ";
        cin >> student_date_of_birth;
        cout << "Enter blood group: ";
        cin >> student_blood;
        cout << "Enter result of previous semister (float) : ";
        cin >> student_result;
        cout << "Enter hall: ";
        cin >> student_hall;
        cout << "Enter email: ";
        cin >> people_email;
    }
    void get()
    {
        cout <<endl<< "--------------------------------------" << endl;
        cout << "name: " << people_name << endl;
        cout << "department: " << people_dept << endl;
        cout << "batch: " << student_batch << endl;
        cout << "roll: " << people_id << endl;
        cout << "Year: " << student_year << endl;
        cout << "semister: " << student_semister << endl;
        cout << "hometown: " << student_hometown << endl;
        cout << "date of birth: " << student_date_of_birth << endl;
        cout << "blood group: " << student_blood << endl;
        cout << "result of previous semister : " << student_result << endl;
        cout << "hall: " << student_hall << endl;
        cout << "email: " << people_email << endl;
        cout << "--------------------------------------" << endl;
    }

    student() {} // 2.default constructor
                 // 2.parameterized constructor

    student(string name, string dept, string email, string id, string batch, string home, string hall, string birthday, string blood, float result, int year, int sem) : people(name, dept, id, email)
    {
        student_batch = batch;
        student_hometown = home;
        student_hall = hall;
        student_date_of_birth = birthday;
        student_blood = blood;
        student_result = result;
        student_year = year;
        student_semister = sem;
    }
    ~student() {} // destructor



    friend ostream &operator<<(ostream &cout, student &temp)                       // output operator overloading     
    {

        cout <<endl<< "--------------------------------------" << endl;
        cout << "name: " << temp.people_name << endl;
        cout << "department: " << temp.people_dept << endl;
        cout << "batch: " << temp.student_batch << endl;
        cout << "roll: " << temp.people_id << endl;
        cout << "Year: " << temp.student_year << endl;
        cout << "semister: " << temp.student_semister << endl;
        cout << "hometown: " << temp.student_hometown << endl;
        cout << "date of birth: " << temp.student_date_of_birth << endl;
        cout << "blood group: " << temp.student_blood << endl;
        cout << "result of previous semister : " << temp.student_result << endl;
        cout << "hall: " << temp.student_hall << endl;
        cout << "email: " << temp.people_email << endl;
        cout << "--------------------------------------" << endl;

        return cout;
    }

    friend academic_search_engine; // friend class
};

class teacher : public people     // 4.Inheritance
{ 
private:
    string teacher_designation;
    string teacher_bsc;
    string teacher_msc;
    string teacher_date_of_birth;
    string teacher_blood;
    string teacher_hometown;

public:
    void set()
    {
        cout <<endl<< "Enter teacher's details:" << endl;
        cout <<endl<< "Enter name: ";
        cin >> people_name;
        cout << "Enter id: ";
        cin >> people_id;
        cout << "Enter department: ";
        cin >> people_dept;
        cout << "Enter designation: ";
        cin >> teacher_designation;
        cout << "compleated BSC from: ";
        cin >> teacher_bsc;
        cout << "compleated MSC from: ";
        cin >> teacher_msc;
        cout << "Enter date of birth: ";
        cin >> teacher_date_of_birth;
        cout << "Enter blood group: ";
        cin >> teacher_blood;
        cout << "Enter home town: ";
        cin >> teacher_hometown;
        cout << "Enter email: ";
        cin >> people_email;
    }
    void get()
    {
        cout <<endl<< "--------------------------------------" << endl;
        cout <<endl<< "name: " << people_name << endl;
        cout << "department: " << people_dept << endl;
        cout << "id: " << people_id << endl;
        cout << "designation: " << teacher_designation << endl;
        cout << "BSC from: " << teacher_bsc << endl;
        cout << "MSC from: " << teacher_msc << endl;
        cout << "date of birth: " << teacher_date_of_birth << endl;
        cout << "blood group: " << teacher_blood << endl;
        cout << "home town: " << teacher_hometown << endl;
        cout << "email: " << people_email << endl;
        cout << "--------------------------------------" << endl;
    }

    friend academic_search_engine; // friend class
};

class officers_and_stuffs : private people  // 4.Inheritance
{ 
private:
    string os_post;
    string os_qulification;
    string os_date_of_birth;
    string os_blood;
    string os_hometown;

public:
    void set()
    {
        cout <<endl<< "Enter officer's or stuff's details:" << endl;
        cout <<endl<< "Enter name: ";
        cin >> people_name;
        cout << "Enter id: ";
        cin >> people_id;
        cout << "Enter working department: ";
        cin >> people_dept;
        cout << "Enter post: ";
        cin >> os_post;
        cout << "Educational qualification: ";
        cin >> os_qulification;
        cout << "Enter date of birth: ";
        cin >> os_date_of_birth;
        cout << "Enter blood group: ";
        cin >> os_blood;
        cout << "Enter home town: ";
        cin >> os_hometown;
        cout << "Enter email: ";
        cin >> people_email;
    }
    void get()
    {
        cout <<endl<< "--------------------------------------" << endl;
        cout <<endl<< "name: " << people_name << endl;
        cout << "department: " << people_dept << endl;
        cout << "id: " << people_id << endl;
        cout << "post: " << os_post << endl;
        cout << "educational qualification: " << os_qulification << endl;
        cout << "date of birth: " << os_date_of_birth << endl;
        cout << "blood group: " << os_blood << endl;
        cout << "home town: " << os_hometown << endl;
        cout << "email: " << people_email << endl;
        cout << "--------------------------------------" << endl;
    }

    friend academic_search_engine; // friend class
};

class library
{
private:
    string book_name;
    int book_id;
    string book_writer;
    string library_shelves;
    string library_row;

public:
    void set()
    {
        cout <<endl<< "enter book details:" << endl;
        cout <<endl<< "enter book name:";
        cin >> book_name;
        cout << "enter book id:";
        cin >> book_id;
        cout << "enter book writer:";
        cin >> book_writer;
        cout << "enter library shelve no:";
        cin >> library_shelves;
        cout << "enter library row no:";
        cin >> library_row;
    }
    void get()
    {
        cout <<endl<< "--------------------------------------" << endl;
        cout <<endl<< "book name : " << book_name << endl;
        cout << "book writer : " << book_writer << endl;
        cout << "book id : " << book_id << endl;
        cout << "library shelve: " << library_shelves << endl;
        cout << "library row : " << library_row << endl;
        cout << "--------------------------------------" << endl;
    }

    friend academic_search_engine; // friend class
};

class complain_harassment
{
private:
    string victim_name;
    string victim_roll;
    string suspect_name;
    string suspect_dept;
    string harassment_type;

public:
    void set()
    {
        cout <<endl<< "enter details" << endl;
        getchar();
        cout <<endl<< "Enter harassment type:";
        getline(cin, harassment_type);

        cout << "enter victim's name : ";
        cin >> victim_name;
        cout << "enter victim's roll : ";
        cin >> victim_roll;
        cout << "enter suspect name : ";
        cin >> suspect_name;

        cout << "enter suspect's department : ";
        cin >> suspect_dept;
    }
    void get()
    {
        cout <<endl<< "--------------------------------------" << endl;
        cout <<endl<< "harassment type : " << harassment_type << endl;
        cout << "victim's name : " << victim_name << endl;
        cout << "victim's roll : " << victim_roll << endl;
        cout << "suspect's name : " << suspect_name << endl;
        cout << "suspect's dept : " << suspect_dept << endl;
        cout << "--------------------------------------" << endl;
    }
    friend academic_search_engine; // friend class
};

class count_cgpa : private student   // 6.Vector STL        //4.Inheritance
{ 

private:
    vector<float> course_cg;
    vector<float> lab_cg;
    int course_no = 0;
    int lab_no = 0;

public:
    void set()
    {
        cout <<endl<< "enter exam detals:  " << endl;
        cout <<endl<< "enter no of course: ";
        cin >> course_no;
        float a;
        for (int i = 0; i < course_no; i++)
        {

            cout << "Enter course " << i + 1 << "'s cgpa:";
            cin >> a;
            course_cg.push_back(a);
        }
        cout << "enter no of labs: ";
        cin >> lab_no;
        for (int i = 0; i < lab_no; i++)
        {
            cout << "Enter lab " << i + 1 << "'s cgpa:";
            cin >> a;
            lab_cg.push_back(a);
        }
    }
    void get() {}
    float get_cg()
    {
        float course_sum = 0;
        float lab_sum = 0;
        for (int i = 0; i < course_cg.size(); i++)
        {
            course_sum += course_cg[i] * 3;
        }
        for (int i = 0; i < lab_cg.size(); i++)
        {
            lab_sum += lab_cg[i] * 1.5;
        }
        float result = 0;

        // cout<<"error handling"<<endl;
        // cout<<course_cg.size()<<endl;
        // cout<<lab_cg.size()<<endl;
        // cout<<course_sum<<endl;
        // cout<<lab_sum<<endl;

        result = (course_sum + lab_sum) / (3 * course_cg.size() + 1.5 * lab_cg.size());
        cout << endl
             << "result in cgpa: " << result << endl;
        return result;
    }
    friend academic_search_engine;
};

class schedule
{
private:
    string schedule_dept;
    string schedule_batch;
    string class_thur;
    string class_sun;
    string class_mon;
    string class_tue;
    string class_wed;
    void set()
    {
        cout <<endl<< "enter class routine:" << endl;
        cout <<endl<< "Enter department:";
        cin >> schedule_dept;
        cout << "Enter batch:";
        cin >> schedule_batch;
        // cout<<"sunday:";getline(cin,class_sun);
        // cout<<"monday:";getline(cin,class_mon);
        // cout<<"tuesday:";getline(cin,class_tue);
        // cout<<"wednesday:";getline(cin,class_wed);
        // cout<<"thursday:";getline(cin,class_thur);
        class_sun = "CSE1203     EEE1207     CHEM1207";
        class_mon = "MATH1207    EEE1208     PHY1204";
        class_tue = "DLD1203     MATH1208    OOP1206";
        class_wed = "CSE1206     CSE1208     PHY_LAB";
        class_thur = "OOP_LAB     CHEM1205    DLD_LAB";
    }
    void get()
    {

        cout <<endl<< "Department : " << schedule_dept << endl;
        cout <<endl<< "Batch : " << schedule_batch << endl
             << endl;
        cout <<endl<< "---------------------<Routine>---------------------" << endl
             << endl;
        cout <<endl<< "               "
             << "10-11       11-12        12-01" << endl;

        cout << endl
             << "sunday   :     " << class_sun << endl;
        cout << endl
             << "monday   :     " << class_mon << endl;
        cout << endl
             << "tuesday  :     " << class_tue << endl;
        cout << endl
             << "wednesday:     " << class_wed << endl;
        cout << endl
             << "thursday :     " << class_thur << endl
             << endl;
    }
    friend academic_search_engine; // friend class
};

class academic_search_engine      // 7.Template function   //8.Friend class    //9.Polymorphism      //10.File append an reading
{ 
private:
    people *people_ptr; // 5.base pointer for polymorphism
    student stud[100];
    teacher teac[100];
    officers_and_stuffs ofs[100];
    library lib[100];
    complain_harassment comhar[100];
    schedule sch[100];
    count_cgpa co_cg[100];

public:
    void file_student_input()
    {
        ifstream in;
        string temp_string;
        in.open("student.txt");

        // cout<<"error"<<endl;

        for (int i = 0; in.eof() == 0; i++)
        {
            getline(in, stud[i].people_name);
            getline(in, stud[i].people_id);
            getline(in, stud[i].people_dept);
            getline(in, stud[i].student_batch);
            getline(in, temp_string);
            stud[i].student_year = stoi(temp_string);
            getline(in, temp_string);
            stud[i].student_semister = std::stoi(temp_string);
            getline(in, stud[i].student_hometown);
            getline(in, stud[i].student_date_of_birth);
            getline(in, stud[i].student_blood);
            getline(in, temp_string);
            stud[i].student_result = std::stof(temp_string);
            getline(in, stud[i].student_hall);
            getline(in, stud[i].people_email);
            // cout<<stud[0].people_email<<endl;
            no_of_student++;
        }

        // cout<<"error2"<<endl;

        in.close();
    }

    void student_registration()
    {
        stud[no_of_student].set();

        ofstream out;
        out.open("student.txt", ios::app);                                           // file writting and ofcoure appending

        if (no_of_student != 0)
        {
            out << endl;
        }

        out << stud[no_of_student].people_name << endl;
        out << stud[no_of_student].people_id << endl;
        out << stud[no_of_student].people_dept << endl;
        out << stud[no_of_student].student_batch << endl;
        out << stud[no_of_student].student_year << endl;
        out << stud[no_of_student].student_semister << endl;
        out << stud[no_of_student].student_hometown << endl;
        out << stud[no_of_student].student_date_of_birth << endl;
        out << stud[no_of_student].student_blood << endl;
        out << stud[no_of_student].student_result << endl;
        out << stud[no_of_student].student_hall << endl;
        out << stud[no_of_student].people_email;
        // no end of file

        out.close();

        no_of_student++;
    }

    void file_teacher_input()
    {
        ifstream in;
        in.open("teacher.txt");                                                        // file reading

        // cout<<"error handleing"<<endl;

        for (int i = 0; in.eof() == 0; i++)
        {
            getline(in, teac[i].people_name);
            getline(in, teac[i].people_id);
            getline(in, teac[i].people_dept);
            getline(in, teac[i].teacher_designation);
            getline(in, teac[i].teacher_bsc);
            getline(in, teac[i].teacher_msc);
            getline(in, teac[i].teacher_date_of_birth);
            getline(in, teac[i].teacher_blood);
            getline(in, teac[i].teacher_hometown);
            getline(in, teac[i].people_email);
            no_of_teacher++;
        }

        // cout<<"error2"<<endl;

        in.close();
    }

    void teacher_registration()
    {
        teac[no_of_teacher].set();

        ofstream out;
        out.open("teacher.txt", ios::app);

        if (no_of_teacher != 0)
        {
            out << endl;
        }

        out << teac[no_of_teacher].people_name << endl;
        out << teac[no_of_teacher].people_id << endl;
        out << teac[no_of_teacher].people_dept << endl;
        out << teac[no_of_teacher].teacher_designation << endl;
        out << teac[no_of_teacher].teacher_bsc << endl;
        out << teac[no_of_teacher].teacher_msc << endl;
        out << teac[no_of_teacher].teacher_date_of_birth << endl;
        out << teac[no_of_teacher].teacher_blood << endl;
        out << teac[no_of_teacher].teacher_hometown << endl;
        out << teac[no_of_teacher].people_email;

        // no endl of file

        out.close();

        no_of_teacher++;
    }

    void officer_and_stuff_registration()
    {
        ofs[no_of_officer_and_stuff].set();
        no_of_officer_and_stuff++;
    }
    void display_student(string a, string b)
    {
        int temp = 0;

        cout <<endl<< "showing student's details: " << endl;
        cout <<endl<< "Total no of student: " << no_of_student << endl;
        for (int i = 0; i < no_of_student; i++)
        {
            if (stud[i].people_dept == a && stud[i].student_batch == b)
            {
                cout << stud[i];                                                    // operator overlaoding here
                temp++;
            }
        }
        if (temp == 0)
        {
            cout << "no student found in " << a << " " << b << endl;
        }
    }
    void display_teacher(string a)
    {
        int temp = 0;
        cout <<endl<< "showing teacher's details: " << endl;
        cout <<endl<< "Total no of teacher: " << no_of_teacher << endl;
        for (int i = 0; i < no_of_teacher; i++)
        {

            if (teac[i].people_dept == a)
            {
                people_ptr = &teac[i];                                          // given object address to pointer
                people_ptr->get();                                              // polymorphism
                temp++;
            }
        }
        if (temp == 0)
        {
            cout << "no teacher found in " << a << endl;
        }
    }
    void display_officer_and_stuff(string a)
    {
        int temp = 0;
        cout <<endl<< "showing officer's and stuff's details: " << endl;
        cout <<endl<< "Total no of officer and stuff: " << no_of_officer_and_stuff << endl;
        for (int i = 0; i < no_of_officer_and_stuff; i++)
        {
            if (ofs[i].people_dept == a)
            {
                ofs[i].get();
                temp++;
            }
        }
        if (temp == 0)
        {
            cout << "no officer and stuff  found in " << a << endl;
        }
    }

    // template function for searching by array passing

    template <typename T>
    void search(T arr[], string id, int max)
    {
        bool found = 1;
        for (int i = 0; i < max; i++)
        { // tempalte function
            if (arr[i].people_id == id)
            {
                cout << "Found" << endl;
                arr[i].get();
                found = 0;
            }
        }
        if (found)
        {
            cout << "Not found" << endl;
        }
    }

    void add_book()
    {
        lib[no_of_books].set();
        no_of_books++;
    }

    void search_book(string name, string writer)
    {
        int temp = 0;
        cout << "showing book's details: " << endl;
        for (int i = 0; i < no_of_books; i++)
        {
            if (lib[i].book_name == name && lib[i].book_writer == writer)
            {
                lib[i].get();
                temp++;
            }
        }
        if (temp == 0)
        {
            cout << "no book found" << endl;
        }
    }

    void cg_count(string a)
    {
        int temp = 0;
        for (int i = 0; i < no_of_student; i++)
        {
            if (stud[i].people_id == a)
            {
                cout << "student founded successfully" << endl;
                co_cg[0].set();
                float update_result = 0;
                update_result = co_cg[0].get_cg();

                if (stud[i].student_semister == 2)
                {
                    stud[i].student_year++;
                    stud[i].student_semister = 1;
                    stud[i].student_result = update_result;
                }
                else
                {
                    stud[i].student_semister = 2;
                    stud[i].student_result = update_result;
                }
                temp++;
                break;
            }
        }
        if (temp == 0)
        {
            cout << "Invalide Roll" << endl;
        }
    }
    void show_routine()
    {
        sch[0].set();
        sch[0].get();
    }
    void add_complaint()
    {
        comhar[no_of_complaint].set();
        cout << "complaint stored" << endl;
        no_of_complaint++;
    }
    void show_all_complaints()
    {
        cout << "showing all complaints: " << endl;
        cout << "Number of complaints: " << no_of_complaint << endl;
        for (int i = 0; i < no_of_complaint; i++)
        {
            comhar[i].get();
        }
        if (no_of_complaint == 0)
        {
            cout << "No compaint found" << endl;
        }
    }

    student *get_std_arr()
    {
        return stud;
    }
    teacher *get_teac_arr()
    {
        return teac;
    }
    officers_and_stuffs *get_ofs_arr()
    {
        return ofs;
    }
};

int main()

{   
    string password="niloy_28";
    string temp_password;
    cout<<endl<<"-------------------------------Khulna University of Engineering & Technology-------------------------------"<<endl;
    cout<<endl<<"Welcome to KUET"<<endl<<endl;
    cout<<"Enter password to login (niloy_28) : ";
    cin>>temp_password;


    if(temp_password==password){
    academic_search_engine ase;
    char choice;
    int operation;

    // taking stored data as input from file
    ase.file_student_input();
    ase.file_teacher_input();

    do
    {
        cout <<endl<< "Choose one of the following:" << endl;
        cout <<endl<< "1. Registration (student/teacher/officer)." << endl;
        cout << "2. Display people(student/teacher/officer)." << endl;
        cout << "3. Search people (student/teacher/officer)." << endl;
        cout << "4. Library." << endl;
        cout << "5. Calculate and update result." << endl;
        cout << "6. Class routine." << endl;
        cout << "7. Haresment and complaint." << endl;
        cout << "8. Delete people." << endl;
        cout << "9. Exit." << endl;
        cout <<endl<< "Your choice: ";
        cin >> operation;

        switch (operation)
        {
        case 1:
            int choice_reg;
            cout <<endl<< "Choose one of the following:" << endl;
            cout <<endl<< "1.student" << endl;
            cout << "2.teacher" << endl;
            cout << "3.officer or stuff" << endl;
            cout << "4.main manu" << endl;
            cout <<endl<< "your choice: ";
            cin >> choice_reg;
            switch (choice_reg)
            {
            case 1:
                ase.student_registration();
                cout << "Entry successful.\n";
                break;
            case 2:
                ase.teacher_registration();
                cout << "Entry successful.\n";
                break;
            case 3:
                ase.officer_and_stuff_registration();
                cout << "Entry successful.\n";
                break;
            case 4:
                break;
            default:
                cout << "Invalid operation selected." << endl;
            }

            break;

        case 2:
        {
            string dept;
            string batch;
            int choice_display;
            cout <<endl<< "Choose one of the following:" << endl;
            cout <<endl<< "1.display student" << endl;
            cout << "2.display teacher" << endl;
            cout << "3.display officer or stuff" << endl;
            cout << "4.main manu" << endl;
            cout <<endl<< "your choice: ";
            cin >> choice_display;
            switch (choice_display)
            {
            case 1:
            {

                cout <<endl<< "Enter Department: ";
                cin >> dept;
                cout << "Enter Batch : ";
                cin >> batch;
                ase.display_student(dept, batch);
                break;
            }
            case 2:
                cout <<endl<< "Enter department: ";
                cin >> dept;
                ase.display_teacher(dept);
                break;
            case 3:
                cout <<endl<< "Enter working department: ";
                cin >> dept;
                ase.display_officer_and_stuff(dept);
                break;
            case 4:

                break;
            default:
                cout << "Invalid operation selected." << endl;
            }

            break;
        }

        case 3:
        {
            int choice_search;
            string search_id;
            cout <<endl<<"Choose one of the following:" << endl;
            cout <<endl<< "1.search student" << endl;
            cout << "2.search teacher" << endl;
            cout << "3.search officer or stuff" << endl;
            cout << "4.main manu" << endl;
            cout <<endl<< "your choice: ";
            cin >> choice_search;
            switch (choice_search)
            {
            case 1:
                cout <<endl<< "Enter student roll:";
                cin >> search_id;
                ase.search(ase.get_std_arr(), search_id, no_of_student); // usnign tamplate function
                break;
            case 2:
                cout <<endl<< "Enter teacher id:";
                cin >> search_id;
                ase.search(ase.get_teac_arr(), search_id, no_of_teacher);
                break;
            case 3:
                cout <<endl<< "Enter officer and stuff id:";
                cin >> search_id;
                ase.search(ase.get_ofs_arr(), search_id, no_of_officer_and_stuff);
                break;
            case 4:

                break;
            default:
                cout << "Invalid operation selected." << endl;
            }

            break;
        }
        case 4:
        {
            int choice_display;
            string book_name;
            string book_writer;

            cout <<endl<< "Choose one of the following:" << endl;
            cout <<endl<< "1.Add book" << endl;
            cout << "2.search book" << endl;
            cout << "3.main manu" << endl;
            cout <<endl<< "your choice: ";
            cin >> choice_display;
            switch (choice_display)
            {
            case 1:
            {

                ase.add_book();
                break;
            }
            case 2:

                cout <<endl<< "Enter book name: ";
                cin >> book_name;
                cout << "Enter book writer: ";
                cin >> book_writer;
                ase.search_book(book_name, book_writer);
                break;

            case 3:

                break;
            default:
                cout << "Invalid operation selected." << endl;
            }

            break;
        }
        case 5:
        {
            string roll;
            cout <<endl<< "Enter roll: ";
            cin >> roll;
            ase.cg_count(roll);

            break;
        }
        case 6:
            ase.show_routine();
            break;
        case 7:
        {

            int choice_reg;
            cout <<endl<< "Choose:" << endl;
            cout <<endl<< "1.Make a complaint" << endl;
            cout << "2.Show all complaints" << endl;
            cout << "3.main manu" << endl;
            cout <<endl<< "your choice: ";
            cin >> choice_reg;
            switch (choice_reg)
            {
            case 1:
                ase.add_complaint();

                break;
            case 2:
                ase.show_all_complaints();
                break;
            case 3:

                break;

            default:
                cout << "Invalid operation selected." << endl;
            }

            break;
        }

        case 8:
            break;

        case 9:
            return 0;
        default:
            cout << endl
                 << "Invalid operation selected." << endl;
        }

        // cout<<"error"<<endl;

        cout << "Wanna continue? (y/n): ";
        cin >> choice;
        system("cls");
    } while (choice == 'y' || choice == 'Y');

    }
    
    
    else{
        cout<<endl<<"Wrong password !"<<endl<<endl;
    }

    return 0;
}