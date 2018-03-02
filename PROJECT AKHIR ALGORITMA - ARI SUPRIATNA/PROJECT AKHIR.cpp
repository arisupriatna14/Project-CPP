#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

void menu_utama();
void pertemuan_1();
void pertemuan_2();
void pertemuan_3();
void pertemuan_4();
void pertemuan_5();
void pertemuan_6();
void pertemuan_7();
void pertemuan_8();
void pertemuan_9();
void pertemuan_10();
void pertemuan_11();
void pertemuan_12();
void keluar_program();

int main()
{
	char a=177, b=219;
	
	system("color b");
	cout << "\n\n\n\t\t\t\tPlease Wait\n\n\n";
	cout << "\t\t\t\t";
	for (int i=0; i<=15; i++){
		cout << a;
	}
	cout << "\r";
	cout << "\t\t\t\t";
	for (int i=0; i<=15; i++){
		cout << b;
		for(int j=0; j<=1e8; j++);
	}
	system("cls");
	menu_utama();
	return 0;
}

//menu_utama
void menu_utama()
{
	int pilihan;
	char back;
	
	do{
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t======= SELAMAT DATANG DI APLIKASI ALGORITMA & PEMROGRAMAN 1 =======" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1.  Pertemuan 1                                                  =" << endl;
		cout << "\t= 2.  Pertemuan 2                                                  =" << endl;
		cout << "\t= 3.  Pertemuan 3                                                  =" << endl;
		cout << "\t= 4.  Pertemuan 4                                                  =" << endl;
		cout << "\t= 5.  Pertemuan 5                                                  =" << endl;
		cout << "\t= 6.  Pertemuan 6                                                  =" << endl;
		cout << "\t= 7.  Pertemuan 7                                                  =" << endl;
		cout << "\t= 8.  Pertemuan 8                                                  =" << endl;
		cout << "\t= 9.  Pertemuan 9                                                  =" << endl;
		cout << "\t= 10. Pertemuan 10                                                 =" << endl;
		cout << "\t= 11. Pertemuan 11                                                 =" << endl;
		cout << "\t= 12. Pertemuan 12                                                 =" << endl;
		cout << "\t= 13. Keluar Program                                               =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		cout << "\t====================================================================" << endl;
		
		switch(pilihan)
		{
			case 1:
				pertemuan_1();
				break;
			case 2:
				pertemuan_2();
				break;
			case 3:
				pertemuan_3();
				break; 
			case 4:
				pertemuan_4();
				break;
			case 5:
				pertemuan_5();
				break;
			case 6:
				pertemuan_6();
				break;
			case 7:
				pertemuan_7();
				break;
			case 8:
				pertemuan_8();
				break;
			case 9:
				pertemuan_9();
				break;
			case 10:
				pertemuan_10();
				break;
			case 11:
				pertemuan_11();
				break;
			case 12:
				pertemuan_12();
				break;
			case 13:
				keluar_program();
			default:
				cout << "\tPilihan Anda tidak tersedia!" << endl;
				getch();
		}//penutup switch
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke Menu Utama [Y/T] ? ";
		cin  >> back;
	} while ( back == 'Y' || back == 'y');
	cout << endl;
	cout << "\t====================================================================" << endl;
	cout << "\t============= Terimakasih Telah Mengunakan Aplikasi Ini ============" << endl;
	cout << "\t====================================================================" << endl;
}

//pertemuan 1
void pertemuan_1()
{
	int pilihan;
	float alas = 14, tinggi = 8, luas;
	int m = 300, a = 4, t = 5, Vo = 0, Vt_Jumlah;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 1 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				system("cls");
				//rumus segitiga
				luas = (alas * tinggi) / 2;
				cout << "\t======================================================" << endl;
				cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
				cout << "\t======================================================" << endl;
				cout << endl;
				cout << "\tMenghitung Luas Segitia" << endl;
				cout << "\tAlas : " << alas << " cm" << endl;
				cout << "\tTinggi : " << tinggi << " cm" << endl;
				cout << "\tLuas = " << luas << " cm" << endl;
				break;
			case 2:
				system("cls");
				cout << "\t======================================================" << endl;
				cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
				cout << "\t======================================================" << endl;
				cout << "\tSoal Fisika" << endl;
				cout << "\tMomentum dan Impuls" << endl;
				cout << endl;
				cout << "\tMobil dengan massa 300Kg mula-mula dalam keadaan diam." << endl;
				cout << "\tKemudian bergerak dengan percepatan konstan 4 m/s^2 setelah 5 s." << endl;
				cout << "\tTentukan momentum yang terjadi setelah mobil bergerak terhadap acuan jalan!" << endl;
				cout << "\t==========================================================================" << endl;
				cout << "\tPenyelesaian : " << endl;
				cout << endl;
				cout << "\tDiketahui : " << endl;
				cout << "\tm : " << m << endl;
				cout << "\ta : " << a << endl;
				cout << "\tt : " << t << endl;
				cout << endl;
				cout << "\tDitanya : P ? " << endl;
				cout << "\tJawab : " << endl;
				cout << endl;
				
				//rumus
				Vt_Jumlah = Vo + (a * t);
				
				cout << "\tVt = Vo + a * t" << endl;
				cout << "\tVt = " << Vo << " + " << a << " * " << t << endl;
				cout << "\tVt = " << Vt_Jumlah << " m/s" << endl;
				cout << endl;
				cout << "\tP = m * Vt" << endl;
				cout << "\tP = " << m << " * " << Vt_Jumlah << endl;
				cout << "\tP = " << m * Vt_Jumlah << " Kg.m/s" << endl;
				break;
			case 3:
				menu_utama();
				break;
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 1 [Y/T] ? ";
		cin >> back;
	} while (back == 'Y' || back == 'y');
}

