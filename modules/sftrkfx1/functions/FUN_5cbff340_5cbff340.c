/* Module: sftrkfx1.dll
   Function: FUN_5cbff340
   Address: 5cbff340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbff340(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5cbff330((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5cbff2b0(param_1);
  param_1[10] = uVar1;
  return;
}


