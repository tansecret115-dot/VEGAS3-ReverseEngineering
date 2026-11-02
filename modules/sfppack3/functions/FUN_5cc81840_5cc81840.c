/* Module: sfppack3.dll
   Function: FUN_5cc81840
   Address: 5cc81840
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cc81840(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5cc81790(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5cc81810((int)param_1);
  return uVar1 == param_1[4];
}


