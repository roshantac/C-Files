/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Worker
{
  
 
   int w_numLeavesTaken;
   double w_fixedSalperday;
    
    virtual double calculatePay()
   {
       return (30.0-w_numLeavesTaken)*w_fixedSalperday;
   }
   public: 
   Worker()
   {
       
   }
    Worker(string empName, int empID, double fixedSalperday,int numLeavesTaken):w_empName(empName),w_empID(empID),
    w_fixedSalperday(fixedSalperday),w_numLeavesTaken(numLeavesTaken)
    {
        
    }
   string w_empName;
   int w_empID;
   void getEmployeeDetails()
   {
       cout<<"Employee name: "<<w_empName <<", Employee ID: "<<w_empID<<", Salary for the Month: "<<calculatePay()<<endl;
   }

};

class Manager:Worker
{
    
    double m_fixdSalMonth;
    int m_numberofProjects;
    double m_bonus=20000;
    double calculatePay()
    {
        return m_numberofProjects*m_bonus + m_fixdSalMonth;
    }
    public:
    Manager(string name, int empID, double fixedSalpermonth,int numberofProjects)
    
    {
        w_empName=name;
        w_empID=empID;
        m_fixdSalMonth=fixedSalpermonth;
        m_numberofProjects=numberofProjects;
    }
    
    void getEmployeeDetails()
    {
        cout<<"Employee name: "<<w_empName <<", Employee ID: "<<w_empID<<", Salary for the Month: "<<calculatePay()<<endl;
   
    }
};
template <typename T> 
void getEmployeeDetails(T objname)
{
    objname.getEmployeeDetails();
}

int main()
{


    Worker a1("Varun",1,2000,3);
    Worker a2("Pooja",2,1800,6);
    Manager b1("Athul",3,2000,3);
    Manager b2("Sandeep",4,2000,3);
    
     getEmployeeDetails<Worker>(a1);
     getEmployeeDetails<Worker>(a2);
     
     getEmployeeDetails<Manager>(b1);
     getEmployeeDetails<Manager>(b2);

    return 0;
}
