/* Module: sfpagepeel.dll
   Function: FUN_00414ef0
   Address: 00414ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414ef0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x134) != 0) {
    *(undefined4 *)(param_1 + 0x138) = param_2;
    return 1;
  }
  return 0;
}


