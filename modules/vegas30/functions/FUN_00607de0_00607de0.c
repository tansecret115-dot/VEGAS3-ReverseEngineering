/* Module: vegas30.exe
   Function: FUN_00607de0
   Address: 00607de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00607de0(int param_1,uint *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  *param_2 = *(uint *)(param_1 + 8) >> 9;
  *param_3 = 0x14;
  return 1;
}


