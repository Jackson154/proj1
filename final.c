# include <stdio.h>
int main() {
    char plainText[100], ch;
    int i, key;
    int x;
    
    printf("Please enter the message to encrypt: ");
	
	
	printf("Please select one of the following. \n");
	printf("1 - Encrytion by Ceasar Cipher. \n");
	printf("2 - Decryption by Ceasar Cipher. \n");
	
	
	scanf("%d", &x);

	printf("Please enter key: ");
	scanf("%d", &key);

	
	 switch (x) {
        case 1:
        for(i = 0; plainText[i] != '\0'; ++i){
		ch = plainText[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			plainText[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			plainText[i] = ch;
		}
       
       break;
       
        case 2: 
        	for(i = 0; plainText[i] != '\0'; ++i){
		ch = plainText[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			plainText[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			plainText[i] = ch;
		}
        break;	
    
        	printf("Decrypted text: %s", plainText);
        	
       return 0;
        	}
        	// couldn't figure out how to complete substitution cipher //
