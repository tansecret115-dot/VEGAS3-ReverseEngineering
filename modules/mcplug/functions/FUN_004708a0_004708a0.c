/* Module: mcplug.dll
   Function: FUN_004708a0
   Address: 004708a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_004708a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004707f0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_00470870((int)param_1);
  return uVar1 == param_1[4];
}


