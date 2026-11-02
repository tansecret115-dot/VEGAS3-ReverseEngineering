/* Module: vfplugs.dll
   Function: FUN_00442b80
   Address: 00442b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442b80(float *param_1,uint *param_2,int param_3,int param_4,int param_5,double *param_6,
                 undefined4 param_7,undefined4 param_8,double *param_9,double *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  double *pdVar20;
  uint uVar21;
  unkbyte10 in_ST0;
  uint uVar22;
  unkbyte10 in_ST1;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint auStack_60 [4];
  uint auStack_50 [4];
  undefined4 local_40;
  uint *local_3c;
  undefined8 local_38;
  int local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  double *local_14;
  byte *local_10;
  uint *local_c;
  double *local_8;
  
  local_8 = param_9;
  puVar14 = param_2 + param_3 + -1;
  iVar7 = 0;
  local_14 = param_10;
  local_18 = param_2;
  local_c = puVar14;
  if (0 < param_5) {
    pbVar18 = (byte *)(param_4 + (int)puVar14);
    do {
      auStack_50[iVar7] = (uint)pbVar18[(int)param_2 - (int)puVar14];
      auStack_60[iVar7] = (uint)*pbVar18;
      iVar7 = iVar7 + 1;
      pbVar18 = pbVar18 + 1;
    } while (iVar7 < param_5);
  }
  local_24 = 5;
  if (param_3 < 6) {
    local_24 = param_3;
  }
  local_2c = (uint *)0x0;
  pdVar12 = param_10;
  puVar14 = param_2;
  if (0 < local_24) {
    do {
      param_2 = local_2c;
      if (4 < (int)local_2c) {
        param_2 = (uint *)0x5;
      }
      local_20 = 0;
      pdVar8 = pdVar12;
      puVar16 = puVar14;
      if (0 < param_5) {
        local_1c = (int)local_8 - (int)pdVar12;
        local_10 = (byte *)(param_4 + (int)puVar14);
        local_30 = (int)local_c - (int)puVar14;
        do {
          dVar24 = _DAT_00487598;
          *(undefined4 *)(local_1c + (int)pdVar12) = 0;
          *(undefined4 *)pdVar12 = 0;
          local_38 = 0.0;
          *(undefined4 *)(local_1c + 4 + (int)pdVar12) = 0;
          *(undefined4 *)((int)pdVar12 + 4) = 0;
          puVar16 = (uint *)0x0;
          dVar25 = local_38;
          if ((int)param_2 < 1) {
LAB_00442ccc:
            iVar7 = 5 - (int)puVar16;
            pdVar8 = param_6 + (int)(puVar16 + 5) * 2;
            do {
              iVar7 = iVar7 + -1;
              dVar25 = pdVar8[-10] * (double)(int)auStack_50[local_20] + dVar25;
              dVar24 = *pdVar8 * (double)(int)auStack_60[local_20] + dVar24;
              pdVar8 = pdVar8 + 2;
              local_38 = dVar25;
            } while (iVar7 != 0);
          }
          else {
            local_28 = param_2;
            local_3c = param_2;
            pdVar8 = param_6 + 10;
            pdVar9 = pdVar12;
            pbVar18 = local_10 + ((int)local_c - (int)puVar14);
            pbVar19 = local_10;
            do {
              local_38._4_4_ = (uint)*pbVar19;
              pbVar19 = pbVar19 + -4;
              local_28 = (uint *)((int)local_28 + -1);
              dVar25 = ((double)local_38._4_4_ * pdVar8[-10] -
                       *(double *)(local_1c + 0x20 + (int)(pdVar9 + -4)) * *pdVar8) + dVar25;
              local_38._4_4_ = (uint)*pbVar18;
              dVar24 = ((double)local_38._4_4_ * pdVar8[10] - *pdVar8 * *pdVar9) + dVar24;
              pdVar8 = pdVar8 + 2;
              pdVar9 = pdVar9 + -4;
              pbVar18 = pbVar18 + 4;
            } while (local_28 != (uint *)0x0);
            local_38 = dVar25;
            puVar16 = param_2;
            if ((int)param_2 < 5) goto LAB_00442ccc;
          }
          if ((local_38 < _DAT_0048cd20) && (_DAT_0048cd78 < local_38)) {
            local_38 = _DAT_00487598;
          }
          if ((dVar24 < _DAT_0048cd20) && (_DAT_0048cd78 < dVar24)) {
            dVar24 = _DAT_00487598;
          }
          *(double *)(local_1c + (int)pdVar12) = local_38;
          *pdVar12 = dVar24;
          local_20 = local_20 + 1;
          pdVar12 = pdVar12 + 1;
          local_10 = local_10 + 1;
          pdVar8 = local_14;
          puVar16 = local_18;
        } while (local_20 < param_5);
      }
      pdVar12 = pdVar8 + 4;
      puVar14 = puVar16 + 1;
      local_2c = (uint *)((int)local_2c + 1);
      local_8 = local_8 + 4;
      local_14 = pdVar12;
      local_18 = puVar14;
      local_c = local_c + -1;
    } while ((int)local_2c < local_24);
  }
  local_40 = 0x10;
  if (5 < param_3) {
    iVar7 = param_3 + -5;
    uVar23 = 0;
    pdVar12 = local_14;
    puVar14 = local_c;
    puVar16 = local_18;
    pdVar8 = local_8;
    do {
      iVar10 = 2;
      do {
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar27 = 0.0;
        iVar11 = 5;
        *(undefined4 *)pdVar8 = 0;
        *(undefined4 *)((int)pdVar8 + 4) = 0;
        *(undefined4 *)(pdVar8 + 1) = 0;
        *(undefined4 *)((int)pdVar8 + 0xc) = 0;
        *(undefined4 *)pdVar12 = 0;
        *(undefined4 *)((int)pdVar12 + 4) = 0;
        *(undefined4 *)(pdVar12 + 1) = 0;
        *(undefined4 *)((int)pdVar12 + 0xc) = 0;
        do {
          pdVar20 = pdVar8;
          puVar17 = puVar16;
          puVar15 = puVar14;
          pdVar13 = pdVar12;
          pdVar9 = param_6;
          uVar5 = CONCAT42((uint)(ushort)((unkuint10)in_ST0 >> 0x40) << 0x10,
                           (ushort)(byte)((*puVar17 >> uVar23) >> 8));
          uVar21 = *puVar17 >> uVar23 & 0xff;
          in_ST0 = CONCAT64(uVar5,uVar21);
          uVar6 = CONCAT42((uint)(ushort)((unkuint10)in_ST1 >> 0x40) << 0x10,
                           (ushort)(byte)((*puVar15 >> uVar23) >> 8));
          uVar22 = *puVar15 >> uVar23 & 0xff;
          in_ST1 = CONCAT64(uVar6,uVar22);
          dVar24 = (dVar24 - *pdVar20 * pdVar9[10]) + *pdVar9 * (double)uVar21;
          dVar25 = (dVar25 - pdVar20[1] * pdVar9[0xb]) + pdVar9[1] * (double)(int)uVar5;
          dVar26 = (dVar26 - *pdVar13 * pdVar9[10]) + pdVar9[0x14] * (double)uVar22;
          dVar27 = (dVar27 - pdVar13[1] * pdVar9[0xb]) + pdVar9[0x15] * (double)(int)uVar6;
          iVar11 = iVar11 + -1;
          param_6 = pdVar9 + 2;
          pdVar12 = pdVar13 + -4;
          puVar14 = puVar15 + 1;
          puVar16 = puVar17 + -1;
          pdVar8 = pdVar20 + -4;
        } while (iVar11 != 0);
        param_6 = pdVar9 + -8;
        pdVar8 = pdVar20 + 0x12;
        pdVar12 = pdVar13 + 0x12;
        dVar1 = pdVar9[0x2a];
        dVar2 = pdVar9[0x2b];
        dVar3 = pdVar9[0x2c];
        dVar4 = pdVar9[0x2d];
        pdVar20[0x10] =
             (double)((ulonglong)dVar24 &
                     -(ulonglong)(dVar3 < (double)((ulonglong)dVar1 & (ulonglong)dVar24)));
        pdVar20[0x11] =
             (double)((ulonglong)dVar25 &
                     -(ulonglong)(dVar4 < (double)((ulonglong)dVar2 & (ulonglong)dVar25)));
        pdVar13[0x10] =
             (double)((ulonglong)dVar26 &
                     -(ulonglong)(dVar3 < (double)((ulonglong)dVar1 & (ulonglong)dVar26)));
        pdVar13[0x11] =
             (double)((ulonglong)dVar27 &
                     -(ulonglong)(dVar4 < (double)((ulonglong)dVar2 & (ulonglong)dVar27)));
        uVar23 = uVar23 ^ 0x10;
        puVar16 = puVar17 + 4;
        puVar14 = puVar15 + -4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      puVar14 = puVar15 + -5;
      puVar16 = puVar17 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00442af0(param_1,param_3,param_5,(int)param_9,(int)param_10);
  return;
}


