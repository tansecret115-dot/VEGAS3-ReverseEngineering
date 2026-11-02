/* Module: rmto3260.dll
   Function: FUN_662dbdd0
   Address: 662dbdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dbdd0(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_662ed5e0((void *)(param_1 + 0x32),*(int *)(param_1 + 0x36),param_2);
  return 0;
}


