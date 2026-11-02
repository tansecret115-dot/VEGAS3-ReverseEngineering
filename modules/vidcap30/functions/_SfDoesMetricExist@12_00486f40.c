/* Module: vidcap30.exe
   Function: _SfDoesMetricExist@12
   Address: 00486f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDoesMetricExist_12(DWORD param_1,DWORD param_2,DWORD param_3)

{
  DWORD DVar1;
  HKEY hKey;
  LSTATUS LVar2;
  CHAR local_20 [32];
  
                    /* 0x86f40  356  _SfDoesMetricExist@12 */
  DVar1 = param_3;
  hKey = (HKEY)FUN_004866f0(param_1,param_2,param_3,local_20);
  if (hKey == (HKEY)0x0) {
    return 1;
  }
  param_1 = 1;
  param_2 = DVar1;
  LVar2 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_2,(LPBYTE)&param_3,&param_1);
  if (((LVar2 == 0) || (LVar2 == 0xea)) && (DVar1 == param_2)) {
    return 0;
  }
  return 1;
}


