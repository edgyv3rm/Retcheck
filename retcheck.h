

#include <iostream>
#include <Windows.h>




#define Scan(Address) (Address - 0x400000 + (DWORD)GetModuleHandle("RobloxPlayerBeta.exe")) //Yes ik


DWORD retaddy = 0x15FC2BC;

void disableretcheck()
{
	*(DWORD*)(Scan(retaddy)) = 1;
}


void enableretcheck()
{
	*(DWORD*)(Scan(retaddy)) = 0;
}






//					Usage of this not effective retcheck:
//					
//					
//					void lua_getfield (int luaState, int value, const char* field) {
//					
//					disableretcheck(); 
//					getfield_typedef(luaState, value, field);
//					enableretcheck();