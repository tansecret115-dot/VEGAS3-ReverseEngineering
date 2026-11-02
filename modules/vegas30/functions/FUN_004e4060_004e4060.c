/* Module: vegas30.exe
   Function: FUN_004e4060
   Address: 004e4060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4060(int param_1)

{
  if (param_1 != 0) {
    FUN_004e41e0();
    FUN_0043c0e0(*(undefined4 *)(param_1 + 0xf20));
    *(undefined4 *)(param_1 + 0xf20) = 0;
    FUN_004df060(param_1 + 0x80,0,1);
  }
  return;
}


