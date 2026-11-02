/* Module: mcplug.dll
   Function: FUN_00407a30
   Address: 00407a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407a30(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = FUN_00407020(*(int *)(param_1 + 4));
  *param_2 = puVar1;
  FUN_00406fd0(*(int *)(param_1 + 4));
  return;
}


