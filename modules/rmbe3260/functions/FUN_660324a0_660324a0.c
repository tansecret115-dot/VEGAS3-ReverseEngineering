/* Module: rmbe3260.dll
   Function: FUN_660324a0
   Address: 660324a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660324a0(int *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  bool bVar22;
  byte *local_60 [3];
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  byte *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar18 = 0;
  local_8 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_2c = 0;
  local_10 = 0;
  local_24 = 0;
  local_34 = param_1;
  uVar5 = (**(code **)(*param_1 + 0x3c))();
  *(undefined4 *)((int)param_1 + 0x46) = uVar5;
  param_1[0x25] = 1;
  local_c = 0;
LAB_660324da:
  if (local_c < (uint)param_1[2]) {
    if (iVar18 != 0) goto LAB_660334ae;
    puVar12 = *(uint **)(*(int *)param_1[3] + local_c * 4);
    local_14 = puVar12;
    uVar6 = FUN_66033770((uint *)puVar12[2]);
    iVar18 = 0;
    if (uVar6 < 0x434f4e55) {
      if ((uVar6 != 0x434f4e54) && (uVar6 != 0x2e524d46)) {
LAB_6603253c:
        local_8 = -1;
        iVar18 = -1;
      }
      goto LAB_66032d3f;
    }
    if (uVar6 == 0x44415441) {
      puVar11 = operator_new(0x12);
      if (puVar11 != (uint *)0x0) {
        pbVar19 = (byte *)puVar12[2];
        if ((pbVar19 != (byte *)0x0) && (*puVar12 != 0)) {
          bVar1 = *pbVar19;
          *puVar11 = (uint)bVar1 << 0x18;
          uVar6 = (uint)pbVar19[1] << 0x10 | (uint)bVar1 << 0x18;
          *puVar11 = uVar6;
          uVar6 = uVar6 | (uint)pbVar19[2] << 8;
          *puVar11 = uVar6;
          *puVar11 = uVar6 | pbVar19[3];
          puVar11[1] = (uint)pbVar19[4] << 0x18;
          uVar6 = puVar11[1] | (uint)pbVar19[5] << 0x10;
          puVar11[1] = uVar6;
          uVar6 = uVar6 | (uint)pbVar19[6] << 8;
          puVar11[1] = uVar6;
          puVar11[1] = uVar6 | pbVar19[7];
          *(ushort *)(puVar11 + 2) = (ushort)pbVar19[8] << 8;
          *(ushort *)(puVar11 + 2) = (ushort)puVar11[2] | (ushort)pbVar19[9];
          iVar18 = local_8;
          if ((short)puVar11[2] == 0) {
            *(uint *)((int)puVar11 + 10) = (uint)pbVar19[10] << 0x18;
            uVar6 = *(uint *)((int)puVar11 + 10) | (uint)pbVar19[0xb] << 0x10;
            *(uint *)((int)puVar11 + 10) = uVar6;
            uVar6 = uVar6 | (uint)pbVar19[0xc] << 8;
            *(uint *)((int)puVar11 + 10) = uVar6;
            *(uint *)((int)puVar11 + 10) = uVar6 | pbVar19[0xd];
            *(uint *)((int)puVar11 + 0xe) = (uint)pbVar19[0xe] << 0x18;
            uVar6 = *(uint *)((int)puVar11 + 0xe) | (uint)pbVar19[0xf] << 0x10;
            *(uint *)((int)puVar11 + 0xe) = uVar6;
            uVar6 = uVar6 | (uint)pbVar19[0x10] << 8;
            *(uint *)((int)puVar11 + 0xe) = uVar6;
            *(uint *)((int)puVar11 + 0xe) = uVar6 | pbVar19[0x11];
          }
        }
        if ((short)puVar11[2] == 0) {
          *(undefined4 *)((int)puVar11 + 10) = *(undefined4 *)((int)param_1 + 0x2e);
          puVar11[1] = *(int *)((int)param_1 + 0x46) - *(int *)((int)param_1 + 0x42);
        }
        puVar14 = (undefined1 *)puVar12[2];
        *puVar14 = (char)(*puVar11 >> 0x18);
        puVar14[1] = (char)(*puVar11 >> 0x10);
        puVar14[2] = (char)(*puVar11 >> 8);
        puVar14[3] = (char)*puVar11;
        puVar14[4] = (char)(puVar11[1] >> 0x18);
        puVar14[5] = (char)(puVar11[1] >> 0x10);
        puVar14[6] = (char)(puVar11[1] >> 8);
        puVar14[7] = (char)puVar11[1];
        puVar14[8] = *(undefined1 *)((int)puVar11 + 9);
        puVar14[9] = (char)puVar11[2];
        if ((short)puVar11[2] == 0) {
          puVar14[10] = (char)((uint)*(undefined4 *)((int)puVar11 + 10) >> 0x18);
          puVar14[0xb] = (char)((uint)*(undefined4 *)((int)puVar11 + 10) >> 0x10);
          puVar14[0xc] = (char)((uint)*(undefined4 *)((int)puVar11 + 10) >> 8);
          puVar14[0xd] = *(undefined1 *)((int)puVar11 + 10);
          puVar14[0xe] = (char)((uint)*(undefined4 *)((int)puVar11 + 0xe) >> 0x18);
          puVar14[0xf] = (char)((uint)*(undefined4 *)((int)puVar11 + 0xe) >> 0x10);
          puVar14[0x10] = (char)((uint)*(undefined4 *)((int)puVar11 + 0xe) >> 8);
          puVar14[0x11] = *(undefined1 *)((int)puVar11 + 0xe);
        }
        operator_delete(puVar11);
        goto LAB_66032d3f;
      }
    }
    else {
      if (uVar6 != 0x4d445052) {
        if (uVar6 != 0x50524f50) goto LAB_6603253c;
        goto LAB_66032d3f;
      }
      puVar12 = operator_new(0x3a);
      if (puVar12 != (uint *)0x0) {
        pbVar19 = (byte *)local_14[2];
        local_28 = (byte *)*local_14;
        if ((pbVar19 != (byte *)0x0) && (local_28 != (byte *)0x0)) {
          bVar1 = *pbVar19;
          *puVar12 = (uint)bVar1 << 0x18;
          uVar6 = (uint)pbVar19[1] << 0x10 | (uint)bVar1 << 0x18;
          *puVar12 = uVar6;
          *puVar12 = uVar6 | (uint)pbVar19[2] << 8;
          *puVar12 = *puVar12 | (uint)pbVar19[3];
          bVar1 = pbVar19[4];
          puVar12[1] = (uint)bVar1 << 0x18;
          puVar12[1] = (uint)bVar1 << 0x18 | (uint)pbVar19[5] << 0x10;
          puVar12[1] = puVar12[1] | (uint)pbVar19[6] << 8;
          puVar12[1] = puVar12[1] | (uint)pbVar19[7];
          *(ushort *)(puVar12 + 2) = (ushort)pbVar19[8] << 8;
          *(ushort *)(puVar12 + 2) = (ushort)puVar12[2] | (ushort)pbVar19[9];
          if ((short)puVar12[2] == 0) {
            *(ushort *)((int)puVar12 + 10) = (ushort)pbVar19[10] << 8;
            *(ushort *)((int)puVar12 + 10) = *(ushort *)((int)puVar12 + 10) | (ushort)pbVar19[0xb];
            bVar1 = pbVar19[0xc];
            puVar12[3] = (uint)bVar1 << 0x18;
            puVar12[3] = (uint)bVar1 << 0x18 | (uint)pbVar19[0xd] << 0x10;
            puVar12[3] = puVar12[3] | (uint)pbVar19[0xe] << 8;
            puVar12[3] = puVar12[3] | (uint)pbVar19[0xf];
            bVar1 = pbVar19[0x10];
            puVar12[4] = (uint)bVar1 << 0x18;
            puVar12[4] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x11] << 0x10;
            puVar12[4] = puVar12[4] | (uint)pbVar19[0x12] << 8;
            puVar12[4] = puVar12[4] | (uint)pbVar19[0x13];
            bVar1 = pbVar19[0x14];
            puVar12[5] = (uint)bVar1 << 0x18;
            puVar12[5] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x15] << 0x10;
            puVar12[5] = puVar12[5] | (uint)pbVar19[0x16] << 8;
            puVar12[5] = puVar12[5] | (uint)pbVar19[0x17];
            bVar1 = pbVar19[0x18];
            puVar12[6] = (uint)bVar1 << 0x18;
            puVar12[6] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x19] << 0x10;
            puVar12[6] = puVar12[6] | (uint)pbVar19[0x1a] << 8;
            puVar12[6] = puVar12[6] | (uint)pbVar19[0x1b];
            bVar1 = pbVar19[0x1c];
            puVar12[7] = (uint)bVar1 << 0x18;
            puVar12[7] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x1d] << 0x10;
            puVar12[7] = puVar12[7] | (uint)pbVar19[0x1e] << 8;
            puVar12[7] = puVar12[7] | (uint)pbVar19[0x1f];
            bVar1 = pbVar19[0x20];
            puVar12[8] = (uint)bVar1 << 0x18;
            puVar12[8] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x21] << 0x10;
            puVar12[8] = puVar12[8] | (uint)pbVar19[0x22] << 8;
            puVar12[8] = puVar12[8] | (uint)pbVar19[0x23];
            bVar1 = pbVar19[0x24];
            puVar12[9] = (uint)bVar1 << 0x18;
            puVar12[9] = (uint)bVar1 << 0x18 | (uint)pbVar19[0x25] << 0x10;
            puVar12[9] = puVar12[9] | (uint)pbVar19[0x26] << 8;
            puVar12[9] = puVar12[9] | (uint)pbVar19[0x27];
            pbVar7 = pbVar19 + 0x29;
            *(byte *)(puVar12 + 10) = pbVar19[0x28];
            local_30 = (uint)(byte)puVar12[10];
            if ((int)(pbVar7 + (local_30 - (int)pbVar19)) <= (int)local_28) {
              *(byte **)((int)puVar12 + 0x29) = pbVar7;
              pbVar8 = pbVar7 + local_30 + 1;
              *(byte *)((int)puVar12 + 0x2d) = pbVar7[local_30];
              local_30 = (uint)*(byte *)((int)puVar12 + 0x2d);
              if ((int)(pbVar8 + (local_30 - (int)pbVar19)) <= (int)local_28) {
                *(byte **)((int)puVar12 + 0x2e) = pbVar8;
                pbVar8 = pbVar8 + local_30;
                *(uint *)((int)puVar12 + 0x32) = (uint)*pbVar8 << 0x18;
                *(uint *)((int)puVar12 + 0x32) =
                     *(uint *)((int)puVar12 + 0x32) | (uint)pbVar8[1] << 0x10;
                *(uint *)((int)puVar12 + 0x32) =
                     *(uint *)((int)puVar12 + 0x32) | (uint)pbVar8[2] << 8;
                *(uint *)((int)puVar12 + 0x32) = *(uint *)((int)puVar12 + 0x32) | (uint)pbVar8[3];
                if (pbVar8 + 4 + (*(int *)((int)puVar12 + 0x32) - (int)pbVar19) <= local_28) {
                  *(byte **)((int)puVar12 + 0x36) = pbVar8 + 4;
                }
              }
            }
          }
        }
        iVar18 = 0;
        if (*(ushort *)((int)param_1 + 0x6e) != 0) {
          do {
            if (((short)puVar12[2] == 0) &&
               (iVar13 = *(int *)(**(int **)((int)param_1 + 0x6a) + iVar18 * 4),
               *(short *)((int)puVar12 + 10) == *(short *)(iVar13 + 0x1a))) {
              puVar12[5] = *(uint *)(iVar13 + 0xc);
              if (*(uint *)(iVar13 + 0x14) == 0) {
                *(undefined4 *)(iVar13 + 0x10) = 0;
              }
              else {
                *(uint *)(iVar13 + 0x10) = *(uint *)(iVar13 + 4) / *(uint *)(iVar13 + 0x14);
              }
              uVar6 = *(uint *)(iVar13 + 0x10);
              puVar12[6] = uVar6;
              if (local_2c < uVar6) {
                local_2c = uVar6;
              }
              iVar18 = *(int *)(iVar13 + 8) + puVar12[8];
              if (iVar18 == 0) {
                uVar6 = 0;
              }
              else {
                local_3c = *(undefined4 *)(iVar13 + 4);
                uStack_38 = 0;
                uStack_40 = 0;
                local_44 = iVar18;
                uVar6 = ftol();
                uVar16 = puVar12[4];
                if ((uVar16 != 0) && (uVar16 < uVar6)) {
                  uStack_48 = 0;
                  local_54 = *(undefined4 *)(iVar13 + 8);
                  uStack_50 = 0;
                  local_4c = uVar16;
                  uVar6 = ftol();
                  puVar12[8] = uVar6;
                  uVar6 = puVar12[4];
                }
              }
              if (((uVar6 != 0) || (puVar12[4] != 0)) && (puVar12[4] < uVar6)) {
                puVar12[4] = uVar6;
              }
              if (puVar12[3] < puVar12[4]) {
                puVar12[3] = puVar12[4];
              }
              if (puVar12[9] < *(uint *)(iVar13 + 8)) {
                puVar12[9] = *(uint *)(iVar13 + 8);
              }
              else {
                *(uint *)(iVar13 + 8) = puVar12[9];
              }
              if (local_10 < *(uint *)(iVar13 + 8)) {
                local_10 = *(uint *)(iVar13 + 8);
              }
              if (local_18 < puVar12[8]) {
                local_18 = puVar12[8];
              }
              local_20 = local_20 + puVar12[3];
              local_1c = local_1c + puVar12[4];
              FUN_6605bdf0(local_60,*(undefined4 **)((int)puVar12 + 0x2e),
                           (uint)*(byte *)((int)puVar12 + 0x2d));
              pcVar9 = s_audio_x_pn_realaudio_6606cc78;
              pbVar19 = local_60[0];
              goto LAB_66032936;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)(uint)*(ushort *)((int)param_1 + 0x6e));
        }
        goto LAB_660329a5;
      }
    }
    goto LAB_660332c2;
  }
  goto LAB_66032da1;
  while( true ) {
    bVar1 = pbVar19[1];
    bVar22 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_6603295a;
    pbVar19 = pbVar19 + 2;
    pcVar9 = pcVar9 + 2;
    if (bVar1 == 0) break;
LAB_66032936:
    bVar1 = *pbVar19;
    bVar22 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_6603295a:
      iVar18 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
      goto LAB_6603295f;
    }
    if (bVar1 == 0) break;
  }
  iVar18 = 0;
LAB_6603295f:
  if (((iVar18 == 0) && (local_24 == 0)) &&
     (piVar10 = FUN_66037880(*(byte **)((int)puVar12 + 0x36),*(int *)((int)puVar12 + 0x32)),
     piVar10 != (int *)0x0)) {
    iVar18 = (**(code **)(*piVar10 + 4))();
    if (iVar18 == 0x2e726135) {
      local_24 = 1;
    }
    (**(code **)*piVar10)(1);
  }
  FUN_6605b770((int *)local_60);
LAB_660329a5:
  puVar14 = (undefined1 *)local_14[2];
  *puVar14 = (char)(*puVar12 >> 0x18);
  puVar14[1] = (char)(*puVar12 >> 0x10);
  puVar14[2] = (char)(*puVar12 >> 8);
  puVar14[3] = (char)*puVar12;
  puVar14[4] = (char)(puVar12[1] >> 0x18);
  puVar14[5] = (char)(puVar12[1] >> 0x10);
  puVar14[6] = (char)(puVar12[1] >> 8);
  puVar14[7] = (char)puVar12[1];
  puVar14[8] = *(undefined1 *)((int)puVar12 + 9);
  puVar14[9] = (char)puVar12[2];
  if ((short)puVar12[2] == 0) {
    puVar14[10] = *(undefined1 *)((int)puVar12 + 0xb);
    puVar14[0xb] = *(undefined1 *)((int)puVar12 + 10);
    puVar14[0xc] = (char)(puVar12[3] >> 0x18);
    puVar14[0xd] = (char)(puVar12[3] >> 0x10);
    puVar14[0xe] = (char)(puVar12[3] >> 8);
    puVar14[0xf] = (char)puVar12[3];
    puVar14[0x10] = (char)(puVar12[4] >> 0x18);
    puVar14[0x11] = (char)(puVar12[4] >> 0x10);
    puVar14[0x12] = (char)(puVar12[4] >> 8);
    puVar14[0x13] = (char)puVar12[4];
    puVar14[0x14] = (char)(puVar12[5] >> 0x18);
    puVar14[0x15] = (char)(puVar12[5] >> 0x10);
    puVar14[0x16] = (char)(puVar12[5] >> 8);
    puVar14[0x17] = (char)puVar12[5];
    puVar14[0x18] = (char)(puVar12[6] >> 0x18);
    puVar14[0x19] = (char)(puVar12[6] >> 0x10);
    puVar14[0x1a] = (char)(puVar12[6] >> 8);
    puVar14[0x1b] = (char)puVar12[6];
    puVar14[0x1c] = (char)(puVar12[7] >> 0x18);
    puVar14[0x1d] = (char)(puVar12[7] >> 0x10);
    puVar14[0x1e] = (char)(puVar12[7] >> 8);
    puVar14[0x1f] = (char)puVar12[7];
    puVar14[0x20] = (char)(puVar12[8] >> 0x18);
    puVar14[0x21] = (char)(puVar12[8] >> 0x10);
    puVar14[0x22] = (char)(puVar12[8] >> 8);
    puVar14[0x23] = (char)puVar12[8];
    puVar14[0x24] = (char)(puVar12[9] >> 0x18);
    puVar14[0x25] = (char)(puVar12[9] >> 0x10);
    puVar14[0x26] = (char)(puVar12[9] >> 8);
    puVar14[0x27] = (char)puVar12[9];
    puVar14[0x28] = (char)puVar12[10];
    uVar6 = puVar12[10];
    puVar17 = *(undefined4 **)((int)puVar12 + 0x29);
    puVar20 = (undefined4 *)(puVar14 + 0x29);
    for (uVar16 = (uint)(byte)((byte)uVar6 >> 2); uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    for (uVar6 = (byte)uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar20 = *(undefined1 *)puVar17;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
      puVar20 = (undefined4 *)((int)puVar20 + 1);
    }
    puVar14 = (undefined1 *)((int)(puVar14 + 0x29) + (uint)(byte)puVar12[10]);
    *puVar14 = *(undefined1 *)((int)puVar12 + 0x2d);
    bVar1 = *(byte *)((int)puVar12 + 0x2d);
    puVar17 = (undefined4 *)(puVar14 + 1);
    puVar20 = *(undefined4 **)((int)puVar12 + 0x2e);
    puVar21 = puVar17;
    for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar21 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    }
    for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar21 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar21 = (undefined4 *)((int)puVar21 + 1);
    }
    puVar17 = (undefined4 *)((int)puVar17 + (uint)*(byte *)((int)puVar12 + 0x2d));
    *(char *)puVar17 = (char)((uint)*(undefined4 *)((int)puVar12 + 0x32) >> 0x18);
    *(char *)((int)puVar17 + 1) = (char)((uint)*(undefined4 *)((int)puVar12 + 0x32) >> 0x10);
    *(char *)((int)puVar17 + 2) = (char)((uint)*(undefined4 *)((int)puVar12 + 0x32) >> 8);
    *(undefined1 *)((int)puVar17 + 3) = *(undefined1 *)((int)puVar12 + 0x32);
    uVar6 = *(uint *)((int)puVar12 + 0x32);
    puVar20 = *(undefined4 **)((int)puVar12 + 0x36);
    for (uVar16 = uVar6 >> 2; puVar17 = puVar17 + 1, uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar17 = *puVar20;
      puVar20 = puVar20 + 1;
    }
    for (uVar6 = uVar6 & 3; param_1 = local_34, uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar17 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar17 = (undefined4 *)((int)puVar17 + 1);
    }
  }
  operator_delete(puVar12);
  iVar18 = local_8;
  puVar12 = local_14;
LAB_66032d3f:
  if (iVar18 != 0) goto LAB_660334ae;
  (**(code **)(*param_1 + 0x34))(puVar12[1],0);
  iVar18 = FUN_66033770((uint *)puVar12[2]);
  if ((iVar18 == 0x4d445052) && (param_1[0x2f] != 0)) {
    iVar18 = FUN_66032400(param_1,puVar12[2],*puVar12);
  }
  else {
    iVar18 = (**(code **)(*param_1 + 0x38))(puVar12[2],*puVar12);
  }
  local_c = local_c + 1;
  local_8 = iVar18;
  if (iVar18 != 0) goto LAB_66032da1;
  goto LAB_660324da;
LAB_66032da1:
  if (iVar18 != 0) goto LAB_660334ae;
  piVar10 = *(int **)(*(int *)param_1[3] + param_1[7] * 4);
  puVar12 = operator_new(0x32);
  if (puVar12 == (uint *)0x0) {
    param_1[9] = -0x7ff8fff2;
    return;
  }
  pbVar19 = (byte *)piVar10[2];
  if ((pbVar19 == (byte *)0x0) || (*piVar10 == 0)) {
LAB_6603302a:
    if ((short)puVar12[2] == 0) {
      uVar6 = *(uint *)((int)param_1 + 0x4e);
      if ((uVar6 == 0) || (local_10 <= uVar6)) {
        *(uint *)((int)puVar12 + 0x1e) = local_10;
      }
      else {
        *(uint *)((int)puVar12 + 0x1e) = uVar6;
      }
      *(uint *)((int)puVar12 + 0x22) = local_18;
      *(undefined4 *)((int)puVar12 + 0x12) = *(undefined4 *)((int)param_1 + 0x36);
      if (*(uint *)((int)param_1 + 0x2e) == 0) {
        *(undefined4 *)((int)param_1 + 0x32) = 0;
      }
      else {
        *(uint *)((int)param_1 + 0x32) =
             *(uint *)((int)param_1 + 0x3a) / *(uint *)((int)param_1 + 0x2e);
      }
      *(undefined4 *)((int)puVar12 + 0x16) = *(undefined4 *)((int)param_1 + 0x32);
      *(undefined4 *)((int)puVar12 + 0x1a) = *(undefined4 *)((int)param_1 + 0x2e);
      *(undefined4 *)((int)puVar12 + 0x2a) = *(undefined4 *)((int)param_1 + 0x42);
      *(undefined4 *)((int)puVar12 + 0x26) = *(undefined4 *)((int)param_1 + 0x46);
      *(undefined2 *)((int)puVar12 + 0x2e) = *(undefined2 *)((int)param_1 + 0x6e);
      if ((local_1c == 0) && (*(int *)((int)puVar12 + 0xe) == 0)) {
        *(undefined4 *)((int)puVar12 + 0xe) = 5000;
      }
      else if (*(uint *)((int)puVar12 + 0xe) < local_1c) {
        *(uint *)((int)puVar12 + 0xe) = local_1c;
      }
      if ((local_20 == 0) && (*(int *)((int)puVar12 + 10) == 0)) {
        *(undefined4 *)((int)puVar12 + 10) = 5000;
      }
      else if (*(uint *)((int)puVar12 + 10) < local_20) {
        *(uint *)((int)puVar12 + 10) = local_20;
      }
      if (*(uint *)((int)puVar12 + 10) < *(uint *)((int)puVar12 + 0xe)) {
        *(uint *)((int)puVar12 + 10) = *(uint *)((int)puVar12 + 0xe);
      }
    }
  }
  else {
    bVar1 = *pbVar19;
    *puVar12 = (uint)bVar1 << 0x18;
    *puVar12 = (uint)pbVar19[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar6 = *puVar12 | (uint)pbVar19[2] << 8;
    *puVar12 = uVar6;
    *puVar12 = uVar6 | pbVar19[3];
    puVar12[1] = (uint)pbVar19[4] << 0x18;
    uVar6 = puVar12[1] | (uint)pbVar19[5] << 0x10;
    puVar12[1] = uVar6;
    uVar6 = uVar6 | (uint)pbVar19[6] << 8;
    puVar12[1] = uVar6;
    puVar12[1] = uVar6 | pbVar19[7];
    *(ushort *)(puVar12 + 2) = (ushort)pbVar19[8] << 8;
    *(ushort *)(puVar12 + 2) = (ushort)puVar12[2] | (ushort)pbVar19[9];
    if ((short)puVar12[2] == 0) {
      *(uint *)((int)puVar12 + 10) = (uint)pbVar19[10] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 10) | (uint)pbVar19[0xb] << 0x10;
      *(uint *)((int)puVar12 + 10) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0xc] << 8;
      *(uint *)((int)puVar12 + 10) = uVar6;
      *(uint *)((int)puVar12 + 10) = uVar6 | pbVar19[0xd];
      *(uint *)((int)puVar12 + 0xe) = (uint)pbVar19[0xe] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0xe) | (uint)pbVar19[0xf] << 0x10;
      *(uint *)((int)puVar12 + 0xe) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x10] << 8;
      *(uint *)((int)puVar12 + 0xe) = uVar6;
      *(uint *)((int)puVar12 + 0xe) = uVar6 | pbVar19[0x11];
      *(uint *)((int)puVar12 + 0x12) = (uint)pbVar19[0x12] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x12) | (uint)pbVar19[0x13] << 0x10;
      *(uint *)((int)puVar12 + 0x12) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x14] << 8;
      *(uint *)((int)puVar12 + 0x12) = uVar6;
      *(uint *)((int)puVar12 + 0x12) = uVar6 | pbVar19[0x15];
      *(uint *)((int)puVar12 + 0x16) = (uint)pbVar19[0x16] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x16) | (uint)pbVar19[0x17] << 0x10;
      *(uint *)((int)puVar12 + 0x16) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x18] << 8;
      *(uint *)((int)puVar12 + 0x16) = uVar6;
      *(uint *)((int)puVar12 + 0x16) = uVar6 | pbVar19[0x19];
      *(uint *)((int)puVar12 + 0x1a) = (uint)pbVar19[0x1a] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x1a) | (uint)pbVar19[0x1b] << 0x10;
      *(uint *)((int)puVar12 + 0x1a) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x1c] << 8;
      *(uint *)((int)puVar12 + 0x1a) = uVar6;
      *(uint *)((int)puVar12 + 0x1a) = uVar6 | pbVar19[0x1d];
      *(uint *)((int)puVar12 + 0x1e) = (uint)pbVar19[0x1e] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x1e) | (uint)pbVar19[0x1f] << 0x10;
      *(uint *)((int)puVar12 + 0x1e) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x20] << 8;
      *(uint *)((int)puVar12 + 0x1e) = uVar6;
      *(uint *)((int)puVar12 + 0x1e) = uVar6 | pbVar19[0x21];
      *(uint *)((int)puVar12 + 0x22) = (uint)pbVar19[0x22] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x22) | (uint)pbVar19[0x23] << 0x10;
      *(uint *)((int)puVar12 + 0x22) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x24] << 8;
      *(uint *)((int)puVar12 + 0x22) = uVar6;
      *(uint *)((int)puVar12 + 0x22) = uVar6 | pbVar19[0x25];
      *(uint *)((int)puVar12 + 0x26) = (uint)pbVar19[0x26] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x26) | (uint)pbVar19[0x27] << 0x10;
      *(uint *)((int)puVar12 + 0x26) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x28] << 8;
      *(uint *)((int)puVar12 + 0x26) = uVar6;
      *(uint *)((int)puVar12 + 0x26) = uVar6 | pbVar19[0x29];
      *(uint *)((int)puVar12 + 0x2a) = (uint)pbVar19[0x2a] << 0x18;
      uVar6 = *(uint *)((int)puVar12 + 0x2a) | (uint)pbVar19[0x2b] << 0x10;
      *(uint *)((int)puVar12 + 0x2a) = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[0x2c] << 8;
      *(uint *)((int)puVar12 + 0x2a) = uVar6;
      *(uint *)((int)puVar12 + 0x2a) = uVar6 | pbVar19[0x2d];
      *(ushort *)((int)puVar12 + 0x2e) = (ushort)pbVar19[0x2e] << 8;
      *(ushort *)((int)puVar12 + 0x2e) = *(ushort *)((int)puVar12 + 0x2e) | (ushort)pbVar19[0x2f];
      *(ushort *)(puVar12 + 0xc) = (ushort)pbVar19[0x30] << 8;
      *(ushort *)(puVar12 + 0xc) = (ushort)puVar12[0xc] | (ushort)pbVar19[0x31];
      goto LAB_6603302a;
    }
  }
  puVar14 = (undefined1 *)piVar10[2];
  *puVar14 = (char)(*puVar12 >> 0x18);
  puVar14[1] = (char)(*puVar12 >> 0x10);
  puVar14[2] = (char)(*puVar12 >> 8);
  puVar14[3] = (char)*puVar12;
  puVar14[4] = (char)(puVar12[1] >> 0x18);
  puVar14[5] = (char)(puVar12[1] >> 0x10);
  puVar14[6] = (char)(puVar12[1] >> 8);
  puVar14[7] = (char)puVar12[1];
  puVar14[8] = *(undefined1 *)((int)puVar12 + 9);
  puVar14[9] = (char)puVar12[2];
  if ((short)puVar12[2] == 0) {
    puVar14[10] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 0x18);
    puVar14[0xb] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 0x10);
    puVar14[0xc] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 8);
    puVar14[0xd] = *(undefined1 *)((int)puVar12 + 10);
    puVar14[0xe] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 0x18);
    puVar14[0xf] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 0x10);
    puVar14[0x10] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 8);
    puVar14[0x11] = *(undefined1 *)((int)puVar12 + 0xe);
    puVar14[0x12] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x12) >> 0x18);
    puVar14[0x13] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x12) >> 0x10);
    puVar14[0x14] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x12) >> 8);
    puVar14[0x15] = *(undefined1 *)((int)puVar12 + 0x12);
    puVar14[0x16] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x16) >> 0x18);
    puVar14[0x17] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x16) >> 0x10);
    puVar14[0x18] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x16) >> 8);
    puVar14[0x19] = *(undefined1 *)((int)puVar12 + 0x16);
    puVar14[0x1a] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1a) >> 0x18);
    puVar14[0x1b] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1a) >> 0x10);
    puVar14[0x1c] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1a) >> 8);
    puVar14[0x1d] = *(undefined1 *)((int)puVar12 + 0x1a);
    puVar14[0x1e] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1e) >> 0x18);
    puVar14[0x1f] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1e) >> 0x10);
    puVar14[0x20] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x1e) >> 8);
    puVar14[0x21] = *(undefined1 *)((int)puVar12 + 0x1e);
    puVar14[0x22] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x22) >> 0x18);
    puVar14[0x23] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x22) >> 0x10);
    puVar14[0x24] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x22) >> 8);
    puVar14[0x25] = *(undefined1 *)((int)puVar12 + 0x22);
    puVar14[0x26] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x26) >> 0x18);
    puVar14[0x27] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x26) >> 0x10);
    puVar14[0x28] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x26) >> 8);
    puVar14[0x29] = *(undefined1 *)((int)puVar12 + 0x26);
    puVar14[0x2a] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x2a) >> 0x18);
    puVar14[0x2b] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x2a) >> 0x10);
    puVar14[0x2c] = (char)((uint)*(undefined4 *)((int)puVar12 + 0x2a) >> 8);
    puVar14[0x2d] = *(undefined1 *)((int)puVar12 + 0x2a);
    puVar14[0x2e] = *(undefined1 *)((int)puVar12 + 0x2f);
    puVar14[0x2f] = *(undefined1 *)((int)puVar12 + 0x2e);
    puVar14[0x30] = *(undefined1 *)((int)puVar12 + 0x31);
    puVar14[0x31] = (char)puVar12[0xc];
  }
  operator_delete(puVar12);
  (**(code **)(*param_1 + 0x34))(piVar10[1],0);
  local_8 = (**(code **)(*param_1 + 0x38))(piVar10[2],*piVar10);
  if (local_8 == 0) {
    piVar10 = *(int **)(*(int *)param_1[3] + param_1[6] * 4);
    puVar12 = operator_new(0x12);
    if (puVar12 == (uint *)0x0) {
LAB_660332c2:
      param_1[9] = -0x7ff8fff2;
      return;
    }
    pbVar19 = (byte *)piVar10[2];
    if ((pbVar19 != (byte *)0x0) && (*piVar10 != 0)) {
      bVar1 = *pbVar19;
      *puVar12 = (uint)bVar1 << 0x18;
      *puVar12 = (uint)pbVar19[1] << 0x10 | (uint)bVar1 << 0x18;
      uVar6 = *puVar12 | (uint)pbVar19[2] << 8;
      *puVar12 = uVar6;
      *puVar12 = uVar6 | pbVar19[3];
      puVar12[1] = (uint)pbVar19[4] << 0x18;
      uVar6 = puVar12[1] | (uint)pbVar19[5] << 0x10;
      puVar12[1] = uVar6;
      uVar6 = uVar6 | (uint)pbVar19[6] << 8;
      puVar12[1] = uVar6;
      puVar12[1] = uVar6 | pbVar19[7];
      *(ushort *)(puVar12 + 2) = (ushort)pbVar19[8] << 8;
      *(ushort *)(puVar12 + 2) = (ushort)puVar12[2] | (ushort)pbVar19[9];
      if (((short)puVar12[2] == 0) || ((short)puVar12[2] == 1)) {
        *(uint *)((int)puVar12 + 10) = (uint)pbVar19[10] << 0x18;
        uVar6 = *(uint *)((int)puVar12 + 10) | (uint)pbVar19[0xb] << 0x10;
        *(uint *)((int)puVar12 + 10) = uVar6;
        uVar6 = uVar6 | (uint)pbVar19[0xc] << 8;
        *(uint *)((int)puVar12 + 10) = uVar6;
        *(uint *)((int)puVar12 + 10) = uVar6 | pbVar19[0xd];
        *(uint *)((int)puVar12 + 0xe) = (uint)pbVar19[0xe] << 0x18;
        uVar6 = *(uint *)((int)puVar12 + 0xe) | (uint)pbVar19[0xf] << 0x10;
        *(uint *)((int)puVar12 + 0xe) = uVar6;
        uVar6 = uVar6 | (uint)pbVar19[0x10] << 8;
        *(uint *)((int)puVar12 + 0xe) = uVar6;
        *(uint *)((int)puVar12 + 0xe) = uVar6 | pbVar19[0x11];
      }
    }
    sVar2 = (short)puVar12[2];
    if ((sVar2 == 0) || (sVar2 == 1)) {
      *(int *)((int)puVar12 + 0xe) = param_1[2];
    }
    if ((sVar2 == 0) && (local_24 != 0)) {
      *(undefined2 *)(puVar12 + 2) = 1;
    }
    puVar14 = (undefined1 *)piVar10[2];
    *puVar14 = (char)(*puVar12 >> 0x18);
    puVar14[1] = (char)(*puVar12 >> 0x10);
    puVar14[2] = (char)(*puVar12 >> 8);
    puVar14[3] = (char)*puVar12;
    puVar14[4] = (char)(puVar12[1] >> 0x18);
    puVar14[5] = (char)(puVar12[1] >> 0x10);
    puVar14[6] = (char)(puVar12[1] >> 8);
    puVar14[7] = (char)puVar12[1];
    puVar14[8] = *(undefined1 *)((int)puVar12 + 9);
    puVar14[9] = (char)puVar12[2];
    if (((short)puVar12[2] == 0) || ((short)puVar12[2] == 1)) {
      puVar14[10] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 0x18);
      puVar14[0xb] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 0x10);
      puVar14[0xc] = (char)((uint)*(undefined4 *)((int)puVar12 + 10) >> 8);
      puVar14[0xd] = *(undefined1 *)((int)puVar12 + 10);
      puVar14[0xe] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 0x18);
      puVar14[0xf] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 0x10);
      puVar14[0x10] = (char)((uint)*(undefined4 *)((int)puVar12 + 0xe) >> 8);
      puVar14[0x11] = *(undefined1 *)((int)puVar12 + 0xe);
    }
    operator_delete(puVar12);
    (**(code **)(*param_1 + 0x34))(piVar10[1],0);
    local_8 = (**(code **)(*param_1 + 0x38))(piVar10[2],*piVar10);
  }
LAB_660334ae:
  (**(code **)(*param_1 + 0x34))(*(undefined4 *)((int)param_1 + 0x46),0);
  local_c = 0;
  if (*(short *)((int)param_1 + 0x6e) != 0) {
    local_14 = (uint *)0x0;
    local_24 = 0;
    do {
      iVar18 = local_24;
      if (local_8 != 0) break;
      if ((param_1[0x1d] != 0) && (*(short *)(local_24 + 8 + param_1[0x1d]) == 0)) {
        iVar13 = (**(code **)(*param_1 + 0x3c))();
        if (local_c < *(ushort *)((int)param_1 + 0x6e) - 1) {
          iVar3 = *(int *)(param_1[0x1c] + 4 + (int)local_14);
          *(undefined4 *)(iVar18 + 4 + param_1[0x1d]) = 0x14;
          if (iVar3 != 0) {
            piVar10 = (int *)(iVar18 + 4 + param_1[0x1d]);
            *piVar10 = *piVar10 + iVar3 * 0xe;
          }
          *(int *)(param_1[0x1d] + iVar18 + 0x10) = *(int *)(param_1[0x1d] + iVar18 + 4) + iVar13;
        }
        else {
          *(undefined4 *)(iVar18 + 4 + param_1[0x1d]) = 0x14;
          *(undefined4 *)(iVar18 + 0x10 + param_1[0x1d]) = 0;
        }
        puVar14 = operator_new(0x14);
        if (puVar14 == (undefined1 *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        if (local_8 == 0) {
          puVar17 = (undefined4 *)(iVar18 + param_1[0x1d]);
          *puVar14 = (char)((uint)*puVar17 >> 0x18);
          puVar14[1] = (char)((uint)*puVar17 >> 0x10);
          puVar14[2] = (char)((uint)*puVar17 >> 8);
          puVar14[3] = *(undefined1 *)puVar17;
          puVar14[4] = (char)((uint)puVar17[1] >> 0x18);
          puVar14[5] = (char)((uint)puVar17[1] >> 0x10);
          puVar14[6] = (char)((uint)puVar17[1] >> 8);
          puVar14[7] = *(undefined1 *)(puVar17 + 1);
          puVar14[8] = *(undefined1 *)((int)puVar17 + 9);
          puVar14[9] = *(undefined1 *)(puVar17 + 2);
          puVar15 = puVar14 + 10;
          if (*(short *)(puVar17 + 2) == 0) {
            *puVar15 = (char)((uint)*(undefined4 *)((int)puVar17 + 10) >> 0x18);
            puVar14[0xb] = (char)((uint)*(undefined4 *)((int)puVar17 + 10) >> 0x10);
            puVar14[0xc] = (char)((uint)*(undefined4 *)((int)puVar17 + 10) >> 8);
            puVar14[0xd] = *(undefined1 *)((int)puVar17 + 10);
            puVar14[0xe] = *(undefined1 *)((int)puVar17 + 0xf);
            puVar14[0xf] = *(undefined1 *)((int)puVar17 + 0xe);
            puVar14[0x10] = (char)((uint)puVar17[4] >> 0x18);
            puVar14[0x11] = (char)((uint)puVar17[4] >> 0x10);
            puVar14[0x12] = (char)((uint)puVar17[4] >> 8);
            puVar14[0x13] = *(undefined1 *)(puVar17 + 4);
            puVar15 = puVar14 + 0x14;
          }
          local_8 = (**(code **)(*param_1 + 0x38))(puVar14,(int)puVar15 - (int)puVar14);
        }
        operator_delete(puVar14);
        param_1[0x25] = 8;
        iVar13 = local_24;
        local_24 = iVar18;
        for (local_10 = 0;
            (local_8 == 0 && ((int)local_10 < ((int *)(param_1[0x1c] + (int)local_14))[1]));
            local_10 = local_10 + 1) {
          psVar4 = *(short **)(*(int *)(param_1[0x1c] + (int)local_14) + local_10 * 4);
          local_24 = iVar13;
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined1 *)0x0) {
            local_8 = -0x7ff8fff2;
          }
          if (local_8 == 0) {
            puVar15 = puVar14 + 2;
            *puVar14 = *(undefined1 *)((int)psVar4 + 1);
            puVar14[1] = (char)*psVar4;
            if (*psVar4 == 0) {
              *puVar15 = (char)((uint)*(undefined4 *)(psVar4 + 1) >> 0x18);
              puVar14[3] = (char)((uint)*(undefined4 *)(psVar4 + 1) >> 0x10);
              puVar14[4] = (char)((uint)*(undefined4 *)(psVar4 + 1) >> 8);
              puVar14[5] = (char)psVar4[1];
              puVar14[6] = (char)((uint)*(undefined4 *)(psVar4 + 3) >> 0x18);
              puVar14[7] = (char)((uint)*(undefined4 *)(psVar4 + 3) >> 0x10);
              puVar14[8] = (char)((uint)*(undefined4 *)(psVar4 + 3) >> 8);
              puVar14[9] = (char)psVar4[3];
              puVar14[10] = (char)((uint)*(undefined4 *)(psVar4 + 5) >> 0x18);
              puVar14[0xb] = (char)((uint)*(undefined4 *)(psVar4 + 5) >> 0x10);
              puVar14[0xc] = (char)((uint)*(undefined4 *)(psVar4 + 5) >> 8);
              puVar14[0xd] = (char)psVar4[5];
              puVar15 = puVar14 + 0xe;
            }
            local_8 = (**(code **)(*param_1 + 0x38))(puVar14,(int)puVar15 - (int)puVar14);
          }
          operator_delete(puVar14);
          iVar13 = local_24;
        }
      }
      local_c = local_c + 1;
      local_24 = local_24 + 0x14;
      local_14 = (uint *)((int)local_14 + 0x10);
    } while (local_c < *(ushort *)((int)param_1 + 0x6e));
  }
  param_1[9] = local_8;
  return;
}


