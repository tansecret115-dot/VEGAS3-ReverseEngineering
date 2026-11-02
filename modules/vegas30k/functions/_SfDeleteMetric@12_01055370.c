/* Module: vegas30k.dll
   Function: _SfDeleteMetric@12
   Address: 01055370
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfDeleteMetric_12(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x55370  813  _SfDeleteMetric@12 */
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,param_3,local_20);
  if (hKey == (HKEY)0x0) {
    return 1;
  }
  LVar1 = RegDeleteValueA(hKey,local_20);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


