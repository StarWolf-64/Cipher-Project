#ifndef _CAESAR_H//page 12 of C Cipher project pdf
#define _CAESAR_H
char *caesar_encrypt(char*plain,char*key);//encrpyt a string 
char *caesar_decrypt(char*cipher,char*key);//decrypt a string
char caesar_encrypt_char(char plain, int key);
char caesar_decrypt_char(char cipher, int key);
int convert_key(char *key);
#endif // _CAESAR_H

