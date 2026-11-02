/* Module: sfcdi.dll
   Function: FUN_5bf21910
   Address: 5bf21910
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf21910(uint param_1,uint param_2,uint param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_24;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_5bf21720(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return param_3;
  }
  local_24 = 4;
  param_2 = 4;
  LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_2,(LPBYTE)&param_1,&local_24);
  if ((LVar1 != 0) || (param_2 != 4)) {
    param_1 = param_3;
  }
  FUN_5bf217c0();
  return (uint)(param_1 != 0);
}


