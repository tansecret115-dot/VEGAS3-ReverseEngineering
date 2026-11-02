/* Module: vfplugs.dll
   Function: FUN_00419ef0
   Address: 00419ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419ef0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x134) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return 1;
}


