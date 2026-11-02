/* Module: sfppack1.dll
   Function: FUN_5ce0be90
   Address: 5ce0be90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce0be90(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5ce0be80((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5ce0be00(param_1);
  param_1[10] = uVar1;
  return;
}


