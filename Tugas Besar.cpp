/* TUGAS BESAR DASAR PEMROGRAMAN
APLIKASI TOKO OBAT
NAMA ANGGOTA:	YULIANTO_PAMBUDI (14116098)
				RODLIYATUN NICHLAH HIDAYATI (14116068)
				AYU RAHMAWATI (14116099)*/

#include<string.h>
#include<fstream>
#include<windows.h>
#include<iostream>
#include<iomanip>
using namespace std;

//fungsi diagnosis penyakit untuk submenu diagnosis
string diagnosis(int g1,int g2,int g3){
	
	string a,b,c;
	
	/* Operasi AND (&&) 3 variabel diutamakan terlebih dahulu,
	// AND (&&) 2 variabel selanjutnya, terakhir adalah operasi OR (||)
	
	nb = nafas bau
	gg gigi goyang
	gmb = gusi merah dan bengkak
	lpb = luka pada bibir
	sg = sakit tenggorokan
	g = gatal
	pu = pusing
	bm = bintik merah
	bptn = badan panas tak nyaman
	km = kulit memerah
	p = pusmul
	m = muntah
	n = nyeri
	rp = rasa putar
	l = lemes
	bp = badan panas
	me = melilit
	pdl = pucat dan lemes
	pc = pucat
	ll = lesu lelah
	bpd = badan panas dingin
	hb = hidung berair
	
	/* memakai istilah pu,m dan n yang artinya pusing muntah dan nyeri,
	utk mempercepat proses coding 
	dan compiling*/
	

	switch(g1){
		case 1 : a = "p";break;
		case 2 : a = "g";break;
		case 3 : a = "nb";break;
		case 4 : a = "pc";break;

		default : break;
	}
	
	switch(g2){
			case 1 : b = "m";break;
			case 2 : b = "l";break;
			case 3 : b = "me";break;
			case 4 : b = "pu";break;
			case 5 : b = "bptn";break;
			case 6 : b = "gg";break;
			case 7 : b = "lpb";break;
			case 8 : b = "ll";break;
			case 9 : b = "bpd";break;
			default : break;
			
	}
	
	switch(g3){
			case 1 : c = "n";break;
			case 2 : c = "rp";break;
			case 3 : c = "bp";break;
			case 4 : c = "pdl";break;
			case 5 : c = "bm";break;
			case 6 : c = "km";break;
			case 7 : c = "gmb";break;
			case 8 : c = "sg";break;
			case 9 : c = "pu";break;
			case 10 : c = "p";break;
			case 11 : c = "hb";break;
	}
		
	/*jika a && b && c && = true maka diagnosis penyakit yang keluar adalah yang 
	paling akurat, kami telah membuat sebuah kumpulan gejala-gejala pada penyakit yang 
	dicantumkan dalam program ini yang kami himpun dari berbagai sumber*/
	
	if(a == "p" && b == "m" && c == "n"){
		return "migrain";
	}else if(a == "p" && b == "m" && c == "rp"){
		return "vertigo"; 
	}else if(a == "p" && b == "m" && c == "bp"){
		return "masukangin";
	}else if(a == "p" && b == "m" && c == "pdl"){
		return "masukangin";
	}else if(a=="p" && b == "l" &&c == "bp"){
		return "demam";
	}else if ( a == "p" && b == "me" && c == "rp"){
		return "masukangin";
	}else if(a=="p" && b == "me" && c == "pdl"){
		return "maag";
	}else if(a=="g" && b=="pu" && c=="bm"){
		return "cacar";
	}else if(a=="g" && b=="bptn" && c=="km"){
		return "herpes";
	}else if(a=="nb" && b=="gg" && c== "gmb"){
		return "sakitgigi";
	}else if (a=="nb" && b == "lpb" && c=="sg"){
		return "sariawan";
	}else if(a=="pc" && b=="ll" && c=="pu"){
		return "anemia";
	}else if(a=="pc" && b=="bpd" && c=="p"){
		return "tifus";
	}else if(a=="pc" && b=="bpd" && c=="hb"){
		return "flu";
	}else if(a=="p" && b=="pu" && c=="n"){
		return "migrain";
	}
	
	/* jika a && b = true  (berhubungan) tetapi c tidak berhubungan maka diagnosis 
	yang dihasilkan adalah  penyakit yang mendekati gejala a dan b */
	 
	else if(a== "p"&&b=="m"){
		return "migrain_vertigo"; // yaitu obat yang mendekati atau #2	
	}else if(a=="pc" && b=="bpd"){
		return "typus/flu";
	}
	
	/* jika a || b || c = true maka diagnosis yang dihasilkan adalah salah satu 
	penyakit dari gejala yang timbul */
	
	else if(a=="p" || b=="l" || b=="me" || c=="bp" || c=="pdl"){ //jika gejala 1,2, dan 3 tidak saling berhubungan
		if(b=="l"){
			return "lemes";
		}else if(b=="me"){
			return "melilit";
		}else if (c=="bp"){
			return "badanpanas";
		}else if(c=="pdl"){
			return "pucat+lemes";
		}else{
			
		}
	}else if (a=="p"||b=="m"||c=="n" || c=="rp"){
		if(c== "n"){
			return "nyeri";
		}else if(c == "rp"){
			return "rasa_berputar";
		}else if (a== "p"){
			return "pusing+mual";
		}else if (b == "m"){
			return "muntah";
		}else{
		}
	}else if(a=="g" || b=="pu" || b=="bptn" || c=="bm"||c=="km"){
		if(a=="g"){
			return "alergi";
		}else if(b=="pu"){
			return"pusing";
		}else if(b=="bptn"){
			return"badan_panas";
		}else if(c=="bm"){
			return "cacar";
		}else if(c=="km"){
			return "cacar";
		}
	}else if(a=="nb" || b=="gg" || b=="lpb" || c=="gmb" || c=="sg"){
		if(a=="nb"){
			return "nafasbau";
		}else if(b=="gg"){
			return "gigigoyang";
		}else if(b=="lpb"){
			return "lukapadabibir";
		}else if(c=="gmb"){
			return  "gusi_merah_bengkak";
		}else if(c=="sg"){
			return "sakit_tenggorokan";
		}else{
		}
	}else if(a=="pc" || b=="bpd" || c=="p" || c=="hb"){
		if(a=="pc"){
			return "pucat";
		}else if(b=="bpd"){
			return"badan_panas_dingin";
		}else if(c=="p"){
			return"pusing+mual";
		}else if(c=="hb"){
			return"hidung_berair";
		}else{
		}
	}else if(a=="pc" || b=="ll" || c=="pu"){
		if(a=="pc"){
			return"pucat";
		}else if(b=="ll"){
			return"lesu_lelah";
		}else if(c=="pu"){
			return"pusing";
		}else{
		}
	}
	
	else{
		return " Maaf penyakit tidak ditemukan ";
	}
	
}
//membuat garis
void garis(){
	cout<<"--------------------------------"<<endl;
}
//fungsi untuk melihat list daftar obat
string list(int pil){
	switch(pil){
				case 1 : return "obatalergi.txt";break;
				case 2 : return "obatanemia.txt";break;
				case 3 : return "obatbatuk.txt";break;
				case 4 : return "obatcacar.txt";break;
				case 5 : return "obatdemam.txt";break;
				case 6 : return "obatflu.txt";break;
				case 7 : return "obatherpes.txt";break;
				case 8 : return "obatmaag.txt";break;
				case 9 : return "obatmata.txt";break;
				case 10 : return "obatmigrain.txt";break;
				case 11 : return "obatsakitgigi.txt";break;
				case 12 : return "obatsariawan.txt";break;
				case 13 : return "obattifus.txt";break;
				case 14 : return "obatvertigo.txt";break;
		
				default :break;
			}
}
int main(){
	string merk,konfirm,obat,daftar;
	int jumlah,pilihan,g1,g2,g3;
	ifstream in;
	
	system ("color 1f"); //membuat background warna command prompt menjadi biru
	
	//label goto untuk kembali ke menu awal
	awal :
	system("cls");
	cout<<" Selamat Datang di Toko Obat A3 "<<endl;
	garis();
	
	//tampilan menu utama
	cout<<"	Pilih Menu "<<endl;
	cout<<"\n";
	cout<<"1. Beli Obat "<<endl;
	cout<<"2. List Daftar Obat "<<endl;
	cout<<"3. Diagnosis Penyakit "<<endl;
	cout<<"\n";
	cout<<"Pilih Menu : ";
	cin>>pilihan;
	system("cls");
	
	//proses menu utama
	switch(pilihan){
		case 1 : goto beli;break;
		case 2 : goto list;break;
		case 3 : goto diagnosis;break;
		default : cout<<"Input Salah "<<endl;
		goto akhir;break;
	}
	
	//sub menu beli obat
	beli :
		cout<<"Masukkan Nama Obat : ";
		cin>>merk;
		cout<<"Masukkan Jumlah Obat yang ingin dibeli : ";
		cin>>jumlah;
		
		system("cls");
		
		cout<<" Struk Pembelian Obat "<<endl;
		garis();
		cout<<" Nama Obat : "<<merk<<endl;
		cout<<" Jumlah yang dibeli : "<<jumlah<<endl;
		cout<<endl;
		cout<<" Terima Kasih Telah Belanja di Toko Obat A3 "<<endl;
		cout<<" Semoga Lekas Sembuh "<<endl;
		garis();
		
			
		cout<<"Ada yang bisa dibantu lagi ? <Y/N> ?  : ";
		cin>>konfirm;
		if(konfirm == "Y"){
			goto awal;
		}else if (konfirm == "y"){
			goto awal;
		}else if(konfirm == "N"){
			goto akhir;
		}else if (konfirm == "n"){
			goto akhir;
		}
		
	//submenu list daftar obat
	list:
		cout<<"1.  Obat Alergi "<<endl;
		cout<<"2.  Obat Anemia "<<endl;
		cout<<"3.  Obat Batuk "<<endl;
		cout<<"4.  Obat Cacar "<<endl;
		cout<<"5.  Obat Demam "<<endl;
		cout<<"6.  Obat Flu   "<<endl;
		cout<<"7.  Obat Herpes"<<endl;
		cout<<"8.  Obat Maag "<<endl;
		cout<<"9.  Obat Mata "<<endl;
		cout<<"10. Obat Migrain"<<endl;
		cout<<"11. Obat Sakit Gigi "<<endl;
		cout<<"12. Obat Sariawan "<<endl;
		cout<<"13. Obat Tifus "<<endl;
		cout<<"14. Obat Vertigo "<<endl;
		
	
		cout<<"\n";
		cout<<"Masukkan Pilihan : "<<endl;
		cin>>pilihan;
		system("cls");
		daftar = list(pilihan);
		in.open(daftar.c_str());
		while(!in.eof()){
			getline(in,obat);
			cout<<obat<<endl;
		}	
		
		cout<<"Ada yang bisa dibantu lagi ? <Y/N> ?  : ";
		cin>>konfirm;
		if(konfirm == "Y"){
			goto awal;
		}else if (konfirm == "y"){
			goto awal;
		}else if(konfirm == "N"){
			goto akhir;
		}else if (konfirm == "n"){
			goto akhir;
		}
	
	//submenu diagnosis penyakit	
	diagnosis:

	cout<<"   Pilih Gejala 1 "<<endl;
	garis();
	cout<<"1. Pusing dan Mual "<<endl;
	cout<<"2. Gatal Pada Kulit "<<endl;
	cout<<"3. Nafas Tidak Sedap "<<endl;
	cout<<"4. Pucat				"<<endl;
	cout<<"\t\t"<<endl;
	cout<<"\n";
	cout<<"Pilih Gejala 1 : ";
	cin>>g1;
	
	system("cls");
	
	cout<<"   Pilih Gejala 2 "<<endl;
	garis();
	cout<<"1. Muntah "<<endl;
	cout<<"2. Badan Lemas "<<endl;
	cout<<"3. Melilit "<<endl;
	cout<<"4. Pusing "<<endl;
	cout<<"5. Badan Panas Tak Nyaman "<<endl;
	cout<<"6. Gigi Goyang "<<endl;
	cout<<"7. Luka Pada Bibir "<<endl;
	cout<<"8. Lesu dan Lelah  "<<endl;
	cout<<"9. Badan Panas Dingin "<<endl;
	cout<<"\t\t"<<endl;
	cout<<endl;
	cout<<"Pilih Gejala 2 : ";
	cin>>g2;
	
	system("cls");
	
	cout<<"   Pilih Gejala 3 "<<endl;
	garis();
	cout<<"1. Nyeri Pada Sisi Kepala "<<endl;
	cout<<"2. Rasa Berputar "<<endl;
	cout<<"3. Badan Panas "<<endl;
	cout<<"4. Pucat dan Lemas "<<endl;
	cout<<"5. Bintik Merah "<<endl;
	cout<<"6. Kulit Memerah "<<endl;
	cout<<"7. Gusi Merah dan Bengkak "<<endl;
	cout<<"8. Sakit Tenggorokan "<<endl;
	cout<<"9. Pusing "<<endl;
	cout<<"10. Pusing dan Mual "<<endl;
	cout<<"11. Hidung Berair "<<endl;
	cout<<"\t\t"<<endl;
	cout<<"Pilih Gejala 3 : ";
	cin>>g3;	
	
	system("cls");
		
		//memanggil fungsi diagnosis
	
	{
		//memanggil fungsi diagnosis yang disimpan di variabel nama obat
		string namaobat = diagnosis(g1,g2,g3);
		//membuat sebuah rangkaian nama string untuk disimpan ke dalam variabel filenobat
		string fileobat = "obat"+namaobat+".txt";	
	
		cout<<"Mungkin penyakit Anda adalah : "<<namaobat<<endl;
		cout<<endl;
		cout<<"Apakah Anda ingin melihat list obat "<<namaobat<<" ? <Y/N>  : ";
		cin>>konfirm;
		
		if(konfirm == "y"){
			in.open(fileobat.c_str());
			while(!in.eof()){
			getline(in,obat);	
			cout<<obat<<endl;
			}
		}else if(konfirm == "Y"){
			in.open(fileobat.c_str());
			while(!in.eof()){
			getline(in,obat);	
			cout<<obat<<endl;
			}
		}else if (konfirm == "n"){
		}else if (konfirm == "N"){
		}
	}	
		//konfirmasi akhir
		konfirm :
		garis();
		cout<<"\n";
		cout<<"Ada yang bisa dibantu lagi ? <Y/N>  : ";
		cin>>konfirm;
		
		if(konfirm == "Y"){
			goto awal;
		}else if (konfirm == "y"){
			goto awal;
		}else if(konfirm == "N"){
		
		}else if (konfirm == "n"){
		}
		
		akhir:
			system("cls");
			cout<<"Terimakasih Telah Memakai Software ini :D "<<endl;
			cout<<"\n";
		system ("pause");
		return 0;
}
