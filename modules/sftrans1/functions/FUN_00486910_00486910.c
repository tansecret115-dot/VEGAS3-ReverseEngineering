/* Module: sftrans1.dll
   Function: FUN_00486910
   Address: 00486910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486910(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < param_2) {
    if (param_2 < **(int **)(param_1 + 0xa4)) {
      uVar1 = FUN_00486940(**(undefined4 **)((*(int **)(param_1 + 0xa4))[2] + param_2 * 4));
      return uVar1;
    }
  }
  return 0;
}


