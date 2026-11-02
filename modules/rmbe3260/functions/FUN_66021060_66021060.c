/* Module: rmbe3260.dll
   Function: FUN_66021060
   Address: 66021060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66021060(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x1ce) = 0;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1ce) = param_2;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))
            (param_1 + 0xc,*(undefined4 *)(param_1 + 0x1ce),param_3,param_4,param_5);
  return;
}


