#include "HCN.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void Rectangle::Datcd (double Dai){
    if(Dai>0){
        ChieuDai=Dai;
}else{
    cout<<"gia tri khong hop le";
    exit(EXIT_FAILURE);
}
}
void Rectangle::Datcr (double Rong){
    if(Rong>0){
        ChieuRong=Rong;
}else{
    cout<<"gia tri khong hop le";
    exit(EXIT_FAILURE);
}
}
double Rectangle::GetDai(){
    return ChieuDai;
}
double Rectangle::GetRong(){
    return ChieuRong;
}
double Rectangle::GetDienTich(){
    return ChieuDai*ChieuRong;
}
double Rectangle::GetChuVi(){
    return 2*(ChieuDai+ChieuRong);
}
