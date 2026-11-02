/* Module: oggplug.dll
   Function: FUN_00410f10
   Address: 00410f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410f10(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_0041d750(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_0041e1a0(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


