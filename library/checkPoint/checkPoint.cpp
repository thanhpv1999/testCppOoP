#include "checkPoint.h"
#include <iostream>
using namespace std;

checkPoint::checkPoint(float a1, float b1, float a2, float b2, float a3, float b3)
{
    listPoint[0] = new point(a1, b1);
    listPoint[1] = new point(a2, b2);
    listPoint[2] = new point(a3, b3);
}

checkPoint::~checkPoint()
{
    for (int i = 0; i < 3; ++i) {
        delete listPoint[i]; // Giải phóng bộ nhớ cho mỗi phần tử trong mảng listPoint
    }
}

bool checkPoint::checkDuplicate(void) const{
    bool dupl = false;
    if((listPoint[0]->GetX() == listPoint[1]->GetX())||(listPoint[0]->GetY() == listPoint[1]->GetY()))
    {
        cout << "diem 1 trung diem 2" << endl;
        dupl = true;
    }  
    if((listPoint[0]->GetX() == listPoint[2]->GetX())||(listPoint[0]->GetY() == listPoint[2]->GetY()))
    {
        cout << "diem 1 trung diem 3" << endl;
        dupl = true;
    }  
    if((listPoint[2]->GetX() == listPoint[1]->GetX())||(listPoint[2]->GetY() == listPoint[1]->GetY()))
    {
        cout << "diem 3 trung diem 2" << endl;
        dupl = true;
    } 

    return dupl; 
}

bool checkPoint::checkLine(void) const{
    if(checkPoint::checkDuplicate()==false)
    {
        if(((listPoint[1]->GetX()-listPoint[0]->GetX())*listPoint[2]->GetX()+(listPoint[0]->GetY()-listPoint[1]->GetY())*listPoint[2]->GetY())-
        ((listPoint[1]->GetX()-listPoint[0]->GetX())*listPoint[0]->GetX()+(listPoint[0]->GetY()-listPoint[1]->GetY())*listPoint[0]->GetY())
        == 0)
        {
            cout << "thang hang" << endl;
            return true;
        }else{
            cout << "khong thang hang" << endl;
            return false;
        }
    }else{
        return false;
    }
}

float checkPoint::areaTri(void) const{
    return (0.5*abs((listPoint[1]->GetX()-listPoint[0]->GetX())*(listPoint[2]->GetY()-listPoint[0]->GetY())
            - (listPoint[2]->GetX()-listPoint[0]->GetX())*(listPoint[1]->GetY()-listPoint[0]->GetY())));
}

void checkPoint::midpointAndBetween(void) const{
    if(checkPoint::checkDuplicate()==false)
    {
        if(listPoint[0]->GetX() > listPoint[1]->GetX()){
            if(listPoint[0]->GetX() < listPoint[2]->GetX()){
                cout << "diem 1 o giua" << endl;
                if(listPoint[0]->GetX()==(listPoint[1]->GetX()+listPoint[2]->GetX())*0.5){
                    cout << "diem 1 cung la trung diem" << endl;
                }else{
                    cout << "diem 1 khong la trung diem" << endl;
                }
            }else{
                if(listPoint[2]->GetX() < listPoint[1]->GetX()){
                    cout << "diem 3 o giua" << endl;
                    if(listPoint[2]->GetX()==(listPoint[1]->GetX()+listPoint[0]->GetX())*0.5){
                        cout << "diem 3 cung la trung diem" << endl;
                    }else{
                        cout << "diem 3 khong la trung diem" << endl;
                    }
                }
            }
        }else{
            if(listPoint[1]->GetX() < listPoint[2]->GetX()){
                cout << "diem 2 o giua" << endl;
                if(listPoint[1]->GetX()==(listPoint[0]->GetX()+listPoint[2]->GetX())*0.5){
                    cout << "diem 2 cung la trung diem" << endl;
                }else{
                    cout << "diem 2 khong la trung diem" << endl;
                }
            }
        }
    }
}
