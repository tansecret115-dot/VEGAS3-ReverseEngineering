/* Module: sctplug.dll
   Function: FUN_00403ce0
   Address: 00403ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403ce0(HKEY param_1,LPSTR param_2,DWORD *param_3)

{
  LSTATUS LVar1;
  DWORD dwIndex;
  DWORD local_c [3];
  
  dwIndex = 0;
  local_c[1] = 3;
  local_c[2] = 0x80;
  local_c[0] = 8;
  LVar1 = RegEnumValueA(param_1,0,param_2,local_c + 2,(LPDWORD)0x0,local_c + 1,
                        (LPBYTE)(param_2 + 0x80),local_c);
  if (LVar1 == 0) {
    do {
      dwIndex = dwIndex + 1;
      local_c[1] = 3;
      local_c[2] = 0x80;
      local_c[0] = 8;
      LVar1 = RegEnumValueA(param_1,dwIndex,param_2 + 0x88,local_c + 2,(LPDWORD)0x0,local_c + 1,
                            (LPBYTE)(param_2 + 0x108),local_c);
      param_2 = param_2 + 0x88;
    } while (LVar1 == 0);
    *param_3 = dwIndex;
    return 0;
  }
  *param_3 = 0;
  return 0;
}


