/* Module: vegas30.exe
   Function: FUN_005b98c0
   Address: 005b98c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b98c0(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x30a] = param_2;
  *(uint *)*param_1 = *(uint *)*param_1 | 0x4000;
  return;
}


