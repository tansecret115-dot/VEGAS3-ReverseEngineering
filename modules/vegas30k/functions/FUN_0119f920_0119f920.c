/* Module: vegas30k.dll
   Function: FUN_0119f920
   Address: 0119f920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0119f920(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1a4) != param_2) {
    *(int *)(param_1 + 0x1a4) = param_2;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    FUN_0119f5d0(*(undefined4 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x30),param_2,1);
  }
  return 0;
}


