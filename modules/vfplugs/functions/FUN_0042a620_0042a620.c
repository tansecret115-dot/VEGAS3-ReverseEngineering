/* Module: vfplugs.dll
   Function: FUN_0042a620
   Address: 0042a620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042a620(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_0044cf70(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_0044d9c0(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


