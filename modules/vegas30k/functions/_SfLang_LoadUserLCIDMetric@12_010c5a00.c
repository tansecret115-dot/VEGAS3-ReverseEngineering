/* Module: vegas30k.dll
   Function: _SfLang_LoadUserLCIDMetric@12
   Address: 010c5a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_LoadUserLCIDMetric_12(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 local_4;
  
                    /* 0xc5a00  1051  _SfLang_LoadUserLCIDMetric@12 */
  local_4 = 4;
  iVar1 = FUN_010c5a60(param_1,param_2,"ULangID",&param_1,&param_2,&local_4);
  if (iVar1 != 0) {
    *param_3 = (uint)((ushort)param_2 & 0x3ff | 0x400);
    return 1;
  }
  return 0;
}


