#include "studentClass.hpp"

int main()
{
    Student student1;
    Student student2;

    student1.studentName = "ibrahim";
    student1.studentSurname = "yapar";
    student1.StudentID = "4848";


    student1.set_values("ibrahim","yapar","2424"); //? set fonksiyonu
    
    std::string name = student1.get_name();  //? get fonksiyonu
    std::string surname = student1.get_surname();
    std::string ID = student1.get_ID();

    std::cout << "get fonksiyonu" << " " << name << " " << surname << " " << ID << std::endl;
    student1.displayInformation();

    Student student3("ibrahim","yapar","4242"); //? parametre alan constructor

     Student student4(student1); 
     student4.displayInformation();


}
