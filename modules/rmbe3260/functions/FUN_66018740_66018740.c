/* Module: rmbe3260.dll
   Function: FUN_66018740
   Address: 66018740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018740(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      return 0;
    }
  }
  else if (param_2 != *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  return 0;
}


