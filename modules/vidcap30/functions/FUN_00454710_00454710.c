/* Module: vidcap30.exe
   Function: FUN_00454710
   Address: 00454710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454710(int param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x14) <= param_2) && (param_2 < *(int *)(param_1 + 0x1c))) &&
      (*(int *)(param_1 + 0x18) <= param_3)) && (param_3 < *(int *)(param_1 + 0x20))) {
    return 1;
  }
  return 0;
}


