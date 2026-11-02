/* Module: vidpcore.dll
   Function: FUN_5df14170
   Address: 5df14170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df14170(HKEY param_1)

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
  if ((LVar1 != 0) || (param_1 != (HKEY)&DAT_00000004)) {
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


