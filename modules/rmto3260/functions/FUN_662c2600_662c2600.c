/* Module: rmto3260.dll
   Function: FUN_662c2600
   Address: 662c2600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c2600(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_662ed5e0((void *)(param_1 + 100),*(int *)(param_1 + 0x68),param_2);
  return 0;
}


