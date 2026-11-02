/* Module: vidcap30.exe
   Function: _SfLang_SaveUserLCIDMetric@12
   Address: 0047c190
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLang_SaveUserLCIDMetric_12(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* 0x7c190  487  _SfLang_SaveUserLCIDMetric@12 */
  param_3 = param_3 & 0xffff;
  FUN_0047c1c0(param_1,param_2,"ULangID",4,&param_3,4);
  return;
}


