/* Module: vegas30.exe
   Function: FUN_005da1a0
   Address: 005da1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005da1a0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 0x80070057;
  }
  *(int *)(param_1 + 4) = param_2;
  return 0;
}


