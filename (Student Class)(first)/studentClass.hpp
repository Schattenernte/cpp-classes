#include <iostream>
#include <memory>

//! Encapsulation (erişim belirleyiciler)
//? private(varsayılan) -> sadece sınıfın içerisinden erişilebilir. 
//? protected -> sadece class içerisinde ve miras alan classlarda erişilebilir.
//? public -> her yerden erişilebilir.

// TODO: set fonksiyonu
// TODO: get fonksiyonu

//! Constructors
//? Default constructor program çalıştırıldığında her şeyden önce çalışır.
//? Parametre alan constructor.
//? bir class main kısımda parametre almadıysa otomatik olarak default constructor parametre aldıysa parametre alan constructor çalışır.

//! Destructor
//? nesne yok olduğu zaman destructor çalışır. Belleği temizlemek için kullanılır.

class Student
{
    public:
    Student();
    ~Student();
    Student(std::string, std::string, std::string);
    Student(const Student &oth); //! Copy Constructor
    std::string studentName, studentSurname, StudentID;
    void displayInformation();
    void set_values(std::string name, std::string surname, std::string ID) //* set fonksiyonu
    {
        studentName = name;
        studentSurname = surname;
        StudentID = ID;
    }
    std::string get_name() {return studentName;} //* get fonksiyonu
    std::string get_surname() {return studentSurname;}//* </>
    std::string get_ID() {return StudentID;}//* </>

};
 
 //? ekrana yazdırma fonksiyonu
void    Student::displayInformation()
{
    std::cout << "Name: "<< studentName << " " << studentSurname << std::endl;
    std::cout << "ID :" << StudentID << std::endl;
}

//? Default constructor
Student::Student()
{
    std::cout << "Default Constuructor worked." << std::endl;
}

//? Parametre alan constructor
Student::Student(std::string name, std::string surname, std::string ID)
{
    std::cout << "Constructor worked. " << std::endl;

    studentName = name;
    studentSurname = surname;
    StudentID = ID;

   // displayInformation();
}

//? Copy constructor
Student::Student(const Student &oth)
{
    studentName = oth.studentName;
    studentSurname = oth.studentSurname;
    StudentID = oth.StudentID;
}


//? Destructor
Student::~Student()
{
    std::cout << "Destructor worked" << std::endl;
}