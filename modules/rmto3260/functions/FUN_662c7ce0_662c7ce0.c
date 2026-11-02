/* Module: rmto3260.dll
   Function: FUN_662c7ce0
   Address: 662c7ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c7ce0(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_662ed5e0((void *)(param_1 + 0x42),*(int *)(param_1 + 0x46),param_2);
  return 0;
}


