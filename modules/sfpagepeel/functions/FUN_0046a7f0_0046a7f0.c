/* Module: sfpagepeel.dll
   Function: FUN_0046a7f0
   Address: 0046a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0046a7f0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0046a740(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_0046a7c0((int)param_1);
  return uVar1 == param_1[4];
}


