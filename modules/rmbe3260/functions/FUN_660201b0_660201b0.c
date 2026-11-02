/* Module: rmbe3260.dll
   Function: FUN_660201b0
   Address: 660201b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660201b0(int param_1,int param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_2 != 0) {
    return 0x80004005;
  }
  (**(code **)(*param_3 + 4))(param_3);
  FUN_6605cf30((void *)(param_1 + 0x172),*(int *)(param_1 + 0x176),param_3);
  return 0;
}


