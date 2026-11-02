/* Module: vegas30k.dll
   Function: FUN_0119b7e0
   Address: 0119b7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119b7e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 1;
  iVar2 = *(int *)(param_1 + 0x62c) + 1;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(int *)(param_1 + 0x62c) = iVar2;
  *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + -1;
  if (*(int *)(param_1 + 0x61c) != iVar2) {
    return 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x640);
  if (puVar3 != (undefined4 *)0x0) {
    while (iVar1 = (**(code **)(*(int *)*puVar3 + 0x164))(param_1,param_2,param_3), iVar1 == 0) {
      puVar3 = (undefined4 *)puVar3[0xd];
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
    }
  }
  *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
  *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
  return iVar1;
}


