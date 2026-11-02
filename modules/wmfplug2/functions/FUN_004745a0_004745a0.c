/* Module: wmfplug2.dll
   Function: FUN_004745a0
   Address: 004745a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004745a0(DWORD param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_24;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_00474460(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return param_5;
  }
  local_24 = 4;
  param_1 = 4;
  LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_1,(LPBYTE)&param_2,&local_24);
  if ((LVar1 != 0) || (param_1 != 4)) {
    param_2 = param_5;
  }
  FUN_00474500();
  if (param_3 != param_4) {
    if ((int)param_2 < (int)param_3) {
      return param_3;
    }
    if ((int)param_4 < (int)param_2) {
      param_2 = param_4;
    }
  }
  return param_2;
}


