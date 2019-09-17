## AdrielFreud

![](https://img.shields.io/badge/LoadLibrary-v1.0-blue?style=flat&logo=appveyor)
![](https://img.shields.io/badge/plataforma-win32--win64--linux64--linux32-blue?style=flat&logo=appveyor)
![](https://img.shields.io/badge/gcc-blue)

 - Carrega dll e busca modulos e funções dentro delas
 
 ```C
void call_dll(char *name_dll, char *function){

	HMODULE path_dll = LoadLibrary(name_dll);
	if(path_dll == NULL){
		exit(1);
	}

	stcall_t search = (stcall_t)GetProcAddress(path_dll, function);
	search();
	FreeLibrary(path_dll);
}
```

## AVISO
- Caso você encontrar um bug [Click-aqui](https://github.com/AdrielFreud/LoadLibrary-C/issues/new) crie um issue para eu corrigi-lo.

## Imagem
![photo]()
 
 ## Download
Baixe diretamente do github com:
 - git clone https://github.com/AdrielFreud/LoadLibrary-C.git
 - ou https://github.com/AdrielFreud/LoadLibrary-C/archive/master.zip


## Uso
 - ./LoadLibrary [type] [function]

## Requerimentos
 - gcc & cygwin
