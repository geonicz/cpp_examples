// Inheritance illustrated
#include <iostream.h>
#include <string.h>

#define MAX_LEN 81

class person {
protected:
    char fname[MAX_LEN];
    char lname[MAX_LEN];
    int  age;
public:
    void set_fname(char fn[] ) { strcpy(fname, fn); };
    void set_lname(char ln[] ) { strcpy(lname, ln); };
    void set_age( int a ) { age = a ; };
    char *get_name(char *fullname);
    int  get_age( void ) { return age; };
    person(char fn[] = "blank", char ln[] = "blank");
};

class employee : public person {
protected:
    long salary;
public:
    void set_salary(long sal) { salary = sal; };
    long get_salary() { return salary; };
    employee(char fn[] = "eblank", char ln[] = "eblank");
};

person::person( char fn[], char ln[] )
{
    strcpy(fname, fn);
    strcpy(lname, ln);
    age = -1;
}

char *person::get_name(char fullname[])
{
    strcpy(fullname, fname);
    strcat(fullname, " ");
    strcat(fullname, lname);

    return fullname;
}

employee::employee( char fn[], char ln[] ) : person(fn, ln)
{
    salary = 0;
}


int main(int argc, char* argv[])
{
    char full[MAX_LEN + MAX_LEN];

    person brad("Bradley", "Jones");
    brad.set_age(21);

    person blank;

    cout << "\nPerson brad:  " << brad.get_name(full);
    cout << "\n        age:  " << brad.get_age();

    cout << "\nPerson blank: " << blank.get_name(full);
    cout << "\n         age: " << blank.get_age();
    cout << "\n";

    employee kyle( "Kyle", "Rinne" );
    kyle.set_salary( 50000 );
    kyle.set_age(32);

    cout << "\nEmployee kyle: " << kyle.get_name(full);
    cout << "\n          age: " << kyle.get_age();
    cout << "\n       salary: " << kyle.get_salary();
    cout << "\n\n";

    return 0;
}

