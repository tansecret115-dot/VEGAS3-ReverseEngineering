/* Module: vegas30k.dll
   Function: _SfGetMetricEx@20
   Address: 01054be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetMetricEx_20(DWORD param_1,int param_2,int param_3,int param_4,int param_5)

{
  DWORD DVar1;
  int iVar2;
  HKEY hKey;
  LSTATUS LVar3;
  DWORD local_24;
  CHAR local_20 [32];
  
  iVar2 = param_2;
                    /* 0x54be0  961  _SfGetMetricEx@20 */
  DVar1 = param_1;
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return param_5;
  }
  local_24 = 4;
  param_1 = 4;
  LVar3 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&param_1,(LPBYTE)&param_2,&local_24);
  if ((LVar3 != 0) || (param_1 != 4)) {
    param_2 = param_5;
  }
  FUN_01054b40(DVar1,iVar2,4,hKey);
  if (param_3 != param_4) {
    if (param_2 < param_3) {
      return param_3;
    }
    if (param_4 < param_2) {
      param_2 = param_4;
    }
  }
  return param_2;
}


