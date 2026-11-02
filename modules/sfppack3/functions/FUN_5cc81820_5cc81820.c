/* Module: sfppack3.dll
   Function: FUN_5cc81820
   Address: 5cc81820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc81820(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5cc81810((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5cc81790(param_1);
  param_1[10] = uVar1;
  return;
}


