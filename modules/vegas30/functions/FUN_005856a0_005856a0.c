/* Module: vegas30.exe
   Function: FUN_005856a0
   Address: 005856a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005856a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = _SfList_FindSortedItemRange_20
                    (*(undefined4 *)(param_1 + 4),param_2,0,0xffffffff,&LAB_00585450);
  if (iVar1 != -1) {
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 4) + 4) * iVar1 + *(int *)(*(int *)(param_1 + 4) + 8));
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    return 0;
  }
  return 0x8004e00a;
}


