/* Module: ednt3260.dll
   Function: FUN_630f66a0
   Address: 630f66a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f66a0(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined2 *puVar7;
  short sVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  short *psVar11;
  undefined4 *puVar12;
  short *psVar13;
  undefined4 local_70;
  short local_6c;
  short local_68;
  short *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  uint local_8;
  
  local_40 = 0xb;
  local_48 = 6;
  puVar10 = (undefined2 *)(param_1 + 0xed74);
  puVar9 = (undefined2 *)(param_1 + 0xed68);
  do {
    puVar9[-6] = 0x1f;
    iVar4 = 0;
    *puVar9 = 0;
    puVar7 = puVar10;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        *puVar7 = 0;
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar4 < *(short *)(param_1 + 0x6344));
    }
    puVar9[0x24] = 0;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 5;
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  local_3c = 0x310;
  local_38 = -0xf0;
  local_48 = 0;
  local_44 = 0;
  iVar4 = local_4c;
  do {
    local_4c = iVar4;
    local_34 = param_1 + 0x1047c;
    local_30 = param_1 + 0xf8c4;
    local_c = (short *)(param_1 + 0xb06c);
    local_2c = param_1 + 0x104e8;
    local_20 = param_1 + 0xf66c;
    local_24 = (int *)(param_1 + 0x104d0);
    local_28 = 0;
    local_50 = (short *)0x0;
    psVar11 = (short *)(param_1 + 0x63fc);
    do {
      psVar13 = local_50;
      if (psVar11[0x6ea0] == 0) {
        psVar11[0x1cbeb] = psVar11[0x1cbea];
        psVar11[0x44a4] = psVar11[0x44a3];
      }
      else {
        local_8 = (uint)(psVar11[0x44b0] == 0);
        if ((*psVar11 != 0) && (psVar11[0x44b6] != 0)) {
          local_8 = 0;
        }
        iVar4 = (int)*(short *)(param_1 + 0x6344);
        if (0 < iVar4) {
          psVar5 = local_c + 0x1e84;
          do {
            if (*psVar5 != 0) {
              local_8 = 0;
            }
            psVar5 = psVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if ((*(short *)(param_1 + 0x6312) != 0) && (psVar11[0x44da] != 0)) {
          local_8 = 0;
        }
        sVar8 = *(short *)(&UNK_63102878 + psVar11[0x44b0] * 2);
        psVar11[0x44a4] = sVar8;
        sVar1 = *psVar11;
        _local_1c = CONCAT22(uStack_1a,*(undefined2 *)(&DAT_631021a8 + sVar8 * 2));
        puVar12 = &local_70;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        if (sVar1 != 0) {
          FUN_630f8550(*(int *)(*(int *)(param_1 + 0x1b86a) + (int)psVar13),local_20,*local_24,
                       (psVar11[0x44b6] + (psVar11[0x44b0] + -0xf) * 0x10) * 4,(short)_local_1c,
                       (short)local_8,(int)&local_70,psVar11[0x36],psVar11[0x3c],psVar11[0x6e70],
                       psVar11[0x6e76]);
        }
        local_4c = 0;
        if (0 < *(short *)(param_1 + 0x6344)) {
          local_14 = local_2c;
          local_10 = local_30;
          local_18 = local_28;
          psVar13 = local_c;
          do {
            FUN_630f8550(local_18 + *(int *)(param_1 + 0x1b836),local_10,local_14,
                         (psVar13[0x1e84] + (psVar11[0x44b0] + -0xf) * 0x10) * 4,(short)_local_1c,
                         (short)local_8,(int)&local_70,0,*psVar13,0,psVar13[0x4844]);
            local_10 = local_10 + 100;
            local_14 = local_14 + 0x1fa;
            local_4c = local_4c + 1;
            local_18 = local_18 + 0x1fa;
            psVar13 = psVar13 + 1;
          } while (local_4c < *(short *)(param_1 + 0x6344));
        }
        if (*(short *)(param_1 + 0x6312) != 0) {
          FUN_630f8550(local_34 + 0x3c0c,local_34,local_34 + 0x3bb8,
                       (psVar11[0x44da] + (psVar11[0x44b0] + -0xf) * 0x10) * 4,(short)_local_1c,
                       (short)local_8,(int)&local_70,0,psVar11[0x2656],0,psVar11[0x6e9a]);
        }
        sVar8 = local_70._2_2_ / 3;
        if (sVar8 * 3 < (int)local_70._2_2_) {
          sVar8 = sVar8 + 1;
        }
        local_70._2_2_ = sVar8;
        sVar8 = local_6c / 3;
        if (sVar8 * 3 < (int)local_6c) {
          sVar8 = sVar8 + 1;
        }
        local_6c = sVar8;
        sVar8 = local_68 / 2;
        if (sVar8 * 2 < (int)local_68) {
          sVar8 = sVar8 + 1;
        }
        local_68 = sVar8;
        sVar8 = 0;
        iVar4 = 0;
        do {
          iVar3 = iVar4 + 2;
          psVar13 = (short *)((int)&DAT_63101ada + iVar4);
          iVar4 = iVar4 + 2;
          sVar8 = sVar8 + *(short *)((int)&local_70 + iVar3) * *psVar13;
        } while (iVar4 < 0x1e);
        psVar11[0x1cbeb] = sVar8;
      }
      local_20 = local_20 + 100;
      local_24 = local_24 + 1;
      local_50 = (short *)((int)local_50 + 4);
      local_28 = local_28 + 0x9e2;
      local_2c = local_2c + 0x9e2;
      psVar11 = psVar11 + 1;
      local_c = local_c + 5;
      local_30 = local_30 + 500;
      local_34 = local_34 + 0xe;
    } while ((int)local_50 < 0x18);
    iVar6 = FUN_630f7110(param_1);
    psVar13 = (short *)(param_1 + 0xed74);
    iVar4 = CONCAT22((short)((uint)psVar11 >> 0x10),*(short *)(param_1 + 0xed5c) + -0xf) << 4;
    iVar4 = CONCAT22((short)((uint)iVar4 >> 0x10),(short)iVar4 + *psVar13);
    iVar3 = iVar4;
    if (-1 < iVar6) {
      local_48 = 1;
      local_38 = iVar4;
      FUN_630f6bd0(param_1);
      iVar3 = local_3c;
    }
    local_3c = iVar3;
    if ((int)(short)local_3c - (int)(short)local_38 == 1) {
      local_44 = 1;
    }
    else {
      iVar4 = ((int)(short)local_38 + (int)(short)local_3c) / 2;
      if ((short)local_38 < (short)iVar4) {
        if ((short)local_3c <= (short)iVar4) {
          iVar4 = local_3c + -1;
        }
      }
      else {
        iVar4 = local_38 + 1;
      }
    }
    iVar4 = (short)iVar4 + 0xf0;
    psVar11 = (short *)(param_1 + 0xed68);
    local_4c = 6;
    *(short *)(param_1 + 0xed5c) = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    uVar2 = (ushort)(iVar4 >> 0x1f);
    *psVar13 = (((ushort)iVar4 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
    local_50 = psVar13;
    do {
      psVar11[-6] = *(short *)(param_1 + 0xed5c);
      iVar4 = 0;
      *psVar11 = *psVar13;
      psVar5 = local_50;
      if (0 < *(short *)(param_1 + 0x6344)) {
        do {
          iVar4 = iVar4 + 1;
          *psVar5 = *psVar13;
          psVar5 = psVar5 + 1;
        } while (iVar4 < *(short *)(param_1 + 0x6344));
      }
      psVar11[0x24] = *psVar13;
      psVar11 = psVar11 + 1;
      local_50 = local_50 + 5;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
    local_40 = local_40 + -1;
    if (((short)local_40 < 1) && (local_40 = 0, (short)local_48 != 0)) {
      local_44 = 1;
    }
    iVar4 = 0;
  } while (local_44 == 0);
  if ((short)local_48 == 0) {
    FUN_630f6f90(param_1);
  }
  else {
    FUN_630f6d10(param_1);
  }
  *(undefined2 *)(param_1 + 0x14148) = *(undefined2 *)(param_1 + 0xed5c);
  FUN_630f7110(param_1);
  return;
}


