/* Module: Setup.exe
   Function: _SfGetMetric@8
   Address: 00420a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetMetric_8(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x20a90  153  _SfGetMetric@8 */
  hKey = (HKEY)FUN_004209e0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  local_24 = 4;
  param_2 = 4;
  LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_2,(LPBYTE)&param_1,&local_24);
  if ((LVar1 != 0) || (param_2 != 4)) {
    param_1 = 0;
  }
  FUN_00420a80();
  return param_1;
}


