typedef struct {
	char *key;// this is the key that has to be transformed into a nonegative integer value
	char *plain;//this is the plaintext (unencrypted C string)
	char *cipher;//this is the ciphertext(encrypted C String)

}caesar;
char *caesar_encrypt(char*plain,char*key);//encrpyt a string 
char *caesar_decrypt(char*cipher,char*key);//decrypt a string
char caesar_encrypt_char(char plain, int key);
char caesar_decrypt_char(char cipher, int key);
int convert_key(char *key);

