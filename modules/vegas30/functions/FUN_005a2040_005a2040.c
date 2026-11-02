/* Module: vegas30.exe
   Function: FUN_005a2040
   Address: 005a2040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005a2040(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 8) = 5;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}


