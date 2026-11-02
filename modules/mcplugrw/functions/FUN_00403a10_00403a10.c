/* Module: mcplugrw.dll
   Function: FUN_00403a10
   Address: 00403a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403a10(LPBYTE param_1,DWORD param_2)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_8;
  DWORD local_4;
  
  local_8 = (HKEY)0x0;
  local_4 = 1;
  uVar2 = 0x80004005;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,
                          "Software\\Sonic Foundry\\Shared Information\\User Information",0,
                          (LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_8,"City",(LPDWORD)0x0,&local_4,param_1,&param_2);
    if (LVar1 == 0) {
      uVar2 = 0;
    }
    RegCloseKey(local_8);
  }
  return uVar2;
}


