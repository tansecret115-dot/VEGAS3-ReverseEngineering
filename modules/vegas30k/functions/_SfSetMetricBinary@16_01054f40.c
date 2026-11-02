/* Module: vegas30k.dll
   Function: _SfSetMetricBinary@16
   Address: 01054f40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfSetMetricBinary_16(int param_1,undefined4 param_2,BYTE *param_3,DWORD param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x54f40  1197  _SfSetMetricBinary@16 */
  if (param_1 == -1) {
    return 0x80004005;
  }
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,3,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,3,param_3,param_4);
  FUN_01054b40(param_1,param_2,3,hKey);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


