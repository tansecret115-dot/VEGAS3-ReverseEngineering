/* Module: sfmarket2.dll
   Function: FUN_0041d140
   Address: 0041d140
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0041d140(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041d090(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_0041d110((int)param_1);
  return uVar1 == param_1[4];
}


