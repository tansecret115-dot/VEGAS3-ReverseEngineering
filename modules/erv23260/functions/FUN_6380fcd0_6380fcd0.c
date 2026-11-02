/* Module: erv23260.dll
   Function: FUN_6380fcd0
   Address: 6380fcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6380fcd0(void *this,int param_1,int *param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  byte local_c4 [64];
  byte local_84 [64];
  int local_44;
  uint local_40;
  void *local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  piVar10 = param_2;
  local_3c = this;
  bVar2 = *(byte *)((int)this + 0x1b8);
  local_34 = CONCAT31(local_34._1_3_,bVar2);
  uVar12 = local_34;
  iVar5 = *(int *)(param_5 + 0x10);
  if (param_4 == 0) {
    iVar18 = *param_2;
    local_24 = (byte *)((int)((int *)param_2[1] + (param_3 & 2)) * iVar5 + (param_3 & 1) * 8 +
                        *(int *)(param_5 + 4) + iVar18);
    param_2 = (int *)param_2[1];
  }
  else {
    if (param_3 == 4) {
      param_5 = *(int *)(param_5 + 8);
    }
    else {
      param_5 = *(int *)(param_5 + 0xc);
    }
    iVar18 = *param_2;
    local_24 = (byte *)((iVar18 >> 1) + param_5 + (param_2[1] >> 1) * iVar5);
    param_2 = (int *)param_2[1];
  }
  if (piVar10[0x16] != 9) {
    return;
  }
  iVar13 = *(int *)((int)this + 0x1c) + (iVar18 >> 4) * 0x60;
  uVar6 = *(uint *)(iVar13 + param_3 * 8);
  local_30 = uVar6 & 1;
  iVar16 = (int)uVar6 >> 1;
  uVar6 = *(uint *)(iVar13 + 4 + param_3 * 8);
  local_10 = uVar6 & 1;
  iVar8 = (int)uVar6 >> 1;
  uVar6 = *(uint *)(iVar13 + 0x30 + param_3 * 8);
  local_40 = uVar6 & 1;
  uVar7 = *(uint *)(iVar13 + 0x34 + param_3 * 8);
  local_8 = (byte *)((int)uVar6 >> 1);
  iVar13 = (int)uVar7 >> 1;
  local_20 = uVar7 & 1;
  if (param_4 == 0) {
    iVar11 = (param_3 & 1) * 8;
    iVar13 = ((int)param_2 + iVar13 + (param_3 & 2) * 4) * iVar5 + *(int *)(param_7 + 4);
    iVar9 = ((int)param_2 + iVar8 + (param_3 & 2) * 4) * iVar5 + *(int *)(param_6 + 4) + iVar16 +
            iVar18 + iVar11;
  }
  else {
    if (param_3 == 4) {
      iVar9 = *(int *)(param_6 + 8);
    }
    else {
      iVar9 = *(int *)(param_6 + 0xc);
    }
    iVar18 = iVar18 >> 1;
    iVar9 = (iVar8 + ((int)param_2 >> 1)) * iVar5 + iVar16 + iVar18 + iVar9;
    if (param_3 == 4) {
      iVar11 = *(int *)(param_7 + 8);
    }
    else {
      iVar11 = *(int *)(param_7 + 0xc);
    }
    iVar13 = (iVar13 + ((int)param_2 >> 1)) * iVar5;
  }
  pbVar14 = local_8 + iVar11 + iVar18 + iVar13;
  local_38 = pbVar14;
  local_28 = local_84;
  if ((local_30 == 0) && (local_10 == 0)) {
    pbVar15 = local_c4 + 2;
    pbVar17 = (byte *)(iVar9 + 2);
    param_6 = 8;
    do {
      pbVar15[-2] = pbVar17[-2];
      pbVar15[-1] = pbVar17[-1];
      *pbVar15 = *pbVar17;
      pbVar15[1] = pbVar17[1];
      pbVar15[2] = pbVar17[2];
      pbVar15[3] = pbVar17[3];
      pbVar15[4] = pbVar17[4];
      pbVar15[5] = pbVar17[5];
      pbVar15 = pbVar15 + 8;
      pbVar17 = pbVar17 + iVar5;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  else if (local_30 == 0) {
LAB_6380ff91:
    if (local_10 == 0) {
LAB_638100de:
      uVar6 = (uint)bVar2;
      local_8 = (byte *)(iVar9 + 2);
      pbVar17 = (byte *)(iVar5 + 2 + iVar9);
      local_2c = 4 - iVar5;
      local_30 = 8;
      local_10 = 5 - iVar5;
      local_44 = 6 - iVar5;
      pbVar15 = local_c4 + 2;
      do {
        pbVar14 = local_8;
        local_c = (uint)pbVar17[-1];
        local_14 = (uint)pbVar17[-1 - iVar5];
        pbVar15[-2] = (byte)((int)((((uint)pbVar17[-2] + local_14 + pbVar17[-2 - iVar5] + local_c) -
                                   uVar6) + 2) >> 2);
        local_18 = (uint)*pbVar17;
        local_1c = (uint)*pbVar14;
        pbVar15[-1] = (byte)((int)(((local_14 + local_c + local_18 + local_1c) - uVar6) + 2) >> 2);
        local_c = (uint)pbVar17[1];
        local_14 = (uint)pbVar17[1 - iVar5];
        *pbVar15 = (byte)((int)(((local_14 + local_c + local_18 + local_1c) - uVar6) + 2) >> 2);
        local_18 = (uint)pbVar17[2 - iVar5];
        local_1c = (uint)pbVar17[2];
        pbVar15[1] = (byte)((int)(((local_1c + local_18 + local_14 + local_c) - uVar6) + 2) >> 2);
        local_c = (uint)pbVar17[3 - iVar5];
        local_14 = (uint)pbVar17[3];
        pbVar15[2] = (byte)((int)(((local_14 + local_c + local_1c + local_18) - uVar6) + 2) >> 2);
        local_18 = (uint)pbVar17[local_2c];
        local_1c = (uint)pbVar17[4];
        pbVar15[3] = (byte)((int)((((uint)pbVar17[4] + (uint)pbVar17[local_2c] + local_14 + local_c)
                                  - uVar6) + 2) >> 2);
        uVar12 = (uint)pbVar17[5];
        local_c = (uint)pbVar17[local_10];
        local_14 = uVar12;
        bVar2 = pbVar17[local_44];
        pbVar15[4] = (byte)((int)(((uVar12 + pbVar17[local_10] + local_1c + local_18) - uVar6) + 2)
                           >> 2);
        pbVar14 = pbVar17 + 6;
        pbVar17 = pbVar17 + iVar5;
        pbVar15[5] = (byte)((int)((((uint)*pbVar14 + uVar12 + bVar2 + local_c) - uVar6) + 2) >> 2);
        local_30 = local_30 - 1;
        local_8 = local_8 + iVar5;
        uVar12 = local_34;
        pbVar14 = local_38;
        pbVar15 = pbVar15 + 8;
      } while (local_30 != 0);
    }
    else {
      local_8 = (byte *)(iVar9 + 2);
      uVar6 = (uint)bVar2;
      pbVar17 = local_c4 + 2;
      pbVar15 = (byte *)(iVar5 + 2 + iVar9);
      local_c = 8;
      local_2c = 4 - iVar5;
      local_10 = 5 - iVar5;
      do {
        pbVar17[-2] = (byte)((int)((((uint)pbVar15[-2 - iVar5] + (uint)pbVar15[-2]) - uVar6) + 1) >>
                            1);
        pbVar14 = local_8;
        bVar2 = *pbVar15;
        pbVar17[-1] = (byte)((int)((((uint)pbVar15[-1 - iVar5] + (uint)pbVar15[-1]) - uVar6) + 1) >>
                            1);
        *pbVar17 = (byte)((int)((((uint)bVar2 + (uint)*pbVar14) - uVar6) + 1) >> 1);
        pbVar17[1] = (byte)((int)((((uint)pbVar15[1 - iVar5] + (uint)pbVar15[1]) - uVar6) + 1) >> 1)
        ;
        pbVar17[2] = (byte)((int)((((uint)pbVar15[2 - iVar5] + (uint)pbVar15[2]) - uVar6) + 1) >> 1)
        ;
        iVar18 = local_2c;
        pbVar17[3] = (byte)((int)((((uint)pbVar15[3 - iVar5] + (uint)pbVar15[3]) - uVar6) + 1) >> 1)
        ;
        uVar12 = local_10;
        pbVar17[4] = (byte)((int)((((uint)pbVar15[iVar18] + (uint)pbVar15[4]) - uVar6) + 1) >> 1);
        pbVar17[5] = (byte)((int)((((uint)pbVar15[uVar12] + (uint)pbVar15[5]) - uVar6) + 1) >> 1);
        pbVar17 = pbVar17 + 8;
        pbVar15 = pbVar15 + iVar5;
        local_8 = local_8 + iVar5;
        local_c = local_c - 1;
        uVar12 = local_34;
        pbVar14 = local_38;
      } while (local_c != 0);
    }
  }
  else {
    if (local_10 != 0) {
      if (local_30 == 0) goto LAB_6380ff91;
      goto LAB_638100de;
    }
    uVar6 = (uint)bVar2;
    pbVar15 = (byte *)(iVar9 + 2);
    param_6 = 8;
    pbVar17 = local_c4 + 2;
    do {
      bVar2 = pbVar15[-1];
      pbVar17[-2] = (byte)((int)((((uint)pbVar15[-2] + (uint)bVar2) - uVar6) + 1) >> 1);
      bVar3 = *pbVar15;
      pbVar17[-1] = (byte)((int)((((uint)bVar2 + (uint)bVar3) - uVar6) + 1) >> 1);
      bVar2 = pbVar15[1];
      *pbVar17 = (byte)((int)((((uint)bVar3 + (uint)bVar2) - uVar6) + 1) >> 1);
      bVar3 = pbVar15[2];
      bVar4 = pbVar15[3];
      pbVar17[1] = (byte)((int)((((uint)bVar3 + (uint)bVar2) - uVar6) + 1) >> 1);
      pbVar17[2] = (byte)((int)((((uint)bVar3 + (uint)bVar4) - uVar6) + 1) >> 1);
      bVar2 = pbVar15[4];
      bVar3 = pbVar15[5];
      pbVar17[3] = (byte)((int)((((uint)bVar2 + (uint)bVar4) - uVar6) + 1) >> 1);
      pbVar17[4] = (byte)((int)((((uint)bVar2 + (uint)bVar3) - uVar6) + 1) >> 1);
      pbVar14 = pbVar15 + 6;
      pbVar15 = pbVar15 + iVar5;
      pbVar17[5] = (byte)((int)((((uint)*pbVar14 + (uint)bVar3) - uVar6) + 1) >> 1);
      param_6 = param_6 + -1;
      uVar12 = local_34;
      pbVar14 = local_38;
      pbVar17 = pbVar17 + 8;
    } while (param_6 != 0);
  }
  if ((local_40 == 0) && (local_20 == 0)) {
    pbVar17 = local_84 + 2;
    pbVar14 = pbVar14 + 2;
    iVar18 = 8;
    do {
      pbVar17[-2] = pbVar14[-2];
      pbVar17[-1] = pbVar14[-1];
      *pbVar17 = *pbVar14;
      pbVar17[1] = pbVar14[1];
      pbVar17[2] = pbVar14[2];
      pbVar17[3] = pbVar14[3];
      pbVar17[4] = pbVar14[4];
      pbVar17[5] = pbVar14[5];
      pbVar17 = pbVar17 + 8;
      pbVar14 = pbVar14 + iVar5;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    goto LAB_63810552;
  }
  if (local_40 == 0) {
LAB_63810402:
    if (local_20 != 0) {
      local_8 = pbVar14 + 2;
      uVar12 = uVar12 & 0xff;
      pbVar14 = pbVar14 + iVar5 + 2;
      pbVar17 = local_84 + 2;
      local_20 = 8;
      local_2c = 4 - iVar5;
      local_10 = 5 - iVar5;
      do {
        pbVar17[-2] = (byte)((int)((((uint)pbVar14[-2 - iVar5] + (uint)pbVar14[-2]) - uVar12) + 1)
                            >> 1);
        pbVar15 = local_8;
        pbVar17[-1] = (byte)((int)((((uint)pbVar14[-1 - iVar5] + (uint)pbVar14[-1]) - uVar12) + 1)
                            >> 1);
        *pbVar17 = (byte)((int)((((uint)*pbVar14 + (uint)*pbVar15) - uVar12) + 1) >> 1);
        pbVar17[1] = (byte)((int)((((uint)pbVar14[1 - iVar5] + (uint)pbVar14[1]) - uVar12) + 1) >> 1
                           );
        pbVar17[2] = (byte)((int)((((uint)pbVar14[2 - iVar5] + (uint)pbVar14[2]) - uVar12) + 1) >> 1
                           );
        iVar18 = local_2c;
        pbVar17[3] = (byte)((int)((((uint)pbVar14[3 - iVar5] + (uint)pbVar14[3]) - uVar12) + 1) >> 1
                           );
        uVar6 = local_10;
        pbVar17[4] = (byte)((int)((((uint)pbVar14[iVar18] + (uint)pbVar14[4]) - uVar12) + 1) >> 1);
        pbVar17[5] = (byte)((int)((((uint)pbVar14[uVar6] + (uint)pbVar14[5]) - uVar12) + 1) >> 1);
        pbVar17 = pbVar17 + 8;
        pbVar14 = pbVar14 + iVar5;
        local_8 = local_8 + iVar5;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      goto LAB_63810552;
    }
  }
  else {
    if (local_20 == 0) {
      uVar12 = uVar12 & 0xff;
      pbVar14 = pbVar14 + 2;
      param_6 = 8;
      pbVar17 = local_84 + 2;
      do {
        pbVar17[-2] = (byte)((int)((((uint)pbVar14[-2] + (uint)pbVar14[-1]) - uVar12) + 1) >> 1);
        pbVar17[-1] = (byte)((int)((((uint)pbVar14[-1] + (uint)*pbVar14) - uVar12) + 1) >> 1);
        *pbVar17 = (byte)((int)((((uint)pbVar14[1] + (uint)*pbVar14) - uVar12) + 1) >> 1);
        pbVar17[1] = (byte)((int)((((uint)pbVar14[2] + (uint)pbVar14[1]) - uVar12) + 1) >> 1);
        pbVar17[2] = (byte)((int)((((uint)pbVar14[2] + (uint)pbVar14[3]) - uVar12) + 1) >> 1);
        pbVar17[3] = (byte)((int)((((uint)pbVar14[4] + (uint)pbVar14[3]) - uVar12) + 1) >> 1);
        pbVar17[4] = (byte)((int)((((uint)pbVar14[4] + (uint)pbVar14[5]) - uVar12) + 1) >> 1);
        pbVar15 = pbVar14 + 5;
        pbVar1 = pbVar14 + 6;
        pbVar14 = pbVar14 + iVar5;
        pbVar17[5] = (byte)((int)((((uint)*pbVar1 + (uint)*pbVar15) - uVar12) + 1) >> 1);
        param_6 = param_6 + -1;
        pbVar17 = pbVar17 + 8;
      } while (param_6 != 0);
      goto LAB_63810552;
    }
    if (local_40 == 0) goto LAB_63810402;
  }
  FUN_63810850(local_84,pbVar14,iVar5,uVar12);
LAB_63810552:
  iVar18 = -(int)local_84;
  param_5 = 8;
  piVar10 = (int *)(param_1 + 8);
  pbVar14 = local_c4 + 2;
  do {
    piVar10[-2] = (uint)*local_24 -
                  ((int)((uint)local_28[(int)(local_c4 + iVar18)] + (uint)*local_28) >> 1);
    piVar10[-1] = (uint)local_24[1] - ((int)((uint)pbVar14[-1] + (uint)local_28[1]) >> 1);
    bVar2 = pbVar14[1];
    *piVar10 = (uint)local_24[2] -
               ((int)((uint)local_28[(int)(local_84 + iVar18 + 2)] + (uint)*pbVar14) >> 1);
    piVar10[1] = (uint)local_24[3] -
                 ((int)((uint)bVar2 + (uint)local_28[(int)(local_84 + iVar18 + 3)]) >> 1);
    piVar10[2] = (uint)local_24[4] -
                 ((int)((uint)local_28[(int)(local_84 + iVar18 + 4)] + (uint)pbVar14[2]) >> 1);
    piVar10[3] = (uint)local_24[5] -
                 ((int)((uint)local_28[(int)(local_84 + iVar18 + 5)] + (uint)pbVar14[3]) >> 1);
    piVar10[4] = (uint)local_24[6] -
                 ((int)((uint)local_28[(int)(local_84 + iVar18 + 6)] + (uint)pbVar14[4]) >> 1);
    piVar10[5] = (uint)local_24[7] -
                 ((int)((uint)local_28[(int)(local_84 + iVar18 + 7)] + (uint)pbVar14[5]) >> 1);
    param_5 = param_5 + -1;
    local_24 = local_24 + iVar5;
    local_28 = local_28 + 8;
    piVar10 = piVar10 + 8;
    pbVar14 = pbVar14 + 8;
  } while (param_5 != 0);
  return;
}


