/* Module: vegas30k.dll
   Function: FUN_01128100
   Address: 01128100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01128100(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x5b) = param_3;
    *(undefined1 *)(param_2 + 99) = param_5;
    *(undefined4 *)(param_2 + 0x5f) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}


