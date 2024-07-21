#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
int Count[5];
using namespace std;
int i=0;
class Car{
public:
int choice,ChRent,amt,dur,tot,count;
string car,license,name,phone,status;
string licensePlate[5];
string CarName[5];
int RentAmount[5];
Car(){
    count=1;
   licensePlate[0]="TN 69 AL 1304";CarName[0]="Volkswagon Polo";RentAmount[0]=2000;Count[0]=16;
   licensePlate[1]="TN 96 AZ 1234";CarName[1]="Suzuki Swift";RentAmount[1]=1500;Count[1]=19;
   licensePlate[2]="TN 78 A 3214";CarName[2]="Toyoto Innova";RentAmount[2]=5000;Count[2]=13;
   licensePlate[3]="TN 67 AQ 1908"; CarName[3]="TATA Nano";RentAmount[3]=1000;Count[3]=17;
   licensePlate[4]="TN 69 A 0001";CarName[4]="Hyndai Verna";RentAmount[4]=2500;Count[4]=15;
}
void GetDetail(){
int check=0,check2=0;
cout<<"Enter your Name(Can't Exceed 30) :";
getchar();
getline(cin,name);
cout<<"Enter Duration(In Hours)         :";
cin>>dur;
cout<<"Enter Phone                      :";
getchar();
getline(cin,phone);
for(int k=0;k<phone.length();k++){
if(isalpha(phone[k])){
check=1;
}
}
for(int k=0;k<name.length();k++){
if(isdigit(name[k])){

check2=1;
}
}
if((phone.length()<10)||(check==1)){
cout<<"Enter Valid Phone Number!\n";
GetDetail();
}
if((name.length()>30)||(check2==1)){
cout<<"Enter Valid Name!\n";
GetDetail();
}
}
void Bill(){
cout<<"\n===================BILL====================\n";
    cout<<setw(5)<<"Name           :"<<name<<endl;
    cout<<setw(5)<<"Phone          :"<<phone<<endl;
    cout<<setw(5)<<"Car            :"<<car<<endl;
    cout<<setw(5)<<"License Number :"<<license<<endl;
    cout<<setw(5)<<"Duration       :"<<dur<<endl;
    cout<<setw(5)<<"Amount         :"<<tot<<endl;
    cout<<"\n===========================================\n";
}
void Rental(){
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
cout<<"|   Car Name    |  Rent Amount  |    Duration   |       Choice    |   Available   |\n";
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
printf("|Volkswagon Polo|     2000      |       1 Hr    |         1       |      %d       |\n",Count[0]);
printf("|Suzuki Swift   |     1500      |       1 Hr    |         2       |      %d       |\n",Count[1]);
printf("|Toyoto Innova  |     5000      |       1 Hr    |         3       |      %d       |\n",Count[2]);
printf("|TATA Nano      |     1000      |       1 Hr    |         4       |      %d       |\n",Count[3]);
printf("|Hyndai Verna   |     2500      |       1 Hr    |         5       |      %d       |\n",Count[4]);
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
cout<<"\nEnter Choice(0 for Back)         :";
cin>>ChRent;
int temp;
switch(ChRent){
    case 1:
    GetDetail();
    car=CarName[ChRent-1];
    amt=RentAmount[ChRent-1];
    license=licensePlate[ChRent-1];
    tot=dur*amt;
    temp=Count[0];
    temp--;
    Count[0]=temp;
    status="Rented";
    i++;

    Bill();
    cout<<setw(5)<<"\nRental Successfull\n";
    break;
    case 2:
    GetDetail();
    car=CarName[ChRent-1];
    amt=RentAmount[ChRent-1];
    license=licensePlate[ChRent-1];
    tot=dur*amt;
    Count[ChRent-1]--;
    i++;
    status="Rented";
    Bill();
    cout<<"Rental Successfull";
    break;
    case 3:
    GetDetail();
    car=CarName[ChRent-1];
    amt=RentAmount[ChRent-1];
    license=licensePlate[ChRent-1];
    tot=dur*amt;
    Count[ChRent-1]--;
    i++;
    status="Rented";
    Bill();
    cout<<"Rental Successfull";
    break;
    case 4:
    GetDetail();
    car=CarName[ChRent-1];
    amt=RentAmount[ChRent-1];
    license=licensePlate[ChRent-1];
    tot=dur*amt;
    Count[ChRent-1]--;
    i++;
    status="Rented";
    Bill();
    cout<<"Rental Successfull";
    break;
    case 5:
    GetDetail();
    car=CarName[ChRent-1];
    amt=RentAmount[ChRent-1];
   license=licensePlate[ChRent-1];
   tot=dur*amt;
   Count[ChRent-1]--;
    i++;
    status="Rented";
    Bill();
    cout<<"Rental Successfull";
    break;
    case 6:
    exit(0);
    break;
    default:
    cout<<"Enter valid Choice!";
}
}
};


int main(){
Car carObj[100];
int choice,id,present=0,k;
string username,password,User,Pass;
User="Admin";
Pass="Admin";
string GetName,phone;
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
cout<<"                             Welcome To Alpha Travels\n";
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";

do{
cout<<"\n1.Car Rental\n2.Car Return\n3.Exit\n";
cout<<"Enter your choice                :";
cin>>choice;
switch(choice){
    case 1:
    carObj[i].count+=1;
    carObj[i].Rental();
    break;
    case 2:
    cout<<"Enter Name                       :";
    getchar();
    getline(cin,GetName);
    cout<<"Enter Phone Number               :";
    cin>>phone;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    for(int j=0;j<=i;j++){
    if((GetName==carObj[j].name)&&(phone==carObj[j].phone)){
    if(carObj[j].count==0)
    cout<<"You have not rented any car!\n";
    else{
    if(carObj[j].status!="Returned"){
    cout<<"|"<<"ID:"<<j<<"|"<<setw(5)<<carObj[j].name<<setw(5)<<"|"<<setw(5)<<carObj[j].car<<setw(5)<<"|"<<setw(5)<<carObj[j].license<<setw(5)<<"|"<<setw(5)<<carObj[j].dur<<setw(5)<<"|"<<setw(5)<<carObj[j].amt<<setw(5)<<"|"<<setw(5)<<carObj[j].status<<setw(5)<<"|"<<endl;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    present=1;
    carObj[j].count-=1;
    }
    }
    }
    }
    cout<<"Enter Car ID to be returned:";
    cin>>id;
    carObj[id].status="Returned";
        cout<<"Return Successfull!\n";
    break;
    case 3:
    exit(0);
    break;
    case 0:
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    cout<<"                                 Welcome Admin\n";
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    cout<<"Enter UserName             :";
    cin>>username;
    cout<<"Enter Password             :";
    cin>>password;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    if((username==User)&&(password==Pass)){
    for(int j=0;j<i;j++){
    cout<<"|"<<"ID:"<<j<<"|"<<setw(5)<<carObj[j].name<<setw(5)<<"|"<<setw(5)<<carObj[j].car<<setw(5)<<"|"<<setw(5)<<carObj[j].license<<setw(5)<<"|"<<setw(5)<<carObj[j].dur<<setw(5)<<"|"<<setw(5)<<carObj[j].amt<<setw(5)<<"|"<<setw(5)<<carObj[j].status<<setw(5)<<"|"<<endl;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
}
    default:
    cout<<"Enter Valid Choice!";
    }
    break;
}
    }while(choice!=3);
}