#ifndef HCN_H_
#define HCN_H_
class Rectangle{
private :
        double ChieuDai;
        double ChieuRong;

public:
        void Datcd(double Dai);
        void Datcr(double Rong);
        double GetDai(void);
        double GetRong(void);
        double GetChuVi(void);
        double GetDienTich(void);

};
#endif
