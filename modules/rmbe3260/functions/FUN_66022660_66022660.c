/* Module: rmbe3260.dll
   Function: FUN_66022660
   Address: 66022660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66022660(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


