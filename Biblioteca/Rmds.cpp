#include "rmdscryptor.h"
using namespace std;

int main(void){
    
    void CryptoAnalysis(void);
    CryptoAnalysis();

    
    return 0;    
}

void CryptoAnalysis(){
       printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
       printf("\n-----CRIPTOGRAFIA RMDS (Ramdom Multiple Data System)-----");
       printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
        system("title RMDSCryptor");
        system("color 2");
        std::string Word;
        std::string Pass;
        cout << endl;
        cout << "Palavra para encriptar : ";
        getline(cin, Word);
        
        cout << "Senha para encriptar: ";               
        getline(cin, Pass);
        cout << endl; 
        
        std::string Encrypted = RMDS(Word, Pass, "ENCRYPT");
        if(RMDSuccess()){
	        cout << "Encriptado : " << Encrypted << endl;
	        cout << endl; 
	  
	        cout << "Senha para decriptar: ";
	        getline(cin, Pass);
			
	        std::string Decryptado = RMDS(Encrypted, Pass, "DECRYPT");
			std::string pegarData = GetDateMds(); 
			
	        if(RMDSuccess()){
	        	cout << "Decriptado : " << Decryptado << endl;
	        	cout << "Data de encriptacao : " << pegarData << endl;
			}	
		}
        

        wait(); 
        clear(); 
        Word = "";
}
