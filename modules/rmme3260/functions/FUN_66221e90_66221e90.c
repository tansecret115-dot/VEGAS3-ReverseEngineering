/* Module: rmme3260.dll
   Function: FUN_66221e90
   Address: 66221e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66221ed2) */
/* WARNING: Removing unreachable block (ram,0x66221f38) */
/* WARNING: Removing unreachable block (ram,0x6622283d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_66221e90(int *param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint *puVar6;
  short sVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  char *pcVar24;
  bool bVar25;
  time_t tVar26;
  undefined8 local_30;
  undefined1 *puStack_28;
  undefined4 local_24;
  byte *pbStack_20;
  byte *local_1c;
  uint local_18;
  char *local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  local_10 = 0;
  (**(code **)(*(int *)param_1[1] + 8))(0,0);
  piVar4 = (int *)param_1[1];
  local_10 = 4;
  iVar22 = piVar4[5];
  if ((uint)piVar4[6] < iVar22 + 4U) {
    uVar17 = (**(code **)(*piVar4 + 0x24))(&local_10);
  }
  else {
    *(int *)(piVar4[8] + 0x14) = *(int *)(piVar4[8] + 0x14) + 1;
    uVar17 = piVar4[5];
    piVar4[5] = iVar22 + 4U;
  }
  piVar4 = (int *)param_1[1];
  if (uVar17 != 0) {
    uVar18 = *(uint *)(piVar4[8] + 0xc);
    if ((uVar18 == uVar17) || ((uVar18 < uVar17 && (uVar17 < (uint)piVar4[6])))) {
      piVar4 = (int *)(piVar4[8] + 0x14);
      *piVar4 = *piVar4 + -1;
    }
    else {
      (**(code **)(*piVar4 + 0x28))(uVar17);
    }
  }
  piVar4 = (int *)param_1[1];
  local_10 = 2;
  iVar22 = piVar4[5];
  if ((uint)piVar4[6] < iVar22 + 2U) {
    puVar19 = (undefined1 *)(**(code **)(*piVar4 + 0x24))(&local_10);
  }
  else {
    *(int *)(piVar4[8] + 0x14) = *(int *)(piVar4[8] + 0x14) + 1;
    puVar19 = (undefined1 *)piVar4[5];
    piVar4[5] = iVar22 + 2U;
  }
  puStack_28 = (undefined1 *)FUN_6620af60(param_1,(int)puVar19,2,local_10);
  if (puStack_28 == (undefined1 *)0x40040) {
    param_1[0x22] = 0;
    return 0;
  }
  if (puStack_28 == (undefined1 *)0x0) {
    *(ushort *)(param_1 + 0x36) = CONCAT11(*puVar19,puVar19[1]);
    piVar4 = (int *)param_1[1];
    local_8 = (int)puStack_28;
    if (puVar19 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(piVar4[8] + 0xc);
      if ((puVar5 == puVar19) || ((puVar5 < puVar19 && (puVar19 < (undefined1 *)piVar4[6])))) {
        piVar4 = (int *)(piVar4[8] + 0x14);
        *piVar4 = *piVar4 + -1;
      }
      else {
        (**(code **)(*piVar4 + 0x28))(puVar19);
      }
    }
    if ((short)param_1[0x36] == 3) {
      *(undefined2 *)((int)param_1 + 0xf7) = 0xf0;
      *(undefined2 *)((int)param_1 + 0x115) = 0xc;
      puStack_28 = (undefined1 *)FUN_66223760(param_1);
    }
    else if ((short)param_1[0x36] == 4) {
      puStack_28 = (undefined1 *)FUN_66223bf0(param_1);
    }
    else {
      puStack_28 = (undefined1 *)0x80040005;
    }
    if (puStack_28 == (undefined1 *)0x40040) {
      return 0;
    }
  }
  local_8 = (int)puStack_28;
  if (puStack_28 == (undefined1 *)0x0) {
    local_30._4_4_ = *(uint *)((int)param_1 + 0x109);
    *(float *)((int)param_1 + 0xfd) = (float)((float10)local_30._4_4_ * (float10)_DAT_6626bc68);
    if (*(short *)((int)param_1 + 0x115) == 0) {
      *(undefined2 *)((int)param_1 + 0x115) = 1;
    }
    if (*(short *)((int)param_1 + 0x115) == 1) {
      pbStack_20 = (byte *)(uint)*(ushort *)((int)param_1 + 0xf7);
      sVar7 = ftol();
      *(short *)((int)param_1 + 0x101) = sVar7;
      if (sVar7 == 0) {
        *(undefined2 *)((int)param_1 + 0x101) = 0xc;
      }
    }
  }
  puVar19 = (undefined1 *)((uint)(*(int *)((int)param_1 + 0x109) << 3) / 0x3c);
  iVar22 = *(int *)(param_1[1] + 0x20);
  *(int *)((int)param_1 + 0xdf) =
       (*(int *)(param_1[1] + 0x14) + *(int *)(iVar22 + 4)) - *(int *)(iVar22 + 0xc);
  puStack_28 = puVar19;
  tVar26 = time(&local_30);
  param_1[0x54] = (int)tVar26;
  local_c = (byte *)0x0;
  local_1c = (byte *)0x0;
  if (*(float *)((int)param_1 + 0xfd) != _DAT_6626bc74) {
    local_24 = *(undefined4 *)((int)param_1 + 0x111);
    pbStack_20 = (byte *)0x0;
    local_1c = (byte *)ftol();
  }
  if (local_8 == 0) {
    pvVar8 = operator_new(0x3a);
    param_1[0x5b] = (int)pvVar8;
    iVar22 = 0;
    if (pvVar8 == (void *)0x0) {
      iVar22 = -0x7ff8fff2;
      local_8 = -0x7ff8fff2;
    }
    if (iVar22 == 0) {
      uVar17 = 0xffffffff;
      *(undefined2 *)(param_1[0x5b] + 8) = 0;
      pcVar9 = s_audio_x_pn_realaudio_6626f0fc;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      local_c = (byte *)(~uVar17 + 0x2d + (uint)*(ushort *)((int)param_1 + 0x14a));
      pvVar8 = operator_new((uint)local_c);
      param_1[0x56] = (int)pvVar8;
      if (pvVar8 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
    }
  }
  if (local_8 != 0) goto LAB_66222f7e;
  puVar14 = (undefined4 *)param_1[0x56];
  for (uVar17 = (uint)local_c >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar17 = (uint)local_c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(undefined4 *)param_1[0x5b] = 0x4d445052;
  *(byte **)(param_1[0x5b] + 4) = local_c;
  *(undefined2 *)(param_1[0x5b] + 8) = 0;
  *(undefined2 *)(param_1[0x5b] + 10) = 0;
  *(undefined1 **)(param_1[0x5b] + 0xc) = puVar19;
  *(undefined1 **)(param_1[0x5b] + 0x10) = puVar19;
  *(uint *)(param_1[0x5b] + 0x14) = (uint)*(ushort *)((int)param_1 + 0xf7);
  *(uint *)(param_1[0x5b] + 0x18) = (uint)*(ushort *)((int)param_1 + 0xf7);
  *(undefined4 *)(param_1[0x5b] + 0x1c) = 0;
  *(undefined4 *)(param_1[0x5b] + 0x20) = 0;
  *(byte **)(param_1[0x5b] + 0x24) = local_1c;
  *(undefined1 *)(param_1[0x5b] + 0x28) = 0;
  *(undefined4 *)(param_1[0x5b] + 0x29) = 0;
  iVar22 = -1;
  pcVar9 = s_audio_x_pn_realaudio_6626f0fc;
  do {
    if (iVar22 == 0) break;
    iVar22 = iVar22 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  *(byte *)(param_1[0x5b] + 0x2d) = ~(byte)iVar22 - 1;
  *(char **)(param_1[0x5b] + 0x2e) = s_audio_x_pn_realaudio_6626f0fc;
  *(uint *)(param_1[0x5b] + 0x32) = (uint)*(ushort *)((int)param_1 + 0x14a);
  *(int *)(param_1[0x5b] + 0x36) = param_1[0x53];
  local_14 = (char *)param_1[0x5b];
  puVar19 = (undefined1 *)param_1[0x56];
  *puVar19 = (char)((uint)*(undefined4 *)local_14 >> 0x18);
  puVar19[1] = (char)((uint)*(undefined4 *)local_14 >> 0x10);
  puVar19[2] = (char)((uint)*(undefined4 *)local_14 >> 8);
  puVar19[3] = *local_14;
  puVar19[4] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 0x18);
  puVar19[5] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 0x10);
  puVar19[6] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 8);
  puVar19[7] = local_14[4];
  puVar19[8] = local_14[9];
  puVar19[9] = local_14[8];
  pcVar9 = puVar19 + 10;
  if (*(short *)(local_14 + 8) == 0) {
    *pcVar9 = local_14[0xb];
    puVar19[0xb] = local_14[10];
    puVar19[0xc] = (char)((uint)*(undefined4 *)(local_14 + 0xc) >> 0x18);
    puVar19[0xd] = (char)((uint)*(undefined4 *)(local_14 + 0xc) >> 0x10);
    puVar19[0xe] = (char)((uint)*(undefined4 *)(local_14 + 0xc) >> 8);
    puVar19[0xf] = local_14[0xc];
    puVar19[0x10] = (char)((uint)*(undefined4 *)(local_14 + 0x10) >> 0x18);
    puVar19[0x11] = (char)((uint)*(undefined4 *)(local_14 + 0x10) >> 0x10);
    puVar19[0x12] = (char)((uint)*(undefined4 *)(local_14 + 0x10) >> 8);
    puVar19[0x13] = local_14[0x10];
    puVar19[0x14] = (char)((uint)*(undefined4 *)(local_14 + 0x14) >> 0x18);
    puVar19[0x15] = (char)((uint)*(undefined4 *)(local_14 + 0x14) >> 0x10);
    puVar19[0x16] = (char)((uint)*(undefined4 *)(local_14 + 0x14) >> 8);
    puVar19[0x17] = local_14[0x14];
    puVar19[0x18] = (char)((uint)*(undefined4 *)(local_14 + 0x18) >> 0x18);
    puVar19[0x19] = (char)((uint)*(undefined4 *)(local_14 + 0x18) >> 0x10);
    puVar19[0x1a] = (char)((uint)*(undefined4 *)(local_14 + 0x18) >> 8);
    puVar19[0x1b] = local_14[0x18];
    puVar19[0x1c] = (char)((uint)*(undefined4 *)(local_14 + 0x1c) >> 0x18);
    puVar19[0x1d] = (char)((uint)*(undefined4 *)(local_14 + 0x1c) >> 0x10);
    puVar19[0x1e] = (char)((uint)*(undefined4 *)(local_14 + 0x1c) >> 8);
    puVar19[0x1f] = local_14[0x1c];
    puVar19[0x20] = (char)((uint)*(undefined4 *)(local_14 + 0x20) >> 0x18);
    puVar19[0x21] = (char)((uint)*(undefined4 *)(local_14 + 0x20) >> 0x10);
    puVar19[0x22] = (char)((uint)*(undefined4 *)(local_14 + 0x20) >> 8);
    puVar19[0x23] = local_14[0x20];
    puVar19[0x24] = (char)((uint)*(undefined4 *)(local_14 + 0x24) >> 0x18);
    puVar19[0x25] = (char)((uint)*(undefined4 *)(local_14 + 0x24) >> 0x10);
    puVar19[0x26] = (char)((uint)*(undefined4 *)(local_14 + 0x24) >> 8);
    puVar19[0x27] = local_14[0x24];
    puVar19[0x28] = local_14[0x28];
    bVar2 = local_14[0x28];
    puVar14 = *(undefined4 **)(local_14 + 0x29);
    puVar21 = (undefined4 *)(puVar19 + 0x29);
    for (uVar17 = (uint)(bVar2 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar21 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar21 + 1;
    }
    for (uVar17 = bVar2 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar21 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar21 = (undefined4 *)((int)puVar21 + 1);
    }
    pcVar10 = (char *)((int)(puVar19 + 0x29) + (uint)(byte)local_14[0x28]);
    *pcVar10 = local_14[0x2d];
    bVar2 = local_14[0x2d];
    pcVar10 = pcVar10 + 1;
    pcVar9 = *(char **)(local_14 + 0x2e);
    pcVar24 = pcVar10;
    for (uVar17 = (uint)(bVar2 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar17 = bVar2 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar24 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar24 = pcVar24 + 1;
    }
    pcVar10 = pcVar10 + (byte)local_14[0x2d];
    *pcVar10 = (char)((uint)*(undefined4 *)(local_14 + 0x32) >> 0x18);
    pcVar10[1] = (char)((uint)*(undefined4 *)(local_14 + 0x32) >> 0x10);
    pcVar10[2] = (char)((uint)*(undefined4 *)(local_14 + 0x32) >> 8);
    pcVar10[3] = local_14[0x32];
    uVar17 = *(uint *)(local_14 + 0x32);
    pcVar9 = *(char **)(local_14 + 0x36);
    pcVar24 = pcVar10 + 4;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar24 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar24 = pcVar24 + 1;
    }
    pcVar9 = pcVar10 + 4 + *(int *)(local_14 + 0x32);
  }
  puVar6 = (uint *)param_1[0x5b];
  pbStack_20 = (byte *)(pcVar9 + -(int)puVar19);
  pbVar20 = (byte *)param_1[0x56];
  if ((pbVar20 != (byte *)0x0) && (pbStack_20 != (byte *)0x0)) {
    bVar2 = *pbVar20;
    *puVar6 = (uint)bVar2 << 0x18;
    uVar17 = (uint)pbVar20[1] << 0x10 | (uint)bVar2 << 0x18;
    *puVar6 = uVar17;
    *puVar6 = uVar17 | (uint)pbVar20[2] << 8;
    *puVar6 = *puVar6 | (uint)pbVar20[3];
    bVar2 = pbVar20[4];
    puVar6[1] = (uint)bVar2 << 0x18;
    puVar6[1] = (uint)bVar2 << 0x18 | (uint)pbVar20[5] << 0x10;
    puVar6[1] = puVar6[1] | (uint)pbVar20[6] << 8;
    puVar6[1] = puVar6[1] | (uint)pbVar20[7];
    *(ushort *)(puVar6 + 2) = (ushort)pbVar20[8] << 8;
    *(ushort *)(puVar6 + 2) = (ushort)puVar6[2] | (ushort)pbVar20[9];
    if ((short)puVar6[2] == 0) {
      *(ushort *)((int)puVar6 + 10) = (ushort)pbVar20[10] << 8;
      *(ushort *)((int)puVar6 + 10) = *(ushort *)((int)puVar6 + 10) | (ushort)pbVar20[0xb];
      bVar2 = pbVar20[0xc];
      puVar6[3] = (uint)bVar2 << 0x18;
      puVar6[3] = (uint)bVar2 << 0x18 | (uint)pbVar20[0xd] << 0x10;
      puVar6[3] = puVar6[3] | (uint)pbVar20[0xe] << 8;
      puVar6[3] = puVar6[3] | (uint)pbVar20[0xf];
      bVar2 = pbVar20[0x10];
      puVar6[4] = (uint)bVar2 << 0x18;
      puVar6[4] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x11] << 0x10;
      puVar6[4] = puVar6[4] | (uint)pbVar20[0x12] << 8;
      puVar6[4] = puVar6[4] | (uint)pbVar20[0x13];
      bVar2 = pbVar20[0x14];
      puVar6[5] = (uint)bVar2 << 0x18;
      puVar6[5] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x15] << 0x10;
      puVar6[5] = puVar6[5] | (uint)pbVar20[0x16] << 8;
      puVar6[5] = puVar6[5] | (uint)pbVar20[0x17];
      bVar2 = pbVar20[0x18];
      puVar6[6] = (uint)bVar2 << 0x18;
      puVar6[6] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x19] << 0x10;
      puVar6[6] = puVar6[6] | (uint)pbVar20[0x1a] << 8;
      puVar6[6] = puVar6[6] | (uint)pbVar20[0x1b];
      bVar2 = pbVar20[0x1c];
      puVar6[7] = (uint)bVar2 << 0x18;
      puVar6[7] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x1d] << 0x10;
      puVar6[7] = puVar6[7] | (uint)pbVar20[0x1e] << 8;
      puVar6[7] = puVar6[7] | (uint)pbVar20[0x1f];
      bVar2 = pbVar20[0x20];
      puVar6[8] = (uint)bVar2 << 0x18;
      puVar6[8] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x21] << 0x10;
      puVar6[8] = puVar6[8] | (uint)pbVar20[0x22] << 8;
      puVar6[8] = puVar6[8] | (uint)pbVar20[0x23];
      bVar2 = pbVar20[0x24];
      puVar6[9] = (uint)bVar2 << 0x18;
      puVar6[9] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x25] << 0x10;
      puVar6[9] = puVar6[9] | (uint)pbVar20[0x26] << 8;
      puVar6[9] = puVar6[9] | (uint)pbVar20[0x27];
      pbVar11 = pbVar20 + 0x29;
      *(byte *)(puVar6 + 10) = pbVar20[0x28];
      local_18 = (uint)(byte)puVar6[10];
      if ((int)(pbVar11 + (local_18 - (int)pbVar20)) <= (int)pbStack_20) {
        *(byte **)((int)puVar6 + 0x29) = pbVar11;
        pbVar12 = pbVar11 + local_18 + 1;
        *(byte *)((int)puVar6 + 0x2d) = pbVar11[local_18];
        local_18 = (uint)*(byte *)((int)puVar6 + 0x2d);
        if ((int)(pbVar12 + (local_18 - (int)pbVar20)) <= (int)pbStack_20) {
          *(byte **)((int)puVar6 + 0x2e) = pbVar12;
          pbVar12 = pbVar12 + local_18;
          *(uint *)((int)puVar6 + 0x32) = (uint)*pbVar12 << 0x18;
          *(uint *)((int)puVar6 + 0x32) = *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[1] << 0x10;
          *(uint *)((int)puVar6 + 0x32) = *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[2] << 8;
          *(uint *)((int)puVar6 + 0x32) = *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[3];
          if (pbVar12 + 4 + (*(int *)((int)puVar6 + 0x32) - (int)pbVar20) <= pbStack_20) {
            *(byte **)((int)puVar6 + 0x36) = pbVar12 + 4;
          }
        }
      }
    }
  }
  local_c = pbStack_20;
  (**(code **)(*param_1 + 0x1c))(pbStack_20,param_1[0x56]);
  uVar13 = (**(code **)(*param_1 + 0x70))(param_1 + 0x5f,(int)param_1 + 0x18a);
  *(undefined4 *)((int)param_1 + 0x186) = uVar13;
  if ((local_8 != 0) || (pcVar9 = (char *)param_1[0x1e], pcVar9 == (char *)0x0)) goto LAB_66222f7e;
  uVar17 = 0xffffffff;
  pcVar24 = pcVar9;
  do {
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    cVar1 = *pcVar24;
    pcVar24 = pcVar24 + 1;
  } while (cVar1 != '\0');
  pbStack_20 = operator_new(~uVar17 + 1);
  if (pbStack_20 == (byte *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  if (local_8 == 0) {
    uVar17 = 0xffffffff;
    do {
      pcVar24 = pcVar9;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    pbVar20 = (byte *)(pcVar24 + -uVar17);
    pbVar11 = pbStack_20;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar20;
      pbVar20 = pbVar20 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar11 = *pbVar20;
      pbVar20 = pbVar20 + 1;
      pbVar11 = pbVar11 + 1;
    }
    local_18 = 0xffffffff;
    pcVar9 = &DAT_6626f804;
    do {
      pcVar24 = pcVar9;
      if (local_18 == 0) break;
      local_18 = local_18 - 1;
      pcVar24 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar24;
    } while (cVar1 != '\0');
    local_18 = ~local_18;
    iVar22 = -1;
    pbVar20 = pbStack_20;
    do {
      pbVar11 = pbVar20;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pbVar11 = pbVar20 + 1;
      bVar2 = *pbVar20;
      pbVar20 = pbVar11;
    } while (bVar2 != 0);
    pbVar20 = (byte *)(pcVar24 + -local_18);
    pbVar11 = pbVar11 + -1;
    for (uVar17 = local_18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar20;
      pbVar20 = pbVar20 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar17 = local_18 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar11 = *pbVar20;
      pbVar20 = pbVar20 + 1;
      pbVar11 = pbVar11 + 1;
    }
    pvVar8 = operator_new(0x56);
    if (pvVar8 == (void *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = FUN_66257370(pvVar8,(char *)pbStack_20,0x8000,0);
    }
    *(undefined4 **)((int)param_1 + 0x1aa) = puVar14;
    if (puVar14 == (undefined4 *)0x0) {
      local_8 = -0x7ff8fff2;
    }
  }
  if (local_8 == 0) {
    puVar14 = *(undefined4 **)((int)param_1 + 0x1aa);
    if ((puVar14 != (undefined4 *)0x0) && (puVar14[0x10] != 0)) {
      if (puVar14 != (undefined4 *)0x0) {
        (**(code **)*puVar14)(1);
      }
      *(undefined4 *)((int)param_1 + 0x1aa) = 0;
    }
    piVar4 = *(int **)((int)param_1 + 0x1aa);
    if (piVar4 != (int *)0x0) {
      local_18 = 7;
      iVar22 = piVar4[5];
      if ((uint)piVar4[6] < iVar22 + 7U) {
        local_14 = (char *)(**(code **)(*piVar4 + 0x24))(&local_18);
      }
      else {
        *(int *)(piVar4[8] + 0x14) = *(int *)(piVar4[8] + 0x14) + 1;
        local_14 = (char *)piVar4[5];
        piVar4[5] = iVar22 + 7U;
      }
      if (local_14 == (char *)0x0) {
LAB_66222888:
        iVar22 = -1;
        local_8 = -1;
      }
      else {
        iVar22 = 0;
        if ((int)local_18 < 7) {
          if (local_14 != (char *)0x0) {
            piVar4 = *(int **)((int)param_1 + 0x1aa);
            pcVar9 = *(char **)(piVar4[8] + 0xc);
            if ((pcVar9 == local_14) || ((pcVar9 < local_14 && (local_14 < (char *)piVar4[6])))) {
              piVar4 = (int *)(piVar4[8] + 0x14);
              *piVar4 = *piVar4 + -1;
            }
            else {
              (**(code **)(*piVar4 + 0x28))(local_14);
            }
          }
          goto LAB_66222888;
        }
      }
      if (iVar22 == 0) {
        iVar22 = 5;
        bVar25 = true;
        pcVar9 = local_14;
        pcVar24 = &DAT_6626bc60;
        do {
          if (iVar22 == 0) break;
          iVar22 = iVar22 + -1;
          bVar25 = *pcVar9 == *pcVar24;
          pcVar9 = pcVar9 + 1;
          pcVar24 = pcVar24 + 1;
        } while (bVar25);
        if (!bVar25) {
          piVar4 = *(int **)((int)param_1 + 0x1aa);
          if (local_14 != (char *)0x0) {
            pcVar9 = *(char **)(piVar4[8] + 0xc);
            if ((pcVar9 == local_14) || ((pcVar9 < local_14 && (local_14 < (char *)piVar4[6])))) {
              piVar4 = (int *)(piVar4[8] + 0x14);
              *piVar4 = *piVar4 + -1;
            }
            else {
              (**(code **)(*piVar4 + 0x28))(local_14);
            }
          }
          local_8 = -1;
        }
      }
      pcVar9 = local_14;
      if (local_8 == 0) {
        if (2 < CONCAT11(local_14[5],local_14[6])) {
          piVar4 = *(int **)((int)param_1 + 0x1aa);
          if (local_14 != (char *)0x0) {
            pcVar24 = *(char **)(piVar4[8] + 0xc);
            if ((pcVar24 == local_14) || ((pcVar24 < local_14 && (local_14 < (char *)piVar4[6])))) {
              piVar4 = (int *)(piVar4[8] + 0x14);
              *piVar4 = *piVar4 + -1;
            }
            else {
              (**(code **)(*piVar4 + 0x28))(local_14);
            }
          }
          local_8 = -1;
        }
        piVar4 = *(int **)((int)param_1 + 0x1aa);
        if (pcVar9 != (char *)0x0) {
          pcVar24 = *(char **)(piVar4[8] + 0xc);
          if ((pcVar24 == pcVar9) || ((pcVar24 < pcVar9 && (pcVar9 < (char *)piVar4[6])))) {
            piVar4 = (int *)(piVar4[8] + 0x14);
            *piVar4 = *piVar4 + -1;
          }
          else {
            (**(code **)(*piVar4 + 0x28))(pcVar9);
          }
        }
        if (local_8 == 0) {
          pvVar8 = operator_new(0x3a);
          param_1[0x5e] = (int)pvVar8;
          if (pvVar8 == (void *)0x0) {
            local_8 = -0x7ff8fff2;
          }
          if (local_8 == 0) {
            *(undefined2 *)(param_1[0x5e] + 8) = 0;
            uVar17 = 0xffffffff;
            pcVar9 = s_application_x_pn_realevent_6626f0e0;
            do {
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            local_c = (byte *)(~uVar17 + 0x2d);
            pvVar8 = operator_new((uint)local_c);
            param_1[0x59] = (int)pvVar8;
            if (pvVar8 == (void *)0x0) {
              local_8 = -0x7ff8fff2;
            }
            if (local_8 == 0) {
              puVar14 = (undefined4 *)param_1[0x59];
              for (uVar17 = (uint)local_c >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
              }
              for (uVar17 = (uint)local_c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined1 *)puVar14 = 0;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
              *(undefined4 *)param_1[0x5e] = 0x4d445052;
              *(byte **)(param_1[0x5e] + 4) = local_c;
              *(undefined2 *)(param_1[0x5e] + 8) = 0;
              *(undefined2 *)(param_1[0x5e] + 10) = 1;
              *(undefined1 **)(param_1[0x5e] + 0xc) = puStack_28;
              *(undefined1 **)(param_1[0x5e] + 0x10) = puStack_28;
              *(undefined4 *)(param_1[0x5e] + 0x14) = 10;
              *(undefined4 *)(param_1[0x5e] + 0x18) = 10;
              *(undefined4 *)(param_1[0x5e] + 0x1c) = 0;
              *(undefined4 *)(param_1[0x5e] + 0x20) = 0;
              *(byte **)(param_1[0x5e] + 0x24) = local_1c;
              *(undefined1 *)(param_1[0x5e] + 0x28) = 0;
              *(undefined4 *)(param_1[0x5e] + 0x29) = 0;
              iVar22 = -1;
              pcVar9 = s_application_x_pn_realevent_6626f0e0;
              do {
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              *(byte *)(param_1[0x5e] + 0x2d) = ~(byte)iVar22 - 1;
              *(char **)(param_1[0x5e] + 0x2e) = s_application_x_pn_realevent_6626f0e0;
              *(undefined4 *)(param_1[0x5e] + 0x32) = 0;
              *(undefined4 *)(param_1[0x5e] + 0x36) = 0;
              puVar14 = (undefined4 *)param_1[0x5e];
              puStack_28 = (undefined1 *)param_1[0x59];
              *puStack_28 = (char)((uint)*puVar14 >> 0x18);
              puStack_28[1] = (char)((uint)*puVar14 >> 0x10);
              puStack_28[2] = (char)((uint)*puVar14 >> 8);
              puStack_28[3] = *(undefined1 *)puVar14;
              puStack_28[4] = (char)((uint)puVar14[1] >> 0x18);
              puStack_28[5] = (char)((uint)puVar14[1] >> 0x10);
              puStack_28[6] = (char)((uint)puVar14[1] >> 8);
              puStack_28[7] = *(undefined1 *)(puVar14 + 1);
              puStack_28[8] = *(undefined1 *)((int)puVar14 + 9);
              puStack_28[9] = *(undefined1 *)(puVar14 + 2);
              puVar19 = puStack_28 + 10;
              if (*(short *)(puVar14 + 2) == 0) {
                puStack_28[10] = *(undefined1 *)((int)puVar14 + 0xb);
                puStack_28[0xb] = *(undefined1 *)((int)puVar14 + 10);
                puStack_28[0xc] = (char)((uint)puVar14[3] >> 0x18);
                puStack_28[0xd] = (char)((uint)puVar14[3] >> 0x10);
                puStack_28[0xe] = (char)((uint)puVar14[3] >> 8);
                puStack_28[0xf] = *(undefined1 *)(puVar14 + 3);
                puStack_28[0x10] = (char)((uint)puVar14[4] >> 0x18);
                puStack_28[0x11] = (char)((uint)puVar14[4] >> 0x10);
                puStack_28[0x12] = (char)((uint)puVar14[4] >> 8);
                puStack_28[0x13] = *(undefined1 *)(puVar14 + 4);
                puStack_28[0x14] = (char)((uint)puVar14[5] >> 0x18);
                puStack_28[0x15] = (char)((uint)puVar14[5] >> 0x10);
                puStack_28[0x16] = (char)((uint)puVar14[5] >> 8);
                puStack_28[0x17] = *(undefined1 *)(puVar14 + 5);
                puStack_28[0x18] = (char)((uint)puVar14[6] >> 0x18);
                puStack_28[0x19] = (char)((uint)puVar14[6] >> 0x10);
                puStack_28[0x1a] = (char)((uint)puVar14[6] >> 8);
                puStack_28[0x1b] = *(undefined1 *)(puVar14 + 6);
                puStack_28[0x1c] = (char)((uint)puVar14[7] >> 0x18);
                puStack_28[0x1d] = (char)((uint)puVar14[7] >> 0x10);
                puStack_28[0x1e] = (char)((uint)puVar14[7] >> 8);
                puStack_28[0x1f] = *(undefined1 *)(puVar14 + 7);
                puStack_28[0x20] = (char)((uint)puVar14[8] >> 0x18);
                puStack_28[0x21] = (char)((uint)puVar14[8] >> 0x10);
                puStack_28[0x22] = (char)((uint)puVar14[8] >> 8);
                puStack_28[0x23] = *(undefined1 *)(puVar14 + 8);
                puStack_28[0x24] = (char)((uint)puVar14[9] >> 0x18);
                puStack_28[0x25] = (char)((uint)puVar14[9] >> 0x10);
                puStack_28[0x26] = (char)((uint)puVar14[9] >> 8);
                puStack_28[0x27] = *(undefined1 *)(puVar14 + 9);
                puStack_28[0x28] = *(undefined1 *)(puVar14 + 10);
                bVar2 = *(byte *)(puVar14 + 10);
                puVar21 = *(undefined4 **)((int)puVar14 + 0x29);
                puVar23 = (undefined4 *)(puStack_28 + 0x29);
                for (uVar17 = (uint)(bVar2 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar23 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar23 = puVar23 + 1;
                }
                for (uVar17 = bVar2 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined1 *)puVar23 = *(undefined1 *)puVar21;
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                  puVar23 = (undefined4 *)((int)puVar23 + 1);
                }
                puVar19 = (undefined1 *)((int)(puStack_28 + 0x29) + (uint)*(byte *)(puVar14 + 10));
                *puVar19 = *(undefined1 *)((int)puVar14 + 0x2d);
                bVar2 = *(byte *)((int)puVar14 + 0x2d);
                puVar15 = (undefined4 *)(puVar19 + 1);
                puVar21 = *(undefined4 **)((int)puVar14 + 0x2e);
                puVar23 = puVar15;
                for (uVar17 = (uint)(bVar2 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar23 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar23 = puVar23 + 1;
                }
                for (uVar17 = bVar2 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined1 *)puVar23 = *(undefined1 *)puVar21;
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                  puVar23 = (undefined4 *)((int)puVar23 + 1);
                }
                puVar19 = (undefined1 *)((int)puVar15 + (uint)*(byte *)((int)puVar14 + 0x2d));
                *puVar19 = (char)((uint)*(undefined4 *)((int)puVar14 + 0x32) >> 0x18);
                puVar19[1] = (char)((uint)*(undefined4 *)((int)puVar14 + 0x32) >> 0x10);
                puVar19[2] = (char)((uint)*(undefined4 *)((int)puVar14 + 0x32) >> 8);
                puVar19[3] = *(undefined1 *)((int)puVar14 + 0x32);
                uVar17 = *(uint *)((int)puVar14 + 0x32);
                puVar21 = *(undefined4 **)((int)puVar14 + 0x36);
                puVar23 = (undefined4 *)(puVar19 + 4);
                for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *puVar23 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar23 = puVar23 + 1;
                }
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined1 *)puVar23 = *(undefined1 *)puVar21;
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                  puVar23 = (undefined4 *)((int)puVar23 + 1);
                }
                puVar19 = (undefined1 *)((int)(puVar19 + 4) + *(int *)((int)puVar14 + 0x32));
              }
              puVar6 = (uint *)param_1[0x5e];
              local_1c = puVar19 + -(int)puStack_28;
              pbVar20 = (byte *)param_1[0x59];
              local_c = local_1c;
              if ((pbVar20 != (byte *)0x0) && (local_1c != (byte *)0x0)) {
                bVar2 = *pbVar20;
                *puVar6 = (uint)bVar2 << 0x18;
                uVar17 = (uint)pbVar20[1] << 0x10 | (uint)bVar2 << 0x18;
                *puVar6 = uVar17;
                *puVar6 = uVar17 | (uint)pbVar20[2] << 8;
                *puVar6 = *puVar6 | (uint)pbVar20[3];
                bVar2 = pbVar20[4];
                puVar6[1] = (uint)bVar2 << 0x18;
                puVar6[1] = (uint)bVar2 << 0x18 | (uint)pbVar20[5] << 0x10;
                puVar6[1] = puVar6[1] | (uint)pbVar20[6] << 8;
                puVar6[1] = puVar6[1] | (uint)pbVar20[7];
                *(ushort *)(puVar6 + 2) = (ushort)pbVar20[8] << 8;
                *(ushort *)(puVar6 + 2) = (ushort)puVar6[2] | (ushort)pbVar20[9];
                if ((short)puVar6[2] == 0) {
                  *(ushort *)((int)puVar6 + 10) = (ushort)pbVar20[10] << 8;
                  *(ushort *)((int)puVar6 + 10) =
                       *(ushort *)((int)puVar6 + 10) | (ushort)pbVar20[0xb];
                  bVar2 = pbVar20[0xc];
                  puVar6[3] = (uint)bVar2 << 0x18;
                  puVar6[3] = (uint)bVar2 << 0x18 | (uint)pbVar20[0xd] << 0x10;
                  puVar6[3] = puVar6[3] | (uint)pbVar20[0xe] << 8;
                  puVar6[3] = puVar6[3] | (uint)pbVar20[0xf];
                  bVar2 = pbVar20[0x10];
                  puVar6[4] = (uint)bVar2 << 0x18;
                  puVar6[4] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x11] << 0x10;
                  puVar6[4] = puVar6[4] | (uint)pbVar20[0x12] << 8;
                  puVar6[4] = puVar6[4] | (uint)pbVar20[0x13];
                  bVar2 = pbVar20[0x14];
                  puVar6[5] = (uint)bVar2 << 0x18;
                  puVar6[5] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x15] << 0x10;
                  puVar6[5] = puVar6[5] | (uint)pbVar20[0x16] << 8;
                  puVar6[5] = puVar6[5] | (uint)pbVar20[0x17];
                  bVar2 = pbVar20[0x18];
                  puVar6[6] = (uint)bVar2 << 0x18;
                  puVar6[6] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x19] << 0x10;
                  puVar6[6] = puVar6[6] | (uint)pbVar20[0x1a] << 8;
                  puVar6[6] = puVar6[6] | (uint)pbVar20[0x1b];
                  bVar2 = pbVar20[0x1c];
                  puVar6[7] = (uint)bVar2 << 0x18;
                  puVar6[7] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x1d] << 0x10;
                  puVar6[7] = puVar6[7] | (uint)pbVar20[0x1e] << 8;
                  puVar6[7] = puVar6[7] | (uint)pbVar20[0x1f];
                  bVar2 = pbVar20[0x20];
                  puVar6[8] = (uint)bVar2 << 0x18;
                  puVar6[8] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x21] << 0x10;
                  puVar6[8] = puVar6[8] | (uint)pbVar20[0x22] << 8;
                  puVar6[8] = puVar6[8] | (uint)pbVar20[0x23];
                  bVar2 = pbVar20[0x24];
                  puVar6[9] = (uint)bVar2 << 0x18;
                  puVar6[9] = (uint)bVar2 << 0x18 | (uint)pbVar20[0x25] << 0x10;
                  puVar6[9] = puVar6[9] | (uint)pbVar20[0x26] << 8;
                  puVar6[9] = puVar6[9] | (uint)pbVar20[0x27];
                  pbVar11 = pbVar20 + 0x29;
                  *(byte *)(puVar6 + 10) = pbVar20[0x28];
                  puStack_28 = (undefined1 *)(uint)(byte)puVar6[10];
                  if ((int)(puStack_28 + ((int)pbVar11 - (int)pbVar20)) <= (int)local_1c) {
                    *(byte **)((int)puVar6 + 0x29) = pbVar11;
                    pbVar12 = pbVar11 + (int)puStack_28 + 1;
                    *(byte *)((int)puVar6 + 0x2d) = pbVar11[(int)puStack_28];
                    puStack_28 = (undefined1 *)(uint)*(byte *)((int)puVar6 + 0x2d);
                    if ((int)(puStack_28 + ((int)pbVar12 - (int)pbVar20)) <= (int)local_1c) {
                      *(byte **)((int)puVar6 + 0x2e) = pbVar12;
                      pbVar12 = pbVar12 + (int)puStack_28;
                      *(uint *)((int)puVar6 + 0x32) = (uint)*pbVar12 << 0x18;
                      *(uint *)((int)puVar6 + 0x32) =
                           *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[1] << 0x10;
                      *(uint *)((int)puVar6 + 0x32) =
                           *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[2] << 8;
                      *(uint *)((int)puVar6 + 0x32) =
                           *(uint *)((int)puVar6 + 0x32) | (uint)pbVar12[3];
                      if (pbVar12 + 4 + (*(int *)((int)puVar6 + 0x32) - (int)pbVar20) <= local_1c) {
                        *(byte **)((int)puVar6 + 0x36) = pbVar12 + 4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (local_8 == 0) {
        (**(code **)(*param_1 + 0x1c))(local_c,param_1[0x59]);
        iVar22 = *(int *)(*(int *)((int)param_1 + 0x1aa) + 0x20);
        param_1[0x70] =
             (*(int *)(*(int *)((int)param_1 + 0x1aa) + 0x14) - *(int *)(iVar22 + 0xc)) +
             *(int *)(iVar22 + 4);
        iVar22 = (**(code **)(*param_1 + 0x6c))((int)param_1 + 0x1ae,param_1 + 0x6f);
        param_1[0x6e] = iVar22;
      }
    }
  }
  if (pbStack_20 != (byte *)0x0) {
    operator_delete(pbStack_20);
  }
LAB_66222f7e:
  if ((*(byte *)((int)param_1 + 0x12e) & 1) != 0) {
    *(byte *)((int)param_1 + 0x1ca) = *(byte *)((int)param_1 + 0x1ca) | 1;
  }
  if ((*(byte *)((int)param_1 + 0x12e) & 2) != 0) {
    *(byte *)((int)param_1 + 0x1ca) = *(byte *)((int)param_1 + 0x1ca) | 2;
  }
  FUN_66209330(param_1,*(ushort *)((int)param_1 + 0x1ca));
  if (local_8 == 0) {
    puVar14 = operator_new(0x22);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined2 *)(puVar14 + 2) = 0;
      *(undefined2 *)((int)puVar14 + 10) = 0;
      puVar14[3] = 0;
      *(undefined2 *)(puVar14 + 4) = 0;
      *(undefined4 *)((int)puVar14 + 0x12) = 0;
      *(undefined2 *)((int)puVar14 + 0x16) = 0;
      puVar14[6] = 0;
      *(undefined2 *)(puVar14 + 7) = 0;
      *(undefined4 *)((int)puVar14 + 0x1e) = 0;
    }
    param_1[0x5c] = (int)puVar14;
    iVar22 = 0;
    if (puVar14 == (undefined4 *)0x0) {
      iVar22 = -0x7ff8fff2;
      local_8 = -0x7ff8fff2;
    }
    if (iVar22 == 0) {
      *(undefined2 *)(param_1[0x5c] + 8) = 0;
      local_c = (byte *)((uint)*(byte *)((int)param_1 + 0x13b) +
                         (uint)*(byte *)((int)param_1 + 0x136) + (uint)*(byte *)(param_1 + 0x50) +
                         0x12 + (uint)*(byte *)((int)param_1 + 0x145));
      pvVar8 = operator_new((uint)local_c);
      param_1[0x57] = (int)pvVar8;
      iVar22 = 0;
      if (pvVar8 == (void *)0x0) {
        iVar22 = -0x7ff8fff2;
        local_8 = -0x7ff8fff2;
      }
      if (iVar22 == 0) {
        puVar14 = (undefined4 *)param_1[0x57];
        for (uVar17 = (uint)local_c >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (uVar17 = (uint)local_c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined1 *)puVar14 = 0;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        *(undefined4 *)param_1[0x5c] = 0x434f4e54;
        *(byte **)(param_1[0x5c] + 4) = local_c;
        *(undefined2 *)(param_1[0x5c] + 8) = 0;
        *(ushort *)(param_1[0x5c] + 10) = (ushort)*(byte *)((int)param_1 + 0x136);
        *(undefined4 *)(param_1[0x5c] + 0xc) = *(undefined4 *)((int)param_1 + 0x137);
        *(ushort *)(param_1[0x5c] + 0x10) = (ushort)*(byte *)((int)param_1 + 0x13b);
        *(int *)(param_1[0x5c] + 0x12) = param_1[0x4f];
        *(ushort *)(param_1[0x5c] + 0x16) = (ushort)*(byte *)(param_1 + 0x50);
        *(undefined4 *)(param_1[0x5c] + 0x18) = *(undefined4 *)((int)param_1 + 0x141);
        *(ushort *)(param_1[0x5c] + 0x1c) = (ushort)*(byte *)((int)param_1 + 0x145);
        *(undefined4 *)(param_1[0x5c] + 0x1e) = *(undefined4 *)((int)param_1 + 0x146);
        local_14 = (char *)param_1[0x5c];
        puStack_28 = (undefined1 *)param_1[0x57];
        *puStack_28 = (char)((uint)*(undefined4 *)local_14 >> 0x18);
        puStack_28[1] = (char)((uint)*(undefined4 *)local_14 >> 0x10);
        puStack_28[2] = (char)((uint)*(undefined4 *)local_14 >> 8);
        puStack_28[3] = *local_14;
        puStack_28[4] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 0x18);
        puStack_28[5] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 0x10);
        puStack_28[6] = (char)((uint)*(undefined4 *)(local_14 + 4) >> 8);
        puStack_28[7] = local_14[4];
        puStack_28[8] = local_14[9];
        puStack_28[9] = local_14[8];
        pcVar9 = puStack_28 + 10;
        if (*(short *)(local_14 + 8) == 0) {
          puStack_28[10] = local_14[0xb];
          puStack_28[0xb] = local_14[10];
          uVar3 = *(ushort *)(local_14 + 10);
          puVar14 = *(undefined4 **)(local_14 + 0xc);
          puVar21 = (undefined4 *)(puStack_28 + 0xc);
          for (uVar17 = (uint)(uVar3 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar21 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar17 = uVar3 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar14;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          pcVar10 = (char *)((int)(puStack_28 + 0xc) + (uint)*(ushort *)(local_14 + 10));
          *pcVar10 = local_14[0x11];
          pcVar10[1] = local_14[0x10];
          uVar3 = *(ushort *)(local_14 + 0x10);
          pcVar9 = *(char **)(local_14 + 0x12);
          pcVar24 = pcVar10 + 2;
          for (uVar17 = (uint)(uVar3 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar17 = uVar3 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar24 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar24 = pcVar24 + 1;
          }
          pcVar10 = pcVar10 + 2 + *(ushort *)(local_14 + 0x10);
          *pcVar10 = local_14[0x17];
          pcVar10[1] = local_14[0x16];
          uVar3 = *(ushort *)(local_14 + 0x16);
          pcVar9 = *(char **)(local_14 + 0x18);
          pcVar24 = pcVar10 + 2;
          for (uVar17 = (uint)(uVar3 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar17 = uVar3 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar24 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar24 = pcVar24 + 1;
          }
          pcVar10 = pcVar10 + 2 + *(ushort *)(local_14 + 0x16);
          *pcVar10 = local_14[0x1d];
          pcVar10[1] = local_14[0x1c];
          uVar3 = *(ushort *)(local_14 + 0x1c);
          pcVar9 = *(char **)(local_14 + 0x1e);
          pcVar24 = pcVar10 + 2;
          for (uVar17 = (uint)(uVar3 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar17 = uVar3 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar24 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar24 = pcVar24 + 1;
          }
          pcVar9 = pcVar10 + 2 + *(ushort *)(local_14 + 0x1c);
        }
        puVar6 = (uint *)param_1[0x5c];
        pbStack_20 = (byte *)(pcVar9 + -(int)puStack_28);
        pbVar20 = (byte *)param_1[0x57];
        local_c = pbStack_20;
        if ((pbVar20 != (byte *)0x0) && (pbStack_20 != (byte *)0x0)) {
          bVar2 = *pbVar20;
          *puVar6 = (uint)bVar2 << 0x18;
          uVar17 = (uint)pbVar20[1] << 0x10 | (uint)bVar2 << 0x18;
          *puVar6 = uVar17;
          *puVar6 = uVar17 | (uint)pbVar20[2] << 8;
          *puVar6 = *puVar6 | (uint)pbVar20[3];
          bVar2 = pbVar20[4];
          puVar6[1] = (uint)bVar2 << 0x18;
          puVar6[1] = (uint)bVar2 << 0x18 | (uint)pbVar20[5] << 0x10;
          puVar6[1] = puVar6[1] | (uint)pbVar20[6] << 8;
          puVar6[1] = puVar6[1] | (uint)pbVar20[7];
          *(ushort *)(puVar6 + 2) = (ushort)pbVar20[8] << 8;
          *(ushort *)(puVar6 + 2) = (ushort)puVar6[2] | (ushort)pbVar20[9];
          if ((short)puVar6[2] == 0) {
            *(ushort *)((int)puVar6 + 10) = (ushort)pbVar20[10] << 8;
            *(ushort *)((int)puVar6 + 10) = *(ushort *)((int)puVar6 + 10) | (ushort)pbVar20[0xb];
            puStack_28 = (undefined1 *)(uint)*(ushort *)((int)puVar6 + 10);
            pbVar11 = pbVar20 + 0xc;
            if ((int)(puStack_28 + ((int)pbVar11 - (int)pbVar20)) <= (int)pbStack_20) {
              puVar6[3] = (uint)pbVar11;
              pbVar11 = pbVar11 + (int)puStack_28;
              *(ushort *)(puVar6 + 4) = (ushort)*pbVar11 << 8;
              *(ushort *)(puVar6 + 4) = (ushort)puVar6[4] | (ushort)pbVar11[1];
              puStack_28 = (undefined1 *)(uint)(ushort)puVar6[4];
              pbVar11 = pbVar11 + 2;
              if ((int)(puStack_28 + ((int)pbVar11 - (int)pbVar20)) <= (int)pbStack_20) {
                *(byte **)((int)puVar6 + 0x12) = pbVar11;
                pbVar11 = pbVar11 + (int)puStack_28;
                *(ushort *)((int)puVar6 + 0x16) = (ushort)*pbVar11 << 8;
                *(ushort *)((int)puVar6 + 0x16) =
                     *(ushort *)((int)puVar6 + 0x16) | (ushort)pbVar11[1];
                puStack_28 = (undefined1 *)(uint)*(ushort *)((int)puVar6 + 0x16);
                pbVar11 = pbVar11 + 2;
                if ((int)(puStack_28 + ((int)pbVar11 - (int)pbVar20)) <= (int)pbStack_20) {
                  puVar6[6] = (uint)pbVar11;
                  pbVar11 = pbVar11 + (int)puStack_28;
                  *(ushort *)(puVar6 + 7) = (ushort)*pbVar11 << 8;
                  *(ushort *)(puVar6 + 7) = (ushort)puVar6[7] | (ushort)pbVar11[1];
                  if ((int)(pbVar11 + 2 + ((uint)(ushort)puVar6[7] - (int)pbVar20)) <=
                      (int)pbStack_20) {
                    *(byte **)((int)puVar6 + 0x1e) = pbVar11 + 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar22 = local_8;
  if (local_8 == 0) {
    (**(code **)(*param_1 + 0x1c))(local_c,param_1[0x57]);
    pvVar8 = operator_new(0x12);
    param_1[0x5d] = (int)pvVar8;
    if (pvVar8 == (void *)0x0) {
      iVar22 = -0x7ff8fff2;
    }
    if (iVar22 == 0) {
      local_c = (byte *)0x12;
      pvVar8 = operator_new(0x12);
      param_1[0x58] = (int)pvVar8;
      if (pvVar8 == (void *)0x0) {
        iVar22 = -0x7ff8fff2;
      }
      if (iVar22 == 0) {
        puVar14 = (undefined4 *)param_1[0x58];
        for (uVar17 = (uint)local_c >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (uVar17 = (uint)local_c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined1 *)puVar14 = 0;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        *(undefined4 *)param_1[0x5d] = 0x44415441;
        *(byte **)(param_1[0x5d] + 4) = local_c;
        *(undefined2 *)(param_1[0x5d] + 8) = 0;
        *(int *)(param_1[0x5d] + 10) = param_1[0x4c];
        *(undefined4 *)(param_1[0x5d] + 0xe) = 0;
        FUN_662235b0((void *)param_1[0x5d],(undefined1 *)param_1[0x58],(int *)&local_c);
        FUN_66223660((void *)param_1[0x5d],(byte *)param_1[0x58],(int)local_c);
        (**(code **)(*param_1 + 0x1c))(local_c,param_1[0x58]);
        local_30._4_4_ = *(uint *)((int)param_1 + 0x109);
        puStack_28 = (undefined1 *)0x0;
        iVar16 = ftol();
        *(int *)((int)param_1 + 0xe7) = iVar16;
        if (*(char *)((int)param_1 + 0x12d) != '\0') {
          *(uint *)((int)param_1 + 0xeb) = (uint)*(ushort *)((int)param_1 + 0x115) * iVar16;
        }
      }
    }
  }
  uVar17 = param_1[0x53];
  if ((uVar17 != 0) && (piVar4 = (int *)param_1[1], uVar17 != 0)) {
    uVar18 = *(uint *)(piVar4[8] + 0xc);
    if ((uVar18 == uVar17) || ((uVar18 < uVar17 && (uVar17 < (uint)piVar4[6])))) {
      piVar4 = (int *)(piVar4[8] + 0x14);
      *piVar4 = *piVar4 + -1;
    }
    else {
      (**(code **)(*piVar4 + 0x28))(uVar17);
    }
  }
  operator_delete(*(void **)((int)param_1 + 0x137));
  *(undefined4 *)((int)param_1 + 0x137) = 0;
  operator_delete((void *)param_1[0x4f]);
  param_1[0x4f] = 0;
  operator_delete(*(void **)((int)param_1 + 0x141));
  *(undefined4 *)((int)param_1 + 0x141) = 0;
  operator_delete(*(void **)((int)param_1 + 0x146));
  *(undefined4 *)((int)param_1 + 0x146) = 0;
  if (iVar22 == 0) {
    param_1[0x22] = 1;
  }
  param_1[9] = iVar22;
  return iVar22;
}


