/* Module: vidcap30.exe
   Function: FUN_004906c0
   Address: 004906c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004906c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}


