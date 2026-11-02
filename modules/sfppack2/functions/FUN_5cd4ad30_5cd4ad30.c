/* Module: sfppack2.dll
   Function: FUN_5cd4ad30
   Address: 5cd4ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cd4ad30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5cd4ac80(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5cd4ad00((int)param_1);
  return uVar1 == param_1[4];
}


