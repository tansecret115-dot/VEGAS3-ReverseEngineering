/* Module: sfxpfx2.dll
   Function: FUN_5c8d71a0
   Address: 5c8d71a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8d71a0(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5c8d7190((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5c8d7110(param_1);
  param_1[10] = uVar1;
  return;
}


