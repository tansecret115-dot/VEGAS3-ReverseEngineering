/* Module: rmto3260.dll
   Function: FUN_662cc3f0
   Address: 662cc3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662cc3f0(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_662ed5e0((void *)(param_1 + 0x20),*(int *)(param_1 + 0x24),param_2);
  return 0;
}


