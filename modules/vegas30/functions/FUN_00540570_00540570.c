/* Module: vegas30.exe
   Function: FUN_00540570
   Address: 00540570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540570(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0x80070057;
  }
  piVar4 = (int *)FUN_005b87b0(param_1);
  iVar6 = *piVar4;
  local_40 = 0;
  if (0 < iVar6) {
    piVar12 = (int *)(param_2 + 0x148);
    local_30 = iVar6;
    local_2c = piVar4;
    do {
      iVar9 = *(int *)(piVar4[2] + local_40 * 4);
      if (*(int *)(iVar9 + 4) == 3) {
        iVar6 = *(int *)(iVar9 + 0x1c);
        *piVar12 = 0;
        piVar12[-1] = iVar6;
        iVar5 = FUN_0057c190(*piVar12,param_1 + 0xc58,4);
        iVar6 = *piVar12;
        *piVar12 = iVar6 + iVar5;
        local_3c = *(uint *)(iVar9 + 0x10) >> 0x11 & 1;
        iVar5 = FUN_0057c190(iVar6 + iVar5,&local_3c,4);
        iVar6 = *piVar12;
        *piVar12 = iVar6 + iVar5;
        iVar5 = FUN_0057c190(iVar6 + iVar5,iVar9 + 0x20,4);
        iVar6 = *piVar12;
        *piVar12 = iVar6 + iVar5;
        iVar5 = FUN_0057c190(iVar6 + iVar5,iVar9 + 0x654,4);
        iVar6 = *piVar12;
        *piVar12 = iVar6 + iVar5;
        iVar6 = FUN_0057c190(iVar6 + iVar5,iVar9 + 0x15c,4);
        *piVar12 = *piVar12 + iVar6;
        local_4c = *(int **)(iVar9 + 0x78);
        if (local_4c != (int *)0x0) {
          iVar6 = *local_4c;
          iVar5 = 0;
          if (0 < iVar6) {
            do {
              iVar8 = *(int *)(local_4c[2] + iVar5 * 4);
              iVar7 = FUN_0057c190(*piVar12,iVar8 + 0x7c,4);
              iVar1 = *piVar12;
              *piVar12 = iVar1 + iVar7;
              iVar8 = FUN_0057c190(iVar1 + iVar7,iVar8,0x10);
              iVar5 = iVar5 + 1;
              *piVar12 = *piVar12 + iVar8;
            } while (iVar5 < iVar6);
          }
        }
        FUN_00541bb0(piVar12,*(undefined4 *)(iVar9 + 0x7c));
        local_48 = *(int *)(iVar9 + 0x120);
        if (local_48 == 0) {
          local_48 = 1;
        }
        iVar6 = FUN_0057c190(*piVar12,&local_48,4);
        *piVar12 = *piVar12 + iVar6;
        FUN_00541bb0(piVar12,*(undefined4 *)(*(int *)(iVar9 + 8) + 0xc40));
        piVar4 = *(int **)(iVar9 + 0x28);
        local_38 = piVar4;
        if ((piVar4 != (int *)0x0) && (iVar6 = *piVar4, iVar6 != 0)) {
          local_10 = *(undefined4 *)(param_2 + 0x10);
          local_c = *(undefined4 *)(param_2 + 0x14);
          local_54 = _SfList_FindSortedInsertIndexRange_20
                               (piVar4,&local_10,0,0xffffffff,&LAB_005c5a20);
          if (local_54 < 1) {
            local_54 = 0;
          }
          else {
            local_54 = local_54 + -1;
          }
          local_34 = iVar6 + -1;
          if (local_54 < local_34) {
            local_4c = (int *)(local_54 + 1);
            do {
              iVar6 = piVar4[2];
              uVar2 = *(uint *)(param_2 + 0x18);
              iVar5 = piVar4[1] * local_54;
              iVar9 = *(int *)(iVar5 + 0x14 + iVar6);
              local_4 = *(int *)(param_2 + 0x1c);
              piVar11 = (int *)(iVar5 + iVar6);
              if ((local_4 < iVar9) || ((local_4 <= iVar9 && (uVar2 <= (uint)piVar11[4])))) break;
              iVar5 = *piVar11;
              if (iVar5 != 0) {
                local_28 = *(uint *)(param_2 + 0x10);
                local_24 = *(int *)(param_2 + 0x14);
                iVar8 = (int)local_4c * piVar4[1];
                local_20 = *(uint *)(iVar8 + 0x10 + iVar6);
                uVar3 = piVar11[4];
                local_1c = *(int *)(iVar8 + 0x14 + iVar6);
                local_18 = uVar2;
                local_14 = local_4;
                if (((((local_24 <= iVar9) && ((local_24 < iVar9 || (local_28 <= uVar3)))) &&
                     ((iVar9 < local_4 || ((iVar9 <= local_4 && (uVar3 < uVar2)))))) ||
                    (((local_24 <= local_1c && ((local_24 < local_1c || (local_28 <= local_20)))) &&
                     ((local_1c < local_4 || ((local_1c <= local_4 && (local_20 < uVar2)))))))) ||
                   ((iVar9 <= local_24 &&
                    ((((iVar9 < local_24 || (uVar3 <= local_28)) && (local_24 <= local_1c)) &&
                     ((local_24 < local_1c || (local_28 < local_20)))))))) {
                  iVar9 = FUN_0057c190(*piVar12,iVar5 + 0x30,8);
                  iVar6 = *piVar12;
                  *piVar12 = iVar6 + iVar9;
                  iVar9 = FUN_0057c190(iVar6 + iVar9,iVar5 + 0x3c,4);
                  iVar6 = *piVar12;
                  *piVar12 = iVar6 + iVar9;
                  iVar6 = FUN_0057c190(iVar6 + iVar9,iVar5 + 0xb4,4);
                  *piVar12 = *piVar12 + iVar6;
                  FUN_00541bb0(piVar12,*(undefined4 *)(iVar5 + 0x140));
                  FUN_00541bb0(piVar12,*(undefined4 *)(iVar5 + 0x200));
                  FUN_00541bb0(piVar12,*(undefined4 *)(iVar5 + 0x204));
                  local_44 = *(int *)(iVar5 + 0x1e4);
                  if (local_44 == 0) {
                    local_44 = 1;
                  }
                  iVar6 = FUN_0057c190(*piVar12,&local_44,4);
                  local_50 = 0xffffffff;
                  *piVar12 = *piVar12 + iVar6;
                  if (((*(int *)(iVar5 + 0x50) != 0) &&
                      (iVar6 = *(int *)(*(int *)(iVar5 + 0x50) + 0x18), iVar6 != 0)) &&
                     (FUN_00541bb0(piVar12,*(undefined4 *)(iVar6 + 0x138)),
                     (*(uint *)(iVar6 + 0x134) & 0x400) != 0)) {
                    if (*(undefined4 **)(iVar6 + 0x4c0) == (undefined4 *)0x0) {
                      local_50 = 0;
                    }
                    else {
                      local_50 = **(undefined4 **)(iVar6 + 0x4c0);
                    }
                    iVar9 = FUN_0057c190(*piVar12,&local_50,4);
                    *piVar12 = *piVar12 + iVar9;
                    if (*(undefined4 **)(iVar6 + 0x4bc) == (undefined4 *)0x0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = **(undefined4 **)(iVar6 + 0x4bc);
                    }
                    FUN_00541bb0(piVar12,uVar10);
                  }
                  if (piVar11[1] != 0) {
                    FUN_00541c10(piVar12,piVar11[1]);
                  }
                }
              }
              local_54 = local_54 + 1;
              local_4c = (int *)((int)local_4c + 1);
              piVar4 = local_38;
            } while (local_54 < local_34);
          }
        }
        piVar12 = piVar12 + 3;
        piVar4 = local_2c;
        iVar6 = local_30;
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar6);
  }
  return 0;
}


