/* Module: g2plug.dll
   Function: FUN_5f810960
   Address: 5f810960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f810960(HKEY param_1,LPCSTR param_2,LPBYTE param_3)

{
  LSTATUS LVar1;
  DWORD local_4;
  
  local_4 = 4;
  LVar1 = RegQueryValueExA(param_1,param_2,(LPDWORD)0x0,(LPDWORD)&param_3,param_3,&local_4);
  if (((LVar1 == 0) && (param_3 == (LPBYTE)0x4)) && (local_4 == 4)) {
    return 0;
  }
  return 0x80004005;
}


