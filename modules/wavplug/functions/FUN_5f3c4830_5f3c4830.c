/* Module: wavplug.dll
   Function: FUN_5f3c4830
   Address: 5f3c4830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f3c4830(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5f3c4820((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5f3c47a0(param_1);
  param_1[10] = uVar1;
  return;
}


