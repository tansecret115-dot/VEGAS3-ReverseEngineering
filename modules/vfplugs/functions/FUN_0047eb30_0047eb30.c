/* Module: vfplugs.dll
   Function: FUN_0047eb30
   Address: 0047eb30
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0047eb30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0047ea80(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_0047eb00((int)param_1);
  return uVar1 == param_1[4];
}


