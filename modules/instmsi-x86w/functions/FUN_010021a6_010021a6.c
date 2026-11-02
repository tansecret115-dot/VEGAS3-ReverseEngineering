/* Module: InstMsi-x86w.exe
   Function: FUN_010021a6
   Address: 010021a6
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_010021a6(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_8;
  
  local_8 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)param_1,0,0x20019,&param_1);
  if (LVar1 == 0) {
    LVar1 = RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)0x0,&local_8,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (PFILETIME)0x0);
    if (LVar1 != 0) {
      local_8 = 0;
    }
    RegCloseKey(param_1);
  }
  return local_8;
}


