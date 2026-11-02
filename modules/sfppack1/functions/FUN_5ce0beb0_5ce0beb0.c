/* Module: sfppack1.dll
   Function: FUN_5ce0beb0
   Address: 5ce0beb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5ce0beb0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5ce0be00(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5ce0be80((int)param_1);
  return uVar1 == param_1[4];
}


