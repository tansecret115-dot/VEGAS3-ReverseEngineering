/* Module: sfppack2.dll
   Function: FUN_5cd4ad10
   Address: 5cd4ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd4ad10(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5cd4ad00((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5cd4ac80(param_1);
  param_1[10] = uVar1;
  return;
}


