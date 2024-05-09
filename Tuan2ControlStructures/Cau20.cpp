#include <bits/stdc++.h>

using namespace std;

int PhanA(int gio){
	if(gio<=100) return gio*12000;
	else if(gio<= 150) return 100*12000+(gio-100)*16000;
	else if(gio<=200) return 100*12000 + 50*16000 + (gio-150)*20000;
	else return 100*12000 + 50*16000 + 50*20000 + (gio-200)*25000;
}

int PhanB(int tien){
	int BH=tien*9/100;
	int tienSBH = tien - BH;
	int thue;
	
	if(tienSBH <= 1000000) thue=tienSBH;
	else if(tienSBH <= 1500000) thue = (tienSBH - 1000000)*10/100;
	else if(tienSBH <= 2000000) thue = (tienSBH - 1500000)*15/100 + 50000;
	else thue = (tienSBH - 2000000)*20/100 + 75000 + 50000;
	
	return tien-BH-thue;
}

int PhanC(int tien){
	double result=tien;
	for(int i=1;i<=12;i++){
		result=(result*1.02);
	}
	result = long(result);
	return result;
}

void PhanD(int gio,int& vay){	
	//gio = 155
	const int trocap= 1500000;
	int luong = PhanB(PhanA(gio));
	int tien = luong+trocap;
	cout<<"Luong sau thue: "<<luong<<endl;
	int tienconlai = tien - 2000000;
	cout<<"Tien lai ngan hang: "<<vay*0.02<<endl;
	vay*=1.02;
	if(tienconlai>0) vay-=tienconlai;
	cout<<"Con du no: "<<vay<<endl;
		
}

void PhanE(int vay){
	
	int soThang=0;
	while(vay>0){
		int gio; cin>>gio;
		PhanD(gio,vay);
		soThang++;
	}
	cout<<"So thang tra het no: "<<soThang<<endl;
}

int main(){
	int vay = 10000000;
	cout<<"So tien vay ngan hang : "<<vay<<endl;
	PhanE(vay);
}