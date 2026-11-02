/* Module: vegas30.exe
   Function: FUN_0046bb30
   Address: 0046bb30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046bb30(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = **(int **)(param_2 + 0x24);
  local_8 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + local_8 * 4);
      if (*(int *)(iVar2 + 0x38) != 0) {
        piVar4 = (int *)FUN_005d9be0(param_1,0,iVar2);
        iVar7 = 0;
        iVar2 = *(int *)*piVar4;
        if (0 < iVar2) {
          do {
            iVar6 = *(int *)(*piVar4 + 8);
            iVar5 = *(int *)(*piVar4 + 4) * iVar7;
            iVar6 = FUN_005d9aa0(param_1,0,*(undefined4 *)(iVar5 + iVar6),
                                 *(undefined4 *)(iVar5 + 4 + iVar6));
            if (iVar6 != 0) {
              iVar5 = *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x1c) +
                      (uint)CARRY4(*(uint *)(iVar6 + 0x20),*(uint *)(iVar6 + 0x18));
              if ((param_4 <= iVar5) &&
                 ((param_4 < iVar5 || (param_3 < *(uint *)(iVar6 + 0x20) + *(uint *)(iVar6 + 0x18)))
                 )) {
                uVar3 = *(uint *)(*(int *)(iVar6 + 8) + 0x10);
                if ((uVar3 & 0x100000) == 0) {
                  *(uint *)(*(int *)(iVar6 + 8) + 0x10) = uVar3 | 0x100000;
                  FUN_0046bb30(param_1,*(undefined4 *)(iVar6 + 8),param_3,param_4);
                }
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return;
}


