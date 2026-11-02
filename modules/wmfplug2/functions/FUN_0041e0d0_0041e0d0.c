/* Module: wmfplug2.dll
   Function: FUN_0041e0d0
   Address: 0041e0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041e0d0(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_8;
  int local_4;
  
  local_8 = 4;
  LVar1 = RegQueryValueExA(param_1,"DisableEdit",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)&local_4,
                           &local_8);
  if (((LVar1 == 0) && (param_1 == (HKEY)0x4)) && (local_8 == 4)) {
    return local_4 == 0;
  }
  return true;
}


