/* Module: sctplug.dll
   Function: FUN_00409170
   Address: 00409170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409170(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = FUN_00408d70(*(int *)(param_1 + 4));
  *param_2 = puVar1;
  FUN_00408d20(*(int *)(param_1 + 4));
  return;
}


