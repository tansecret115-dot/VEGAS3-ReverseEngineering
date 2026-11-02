/* Module: aviplug.dll
   Function: FUN_5f973a30
   Address: 5f973a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973a30(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  short sVar13;
  short sVar15;
  ulonglong uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_4c [5];
  uint *local_38;
  uint local_34;
  uint local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_34 = param_2 + 0xc940;
  local_38 = (uint *)(param_2 + 0x3c00);
  local_8 = 0;
  local_10 = (int *)(param_2 + 0xb9c0);
  FUN_5f973390((int)local_38,(ulonglong *)(param_2 + 0xe480));
  FUN_5f973770(param_2);
  local_24 = local_4c;
  local_28 = (int *)(param_2 + 0xb9a8);
  local_14 = (int *)(param_2 + 0xc9bc);
  local_c = (int *)(param_2 + 0xc9b8);
  local_20 = (param_2 + 0xb9c0) - (int)local_4c;
  iVar11 = 0x32b0;
  local_18 = local_28;
  do {
    iVar9 = 0xf;
    iVar3 = *local_c;
    while ((*local_14 == iVar3 && (0 < iVar9))) {
      iVar9 = iVar9 + -1;
      iVar3 = *(int *)(param_2 + -0x144 + (iVar11 + iVar9) * 4);
    }
    local_2c = (int *)(param_2 + (iVar11 + iVar9) * 4);
    iVar3 = FUN_5f973570((uint *)*local_18,iVar9);
    piVar7 = local_24;
    iVar11 = iVar11 + 0x10;
    local_24 = local_24 + 1;
    *local_2c = iVar3;
    *(int *)(local_20 + -4 + (int)local_24) = iVar9;
    iVar3 = *local_2c;
    *piVar7 = iVar3;
    local_8 = local_8 + iVar3;
    local_14 = local_14 + 0x10;
    local_c = local_c + 0x10;
    local_18 = local_18 + 1;
  } while (iVar11 < 0x3300);
  if (local_8 < 0xa01) {
LAB_5f973e57:
    iVar11 = 5;
    piVar7 = (int *)(param_1 + 4);
    piVar4 = local_10;
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      *piVar7 = iVar3;
      piVar7 = piVar7 + 0x12;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    FUN_5f973660(local_38,*(longlong **)(param_1 + 8),local_10);
    return;
  }
  local_c = (int *)0xb;
  piVar7 = local_10;
  while (local_10 = piVar7, 3000 < local_8) {
    iVar11 = 0xb;
    piVar4 = piVar7;
    do {
      uVar14 = (ulonglong)DAT_5f9e0180;
      uVar18 = 0xffffffff;
      uVar8 = 0;
      iVar3 = 0;
      uVar10 = local_34;
      uVar17 = uVar18;
      while (uVar16 = uVar10, iVar9 = (int)uVar14, iVar3 < 5) {
        iVar6 = piVar4[iVar3];
        uVar10 = uVar16 + 0x40;
        iVar5 = iVar3 + 1;
        uVar18 = uVar18 + 1;
        piVar4[iVar3 + 5] = iVar6;
        iVar3 = iVar5;
        if (iVar6 != 0) {
          iVar6 = *(int *)(uVar16 + 0x3c + iVar6 * 4);
          sVar1 = (short)iVar6;
          sVar13 = (short)uVar14;
          sVar2 = (short)((uint)iVar6 >> 0x10);
          sVar15 = (short)(uVar14 >> 0x10);
          uVar14 = (ulonglong)
                   CONCAT22((ushort)(sVar2 < sVar15) * sVar2 | (ushort)(sVar2 >= sVar15) * sVar15,
                            (ushort)(sVar1 < sVar13) * sVar1 | (ushort)(sVar1 >= sVar13) * sVar13);
          uVar16 = -(uint)(iVar9 < iVar6);
          uVar17 = uVar17 & uVar16 | ~uVar16 & uVar18;
          uVar8 = uVar8 & uVar16 | ~uVar16 & uVar10;
        }
      }
      iVar3 = piVar4[uVar17];
      do {
        if (uVar8 == 0) goto LAB_5f973be2;
        iVar6 = iVar3 * 4;
        iVar3 = iVar3 + -1;
      } while ((iVar3 != 0) && (iVar9 == *(int *)((uVar8 - 8) + iVar6)));
      piVar4[uVar17 + 5] = iVar3;
      piVar4 = piVar4 + 5;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
LAB_5f973be2:
    local_c = (int *)((int)local_c - iVar11);
    local_8 = 0;
    iVar3 = 0x32b0;
    local_18 = (int *)(param_2 + 0xb9c0 + (int)local_c * 0x14);
    iVar11 = (int)local_4c - (int)piVar7;
    local_20 = iVar11;
    local_1c = local_28;
    do {
      piVar4 = (int *)*local_18;
      local_24 = (int *)(param_2 + (iVar3 + (int)piVar4) * 4);
      local_14 = piVar4;
      if (*local_24 < 0) {
        iVar11 = FUN_5f973570((uint *)*local_1c,(int)piVar4);
        *local_24 = iVar11;
        iVar11 = local_20;
      }
      iVar9 = local_8 + *local_24;
      *(int *)(iVar11 + (int)piVar7) = *local_24;
      local_8 = iVar9;
      *piVar7 = (int)piVar4;
      iVar3 = iVar3 + 0x10;
      piVar7 = piVar7 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (iVar3 < 0x3300);
    if ((int)local_c < 0xb) break;
    piVar4 = (int *)(param_2 + 0xba9c);
    piVar12 = local_10;
    for (iVar11 = 5; piVar7 = local_10, iVar11 != 0; iVar11 = iVar11 + -1) {
      *piVar12 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar12 = piVar12 + 1;
    }
  }
  local_c = (int *)((int)local_c + -1);
  if (local_8 < 0xa00) {
    local_24 = (int *)(param_2 + 0xb9c0 + (int)local_c * 0x14);
    do {
      if ((int)local_c < 1) break;
      local_18 = local_28;
      local_1c = local_24;
      local_8 = 0;
      iVar11 = 0x32b0;
      local_20 = (int)local_4c - (int)local_10;
      piVar7 = local_10;
      do {
        local_14 = (int *)*local_1c;
        local_2c = (int *)(param_2 + (iVar11 + (int)local_14) * 4);
        if (*(int *)(param_2 + (iVar11 + (int)local_14) * 4) < 0) {
          iVar3 = FUN_5f973570((uint *)*local_18,(int)local_14);
          *local_2c = iVar3;
        }
        iVar3 = *local_2c;
        iVar9 = local_8 + iVar3;
        *piVar7 = (int)local_14;
        local_8 = iVar9;
        iVar11 = iVar11 + 0x10;
        *(int *)((int)piVar7 + local_20) = iVar3;
        piVar7 = piVar7 + 1;
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
      } while (iVar11 < 0x3300);
      local_c = (int *)((int)local_c + -1);
      local_24 = local_24 + -5;
    } while (iVar9 < 0xa00);
  }
  do {
    if (local_8 < 0xa01) goto LAB_5f973e57;
    uVar14 = (ulonglong)DAT_5f9e0180;
    uVar18 = 0xffffffff;
    uVar8 = 0;
    iVar11 = 0;
    uVar10 = local_34;
    uVar17 = uVar18;
    while (uVar16 = uVar10, iVar3 = (int)uVar14, iVar11 < 5) {
      iVar9 = local_10[iVar11];
      uVar10 = uVar16 + 0x40;
      iVar6 = iVar11 + 1;
      uVar18 = uVar18 + 1;
      local_10[iVar11 + 5] = iVar9;
      iVar11 = iVar6;
      if (iVar9 != 0) {
        iVar9 = *(int *)(uVar16 + 0x3c + iVar9 * 4);
        sVar1 = (short)iVar9;
        sVar13 = (short)uVar14;
        sVar2 = (short)((uint)iVar9 >> 0x10);
        sVar15 = (short)(uVar14 >> 0x10);
        uVar14 = (ulonglong)
                 CONCAT22((ushort)(sVar2 < sVar15) * sVar2 | (ushort)(sVar2 >= sVar15) * sVar15,
                          (ushort)(sVar1 < sVar13) * sVar1 | (ushort)(sVar1 >= sVar13) * sVar13);
        uVar16 = -(uint)(iVar3 < iVar9);
        uVar17 = uVar17 & uVar16 | ~uVar16 & uVar18;
        uVar8 = uVar8 & uVar16 | ~uVar16 & uVar10;
      }
    }
    local_30 = uVar17;
    piVar7 = (int *)local_10[uVar17];
    do {
      iVar11 = (int)piVar7 * 4;
      piVar7 = (int *)((int)piVar7 + -1);
      if (piVar7 == (int *)0x0) break;
    } while (iVar3 == *(int *)((uVar8 - 8) + iVar11));
    local_14 = piVar7;
    if ((int)uVar17 < 0) goto LAB_5f973e57;
    piVar4 = (int *)(param_2 + (int)(piVar7 + (uVar17 + 0x32b) * 4) * 4);
    if (*(int *)(param_2 + (int)(piVar7 + (uVar17 + 0x32b) * 4) * 4) < 0) {
      iVar11 = FUN_5f973570(*(uint **)(param_2 + 0xb9a8 + uVar17 * 4),(int)piVar7);
      *piVar4 = iVar11;
    }
    iVar11 = local_4c[uVar17];
    local_4c[uVar17] = *piVar4;
    local_10[uVar17] = (int)piVar7;
    local_8 = (local_8 - iVar11) + local_4c[uVar17];
  } while( true );
}


