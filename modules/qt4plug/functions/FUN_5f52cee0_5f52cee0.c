/* Module: qt4plug.dll
   Function: FUN_5f52cee0
   Address: 5f52cee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f52cee0(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_5f547cd0(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_5f548720(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


