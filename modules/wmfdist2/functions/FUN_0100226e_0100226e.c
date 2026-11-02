/* Module: wmfdist2.exe
   Function: FUN_0100226e
   Address: 0100226e
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_0100226e(HKEY param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  DWORD local_8;
  
  local_8 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)param_1,0,0x20019,&param_1);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(param_1,param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8);
    if (LVar1 != 0) {
      local_8 = 0;
    }
    RegCloseKey(param_1);
  }
  return local_8;
}


