/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bryan Nguyen
 *
 * Created on September 13, 2017, 12:55 PM
 */
#include <cstdlib>
#include <stdio.h>
#include <typeinfo>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int dec, nbase;
    printf("Enter a decimal number\n");
    scanf("%u", &dec);  //storing unsigned decimal
    printf("Enter a new base between 2 and 36 inclusive\n");
    scanf("%u", &nbase); //storing new base
    
    char base[nbase]; // up to inputted base
    int base10[nbase];//base 10 up to inputted base
    for(int i=0; i<10; i++){ //filling array
        base[i] = '0' + i;
        base10[i] = i;
    }
    for(int i=10; i<nbase; i++){
        base[i] = 'A'+ (i-10);
        base10[i] = i;
    }
	
	int size = (dec/nbase)+1
    string val= ""; // maximum size of remainder array
    int mltpl=0; // container for dec
	while(mltpl>0){
		mltpl = dec/nbase;
		val = base[dec-(mltpl*nbase)]+val;
		dec /= nbase;
		if(dec==0 || dec==1)
			val = "1"+val
		
	}
    
    return 0;
}

