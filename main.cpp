#include <string>
#include <iostream>
#include <stdio.h>
#include "Canbo.h"
#include "CongNhan.h"
#include "Kysu.h"
#include "QLCB.h"
#include "Nhanvien.h"
#include "include.h"

int main()
{
    QLCB qlcb;
    int number{0};
    while(true)
    {
        cout << "********************************\n";
        cout << "1.Add can bo\n";
        cout << "2.Add Nhan vien\n";
        cout << "3.Add ky su\n";
        cout << "4.Add cong nhan\n";
        cout << "5.Find by name\n";
        cout << "6.Display list\n";
        cout << "7.Exit\n";
        cout << "Enter number: ";
        cin>> number;
        cout << "********************************\n";

        switch (number)
        {
        case INSERT_CANBO:
        {
            string name;
            string address;
            string gender;
            int age{0};
            cout << "Type name:";
            cin>> name;
            cout << "Type age:";
            cin>> age;
            cout << "Type gender:";
            cin>> gender;
            cout << "Type add:";
            cin>> address;
            CanBo* canbo = new CanBo(name,age,gender,address);// sử dụng cấp phát động
            qlcb.add(canbo);
        }
            break;
        case INSERT_NHANVIEN:
        {
            string name;
            string address;
            string gender;
            string job;
            int age{0};
            cout << "Type name:";
            cin>> name;
            cout << "Type age:";
            cin>> age;
            cout << "Type gender:";
            cin>> gender;
            cout << "Type add:";
            cin>> address;
            cout << "Type job:";
            cin>> job;
            CanBo* nv = new Nhanvien(name,age,gender,address,job);// sử dụng cấp phát động
            qlcb.add(nv);
        }
            break;
        case INSERT_KYSU:
        {
            string name;
            string address;
            string gender;
            string train;
            int age{0};
            cout << "Type name:";
            cin>> name;
            cout << "Type age:";
            cin>> age;
            cout << "Type gender:";
            cin>> gender;
            cout << "Type add:";
            cin>> address;
            cout << "Type train:";
            cin>> train;
            CanBo* ks = new Kysu(name,age,gender,address,train);// sử dụng cấp phát động
            qlcb.add(ks);
        }
            break;
        case INSERT_CONGNHAN:
        {
            string name;
            string address;
            string gender;
            int level;
            int age{0};
            cout << "Type name:";
            cin>> name;
            cout << "Type age:";
            cin>> age;
            cout << "Type gender:";
            cin>> gender;
            cout << "Type add:";
            cin>> address;
            cout << "Type level:";
            cin>> level;
            CanBo* cn = new CongNhan(name,age,gender,address,level);// sử dụng cấp phát động
            qlcb.add(cn);
        }
            break;
        case FIND:
        {
            string name;
            cout << "Type name:";
            cin>>name;
            qlcb.search(name);
        }
            break;
        case SHOW:
        {
            qlcb.printCanBo();
        }
            break;
        case QUIT:
        {
            return 0;
        }
        default:
            break;
        }
    }

    // delete qlcb;
    return 0;
}
