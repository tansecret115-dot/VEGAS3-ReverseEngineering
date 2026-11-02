/* Module: rmbe3260.dll
   Function: FUN_660173d0
   Address: 660173d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660173d0(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x22) == 0) {
      *(undefined4 *)(param_1 + 0x22) = 1;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      return 0;
    }
  }
  else if (param_2 != *(int *)(param_1 + 0x1a)) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(int *)(param_1 + 0x1a) = param_2;
    *(undefined4 *)(param_1 + 0x1e) = param_3;
  }
  return 0;
}


