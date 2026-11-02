/* Module: sfppack3.dll
   Function: FUN_5cc612b0
   Address: 5cc612b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc612b0(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_5cc68560(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_5cc68fb0(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


