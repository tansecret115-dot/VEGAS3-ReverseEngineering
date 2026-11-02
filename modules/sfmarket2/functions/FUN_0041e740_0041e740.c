/* Module: sfmarket2.dll
   Function: FUN_0041e740
   Address: 0041e740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e740(HKEY param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_18;
  int local_14;
  BYTE local_10 [16];
  
  hKey = param_1;
  local_18 = 4;
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)&local_14,
                           &local_18);
  if ((LVar1 != 0) || (param_1 != (HKEY)0x4)) {
    local_18 = 0x10;
    LVar1 = RegQueryValueExA(hKey,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)&param_1,local_10,&local_18);
    if (LVar1 != 0) {
      return 0;
    }
    if (param_1 != (HKEY)0x1) {
      return 0;
    }
    local_14 = atoi((char *)local_10);
  }
  if (local_14 != 0) {
    return 0;
  }
  return 1;
}


