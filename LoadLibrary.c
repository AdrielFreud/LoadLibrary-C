/*
----------------------------------
# Desenvolvido por Adriel Freud!
# Contato: businessc0rp2k17@gmail.com
# FB: http://www.facebook.com/xrn401
#   =>DebutySecTeamSecurity<=
----------------------------------
*/

#include "ldfun.h"

typedef int (__stdcall* func_ptr_t)();

void call_dll(char *name_dll, char* function){

	HMODULE dll = LoadLibrary(name_dll);
	if(dll != NULL){
	 	func_ptr_t func = (func_ptr_t)GetProcAddress(dll, function);
		if(func != NULL){
			const char result = func();
			FreeLibrary(dll);
		}else{
			fatal("Nao foi possivel chamar essa funcao!");
		}
		FreeLibrary(dll);
	}else{
		fatal("Nao foi possivel carregar a DLL!");
	}
}

int main(int argc, char *argv[]){
	if(argc < 2){
		fatal("\n\t=> AdrielFreud <=\n\nUSAGE: root@localhost~# ./load name.dll function");
	}else{
		call_dll(argv[1], argv[2]);
	}
	return EXIT_SUCCESS;
}