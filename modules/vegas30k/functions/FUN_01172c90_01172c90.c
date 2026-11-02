/* Module: vegas30k.dll
   Function: FUN_01172c90
   Address: 01172c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01172c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_011678a0(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0x109),*(undefined4 *)(param_1 + 0x55))
  ;
  FUN_01172c30(param_4,*(undefined4 *)(param_1 + 0x109),*(undefined4 *)(param_1 + 0x55),
               *(int *)(param_2 + 0x1c) << 3);
  return;
}


