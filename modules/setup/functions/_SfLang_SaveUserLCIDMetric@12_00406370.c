/* Module: Setup.exe
   Function: _SfLang_SaveUserLCIDMetric@12
   Address: 00406370
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLang_SaveUserLCIDMetric_12(undefined4 param_1,uint param_2,uint param_3)

{
                    /* 0x6370  217  _SfLang_SaveUserLCIDMetric@12 */
  param_3 = param_3 & 0xffff;
  FUN_004063a0(param_1,param_2,"ULangID",4,(BYTE *)&param_3,4);
  return;
}


