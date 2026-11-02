/* Module: mp3rw.dll
   Function: FUN_0044d8a0
   Address: 0044d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d8a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x5b) = param_3;
    *(undefined1 *)(param_2 + 99) = param_5;
    *(undefined4 *)(param_2 + 0x5f) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}


