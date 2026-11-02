/* Module: g2plug.dll
   Function: FUN_5f826410
   Address: 5f826410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f826410(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_5f83d9c0(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_5f83e410(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


