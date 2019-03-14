/*
----------------------------------
# Desenvolvido por Adriel Freud!
# Contato: businessc0rp2k17@gmail.com
# FB: http://www.facebook.com/xrn401
#   =>DebutySecTeamSecurity<=
----------------------------------
Functions Contained in dll

divi = division
soma = add
functions = banner
mult = for *
sub = sub for subtraction
*/

#include <stdio.h>
#include "windows.h"

typedef int (__stdcall* stcall_t)(void);

void call_dll(char *name_dll, char *function){

	HMODULE path_dll = LoadLibrary(name_dll);
	if(path_dll == NULL){
		exit(1);
	}

	stcall_t search = (stcall_t)GetProcAddress(path_dll, function);
	search();
	FreeLibrary(path_dll);
}

int main(int argc, char *argv[]){
	if(argc > 2)
		call_dll(argv[1], argv[2]);

	return 0;
}
