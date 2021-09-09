#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("color 2b");
    string var="\n\n\n\t\t\t\t>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<"
               "\n\t\t\t\t     <<<<<<<<<<<<>>>>>>>>>>>>>>>><<<<<<>>>> "
               "\n\t\t\t\t      ...................................   "
               "\n\t\t\t\t                Parking Project             "
               "\n\t\t\t\t       ---------By Qazi Fartash-------->    "
               "\n\t\t\t\t      ...................................   "
               "\n\t\t\t\t     <<<<<<<<<<<<>>>>>>>>>>>>>>>><<<<<<>>>  "
               "\n\t\t\t\t    >>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<";
    for(int i=0;i<=var.size();i++)
    {
        Sleep(20);
        cout<<var[i];
    }
    A:
    int B_amt=0,R_amt=0,C_amt=0,Bu_amt=0;
    int B_cnt=0,R_cnt=0,C_cnt=0,Bu_cnt=0;
    int t_amt=0,t_cnt=0,x;
    Y:
    system("cls");
    cout<<"\n\n\n\t\t\tParking Project";
    cout<<"\n\n1. Bike";
    cout<<"\n2. Rickshaw";
    cout<<"\n3. Car";
    cout<<"\n4. Bus";
    cout<<"\n5. Display record";
    cout<<"\n6. Delete vehicle";
    cout<<"\n7. Delete record";
    cout<<"\n8. exit";
    cout<<"\n\n  Enter Your choice ";
    cin>>x;
    switch(x)
    {
        case 1:
        if(t_cnt < 100)
        {
           B_cnt++;
           t_cnt++;
           B_amt +=30;
           t_amt +=30;
           cout<<"\n\n\t\t\tBike is successsfully Parked in....";
        }
        else
        {
            cout<<"\n\n\t\t\tParking is already full.....";
        }
        break;
        case 2:
        if(t_cnt < 100)
        {
           R_cnt++;
           t_cnt++;
           R_amt +=50;
           t_amt +=50;
           cout<<"\n\n\t\t\tRickshaw is successsfully Parked in....";
        }
        else
        {
            cout<<"\n\n\t\t\tParking is already full.....";
        }
        break;
        case 3:
        if(t_cnt < 100)
        {
           C_cnt++;
           t_cnt++;
           C_amt +=100;
           t_amt +=100;
           cout<<"\n\n\t\t\tCar is successsfully Parked in....";
        }
        else
        {
            cout<<"\n\n\t\t\tParking is already full.....";
        }
        break;
        case 4:
        if(t_cnt < 100)
        {
           Bu_cnt++;
           t_cnt++;
           Bu_amt +=200;
           t_amt +=200;
           cout<<"\n\n\t\t\tBus is successsfully Parked in....";
        }
        else
        {
            cout<<"\n\n\t\t\tParking is already full.....";
        }
        break;
        case 5:
        if(t_cnt > 0)
        {
           system("cls");
           cout<<"\n\n\n\t\t\tDisplay Record of Parking Vehicles....";
           cout<<"\n\n----> Total Bikes in Parking :"<<B_cnt;
           cout<<"\n----> Bike's Amount :"<<B_amt;
           cout<<"\n\n----> Total Rickshaws in Parking :"<<R_cnt;
           cout<<"\n----> Rickshaw's Amount :"<<R_amt;
           cout<<"\n\n----> Total Cars in Parking :"<<C_cnt;
           cout<<"\n----> Car's Amount :"<<C_amt;
           cout<<"\n\n----> Total Buses in Parking :"<<Bu_cnt;
           cout<<"\n----> Bus's Amount :"<<Bu_amt;
           cout<<"\n\n----> Total Vehicles in Parking :"<<t_cnt;
           cout<<"\n----> Total Amount :"<<t_amt;
        }
        else
        {
            cout<<"\n\n\t\t\tParking is Empty.....";
            cout<<"\nAllow Vehicles for Parking....."; cout<<"\n\n\t\t\tParking is Empty.....";
        }
        break;
        case 6:
        Z:
        system("cls");
        cout<<"\n\n\n\t\t\tDelete Vehicles....";
        cout<<"\n\n1. Bike :";
        cout<<"\n2. Rickshaw :";
        cout<<"\n3. Car :";
        cout<<"\n4. Bus :";
        cin>>x;
        if(x == 1)
        {
            B_cnt--;
            t_cnt--;
            cout<<"\n\n\t\t\t Bike is successsfully Excuted....";
        }
        else if(x == 2)
        {
            R_cnt--;
            t_cnt--;
            cout<<"\n\n\t\t\t Rickshaw is successsfully Excuted....";
        }
        else if(x == 3)
        {
            C_cnt--;
            t_cnt--;
            cout<<"\n\n\t\t\t Car is successsfully Excuted....";
        }
        else if(x == 4)
        {
            Bu_cnt--;
            t_cnt--;
            cout<<"\n\n\t\t\t Bus is successsfully Excuted....";
        }
        else 
        {
            cout<<"\n\n\t\t\t Invaid Choice.....";
            cout<<"\n Try Again please....";
            getch();
            goto Z;
        }
        break;
        case 7:
        cout<<"\n\n\t\t\tDeleted All Record successfully....";
        getch();
        goto A;
        case 8:
        exit(0);
        default:
        cout<<"\n\n\n\t\t\t Invalid Key...";
        cout<<"\n Please Try Again....";
    }
    getch();
    goto Y;
    return 0;
}
