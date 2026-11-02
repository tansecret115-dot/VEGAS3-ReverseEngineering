/* Module: wavplug.dll
   Function: FUN_5f3c4850
   Address: 5f3c4850
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5f3c4850(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5f3c47a0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5f3c4820((int)param_1);
  return uVar1 == param_1[4];
}


