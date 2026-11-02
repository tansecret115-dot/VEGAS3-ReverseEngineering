/* Module: Setup.exe
   Function: _SfLang_LoadUserLCIDMetric@12
   Address: 00406250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_LoadUserLCIDMetric_12(DWORD param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD local_4;
  
                    /* 0x6250  215  _SfLang_LoadUserLCIDMetric@12 */
  local_4 = 4;
  bVar1 = FUN_004062b0(param_1,param_2,"ULangID",&param_1,(LPBYTE)&param_2,&local_4);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *param_3 = (uint)((ushort)param_2 & 0x3ff | 0x400);
    return 1;
  }
  return 0;
}


