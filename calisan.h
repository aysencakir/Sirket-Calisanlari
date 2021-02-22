#pragma once
#include"muhasebeBilgileri.h"
#include"departmanBilgileri.h"
#include"temelBilgiler.h"
#include<iostream>
#include<string>
using namespace std;
class calisan:public muhasebeBilgileri,public departmanBilgileri,public temelBilgiler
{
public:
	
	 calisan();
};

