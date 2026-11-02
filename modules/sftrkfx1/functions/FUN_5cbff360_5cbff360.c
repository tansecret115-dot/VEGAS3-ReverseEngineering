/* Module: sftrkfx1.dll
   Function: FUN_5cbff360
   Address: 5cbff360
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cbff360(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5cbff2b0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5cbff330((int)param_1);
  return uVar1 == param_1[4];
}


