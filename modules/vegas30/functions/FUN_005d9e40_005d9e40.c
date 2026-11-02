/* Module: vegas30.exe
   Function: FUN_005d9e40
   Address: 005d9e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9e40(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_18;
  int local_14;
  int local_c;
  
  uVar3 = param_1;
  FUN_005b83b0(param_1,1);
  piVar4 = (int *)FUN_005b87b0(param_1);
  if (piVar4 != (int *)0x0) {
    iVar8 = *piVar4;
    local_c = 0;
    if (0 < iVar8) {
      do {
        iVar9 = *(int *)(piVar4[2] + local_c * 4);
        piVar1 = *(int **)(iVar9 + 0x24);
        if (piVar1 == (int *)0x0) {
          local_14 = 0;
        }
        else {
          local_14 = *piVar1;
        }
        local_18 = 0;
        if (0 < local_14) {
          do {
            iVar10 = *(int *)(*(int *)(*(int *)(iVar9 + 0x24) + 8) + local_18 * 4);
            uVar7 = *(undefined4 *)(iVar10 + 0x34);
            uVar2 = *(undefined4 *)(iVar10 + 0x30);
            *(undefined4 *)(iVar10 + 0x30) = 0;
            *(undefined4 *)(iVar10 + 0x34) = 0;
            iVar5 = FUN_005d9aa0(param_1,0,uVar2,uVar7);
            *(undefined4 *)(iVar10 + 0x30) = uVar2;
            *(undefined4 *)(iVar10 + 0x34) = uVar7;
            if (iVar5 != 0) {
              FUN_005d9d30(param_1,iVar10,0);
              uVar11 = FUN_005d9b80(param_1,*(undefined4 *)(iVar10 + 4));
              *(undefined8 *)(iVar10 + 0x30) = uVar11;
              *(undefined4 *)(iVar10 + 0x38) = 0;
              local_18 = local_18 + -1;
              *(undefined4 *)(iVar5 + 0x38) = 0;
            }
            local_18 = local_18 + 1;
          } while (local_18 < local_14);
        }
        local_c = local_c + 1;
      } while (local_c < iVar8);
    }
  }
  piVar4 = (int *)FUN_005b87b0(param_1);
  if (piVar4 != (int *)0x0) {
    iVar8 = *piVar4;
    local_c = 0;
    if (0 < iVar8) {
      do {
        iVar10 = 0;
        iVar9 = *(int *)(piVar4[2] + local_c * 4);
        piVar1 = *(int **)(iVar9 + 0x24);
        if (piVar1 == (int *)0x0) {
          param_1 = 0;
        }
        else {
          param_1 = *piVar1;
        }
        if (0 < param_1) {
          do {
            iVar5 = *(int *)(*(int *)(*(int *)(iVar9 + 0x24) + 8) + iVar10 * 4);
            iVar6 = FUN_005d9660(uVar3,iVar5);
            if (iVar6 != *(int *)(iVar5 + 0x38)) {
              *(int *)(iVar5 + 0x38) = iVar6;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < param_1);
        }
        local_c = local_c + 1;
      } while (local_c < iVar8);
    }
  }
  piVar4 = (int *)FUN_005d9710(uVar3);
  if (piVar4 == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *piVar4;
  }
  local_c = 0;
  if (0 < param_1) {
    do {
      iVar9 = 0;
      piVar1 = *(int **)(piVar4[2] + local_c * 4);
      iVar8 = *(int *)*piVar1;
      if (0 < iVar8) {
        do {
          iVar10 = *(int *)(*piVar1 + 8);
          iVar5 = *(int *)(*piVar1 + 4) * iVar9;
          iVar10 = FUN_005d9aa0(uVar3,0,*(undefined4 *)(iVar5 + iVar10),
                                *(undefined4 *)(iVar5 + 4 + iVar10));
          if (iVar10 == 0) {
            _SfList_DeleteList_16(*piVar1,iVar9,1,1);
            iVar9 = iVar9 + -1;
            iVar8 = iVar8 + -1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      local_c = local_c + 1;
    } while (local_c < param_1);
  }
  uVar7 = FUN_005d97c0(uVar3);
  uVar7 = FUN_005d97e0(uVar3,0,uVar7);
  FUN_005b84d0(uVar3,1);
  return uVar7;
}


