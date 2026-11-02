/* Module: Setup.exe
   Function: _SfGetMetricEx@20
   Address: 00420b20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetMetricEx_20(DWORD param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x20b20  157  _SfGetMetricEx@20 */
  hKey = (HKEY)FUN_004209e0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return param_5;
  }
  local_24 = 4;
  param_1 = 4;
  LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_1,(LPBYTE)&param_2,&local_24);
  if ((LVar1 != 0) || (param_1 != 4)) {
    param_2 = param_5;
  }
  FUN_00420a80();
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


