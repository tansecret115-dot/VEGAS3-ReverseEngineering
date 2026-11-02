/* Module: vidcap30.exe
   Function: _SfGetMetric@8
   Address: 004867a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGetMetric_8(undefined4 param_1,DWORD param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  HKEY hKey;
  LSTATUS LVar3;
  DWORD local_24;
  CHAR local_20 [32];
  
  DVar2 = param_2;
                    /* 0x867a0  405  _SfGetMetric@8 */
  uVar1 = param_1;
  hKey = (HKEY)FUN_004866f0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  local_24 = 4;
  param_2 = 4;
  LVar3 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_2,(LPBYTE)&param_1,&local_24);
  if ((LVar3 != 0) || (param_2 != 4)) {
    param_1 = 0;
  }
  FUN_00486790(uVar1,DVar2,4,hKey);
  return param_1;
}


