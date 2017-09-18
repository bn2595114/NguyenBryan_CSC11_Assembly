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
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    unsigned int dec, nbase;
    printf("Enter a decimal number\n");
    scanf("%u", &dec);  //storing unsigned decimal
    printf("Enter a new base between 2 and 36 inclusive\n");
    scanf("%u", &nbase); //storing new base
    while(nbase>36 || nbase < 2){
        printf("Please enter a base specified: ");
        scanf("%u", &nbase);
    }
    
    char* base = new char[nbase]; // up to inputted base
    int base10[nbase];//base 10 up to inputted base
    for(int i=0; i<10; i++){ //filling array
        base[i] = '0' + i;
        base10[i] = i;
    }
    for(int i=10; i<nbase; i++){
        base[i] = 'A'+ (i-10);
        base10[i] = i;
    }
    
        char val[100];
        for(int i=0; i<100; i++)
            val[i] = ' ';
        val[99] = NULL; 
    int mltpl=0; // container for dec
    int rmndr=0;
    int i=98;
    
    do{        
	mltpl = dec/nbase;      
        rmndr = dec - (mltpl*nbase);
	val[i] = base[rmndr];
	dec /= nbase;                           
        i--;
        
      }while(mltpl>=1);

      printf("In base %u, the value is: ", nbase);
      int x=0;
      while(x<99){
          if(val[x]!=' ')
      printf("%c", val[x]);
      x++;
      }
      
      

      delete[] base;
    return 0;
}

