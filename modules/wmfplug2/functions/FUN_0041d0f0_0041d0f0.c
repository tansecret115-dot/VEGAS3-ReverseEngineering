/* Module: wmfplug2.dll
   Function: FUN_0041d0f0
   Address: 0041d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d0f0(HKEY param_1,LPBYTE param_2)

{
  LSTATUS LVar1;
  DWORD local_4;
  
  local_4 = 0x10;
  LVar1 = RegQueryValueExA(param_1,"Id",(LPDWORD)0x0,(LPDWORD)&param_2,param_2,&local_4);
  if (((LVar1 == 0) && (param_2 == (LPBYTE)0x3)) && (local_4 == 0x10)) {
    return 0;
  }
  return 0x80004005;
}


