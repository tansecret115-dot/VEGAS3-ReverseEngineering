/* Module: rmbe3260.dll
   Function: FUN_66061730
   Address: 66061730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061730(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (uVar1 <= param_3) {
    (**(code **)(*(int *)(param_1 + 8) + 0x18))(param_2,param_3);
    uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
    *param_4 = uVar2;
    return 0;
  }
  *param_4 = 0;
  return 0x8004000d;
}


