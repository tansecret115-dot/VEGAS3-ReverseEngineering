/* Module: vegas30.exe
   Function: FUN_00596140
   Address: 00596140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00596140(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x400 + param_4 * 8) = param_2;
  *(undefined4 *)(param_1 + 0x404 + param_4 * 8) = param_3;
  *(undefined4 *)(DAT_0065a068 + 0x740) = 1;
  return;
}


