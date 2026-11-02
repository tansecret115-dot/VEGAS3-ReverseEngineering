/* Module: oggplug.dll
   Function: FUN_004363f0
   Address: 004363f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004363f0(int param_1,int param_2,int *param_3)

{
  FUN_00441e10(param_3,*(uint *)(*(int *)(param_1 + 0x10) + param_2 * 4),
               *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + param_2 * 4));
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 8) + param_2 * 4);
}


