/* Module: vegas30k.dll
   Function: FUN_010ca4c0
   Address: 010ca4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010ca4c0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  ushort *puVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined2 *local_1c;
  int local_18;
  undefined2 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  uint local_4;
  
  piVar5 = *(int **)(*(int *)(param_1 + 0x8c) + 4);
  if (piVar5 == (int *)0x0) {
    return -0x7fffbffd;
  }
  local_8 = piVar5;
  _SfGetPixelType_4(piVar5);
  iVar3 = _SfGetPixelType_4(piVar5);
  if (iVar3 != 0x15) {
    return -0x7fffbfff;
  }
  iVar3 = _SfDibAlloc_28(&local_34,0x15,piVar5[1],piVar5[2],0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  _SfDibCopy_36(local_34,0,0,0,piVar5,0,0,0,3);
  uVar2 = *(ushort *)((int)piVar5 + 0xe);
  uVar4 = (uint)uVar2 * piVar5[1] + 0x1f;
  iVar3 = (uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U);
  iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f) >> 1;
  if (local_34[4] == 0) {
    if (((local_34[8] != 0) || (uVar1 = *(ushort *)((int)local_34 + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_010ca5aa;
    iVar11 = 1 << ((byte)uVar1 & 0x1f);
LAB_010ca5ad:
    local_40 = (int *)(*local_34 + iVar11 * 4 + (int)local_34);
  }
  else {
    if (local_34[4] != 3) {
LAB_010ca5aa:
      iVar11 = local_34[8];
      goto LAB_010ca5ad;
    }
    local_40 = local_34 + 0xd;
  }
  if (piVar5[4] == 0) {
    if (((piVar5[8] != 0) || (uVar2 == 0)) || (8 < uVar2)) goto LAB_010ca5f0;
    iVar11 = *piVar5 + (1 << ((byte)uVar2 & 0x1f)) * 4;
LAB_010ca5f8:
    local_44 = (int *)(iVar11 + (int)piVar5);
  }
  else {
    if (piVar5[4] != 3) {
LAB_010ca5f0:
      iVar11 = *piVar5 + piVar5[8] * 4;
      goto LAB_010ca5f8;
    }
    local_44 = piVar5 + 0xd;
  }
  if ((*(uint *)(param_1 + 0x88) & 0xff0000) < 0x30000) {
    iVar11 = 3;
    local_30 = &DAT_012065e8;
    local_3c = 3;
    local_20 = 0x10;
  }
  else {
    iVar11 = 5;
    local_30 = (int *)&DAT_0120660c;
    local_3c = 5;
    local_20 = 0x79;
  }
  iVar9 = (iVar11 + -1) / 2;
  param_1 = piVar5[2] - iVar9;
  local_c = piVar5[1] - iVar9;
  if (iVar9 < param_1) {
    local_10 = param_1 - iVar9;
    local_14 = (undefined2 *)((int)local_44 + (iVar3 + 1) * iVar9 * 2);
    do {
      local_1c = local_14;
      if (iVar9 < local_c) {
        psVar6 = (short *)(((int)local_14 - (int)local_44) + (int)local_40);
        local_18 = local_c - iVar9;
        do {
          if (*psVar6 == 0) {
            *local_1c = 0;
          }
          else {
            uVar4 = 0;
            if (iVar11 != 0) {
              local_2c = 0;
              piVar5 = local_30;
              local_28 = iVar11;
              do {
                puVar7 = (ushort *)(local_2c + iVar9 * iVar3 * -2 + iVar9 * -2 + (int)psVar6);
                piVar8 = piVar5 + iVar11;
                do {
                  uVar2 = *puVar7;
                  puVar7 = puVar7 + 1;
                  uVar4 = uVar4 + (uint)uVar2 * *piVar5;
                  iVar11 = iVar11 + -1;
                  piVar5 = piVar5 + 1;
                } while (iVar11 != 0);
                local_2c = local_2c + iVar3 * 2;
                local_28 = local_28 + -1;
                piVar5 = piVar8;
                iVar11 = local_3c;
              } while (local_28 != 0);
              local_28 = 0;
              piVar5 = local_8;
            }
            *local_1c = (short)(uVar4 / local_20);
          }
          local_1c = local_1c + 1;
          psVar6 = psVar6 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        local_18 = 0;
      }
      local_14 = local_14 + iVar3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_10 = 0;
  }
  local_24 = iVar9;
  local_4 = param_1;
  _SfDibFree_8(local_34,0);
  if (piVar5[4] == 0) {
    if (((piVar5[8] != 0) || (uVar2 = *(ushort *)((int)piVar5 + 0xe), uVar2 == 0)) || (8 < uVar2))
    goto LAB_010ca7c5;
    iVar11 = *piVar5 + (1 << ((byte)uVar2 & 0x1f)) * 4;
  }
  else {
    if (piVar5[4] == 3) {
      piVar5 = piVar5 + 0xd;
      goto LAB_010ca7cf;
    }
LAB_010ca7c5:
    iVar11 = *piVar5 + piVar5[8] * 4;
  }
  piVar5 = (int *)(iVar11 + (int)piVar5);
LAB_010ca7cf:
  if (iVar9 < param_1) {
    local_8 = (int *)(iVar3 * 2);
    param_1 = param_1 - iVar9;
    puVar7 = (ushort *)((int)piVar5 + (iVar3 + 1) * iVar9 * 2);
    do {
      if (iVar9 < local_c) {
        iVar3 = local_c - iVar9;
        puVar10 = puVar7;
        do {
          uVar2 = *puVar10;
          if ((uVar2 != 0) && (uVar2 != 0xffff)) {
            local_4 = (uint)uVar2;
            uVar2 = ftol();
            *puVar10 = uVar2;
          }
          puVar10 = puVar10 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puVar7 = (ushort *)((int)puVar7 + (int)local_8);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}


