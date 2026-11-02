/* Module: sfmarket2.dll
   Function: FUN_0041d120
   Address: 0041d120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041d120(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_0041d110((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_0041d090(param_1);
  param_1[10] = uVar1;
  return;
}


