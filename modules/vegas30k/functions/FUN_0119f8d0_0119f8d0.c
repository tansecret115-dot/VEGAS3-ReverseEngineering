/* Module: vegas30k.dll
   Function: FUN_0119f8d0
   Address: 0119f8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0119f8d0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x19c)) {
    *(int *)(param_1 + 0x19c) = param_2;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x194) = 0;
    }
    FUN_0119f5d0(*(undefined4 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x30),param_2,0);
  }
  return 0;
}


