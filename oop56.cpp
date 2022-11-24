#include <iostream>
#include <string>
#include <fstream>
#define MAX 10
#define PI 3.14
using namespace std;
void Function()
{
    int n,i;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element "<<endl;
        cin>>arr[i];
    }
    cout<<"\nDisplay Element in Array : "<<endl;
    cout<<"[";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"]";
    cout<<"\n\nReversed Array is \n";
    cout<<"[";
    for(i=n-1;i>=0;i--)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"]";
    
}
class Student
{
    protected:
    char name[20];
    int roll;
    float marks[5];
    float total=0.0;
    float percentage;
    public:
    void getdetails();
    void display();
};
void Student::getdetails()
{
    cout<<"\nEnter the name of the Student : ";
    cin>>name;
    cout<<"\nEnter the Roll Number : ";
    cin>>roll;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter the marks of the Student :["<<i+1<<"] ";
        cin>>marks[i];
        total=total+marks[i];
        percentage=(total/500)*100;
    }
}
void Student::display()
{
    cout<<"Name :\t"<<name<<"\t Roll Number :\t"<<roll<<endl;
    cout<<"Total Marks is : "<<total<<endl;
    cout<<"Percentage is : "<<percentage<<"%"<<endl;
}
class A
{
    public:
    A()
    {
        cout<<"Constructor is Called\n";
    }
    ~A()
    {
        cout<<"Destructor is Called\n";
    }
};
class Mark:public Student
{
    public:
    void show()
    {
    if(percentage>=90)
    {
        cout<<"Grade is O \n";
    }
    else if((percentage<90) && (percentage>=80))
    {
        cout<<"Grade is E \n";
    }
    else if((percentage>=70) && (percentage<80))
    {
        cout<<"Grade is A\n";
    }
    else if ((percentage>=60) && (percentage<70)){
        cout<<"Grade is B \n";
    }    
    else if ((percentage>=50) && (percentage<60)){
        cout<<"Grade is C \n";
    }
    else if ((percentage>=40) && (percentage<50)){
        cout<<"Grade is D \n";
    }
    else{
        cout<<"The Grade is F\n";
    }
    }
};
float area(int r)
{
    float a;
    a = PI * r * r;
    return a;
}
int area(int l, int b)
{
    float a1;
    a1 = l * b;
    return a1;
}
float area(float n, int base, int h)
{
    float a2;
    a2=n*base*h;
    return a2;
}
template <typename T>
T sum(T a[],int size)
{
    T s=0;
    for(int i=0;i<size;i++)
    {
        s=s+a[i];
    }
    return s;
}
class B
{
    int id;
    char name[20];
    friend void operator >>(istream &in,B &b)
    {
        cout<<"Enter the student id and name :";
        in>>b.id>>b.name;
    }
    friend void operator <<(ostream &out,B &b)
    {
        out<<"Id = "<<b.id<<endl;
        out<<"Name = "<<b.name<<endl;
    }
};
class C
{
    public:
    C()
    {
    ofstream obj;
    obj.open("input.txt");
    obj<<"Hello World \n";
    cout<<"\n\nData Written into file\n";
    obj.close();
    }
};
void ExceptionHandling()
{
try{
        cout<<"Welcome\n";
        try{
        int num1,num2;
        cout<<"Enter the First Number : ";
        cin>>num1;
        cout<<"\nEnter the Second Number : ";
        cin>>num2;
        if(num2==0)
        {
            throw num2;
        }
        else{
            cout<<"\nThe Division of Two Numbers is : "<<num1/num2;
        }
        }
        catch(...)
        {
            throw;
        }
    }
        catch(int)
        { 
            cout<<"\nThe Division is not Possible ";
        }
}       
int main()
{
    int code=0;
    do
    {
        cout<<"\n1.Function"<<endl;
        cout<<"2.Class & Object\n";
        cout<<"3.Inheritance and Constructor Destructor\n";
        cout<<"4.Polymorphism\n";
        cout<<"5.Template\n";
        cout<<"6.Opertor Overloading\n";
        cout<<"7.File Handling\n";
        cout<<"8.Exception Handling\n";
        cout<<"9.Exit\n";
        cout<<"Enter the code : ";
        cin>>code;
        switch(code)
        {
        case 1:
        {
            Function();
            break;
        }
        case 2:
        {
            Student s[MAX];
            int n;
            cout<<"Enter the no of students : ";
            cin>>n;
            cout<<"\n";
            for(int loop=0;loop<n;loop++)
            {
                cout<<"Enter the Student Details\n";
                cout<<endl;
                s[loop].getdetails();
            }
            for(int loop=0;loop<n;loop++)
            {
                cout<<"-----------------------------\n";
                cout<<"Display the Student Details\n";
                cout<<"\n";
                s[loop].display();
            }
            break;
        }
        case 3:
        {
            A a;
            Mark m[MAX];
            int n;
            cout<<"Enter the no of students : ";
            cin>>n;
            cout<<"\n";
            for(int loop=0;loop<n;loop++)
            {
                cout<<"-----------------------------\n";
                cout<<"Display the Student Details\n";
                cout<<"\n";
                m[loop].show();
            }
            break;
        }
        case 4:
        {
            int b, base,h,r, l;
            float a1,a2,a3;
            cout<<"\nEnter the Radius of Circle: \n";
            cin>>r;
            a1=area(r);
            cout <<"\nArea of Circle: "<<a1<<endl;
            cout<<"\nEnter the base of the Triangle: ";
            cin>>base;
            cout<<"\nEnter the height of the Triangle: ";
            cin>>h;
            a2=area(0.5,base,h);
            cout<<"\nArea of Triangle: "<<a2<< endl;
            cout<<"\nEnter the Length & Breadth of Rectangle:\n";
            cin>>l>>b;
            a3=area(l,b);
            cout<<"\nArea of Rectangle: "<<a3<<endl;
            break;
        }
        case 5:
        {
            int x[5]={10,20,30,40,50};
            float y[3]={9.9,8.5,7.8};
            cout<<"Integer Sum is = "<<sum(x,5)<<endl;
            cout<<"Float sum is = "<<sum(y,3)<<endl;
            break;
        }
        case 6:
        {
            B b;
            cin>>b;
            cout<<b;
            break;
        }
        case 7:
        {
            C c;
            break;
        }
        case 8:
        {
            ExceptionHandling();
            break;
        }
        case 9:
        {
            exit(0);
            break;
        }
        }
    }while(code!=9);
    return 0;
}
