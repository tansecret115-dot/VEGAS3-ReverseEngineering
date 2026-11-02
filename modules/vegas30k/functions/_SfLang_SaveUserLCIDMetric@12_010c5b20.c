/* Module: vegas30k.dll
   Function: _SfLang_SaveUserLCIDMetric@12
   Address: 010c5b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLang_SaveUserLCIDMetric_12(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* 0xc5b20  1053  _SfLang_SaveUserLCIDMetric@12 */
  param_3 = param_3 & 0xffff;
  FUN_010c5b50(param_1,param_2,"ULangID",4,&param_3,4);
  return;
}


