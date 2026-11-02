/* Module: mcplugrw.dll
   Function: FUN_004215c0
   Address: 004215c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004215c0(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = FUN_00427c20(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  FUN_00428670(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