//pertemuan 2
void pertemuan_2()
{
	//variable latihan1
	int a, b, c;
	string bilangan = " ";
	//variable latihan2
	float phi = 3.14, luas, r;
	//variable latihan3
	int flag;
	float D, x1, x2;
	char back;
	int pilihan;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 2 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Latihan 3                                                     =" << endl;
		cout << "\t= 4. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>| Program Bilangan Positif dan Negatif |<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\n";
					cout << "\tInput nilai A : ";
					cin >> a;
					cout << "\tInput nilai B : ";
					cin >> b;
					
					//deklarasi operator aritmatika//
					c = a + b;
					
					if (c < 0) {
						bilangan = "Negatif";
					} 	
						else {
							bilangan = "Positif";
						}
				
					cout << "\tHasil Akhir : " << c << endl;
					cout << "\tBilangan : " << bilangan << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y'|| back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << endl;
					cout << "\t=============================" << endl;
					cout << "\tProgram Hitung Luas Lingkaran" << endl;
					cout << "\t=============================" << endl;
					
					cout << "\tInput Jari - jari : ";
					cin >> r;
					
					//rumus luas lingkaran
					luas = phi * r * r;
					
					cout << "\tLuas Lingkaran dengan jari-jari " 
						 << r 
						 << " adalah " 
						 << luas 
						 << " cm"
						 << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
				
			case 3:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 3 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << endl;
					cout << "\t=================================================" << endl;
					cout << "\tProgram Persamaan Kuadrat" << endl;
					cout << "\t=================================================" << endl;
					cout << endl;
					cout << "\tMasukkan nilai A : "; cin >> a;
					cout << "\tMasukkan nilai B : "; cin >> b;
					cout << "\tMasukkan nilai C : "; cin >> c;
					
					//rumus pers.kuadrat
					D = (b * b) - (4 * a * c);
					
					//menentukan akar-akar pers.kuadrat
					if (D > 0) {
						x1 = ((-b) + sqrt(D)) / (2 * a);
						x2 = ((-b) - sqrt(D)) / (2 * a);
						flag = 1;
					}
					else if (D == 0){
						x1 = ((-b) + sqrt(D)) / (2 * a);
						x2 = x1;
						flag = 1;
					}
					else {
						flag = 0;
					}
					
					
					//menampilkan akar-akar pers.kuadrat
					cout << "\t=================================================" << endl;
					if (flag == 1) {
						cout << "\tNilai X1 = " << x1 << endl;
						cout << "\tNilai X2 = " << x2 << endl;
					}
					else {
						cout << "\tX1 dan X2 imaginer" << endl;
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 4:
				menu_utama();
				break;
			
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 2 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 3
void pertemuan_3()
{
	//variable latihan 1 & 2
	int a, b;
	char back;
	int pilihan;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 3 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\t\tOperator Bitwise" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tInput nilai A : ";
					cin  >> a;
					cout << "\tInput nilai B : ";
					cin  >> b;
					cout << endl;
					cout << "\tHasil : " << endl;
					cout << "\t~" << a << " = " << (~a) << endl;
					cout << "\t" << a << " | " << b << " = " << (a | b) << endl;
					cout << "\t" << a << " & " << b << " = " << (a & b) << endl;
					cout << "\t" << a << " ^ " << b << " = " << (a ^ b) << endl;
					cout << "\t" << a << " << " << b << " = " << (a << b) << endl;
					cout << "\t" << a << " >> " << b << " = " << (a >> b) << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\t\tOperator Aritmatika" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tInput nilai A : ";
					cin  >> a;
					cout << "\tInput nilai B : ";
					cin  >> b;
					cout << endl;
					cout << "\tHasil : " << endl;
					cout << "\t" << a << " + " << b << " = " << (a + b) << endl;
					cout << "\t" << a << " - " << b << " = " << (a - b) << endl;
					cout << "\t" << a << " * " << b << " = " << (a * b) << endl;
					cout << "\t" << a << " / " << b << " = " << (a / b) << endl;
					cout << "\t" << a << " % " << b << " = " << (a % b) << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 3:
				menu_utama();
				break;
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 3 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 4
void pertemuan_4()
{
	double f, r, k;
	int c;
	int pilihan;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 4 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\t\tProgram Konversi Suhu" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tMasukkan Suhu : ";
					cin >> c;
					
					f = (1.8 * c) + 32;
					r = 0.4 * c;
					k = c + 273;
					cout << endl;
					cout <<setw(10)<< "=============================================" << endl;
					cout <<setw(10)<< "C" <<setw(10)<< "F" <<setw(10)<< "R" <<setw(10)<< "K" << endl;
					cout <<setw(10)<< "=============================================" << endl;
					cout <<setw(10)<< c <<setw(10)<< f <<setw(10)<< r <<setw(10)<< k  <<endl;
					cout <<setw(10)<< "=============================================" << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 2:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 4 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 5
void pertemuan_5()
{
	//variable latihan1
	float v, s, t;
	//variable latihan2
	string pilihan = " ", JenisKelamin = " ", usia = " ", nama = " ";
	int InputUsia;
	//variable latihan3
	string p, q, r;
	int pilihan2;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 5 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Latihan 3                                                     =" << endl;
		cout << "\t= 4. Study Kasus                                                   =" << endl;
		cout << "\t= 5. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan2;
		
		switch(pilihan2)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 1 |<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << endl;
					cout << "\tInput Jarak : ";
					cin >> s;
					cout << "\tInput Waktu : ";
					cin >> t;
					
					//rumus kecepatan//
					v = s / t;
					
					cout << "\tKecepatan = " << v << " m/s" << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 2 |<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tMasukkan Nama Anda : ";
					cin  >> nama;
					cout << "\tPilihan Jenis Kelamin Anda : " << endl;
					cout << "\tA. Laki - laki" << endl;
					cout << "\tB. Perempuan" << endl;
					cout << "\tInput Pilihan : ";
					cin >> pilihan;
					
					if (pilihan == "A" || pilihan == "a") {
						JenisKelamin = "Laki - laki";
						cout << "\tInput Usia Anda : ";
						cin >> InputUsia;
						if (InputUsia >= 17) {
							usia = " Dewasa";
						} else {
							usia = " Anak - anak";
						}
					}
					
					else if (pilihan == "B" || pilihan == "b") {
						JenisKelamin = "Perempuan";
						cout << "\tInput Usia Anda : ";
						cin >> InputUsia;
						if (InputUsia >= 17) {
							usia = " Dewasa";
						} else {
							usia = " Anak - anak";
						}
					}
					
					else {
						cout << "\tPilihan tidak tersedia!" << endl;
					}
					
					cout << "\n";
					cout << "\tNama saya " << nama << endl;
					cout << "\tSaya adalah " <<  JenisKelamin << usia << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
				
			case 3:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 3 |<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << endl;
					cout << "\tInput nilai P : ";
					cin >> p;
					cout << "\tInput nilai Q : ";
					cin >> q;
					
					if ((p == "B" && q == "B") || (p == "b" && q == "b")) {
						r = "B";
					}
						else {
							r = "S";
						}
						
					cout << "\tHasil P ^ Q : " << r << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
				
			case 4:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>| Latihan Gabungan (1, 2, 3) |<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t1. Latihan 1" << endl;
					cout << "\t2. Latihan 2" << endl;
					cout << "\t3. Latihan 3" << endl;
					cout << "\t4. Keluar" << endl;
					cout << "\tInput Pilihan [1-4] : ";
					cin >> pilihan2;
					
					switch(pilihan2) {
						case 1:
							system("cls");
							cout << "\t======================================================" << endl;
							cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 1 |<<<<<<<<<<<<<<<<<<<<" << endl;
							cout << "\t======================================================" << endl;
							cout << endl;
							cout << "\tInput Jarak : ";
							cin >> s;
							cout << "\tInput Waktu : ";
							cin >> t;
							
							//rumus kecepatan//
							v = s / t;
							
							cout << "\tKecepatan = " << v << " m/s" << endl;
							
							break;
						case 2:
							system("cls");
							cout << "\t======================================================" << endl;
							cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 2 |<<<<<<<<<<<<<<<<<<<<" << endl;
							cout << "\t======================================================" << endl;
							cout << "\tMasukkan Nama Anda : ";
							cin >> nama;
							cout << "\tPilihan Jenis Kelamin Anda : " << endl;
							cout << "\tA. Laki - laki" << endl;
							cout << "\tB. Perempuan" << endl;
							cout << "\tInput Pilihan : ";
							cin >> pilihan;
							
							if (pilihan == "A" || pilihan == "a") {
								JenisKelamin = "Laki - laki";
								cout << "\tInput Usia Anda : ";
								cin >> InputUsia;
								if (InputUsia >= 17) {
									usia = " Dewasa";
								} else {
									usia = " Anak - anak";
								}
							}
							
							else if (pilihan == "B" || pilihan == "b") {
								JenisKelamin = "Perempuan";
								cout << "\tInput Usia Anda : ";
								cin >> InputUsia;
								if (InputUsia >= 17) {
									usia = " Dewasa";
								} else {
									usia = " Anak - anak";
								}
							}
							
							else {
								cout << "\tPilihan tidak tersedia!" << endl;
							}
							
							cout << "\n";
							cout << "\tNama saya " << nama << endl;
							cout << "\tSaya adalah " <<  JenisKelamin << usia << endl;
							break;
							
						case 3:
							system("cls");
							cout << "\t======================================================" << endl;
							cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 3 |<<<<<<<<<<<<<<<<<<<<" << endl;
							cout << "\t======================================================" << endl;
							cout << endl;
							cout << "\tInput nilai P : ";
							cin >> p;
							cout << "\tInput nilai Q : ";
							cin >> q;
							
							if ((p == "B" && q == "B") || (p == "b" && q == "b")) {
								r = "B";
							}
								else {
									r = "S";
								}
								
							cout << "\ttHasil P ^ Q : " << r << endl;
							break;
						case 4:
							exit(0);
							break;
						default:
							cout << "\tPilihan tidak tersedia. Silahkan coba lagi!" << endl;
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ? ";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 5:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 5 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 6
void pertemuan_6()
{
	//variable latihan1
	float p, l, K, L, D;
	int nomor;
	//variable latihan2
	string nama;
	int gol, jml_jam, total, lembur;
	int pilihan;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 6 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 1 |<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\tMENU EMPAT PERSEGI PANJANG" << endl;
					cout << "\t\t1. Hitung Luas" << endl;
					cout << "\t\t2. Hitung Keliling" << endl;
					cout << "\t\t3. Hitung Panjang Diagonal" << endl;
					cout << "\t\t4. Keluar Program" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tPilih Nomor : ";
					cin >> nomor;
					
					switch(nomor){
						case 1:
							system("cls");
							cout << "\t===========================================" << endl;
							cout << "\t\t\tHitung Luas" << endl;
							cout << "\t===========================================" << endl;
							cout << endl;
							cout << "\tInput Panjang : ";
							cin  >> p;
							cout << "\tInput Lebar : ";
							cin >> l;
							
							//rumus luas
							L = p * l;
							
							cout << "\tLuas : "<< L << " cm" << endl;
							break;
						
						case 2:
							system("cls");
							cout << "\t===========================================" << endl;
							cout << "\t\t\tKeliling" << endl;
							cout << "\t===========================================" << endl;
							cout << endl;
							cout << "\tInput Panjang : ";
							cin  >> p;
							cout << "\tInput Lebar : ";
							cin >> l;
							
							//rumus keliling
							K = 2 * (p * l);
							
							cout << "\tKeliling : "<< K << " cm" << endl;
							break;
							
						case 3:
							system("cls");
							cout << "\t===========================================" << endl;
							cout << "\t\t\tPanjang Diagonal" << endl;
							cout << "\t===========================================" << endl;
							cout << endl;
							cout << "\tInput Panjang : ";
							cin  >> p;
							cout << "\tInput Lebar : ";
							cin >> l;
							
							//rumus diagonal
							D = sqrt((p * p) + (l * l));
							
							cout << "\tDiagonal : "<< D << " cm" << endl;
							break;
							
						case 4:
							exit(0);
							break;
						
						deafult:
							cout << "\tPilihan nomor tidak tersedia!" << endl;
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
				
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>| LATIHAN 2 |<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tJenis-jenis Golongan : " << endl;
					cout << "\t1. Golongan A" << endl;
					cout << "\t2. Golongan B" << endl;
					cout << "\t3. Golongan C" << endl;
					cout << "\t4. Golongan D" << endl; 
					cout << endl;
					
					cout << "\tMasukan Nama Karyawan : ";
					cin  >> nama;
					cout << "\tMasukan Golongan (1-4): ";
					cin >> gol;
					cout << "\tMasukan Jumlah Jam : ";
					cin >> jml_jam;
					
					switch(gol){
					case 1:
						cout << "\tGolongan A = 4000/jam" << endl;
						if (jml_jam <= 48){
							total = jml_jam * 4000;
						}
							else {
								lembur = (jml_jam - 48) * 3000;
								total = lembur + (48 * 4000);
							}
							
						break;
					
					case 2:
						cout << "\tGolongan B = 5000/jam" << endl;
						if (jml_jam <= 48){
							total = jml_jam * 5000;
						}
							else {
								lembur = (jml_jam - 48) * 3000;
								total = lembur + (48 * 5000);
							}
						break;
						
					case 3:
						cout << "\tGolongan C = 6000/jam" << endl;
						if (jml_jam <= 48){
							total = jml_jam * 6000;
						}
							else {
								lembur = (jml_jam - 48) * 3000;
								total = lembur + (48 * 6000);
							}
						break;
					
					case 4:
						cout << "\tGolongan D = 7000/jam" << endl;
						if (jml_jam <= 48){
							total = jml_jam * 7000;
						}
							else {
								lembur = (jml_jam - 48) * 3000;
								total = lembur + (48 * 7000);
							}
						break;
					
					default:
						cout << "Golongan Tidak Tersedia" << endl;
					}
					cout << "\n";
					cout << "\tNama Karyawan : " << nama << endl;
					cout << "\tGolongan : " << gol << endl;
					cout << "\tJumlah Jam Kerja : " << jml_jam << endl;
					cout << "\tUpah : " << total << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 3:
				menu_utama();
				break;
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 6 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 7
void pertemuan_7()
{
	//variable latihan1
	int a, jumlah;
	//variable latihan2
	int bil, c;
	long faktorial = 1;
	char back;
	int pilihan;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 7 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tInput jumlah pengulangan : ";
					cin >> jumlah;
					cout << endl;
					
					for (int a=1; a<=jumlah; a++) {
						cout << "\tI Love U UNPAM" << endl;
					}
					getch();
					cout << "Apakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\t\t\tProgram Faktorial" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tInput bilangan yang akan dihitung : ";
					cin >> bil;
				
					cout << endl;
					cout <<"\t"<< bil << "! = ";
					while ( bil >= 1) {
						faktorial *= bil;
						
						if (c != 1){
							cout << bil << " x ";
						} else {
							cout << bil << " = ";
						}
						bil--;
					}
					cout << faktorial << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
			case 3:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 7 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 8 
void pertemuan_8()
{
	//variable latihan1
	float absensi, max, uts, uas, tugas, total=0;
	float n_absensi=0, n_tugas=0, n_uts=0, n_uas=0;
	string nama=" ", grade=" ";
	//variable latihan2
	int pilihan;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 8 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Latihan 3                                                     =" << endl;
		cout << "\t= 4. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tMasukan Nama : ";
					getline(cin, nama);
					cout << "\tMasukan Jumlah Realisasi : ";
					cin >> max;
					cout << "\tMasukan Jumlah Absensi : ";
					cin >> absensi;
					
					n_absensi = absensi / max * 10;
					
					cout << "\tMasukan Nilai Tugas : ";
					cin >> tugas;
					n_tugas = tugas * 20 / 100;
					
					cout << "\tMasukan Nilai UTS : ";
					cin >> uts;
					n_uts = uts * 30 / 100;
					
					cout << "\tMasukan Nilai UAS : ";
					cin >> uas;
					n_uas = uas * 40 / 100;
					
					total = n_absensi + n_tugas + n_uts + n_uas;
					
					if (total >= 80){
						grade = "A";
					}
						else if (total >= 70){
							grade = "B";
						}
							else if (total >= 60){
								grade = "C";
							}
								else if (total >= 55){
									grade = "D";
								}
									else {
										grade = "E";
									}
									
					cout << "\tNama : " << nama << endl;
					cout << "\tTotal Nilai : " << total << endl;
					cout << "\tGrade : " << grade;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					semester1:
					system("cls");
					
					cout << "\tMasukan nilai Algoritmamu : ";
					cin >> total;
					if (total < 55){
						cout << "\tKamu mengulang semester 1" << endl;
						getch();
						goto semester1;
					}
					cout << "\tFinish" << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
				
			case 3:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 3 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					menu:
					system("cls");
					cout << "\t1. Latihan 1" << endl;
					cout << "\t2. Latihan 2" << endl;
					cout << "\tMasukkan Pilihan : ";
					cin >> pilihan;
					
					switch(pilihan)
					{
						case 1:
							cout << "\tMasukan Nama : ";
							getline(cin, nama);
							cout << "\tMasukan Jumlah Realisasi : ";
							cin >> max;
							cout << "\tMasukan Jumlah Absensi : ";
							cin >> absensi;
							
							n_absensi = absensi / max * 10;
							
							cout << "\tMasukan Nilai Tugas : ";
							cin >> tugas;
							n_tugas = tugas * 20 / 100;
							
							cout << "\tMasukan Nilai UTS : ";
							cin >> uts;
							n_uts = uts * 30 / 100;
							
							cout << "\tMasukan Nilai UAS : ";
							cin >> uas;
							n_uas = uas * 40 / 100;
							
							total = n_absensi + n_tugas + n_uts + n_uas;
							
							if (total >= 80){
								grade = "A";
							}
								else if (total >= 70){
									grade = "B";
								}
									else if (total >= 60){
										grade = "C";
									}
										else if (total >= 55){
											grade = "D";
										}
											else {
												grade = "E";
											}
											
							cout << "\tNama : " << nama << endl;
							cout << "\tTotal Nilai : " << total << endl;
							cout << "\tGrade : " << grade;
							break;
						
						case 2:
							system("cls");
							
							cout << "\tMasukan nilai Algoritimamu : ";
							cin >> total;
							if (total < 55){
								cout << "\tKamu mengulang semester 1" << endl;
								getch();
								goto semester1;
							}
								cout << "\tFinish" << endl;
							break;
						
						default:
							cout << "\tMaaf, pilihan anda tidak tersedia!" << endl;
							getch();
							goto menu;
							
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 4:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 8 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 9
void pertemuan_9()
{
	//variable latihan1&2
	int a, b;
	//variable latihan3
	char loop;
	//variable latihan4
	int harga_buku = 3000, harga_pensil = 1000, total = 0;
	string nama_barang = " ";
	int pilihan, uang, bayar, total_bayar = 0, kembalian;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 9 ============================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Latihan 2                                                     =" << endl;
		cout << "\t= 3. Latihan 3                                                     =" << endl;
		cout << "\t= 4. Study Kasus                                                   =" << endl;
		cout << "\t= 5. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 1 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tMasukan A : ";
					cin >> a;
					
					for (int x=0; a>x; a--){
						cout << "\tAngka : " << a << endl;
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
			
			case 2:
				do {
					system("cls");
					cout << "\t======================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ LATIHAN 2 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t======================================================" << endl;
					cout << "\tMasukkan Nilai Awal : ";
					cin >> a;
					cout << "\tMasukkan Batas Nilai : ";
					cin >> b;
					
					for (int x=b; a<=x; a++){
						cout << "\tAngka ke - " << a << endl;	
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
				
			case 3:
				do {
					system("cls");
					cout << "======================================================" << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>[ LATIHAN 3 ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "======================================================" << endl;
					do{
						cout << "\tSemester 1" << endl;
						cout << "\tKamu ingin mengulang di semester 1 (Y/T) : ";
						cin >> loop;
					} while(loop == 'Y' || loop == 'y');
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
			
			case 4:
				do {
					cout << "\t========================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ STUDY KASUS ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t========================================================" << endl;
					do{
						system("cls");
						cout << "\t1. Buku = Rp. 3000"   << endl;
						cout << "\t2. Pensil = Rp. 1000" << endl;
						cout << "\tMasukkan Pilihan : ";
						cin >> pilihan;
						
						switch(pilihan)
						{
							case 1:
								cout << "\tKamu membeli buku" << endl;
								total = harga_buku + total;
								nama_barang = nama_barang + ",Buku";
								break;
							case 2:
								cout << "\tKamu membeli pensil" << endl;
								total = harga_pensil + total;
								nama_barang = nama_barang + ", Pensil";
								break;
							default:
								cout << "\tBarang yang anda pilih tidak tersedia" << endl;
						}
						
						cout << "\tApakah anda ingin berbelanja lagi [Y/T] : ";
						cin >> loop;
					} while (loop == 'Y' || loop == 'y');
					
					cout << "\tAnda membeli " << nama_barang << " dengan harga = Rp. " << total << endl;
					
					do{
						cout << "\tMasukkan Uang : ";
						cin >> bayar;
						total_bayar = total_bayar + bayar;
						if (total_bayar < total ){
							cout << "\tUang yang anda masukkan kurang Rp. " << total - total_bayar << endl;
						}
					} while(total_bayar < total);
					
					kembalian = total_bayar - total;
					
					cout << "\n\n";
					cout << "\t===================== RIMART ======================" << endl;
					cout << "\t===================================================" << endl;
					cout << "\tBarang yang di beli : " << nama_barang               << endl;
					cout << "\tHarga Jual : " << total                              << endl;
					cout << "\t===================================================" << endl;
					cout << "\tTotal : " << total                                   << endl;
					cout << "\tTunai : " << total_bayar                             << endl;
					cout << "\tKembali : " << kembalian                             << endl;
					cout << "\t===================================================" << endl;
					cout << "\t===== Terimakasih. Selamat Berbelanja Kembali =====" << endl;
					cout << "\t\t\tSMS 085777282844"                                << endl;
					cout << "\t\tEmail : arisupriatna65@gmail.com"                  << endl;
					cout << "\t===================================================" << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while(back == 'Y' || back == 'y');
				break;
			case 5:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 9 [Y/T] ? ";
		cin >> back;
	}while(back == 'Y' || back == 'y');
}

//pertemuan 10
void pertemuan_10()
{
	int total = 100000, total_bayar = 0, kembalian, bayar;
	int pilihan;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 10 ===========================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t========================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ Latihan 1 ]<<<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t========================================================" << endl;
					cout << endl;
					cout << "\t================================" << endl;
					cout << "\tTotal Belanja Kamu : " << total << endl;
					do{
						cout << "\tMasukkan Uang : ";
						cin >> bayar;
						total_bayar = total_bayar + bayar;
						if (total_bayar < total ){
							cout << "\tUang yang anda masukkan kurang Rp. " << total - total_bayar << endl;
						}
					} while(total_bayar < total);
					
					cout << "\t================================" << endl;
					cout << "\tTotal Belanja : Rp. " << total << endl;
					cout << "\tPembayaran : Rp. " << total_bayar << endl;
					cout << "\tKembalian : Rp. " << total_bayar - total << endl;
					cout << "\t================================" << endl; 
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 2:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 10 [Y/T] ? ";
		cin >> back;
	} while(back == 'Y' || back == 'y');
}

//pertemuan 11
void pertemuan_11()
{
	string mataKuliah[100], namaMahasiswa[20], grade[100];
	int sks[10], jumlahHadir[100], nilaiTugas[100], nilaiUTS[100], 
		nilaiUAS[100], nilaiAngka[100], jumlahMahasiswa, nim[15];
	int pilihan;
	char back;
		
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 11 ===========================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1.  STUDY KASUS                                                  =" << endl;
		cout << "\t= 2. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t========================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ STUDY KASUS ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t========================================================" << endl;
					cout << "\tMasukkan Jumlah Mahasiswa : ";
					cin >> jumlahMahasiswa;
					for (int a=1; a <= jumlahMahasiswa; a++) {
						cout << "\tMasukkan Mata Kuliah : ";
						cin  >> mataKuliah[a];
						cout << "\tMasukkan Jumlah SKS : ";
						cin  >> sks[a];
						cout << "\tInput Nama Mahasiswa ke " << a << " : ";
						cin  >> namaMahasiswa[a];
						cout << "\tInput NIM : ";
						cin  >> nim[a];
						cout << "\tInput Jumlah Hadir : ";
						cin  >> jumlahHadir[a];
						cout << "\tInput Nilai Tugas : ";
						cin  >> nilaiTugas[a];
						cout << "\tInput Nilai UTS : ";
						cin  >> nilaiUTS[a];
						cout << "\tInput Nilai UAS : ";
						cin  >> nilaiUAS[a];
						
						nilaiAngka[a] = ((jumlahHadir[a] * 10/100) + (nilaiTugas[a] * 20/100) + 
										 (nilaiUTS[a] * 30/100) + (nilaiUAS[a] * 40/100));
						
						if (nilaiAngka[a] >= 80) {
							grade[a] = "A";
						}
						else if (nilaiAngka[a] >= 70) {
							grade[a] = "B";
						}
						else if (nilaiAngka[a] >= 60) {
							grade[a] = "C";
						}
						else if (nilaiAngka[a] >= 50) {
							grade[a] = "D";
						}
						else {
							grade[a] = "E";
						}
						
						cout << endl;
					}
					
					system("cls");
					for (int a=1; a<=jumlahMahasiswa; a++) {
						cout << "Mata Kuliah : " << mataKuliah[a] << endl;
						cout << "Jumlah SKS : " << sks[a] << endl;
						cout << "======================================================================================" << endl;
						cout << "| NIM "          << setw(15) << "| Nama Mahasiswa " << setw(15) 
							 << "| Jumlah Hadir " << setw(10) << "| Tugas "          << setw(10) 
							 << "| UTS "          << setw(10) << "| UAS "            << setw(10) 
							 << "| Nilai Angka "  << setw(10) << "| Grade "          << endl;
						cout << "======================================================================================" << endl;
						cout << nim[a]            << setw(10) << namaMahasiswa[a]    << setw(15) 
						     << jumlahHadir[a]    << setw(15) << nilaiTugas[a]       << setw(12) 
							 << nilaiUTS[a]       << setw(10) << nilaiUAS[a]         << setw(10) 
							 << nilaiAngka[a]     << setw(10) << grade[a]            << endl;
						cout << endl;
					}
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 2:
				menu_utama();
				break;	
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 11 [Y/T] ? ";
		cin >> back;
	} while (back == 'Y' || back == 'y');
}

//pertemuan 12
void pertemuan_12()
{
	//variable latihan1
	int Jumlah;
	string Mahasiswa[100];
	//variable latihan2
	string kodeBuah[5];
	int jumlahBuah, j;
	char Back;
	string namaPembeli = " ", tanggal = " ",namaBarang = " ";
	int pilihan;
	char back;
	
	do {
		system("cls");
		cout << "\n\n";
		cout << "\t====================================================================" << endl;
		cout << "\t=========================== PERTEMUAN 12 ===========================" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\t========================== MENU UTAMA : ============================" << endl;
		cout << "\t= 1. Latihan 1                                                     =" << endl;
		cout << "\t= 2. STUDY KASUS                                                   =" << endl;
		cout << "\t= 3. Kembali                                                       =" << endl;
		cout << "\t====================================================================" << endl;
		cout << "\tSilahkan Masukkan Pilihan Anda : ";
		cin  >> pilihan;
		
		switch(pilihan)
		{
			case 1:
				do {
					system("cls");
					cout << "\t========================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ Latihan 1 ]<<<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t========================================================" << endl;
					cout << endl;
					cout << "\tMasukkan Jumlah Mahasiswa : ";
					cin >> Jumlah;
					for (int a=1; a<=Jumlah; a++){
						cout << "\tMasukkan Mahasiswa Ke " << a << " : ";
						cin >> Mahasiswa[a];
					}
					cout << endl;
					for (int a=1; a<=Jumlah; a++){
						cout << "\tMahasiswa " << a << " : " << Mahasiswa [a] << endl;
					} 
					getch();
					cout << endl;
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				}while (back == 'Y' || back == 'y');
				break;
				
			case 2:
				do {
					system("cls");
					cout << "\t========================================================" << endl;
					cout << "\t>>>>>>>>>>>>>>>>>>>>>[ STUDY KASUS ]<<<<<<<<<<<<<<<<<<<<" << endl;
					cout << "\t========================================================" << endl;
					cout << endl;
					do {
						system("cls");
						cout << "\t========================================" << endl;
						cout << "\tSelamat Datang di Toko Buah"      << endl;
						cout << "\t========================================" << endl;
						cout << endl;
						cout << "\t========================================" << endl;
						cout << "\tKode Buah" <<setw(10)<< "Buah" << endl;
						cout << "\t========================================" << endl;
						cout << setw(5) << "\tA01" << setw(15) << "Apel" << endl;
						cout << setw(5) << "\tA02" << setw(15) << "Jeruk" << endl;
						cout << setw(5) << "\tA03" << setw(15) << "Mangga" << endl;
						cout << "\t========================================" << endl;
						cout << endl;
						cout << "\t========================================" << endl;
						cout << "\tJumlah buah yang di beli : "; cin >> jumlahBuah;
						
						for (j=1; j<=jumlahBuah; j++) {
							cout << "\t" << j << ". Masukkan kode buah : "; 
							cin >> kodeBuah[j];
						}
						
						system("cls");
						cout << "\t======================================================" << endl;
						cout << "\tKode Buah" <<setw(10)<< "Buah" << endl;
						cout << "\t======================================================" << endl;
						for (j=1; j<=jumlahBuah; j++) {
							if (kodeBuah[j] == "A01" || kodeBuah[j] == "a01") {
								cout << setw(5) << kodeBuah[j] <<setw(15)<< "Apel\n" << endl;
								namaBarang += "Apel, ";
							}
							else if (kodeBuah[j] == "A02" || kodeBuah[j] == "a02") {
								cout << setw(5) << kodeBuah[j] <<setw(15)<< "Jeruk\n" << endl;
								namaBarang += "Jeruk, ";
							}
							else if (kodeBuah[j] == "A03" || kodeBuah[j] == "a03") {
								cout << setw(5) << kodeBuah[j] <<setw(15)<< "Mangga\n" << endl;
								namaBarang += "Mangga, ";
							}
							else {
								cout << "\tKode Salah!!!" << endl;
							}
						}
						cout << "\t======================================================" << endl;
						
						cout << "\tApakah anda ingin membeli lagi [Y/T] ? ";
						cin >> Back;
					} while(Back == 'Y' || Back == 'y');
					cout << "\tBuah yang dibeli : " << namaBarang << endl;
					getch();
					cout << "\tApakah ingin menghitung lagi [Y/T] ?";
					cin >> back;
				} while(back == 'Y' || back == 'y');
				break;
			case 3:
				menu_utama();
				break;
			default:
				cout << "\tPilihan tidak tersedia!" << endl;
		}
		cout << endl;
		cout << "\tApakah Anda ingin kembali ke menu pertemuan 12 [Y/T] ? ";
		cin >> back;
	}while (back == 'Y' || back == 'y');
}

//keluar program
void keluar_program()
{
	cout << endl;
	cout << "\t====================================================================" << endl;
	cout << "\t============= Terimakasih Telah Mengunakan Aplikasi Ini ============" << endl;
	cout << "\t====================================================================" << endl;
	exit(0);
	
}
