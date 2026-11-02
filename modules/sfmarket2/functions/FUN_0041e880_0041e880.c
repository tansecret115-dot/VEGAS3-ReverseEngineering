/* Module: sfmarket2.dll
   Function: FUN_0041e880
   Address: 0041e880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e880(HKEY param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint local_c;
  uint local_8;
  DWORD local_4;
  
  hKey = param_1;
  local_c = 0;
  LVar1 = FUN_0041c780(param_1,"Pins",&local_c);
  if (-1 < LVar1) {
    param_1 = (HKEY)0x4;
    LVar1 = RegQueryValueExA(hKey,"Merit",(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,(LPDWORD)&param_1);
    if ((LVar1 == 0) && (local_c == local_8)) {
      return 1;
    }
  }
  return 0;
}


