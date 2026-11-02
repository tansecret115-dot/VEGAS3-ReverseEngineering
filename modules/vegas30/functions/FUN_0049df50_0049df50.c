/* Module: vegas30.exe
   Function: FUN_0049df50
   Address: 0049df50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049df50(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong local_8;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0xcec) + 8) + 0x28);
  if ((piVar6 != (int *)0x0) && (iVar1 = *piVar6, 1 < iVar1)) {
    local_8 = ftol();
    local_8 = local_8 + *(longlong *)(param_1 + 0xb88);
    iVar3 = _SfList_FindSortedInsertIndexRange_20(piVar6,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (iVar3 < iVar1 + -1) {
      iVar1 = *(int *)(piVar6[1] * iVar3 + 4 + piVar6[2]);
      piVar6 = (int *)(piVar6[1] * iVar3 + piVar6[2]);
      if (iVar1 != 0) {
        iVar3 = *piVar6;
        iVar4 = *(int *)(iVar1 + 0x1c);
        iVar5 = *(int *)(iVar3 + 0x1c);
        uVar2 = *(uint *)(iVar3 + 0x18);
        if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (*(uint *)(iVar1 + 0x18) < uVar2)))) {
          iVar5 = *(int *)(iVar3 + 0x24) + iVar5 + (uint)CARRY4(*(uint *)(iVar3 + 0x20),uVar2);
          iVar4 = *(int *)(iVar1 + 0x24) + iVar4 +
                  (uint)CARRY4(*(uint *)(iVar1 + 0x20),*(uint *)(iVar1 + 0x18));
          if ((iVar5 <= iVar4) &&
             ((iVar5 < iVar4 ||
              (*(uint *)(iVar3 + 0x20) + uVar2 < *(uint *)(iVar1 + 0x20) + *(uint *)(iVar1 + 0x18)))
             )) {
            if (param_2 != (uint *)0x0) {
              *param_2 = (uint)~piVar6[0x32] >> 1 & 1;
            }
            if (param_3 != (uint *)0x0) {
              *param_3 = (uint)piVar6[0x32] >> 1 & 1;
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


