/* Module: vegas30.exe
   Function: FUN_005a5bb0
   Address: 005a5bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a5bb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  return;
}


