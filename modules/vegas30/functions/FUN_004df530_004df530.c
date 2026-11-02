/* Module: vegas30.exe
   Function: FUN_004df530
   Address: 004df530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df530(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00454f40(param_1);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
  FUN_004df4a0(param_1,*param_2,param_2[1],param_3,param_4);
  return;
}


