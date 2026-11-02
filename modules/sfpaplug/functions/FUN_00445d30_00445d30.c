/* Module: sfpaplug.dll
   Function: FUN_00445d30
   Address: 00445d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445d30(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_24;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_00445c80(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  local_24 = 4;
  param_2 = 4;
  LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_2,(LPBYTE)&param_1,&local_24);
  if ((LVar1 != 0) || (param_2 != 4)) {
    param_1 = 0;
  }
  FUN_00445d20();
  return param_1;
}


