/* Module: oggplug.dll
   Function: FUN_004052a0
   Address: 004052a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004052a0(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = FUN_00404b60(*(int *)(param_1 + 0x11c));
  *param_2 = puVar1;
  FUN_00404ac0(*(int *)(param_1 + 0x11c));
  return;
}


