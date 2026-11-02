/* Module: rmbe3260.dll
   Function: FUN_6601a240
   Address: 6601a240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a240(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(uint *)(param_1 + 0x28) = param_4;
  if (param_4 != 0) {
    FUN_6604eb90((uint *)(param_1 + 0x28),1);
  }
  *(uint *)(param_1 + 0x2c) = param_5;
  if (param_5 != 0) {
    FUN_6604eb90((uint *)(param_1 + 0x2c),2);
  }
  return 0;
}


