/* Module: rmbe3260.dll
   Function: FUN_66061bf0
   Address: 66061bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061bf0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (*(short *)((int)param_1 + 0x56) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (*(short *)((int)param_1 + 0x56) != 1) {
    *param_4 = 0;
    return 0x80040005;
  }
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2,param_3,param_4);
  return uVar1;
}


