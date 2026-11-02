/* Module: rmto3260.dll
   Function: FUN_662ddc40
   Address: 662ddc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ddc40(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_662ed5e0((void *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),param_2);
  return 0;
}


