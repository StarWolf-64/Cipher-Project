#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//library for isdigit function
#include "caesar.h"
int convert_key(char *key){
	int k=0;//integer value of key
	//iterate through the key
	for(int i=0;i<strlen(key);i++){
		if(isdigit(key[i])==1){//if the key is made of only numerical digits convert the key into a integer
			k=atoi(key);//using the atoi function to convert the key
		}
		else{//the key has things in it that are not only numbers peform XOR on the it
			k=0^key[i];
		}
	
	}
	return k;
}

