#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100

using namespace std;

//Class Customer
class Customer
{
public:
char name[100];
char address[100];
char phone[12];
void setComplex(void)

{

cout << "Enter the real and imaginary parts : ";

cin >> this->real;

cin >> this->imag;

}

Complex add(const Complex& c)

{

Complex comp;

comp.real = this->real + c.real;

comp.imag = this->imag + c.imag;

return comp;

}

Complex subtract(const Complex& c)

{

Complex comp;

comp.real = this->real - c.real;

comp.imag = this->imag - c.imag;

return comp;

}

void printComplex(void)

{

cout << "Real : " << this->real << endl<< "Imaginary : " << this->imag << endl;

}

};char from_date[20];
char to_date[20];
float payment_advance;
int booking_id;
};


class Room
{
public:
char type;
char stype;
char ac;
int roomNumber;
int rent;
int status;

class Customer cust;
class Room addRoom(int);
void searchRoom(int);
void deleteRoom(int);
void displayRoom(Room);
};

//Global Declarations
class Room rooms[max];
int count=0;


Room Room::addRoom(int rno)
{
class Room room;
room.roomNumber=rno;
cout<<"\nType AC/Non-AC (A/N) : ";
cin>>room.ac;
cout<<"\nType Comfort (S/N) : ";
cin>>room.type;
cout<<"\nType Size (B/S) : ";
cin>>room.stype;
cout<<"\nDaily Rent : ";
cin>>room.rent;
room.status=0;

cout<<"\n Room Added Successfully!";
getch();
return room;
}

void Room::searchRoom(int rno)
{
int i,found=0;
for(i=0;i<count;i++)
{
if(rooms[i].roomNumber==rno)
{
found=1;
break;
}
}
if(found==1)
{
cout<<"Room Details\n";
if(rooms[i].status==1)
{
cout<<"\nRoom is Reserved";
}
else
{
cout<<"\nRoom is available";
}
displayRoom(rooms[i]);
getch();
}
else
{
cout<<"\nRoom not found";
getch();
}
}


void Room::displayRoom(Room tempRoom)
{
cout<<"\nRoom Number: \t"<<tempRoom.roomNumber;
cout<<"\nType AC/Non-AC (A/N) "<<tempRoom.ac;
cout<<"\nType Comfort (S/N) "<<tempRoom.type;
cout<<"\nType Size (B/S) "<<tempRoom.stype;
cout<<"\nRent: "<<tempRoom.rent;

}
//Editing done by Prashasti
//Class Customer
class Customer
{
public:
char name[100];
char address[100];
char phone[12];
char from_date[20];
char to_date[20];
float payment_advance;
int booking_id;
};

void HotelMgnt::guestSummaryReport(){

if(count==0){
	cout<<"\n No Guest in Hotel !!";
}	
for(int i=0;i<count;i++)
{
if(rooms[i].status==1)
{
cout<<"\n Customer First Name : "<<rooms[i].cust.name;
cout<<"\n Room Number : "<<rooms[i].roomNumber;
cout<<"\n Address (only city) : "<<rooms[i].cust.address;
cout<<"\n Phone : "<<rooms[i].cust.phone;
cout<<"\n---------------------------------------";	
}
	
}


getch();
}

//hotel management reservation of room
void HotelMgnt::checkIn()
{
int i,found=0,rno;

class Room room;
cout<<"\nEnter Room number : ";
cin>>rno;
for(i=0;i<count;i++)
{
if(rooms[i].roomNumber==rno)
{
found=1;
break;
}
}
if(found==1)
{
if(rooms[i].status==1)
{
cout<<"\nRoom is already Booked";
getch();
return;
}


cout<<"\nEnter booking id: ";
cin>>rooms[i].cust.booking_id;

cout<<"\nEnter Customer Name (First Name): ";
cin>>rooms[i].cust.name;

cout<<"\nEnter Address (only city): ";
cin>>rooms[i].cust.address;

cout<<"\nEnter Phone: ";
cin>>rooms[i].cust.phone;

cout<<"\nEnter From Date: ";
cin>>rooms[i].cust.from_date;

cout<<"\nEnter to  Date: ";
cin>>rooms[i].cust.to_date;


cout<<"\nEnter Advance Payment: ";
cin>>rooms[i].cust.payment_advance;

rooms[i].status=1;

cout<<"\n Customer Checked-in Successfully..";
getch();
}
}
int main()

{

Complex a, b, c, d;

cout << "Setting first complex number " << endl;

a.setComplex();

cout << "Setting second complex number " << endl;

b.setComplex();

cout << "Addition of a and b : " << endl;

c = a.add(b);

c.printComplex();

cout << "Subtraction of a and b : " << endl;

d = a.subtract(b);

d.printComplex();

return 0;

}



int main()
	

{
	

Complex a, b, c, d;
	

cout << "Setting first complex number " << endl;
	

a.setComplex();
	

cout << "Setting second complex number " << endl;
	

b.setComplex();
	

cout << "Addition of a and b : " << endl;
	

c = a.add(b);
	

c.printComplex();
	

cout << "Subtraction of a and b : " << endl;
	

d = a.subtract(b);
	

d.printComplex();
	

return 0;
	

}

class fstudent       // friend class

{

  public:

    void totavg(student &);

    void display(student);

};

void student::initialize()

{

  int i;

 cout<<"Number: ";    cin>>number;

  cout<<"Name: ";        cin>>name;

  cout<<"Marks in 6 Subjects: ";

  for(i=0; i<6; i++)

  {
cin>>marks[i];

  }

}

void fstudent::totavg(student & st1)

{

  int i,sum=0;

  for(i=0; i<6; i++)

  {

    sum=sum+st1.marks[i];

  }

  st1.total=sum;

  st1.avg=st1.total/6.0;

}

void fstudent::display(student st2)

{

  int i;

  cout<<st2.number<<" "<<st2.name<<" ( ";

  for(i=0; i<6; i++)
{

    cout<<st2.marks[i]<<" ";

  }

  cout<<") "<<st2.total<<" "<<st2.avg<<endl;

}

int main()

{

  student st[5];

  fstudent fst;

  int number,i;

  cout<<"No. of Students: ";

  cin>>number;

  for(i=0; i<number; i++)

  {

    cout<<"Student "<<i+1<<"\n";

    st[i].initialize();

  }

  for(i=0; i<number; i++)

  fst.totavg(st[i]);

  cout<<"\nNumber, Name, Marks, Total and Average of ";

  cout<<number<<" students:\n";

  cout<<"-----------------------------------------------------\n";

  for(i=0; i<number; i++)

  fst.display(st[i]);

  return 0;

}
	
class rectangle

{

 float l,b;

 float p;

  public: float per1()

      {

      l=4;

      b=314/l;

     p=2*(l+b);

   return p;

}

};

class square

   {

    float side,p;

    public:

      float per1()

   {

    side=sqrt(314);

     p=4*side;

    return p;

     }

};

class circle

{

  float radius,p;

     public:

         float per1()

{

  radius=sqrt(314/3.14);

  p=2*3.14*radius;

  }

};

class triangle

{

 int hyp;

 float side1, side2, p;

 public: float per1()

      {

      hyp=2;

     side1=(314*2)/hyp;

     side2=sqrt((side1*side1)+(hyp*hyp));

     p=side1+side2+hyp;

   return p;

}

};

