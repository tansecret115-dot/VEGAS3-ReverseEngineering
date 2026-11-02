/* Module: vidpcore.dll
   Function: FUN_5df12bf0
   Address: 5df12bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df12bf0(int param_1,uint *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  *param_2 = *(uint *)(param_1 + 8) >> 9;
  *param_3 = 0x14;
  return 1;
}


