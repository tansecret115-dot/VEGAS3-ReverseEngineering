/* Module: vegas30.exe
   Function: FUN_005b86a0
   Address: 005b86a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b86a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x450) = param_2;
  }
  DAT_0064767c = DAT_0064767c | 5;
  return;
}


