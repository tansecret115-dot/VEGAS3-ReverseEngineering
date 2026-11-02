/* Module: sfpagepeel.dll
   Function: FUN_0046a7d0
   Address: 0046a7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046a7d0(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_0046a7c0((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_0046a740(param_1);
  param_1[10] = uVar1;
  return;
}


