/* Module: vegas30k.dll
   Function: _SfSetMetric@12
   Address: 01054d20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfSetMetric_12(undefined4 param_1,undefined4 param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x54d20  1196  _SfSetMetric@12 */
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,4,&stack0x0000000c,4);
  FUN_01054b40(param_1,param_2,4,hKey);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


