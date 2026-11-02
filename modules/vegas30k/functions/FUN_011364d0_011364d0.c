/* Module: vegas30k.dll
   Function: FUN_011364d0
   Address: 011364d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011364d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
                    (*(int **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x38),param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_0113ced0(param_2,*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18));
  }
  else {
    iVar2 = FUN_0113c2e0(*(undefined4 *)(param_1 + 0x14));
    if (iVar2 < 0) {
      FUN_0113d1e0();
      (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18));
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  return iVar1;
}


