/* Module: vegas30.exe
   Function: FUN_0046d4b0
   Address: 0046d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d4b0(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_c;
  int local_4;
  
  iVar10 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  local_1c = **(int **)(param_1 + 0xcd0);
  if (local_1c == 0) {
    FUN_005b83b0(uVar1,1);
    local_1c = 0;
    FUN_004e9f70(uVar1,param_6,0);
    FUN_004ea880(uVar1);
    if (*(int *)(param_1 + 0xbc8) == 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (iVar10 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      iVar10 = _DAT_00000000;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar7 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar10 = *piVar7;
      }
    }
    local_4 = 0;
    if (0 < iVar10) {
      do {
        iVar11 = 0;
        bVar4 = false;
        bVar5 = false;
        iVar2 = *(int *)(*(int *)(local_c + 8) + local_4 * 4);
        param_6 = **(int **)(iVar2 + 0x24);
        if (0 < param_6) {
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x24) + 8) + iVar11 * 4);
            if (((*(uint *)(iVar6 + 0x10) & 8) == 0) && ((*(uint *)(iVar6 + 0x10) & 0x100000) == 0))
            {
              uVar3 = *(uint *)(iVar6 + 0x18);
              iVar9 = *(int *)(iVar6 + 0x1c);
              iVar8 = iVar9 + *(int *)(iVar6 + 0x24) + (uint)CARRY4(uVar3,*(uint *)(iVar6 + 0x20));
              if (((param_5 < iVar8) ||
                  ((param_5 <= iVar8 && (param_4 < uVar3 + *(uint *)(iVar6 + 0x20))))) ||
                 ((iVar9 <= param_3 && ((iVar9 < param_3 || (uVar3 < param_2)))))) {
                if (!bVar4) {
                  FUN_004ea250(uVar1,iVar2,1,0);
                  bVar4 = true;
                }
                uVar3 = *(uint *)(iVar6 + 0x18);
                iVar9 = *(int *)(iVar6 + 0x1c);
                iVar8 = iVar9 + *(int *)(iVar6 + 0x24) + (uint)CARRY4(uVar3,*(uint *)(iVar6 + 0x20))
                ;
                if ((iVar8 < param_3) ||
                   ((((iVar8 <= param_3 && (uVar3 + *(uint *)(iVar6 + 0x20) <= param_2)) ||
                     (param_5 < iVar9)) || ((param_5 <= iVar9 && (param_4 <= uVar3)))))) {
                  FUN_005c8d80(uVar1,iVar6,0);
                  iVar11 = iVar11 + -1;
                  param_6 = param_6 + -1;
                  local_1c = local_1c + 1;
                }
                else {
                  iVar9 = FUN_005ca250(uVar1,iVar6,param_4,param_5);
                  if (iVar9 == 0) {
                    bVar5 = true;
                    local_1c = local_1c + 1;
                  }
                  iVar6 = FUN_005c9ef0(uVar1,iVar6,param_2,param_3);
                  if (iVar6 == 0) {
                    bVar5 = true;
                    local_1c = local_1c + 1;
                  }
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < param_6);
          if (bVar5) {
            FUN_005c8a20(iVar2);
          }
        }
        local_4 = local_4 + 1;
      } while (local_4 < iVar10);
    }
    FUN_005b84d0(uVar1,1);
    if (0 < local_1c) {
      FUN_004eb2b0(uVar1);
    }
    FUN_004ea040(uVar1,0);
  }
  else {
    FUN_004e9f70(uVar1,param_6,0);
    FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd0));
    FUN_0046bad0(param_1);
    FUN_004ea880(uVar1);
    FUN_005b83b0(uVar1,1);
    if (0 < local_1c) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + iVar10 * 4);
        if (((*(uint *)(iVar2 + 0x10) & 8) == 0) && ((*(uint *)(iVar2 + 0x10) & 0x100000) == 0)) {
          FUN_004ea250(uVar1,*(undefined4 *)(iVar2 + 8),1,0);
          uVar3 = *(uint *)(iVar2 + 0x18);
          iVar11 = *(int *)(iVar2 + 0x1c);
          iVar6 = *(int *)(iVar2 + 0x24) + iVar11 + (uint)CARRY4(*(uint *)(iVar2 + 0x20),uVar3);
          if (((iVar6 < param_3) ||
              (((iVar6 <= param_3 && (*(uint *)(iVar2 + 0x20) + uVar3 <= param_2)) ||
               (param_5 < iVar11)))) || ((param_5 <= iVar11 && (param_4 <= uVar3)))) {
            FUN_005c8d80(uVar1,iVar2,0);
            _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xcd0),iVar10,1,0);
            iVar10 = iVar10 + -1;
            local_1c = local_1c + -1;
          }
          else {
            FUN_005ca250(uVar1,iVar2,param_4,param_5);
            FUN_005c9ef0(uVar1,iVar2,param_2,param_3);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_1c);
    }
    FUN_0046c3f0(param_1);
    FUN_005b84d0(uVar1,1);
    FUN_004eb2b0(uVar1);
    FUN_004ea040(uVar1,0);
    FUN_00469280(param_1);
  }
  FUN_00456c20(param_1);
  FUN_004530a0(param_1,0);
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


