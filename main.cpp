#pragma once
#include<iostream>
#include<string>
#include"calisan.h"
#include"departmanBilgileri.h"
#include"temelBilgiler.h"
#include"muhasebeBilgileri.h"
using namespace std;
int main()
{
	calisan calisan1;
	calisan1.birim = "Bilgi Islem";
	calisan1.adi = "Aysen";
	calisan1.soyadi = "Cakir";
	calisan1.kimlikNo= 5694729;
	
	calisan1.maas = 13000;
	
	calisan1.mudurAdi = "Ali";
	 
	calisan1.sgkNo = 1786548;
	

	cout << "Adi:" << calisan1.adi<<"\n";
	cout << "Soyadi:" << calisan1.soyadi << "\n";
	cout << "Birimi:" << calisan1.birim << "\n";
	cout << "Kimlik Numarasi:" << calisan1.kimlikNo << "\n";
	cout << "Maasi:" << calisan1.maas << "\n";
	cout << "Mudur Adi:" << calisan1.mudurAdi << "\n";
	cout << "SGK Numarasi:" << calisan1.sgkNo << "\n";
	return 0;

}