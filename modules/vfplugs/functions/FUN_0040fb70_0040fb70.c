/* Module: vfplugs.dll
   Function: FUN_0040fb70
   Address: 0040fb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040fb70(int param_1,RECT *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,RECT *param_9,int param_10,int param_11,int param_12,
                int param_13,int param_14,int param_15,RECT *param_16,int param_17,int param_18,
                int param_19,int param_20,int param_21,int param_22,int param_23,int *param_24)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  RECT *pRVar4;
  RECT *pRVar5;
  int *piVar6;
  int iVar7;
  HGLOBAL pvVar8;
  ushort *puVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  float *pfVar17;
  float *pfVar18;
  float10 fVar19;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  byte bStack_9d;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  double local_84;
  uint local_7c;
  ushort *local_78;
  ushort *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  int local_10 [4];
  
  piVar6 = param_24;
  iVar10 = param_22;
  local_88 = 0;
  local_94 = 0;
  local_70 = 0;
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_8c = 0;
  local_90 = 0;
  local_78 = (ushort *)0x0;
  local_74 = (ushort *)0x0;
  if (((param_1 == 0) || (param_15 == 0)) || (param_24 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  fVar19 = (float10)(param_2->right - param_2->left);
  iVar12 = param_2->bottom - param_2->top;
  local_b8 = (float)iVar12;
  if ((float10)iVar12 <= fVar19) {
    fVar19 = (float10)iVar12;
  }
  if (param_23 == 0) {
    if (*param_24 == 0) {
      return 0;
    }
    if (param_22 == 4) {
      uStack_9e = ftol();
      uStack_9f = ftol();
      local_a0 = ftol();
      bStack_9d = ftol();
      fVar19 = extraout_ST0_00;
    }
    else {
      local_a4 = (float)param_24[0x10];
      local_a8 = (float)param_24[0xf] * local_a4;
      local_ac = (float)param_24[0xe] * local_a4;
      local_b0 = (float)param_24[0xd] * local_a4;
    }
    fVar19 = fVar19 * (float10)(float)piVar6[0x11] * (float10)_DAT_00487efc;
    local_8c = (uint)piVar6[0x14] >> 1 & 1;
    local_90 = (uint)piVar6[0x14] >> 2 & 1;
    local_c4 = (float)piVar6[0x11] * _DAT_00487f08 + (_DAT_00487ed4 - (float)piVar6[0x12]);
    local_6c = ftol();
  }
  else {
    if ((param_23 != 1) && (param_23 != 7)) goto LAB_0040fe80;
    if (*param_24 == 0) {
      return 0;
    }
    if (param_22 == 4) {
      uStack_9e = ftol();
      uStack_9f = ftol();
      local_a0 = ftol();
      bStack_9d = ftol();
      fVar19 = extraout_ST0;
    }
    else {
      local_a4 = (float)param_24[6];
      local_a8 = (float)param_24[5] * local_a4;
      local_ac = (float)param_24[4] * local_a4;
      local_b0 = (float)param_24[3] * local_a4;
    }
    fVar19 = fVar19 * (float10)(float)piVar6[7] * (float10)_DAT_00487f08;
    local_8c = (uint)piVar6[10] >> 1 & 1;
    local_c4 = _DAT_00487ed4 - (float)piVar6[8];
    local_90 = (uint)piVar6[10] >> 2 & 1;
    local_6c = ftol();
  }
  local_c8 = (float)fVar19;
  local_68 = ftol();
LAB_0040fe80:
  local_84 = (double)local_c8;
  iVar7 = ftol();
  pRVar5 = param_16;
  pRVar4 = param_9;
  iVar12 = param_17;
  if (param_8 != 0) {
    local_54 = param_16->right - param_16->left;
    local_40 = param_11 << 0xe;
    local_38 = param_13 << 0xe;
    local_50 = param_16->bottom - param_16->top;
    local_5c = param_9->right - param_9->left;
    local_3c = param_12 << 0xe;
    local_58 = param_9->bottom - param_9->top;
    local_34 = param_14 << 0xe;
    local_30 = param_18 * 0x4000 + local_6c;
    local_2c = param_19 * 0x4000 + local_68;
    local_24 = param_21 * 0x4000 + local_68;
    local_28 = param_20 * 0x4000 + local_6c;
    OffsetRect((LPRECT)&param_18,(int)(local_6c + (local_6c >> 0x1f & 0x3fffU)) >> 0xe,
               (int)(local_68 + (local_68 >> 0x1f & 0x3fffU)) >> 0xe);
    InflateRect((LPRECT)&param_18,iVar7,iVar7);
    iVar10 = param_22;
    iVar12 = param_17;
    param_4 = param_18;
    param_5 = param_19;
    param_6 = param_20;
    param_7 = param_21;
    param_11 = param_18;
    param_12 = param_19;
    param_13 = param_20;
    param_14 = param_21;
    iVar7 = FUN_00444b80(param_15,(int *)&local_54,param_17,&local_30,param_8,&local_5c,param_10,
                         &local_40,param_22,0);
    if (iVar7 < 0) {
      return -0x7fffbffb;
    }
    iVar7 = FUN_004311d0(local_20,&local_b4,(int *)&local_b8,&local_94,&local_88,param_1,param_2,
                         param_3,&param_4,param_8,pRVar4,param_10,&param_11,iVar10);
    if (iVar7 < 0) {
      return -0x7fffbffb;
    }
  }
  local_cc = FUN_004311d0(local_10,&local_b4,(int *)&local_b8,&local_88,&local_70,param_15,pRVar5,
                          iVar12,&param_18,param_1,param_2,param_3,&param_4,iVar10);
  if (local_cc < 0) {
    return -0x7fffbffb;
  }
  if ((local_b4 != 0) && (local_b8 != 0.0)) {
    if (_DAT_00487ee0 < local_c8) {
      local_6c = param_18;
      local_60 = param_21;
      local_68 = param_19;
      local_64 = param_20;
      iVar7 = FUN_004442e0(param_15,pRVar5,iVar12,&local_6c,param_15,pRVar5,iVar12,&local_6c,
                           local_84,local_84,3,iVar10);
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if (_DAT_00487ee0 < local_c4) {
      if (iVar10 == 4) {
        pvVar8 = GlobalAlloc(0x40,0x100);
        puVar9 = GlobalLock(pvVar8);
        local_78 = puVar9;
      }
      else {
        pvVar8 = GlobalAlloc(0x40,0x20000);
        puVar9 = GlobalLock(pvVar8);
        local_74 = puVar9;
      }
      FUN_00410760(puVar9,iVar10);
    }
    if (iVar10 == 4) {
      local_cc = local_70;
      local_c4 = 0.0;
      iVar10 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      local_6c = (int)(param_10 + (param_10 >> 0x1f & 3U)) >> 2;
      local_5c = (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2;
      local_84 = (double)CONCAT44(local_84._4_4_,iVar10);
      local_c0 = local_88;
      local_c8 = (float)local_94;
      if (0 < (int)local_b8) {
        do {
          local_bc = 0;
          if (0 < local_b4) {
            local_48 = CONCAT12(bStack_9d,CONCAT11(uStack_9e,uStack_9f)) & 0xff;
            local_7c = CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0)) & 0xff;
            local_44 = CONCAT11(bStack_9d,uStack_9e) & 0xff;
            local_54 = (uint)bStack_9d;
            local_4c = local_cc - (int)local_c8;
            local_98 = local_c0 - (int)local_c8;
            pbVar16 = (byte *)((int)local_c8 + 3);
            pbVar11 = (byte *)(local_c0 + 1);
            do {
              if (local_78 == (ushort *)0x0) {
                bVar3 = pbVar16[local_4c];
              }
              else {
                bVar3 = *(byte *)((uint)pbVar16[local_4c] + (int)local_78);
              }
              uVar14 = (uint)bVar3;
              if ((local_94 != 0) && (local_90 == 0)) {
                if (local_8c == 0) {
                  uVar13 = 0xff - *pbVar16;
                }
                else {
                  uVar13 = (uint)*pbVar16;
                }
                uVar14 = (int)(uVar13 * uVar14) / 0xff;
              }
              pbVar16 = pbVar16 + 4;
              iVar12 = (local_44 - pbVar11[1]) * uVar14;
              pbVar11[1] = (((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                           (char)((longlong)iVar12 * 0x80808081 >> 0x3f)) + pbVar11[1];
              iVar12 = (local_48 - *pbVar11) * uVar14;
              *pbVar11 = (((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                         (char)((longlong)iVar12 * 0x80808081 >> 0x3f)) + *pbVar11;
              iVar12 = (local_7c - pbVar11[-1]) * uVar14;
              pbVar11[-1] = (((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                            (char)((longlong)iVar12 * 0x80808081 >> 0x3f)) + pbVar11[-1];
              pbVar16[local_98 + -4] =
                   (char)((int)((local_54 - pbVar16[local_98 + -4]) * uVar14) / 0xff) +
                   pbVar16[local_98 + -4];
              local_bc = local_bc + 1;
              pbVar11 = pbVar11 + 4;
            } while (local_bc < local_b4);
          }
          local_c0 = local_c0 + iVar10 * 4;
          local_c8 = (float)((int)local_c8 + local_6c * 4);
          local_cc = local_cc + local_5c * 4;
          local_c4 = (float)((int)local_c4 + 1);
        } while ((int)local_c4 < (int)local_b8);
      }
    }
    else if (iVar10 == 0x10) {
      local_c4 = 0.0;
      local_7c = (int)(iVar12 + (iVar12 >> 0x1f & 0xfU)) >> 4;
      local_c0 = local_70;
      iVar12 = (int)(param_3 + (param_3 >> 0x1f & 0xfU)) >> 4;
      uVar14 = (int)(param_10 + (param_10 >> 0x1f & 0xfU)) >> 4;
      local_98 = local_88;
      iVar10 = local_94;
      iVar7 = local_b4;
      local_5c = iVar12;
      local_54 = uVar14;
      if (0 < (int)local_b8) {
        do {
          local_bc = 0;
          if (0 < iVar7) {
            local_6c = local_c0 - iVar10;
            pfVar17 = (float *)(iVar10 + 0xc);
            iVar15 = local_98 - iVar10;
            pfVar18 = (float *)(local_98 + 4);
            do {
              puVar9 = local_74;
              fVar1 = *(float *)(local_6c + (int)pfVar17);
              if (local_74 != (ushort *)0x0) {
                iVar12 = ftol();
                local_84 = (double)CONCAT44(local_84._4_4_,(uint)puVar9[-iVar12]);
                fVar1 = (float)puVar9[-iVar12] * _DAT_00487ee8;
              }
              if ((local_94 != 0) && (local_90 == 0)) {
                if (local_8c == 0) {
                  fVar1 = (_DAT_00487ed4 - *pfVar17) * fVar1;
                }
                else {
                  fVar1 = fVar1 * *pfVar17;
                }
              }
              pfVar17 = pfVar17 + 4;
              local_bc = local_bc + 1;
              pfVar18[1] = fVar1 * (local_a8 - pfVar18[1]) + pfVar18[1];
              *pfVar18 = fVar1 * (local_ac - *pfVar18) + *pfVar18;
              pfVar18[-1] = fVar1 * (local_b0 - pfVar18[-1]) + pfVar18[-1];
              fVar2 = *(float *)(iVar15 + -0x10 + (int)pfVar17);
              *(float *)(iVar15 + -0x10 + (int)pfVar17) = fVar1 * (local_a4 - fVar2) + fVar2;
              uVar14 = local_54;
              iVar12 = local_5c;
              pfVar18 = pfVar18 + 4;
              iVar7 = local_b4;
            } while (local_bc < local_b4);
          }
          local_98 = local_98 + iVar12 * 0x10;
          iVar10 = iVar10 + uVar14 * 0x10;
          local_c0 = local_c0 + local_7c * 0x10;
          local_c4 = (float)((int)local_c4 + 1);
        } while ((int)local_c4 < (int)local_b8);
      }
    }
    puVar9 = local_78;
    local_cc = 0;
    if (local_78 != (ushort *)0x0) {
      pvVar8 = GlobalHandle(local_78);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(puVar9);
      GlobalFree(pvVar8);
    }
    puVar9 = local_74;
    if (local_74 != (ushort *)0x0) {
      pvVar8 = GlobalHandle(local_74);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(puVar9);
      GlobalFree(pvVar8);
      return 0;
    }
  }
  return local_cc;
}


