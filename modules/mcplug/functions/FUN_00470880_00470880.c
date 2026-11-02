/* Module: mcplug.dll
   Function: FUN_00470880
   Address: 00470880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00470880(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_00470870((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_004707f0(param_1);
  param_1[10] = uVar1;
  return;
}


