#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//library for isdigit function
#include "caesar.h"
int convert_key(char *key){
	int k=0;//integer value of key
	//iterate through the key
	for(int i=0;i<strlen(key);i++){
		if(isdigit(key[i])){//if the key is made of only numerical digits convert the key into a integer is digit evaluates to true(1) or false(0)
			k=k+atoi(key[i]);//using the atoi function to convert the key
		}
		else{//the key has things in it that are not only numbers peform XOR on the it
			k=k+0^key[i];//probably didn't do it fully correct
		}
	
	}
	return k;
}
char caesar_encrypt_char(char plain, char key){
	char encryptedS=" ";
	/*this method needs to handle when you get uppercase letters
	 * lowercase letters and special characters and
	 *account for key being bigger than 26 (I think)
	 */
		for(int i=0;i<strleng(plain)-1;i++){
			if(isupper(plain[i])){
				encryptedS=encryptedS+(char(int plain[i]+convert_key(key)-67)%26+67);//trying to typecase the plain value to int to add with key and do modulus
                                //then type case the whole value back into a char

			}
			if(islower(plain[i])){
				encryptedS=encryptedS+(char(int plain[i]+convert_key(key)-97)%26+97);

			}
			if(){//accounts for special characters you would start from exclamation mark which is at value 33 calucalation would be the same but with 33
			}
			else{// certain characters like space just remain the same like ASCII value of 32 and 60-64
				encryptedS=encryptedS+(char(int plain[i]);//just return the same character as is

			
			}
		}

	}

/*
char caesar_decrypt_char(char cipher, int key){
	char result=" ";
	for(int i=0;i<strleng(cipher);i++){
		result=result+(cipher[i]-convert_key(key))%26
	}
	return result;
}
*/

