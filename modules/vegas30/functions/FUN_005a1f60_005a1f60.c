/* Module: vegas30.exe
   Function: FUN_005a1f60
   Address: 005a1f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005a1f60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return 0;
}


