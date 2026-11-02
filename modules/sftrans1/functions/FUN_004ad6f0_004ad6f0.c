/* Module: sftrans1.dll
   Function: FUN_004ad6f0
   Address: 004ad6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad6f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = ftol();
  *param_1 = uVar1;
  uVar1 = ftol();
  param_1[1] = uVar1;
  uVar1 = ftol();
  param_1[2] = uVar1;
  param_1[3] = 0x100;
  return;
}


