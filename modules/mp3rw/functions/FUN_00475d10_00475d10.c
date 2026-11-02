/* Module: mp3rw.dll
   Function: FUN_00475d10
   Address: 00475d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}


