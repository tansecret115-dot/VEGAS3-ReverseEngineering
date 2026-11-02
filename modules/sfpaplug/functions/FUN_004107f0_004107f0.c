/* Module: sfpaplug.dll
   Function: FUN_004107f0
   Address: 004107f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004107f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00410440(*(int *)(param_1 + 4));
  *param_2 = puVar1;
  FUN_004103f0(*(int *)(param_1 + 4));
  return;
}


