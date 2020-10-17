/* Menghitung Upah Mingguan Karyawan */
/* Mohamad Bagoes Ali Yuddin */
/* 20051397048 */
/* 2020B */

#include<iostream>
using namespace std;
main()

{
	char status, golongan;
	string nama;
	int jam;
	long gaji, lembur;
 
	{
	cout << endl;
	cout <<"-------------------";
	cout <<"PROGRAM MENGHITUNG UPAH MINGGUAN KARYAWAN";
	cout <<"--------------------"<< endl;
	
	cout << endl;
	cout <<"---------------------------SILAHKAN MEMASUKAN DATA ANDA-------------------------" << endl << endl;
 	cout <<"Nama Karyawan     : "; cin >> nama;
 	cout <<"Golongan (a/b/c/d): "; cin >> golongan;
 	cout <<"Jam Kerja         : "; cin >> jam;
 	cout <<"================================================================================" << endl;
 	cout <<endl;
 
 
 	lembur=4000;
 	int pelembur=0;
 
 	if (jam>48){
  	pelembur=jam-48;
 	}
 	switch(golongan)
 	
	{	
 	case 'a' :
  	gaji = (jam-pelembur) * 5000;
   	break;
   	
  	case 'b' :
  	gaji = (jam-pelembur) * 7000;
   	break;
   	
   	case 'c' :
  	gaji = (jam-pelembur) * 8000;
   	break;
   	
    case 'd' :
  	gaji = (jam-pelembur) * 10000;
   	break;
   	
   	
     default :
            cout<<"Golongan Tidak Tersedia!"<<endl;
            gaji = 0;
            lembur = 0;     
 	}
 	
 	
   if (jam>48)
   
   {
	gaji = gaji+( (jam - 48) * lembur);
 	}
 	
 	
    cout <<"Nama Karyawan  : " << nama << endl;
 	cout <<"Total Upah     : Rp. "<<gaji<<endl;
 	cout <<endl;
 
 	cout <<"Apakah Anda ingin mengulang program Kembali (y/n) ? "<< endl; cin >> status; 
	} 
	while	( status == 'Y' || status == 'y');
    cout << endl;
    
    cout <<"    ======================================================================"<< endl;
	cout <<"    ======================================================================"<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                TERIMAKASIH TELAH MEMPERCAYAI KAMI                =="<< endl;
	cout <<"    ==     SEBAGAI PROGRAM PERHITUNGAN CEPAT DALAM MENGHITUNG GAJI      =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                        Penk_Zpk  =="<< endl;
	cout <<"    ======================================================================"<< endl;
	cout <<"    ======================================================================"<< endl;
	
	return 0;
}
