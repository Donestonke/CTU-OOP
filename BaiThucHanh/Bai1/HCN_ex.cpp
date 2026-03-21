#include "HCN.h"
#include <iostream>
using namespace std;
int main(){
       Rectangle rect1;
       double dai, rong;
       cout<<"nhap gia tri cho hinh chu nhat";
       cout<<"Chieu Dai";
       cin>>dai;
       rect1.Datcd(dai);
       cout<<"Chieu Rong";
       cin>>rong;
       rect1.Datcr(rong);
       cout<<"Chieu Dai"<<rect1.GetDai()<<endl;
       cout<<"Chieu Rong"<<rect1.GetRong()<<endl;
       cout<<"Dien Tich"<<rect1.GetDienTich()<<endl;
       cout<<"Chu Vi"<<rect1.GetChuVi()<<endl;
       return 0;
   }
