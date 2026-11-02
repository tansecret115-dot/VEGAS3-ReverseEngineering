/* Module: rmme3260.dll
   Function: FUN_6620a070
   Address: 6620a070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6620a070(void *this,uint param_1,byte *param_2)

{
  short *psVar1;
  ushort *puVar2;
  byte bVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined2 extraout_var;
  int *piVar9;
  undefined4 uVar10;
  uint *puVar11;
  void *pvVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  void *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_2 == (byte *)0x0) {
    return -1;
  }
  local_10 = this;
  puVar8 = operator_new(10);
  if (puVar8 == (uint *)0x0) {
    return -0x7ff8fff2;
  }
  if (param_1 == 0) {
    pbVar14 = (byte *)0x0;
  }
  else {
    bVar3 = *param_2;
    *puVar8 = (uint)bVar3 << 0x18;
    *puVar8 = (uint)param_2[1] << 0x10 | (uint)bVar3 << 0x18;
    uVar15 = *puVar8 | (uint)param_2[2] << 8;
    *puVar8 = uVar15;
    *puVar8 = uVar15 | param_2[3];
    puVar8[1] = (uint)param_2[4] << 0x18;
    uVar15 = puVar8[1] | (uint)param_2[5] << 0x10;
    puVar8[1] = uVar15;
    uVar15 = uVar15 | (uint)param_2[6] << 8;
    puVar8[1] = uVar15;
    puVar8[1] = uVar15 | param_2[7];
    *(ushort *)(puVar8 + 2) = (ushort)param_2[8] << 8;
    *(ushort *)(puVar8 + 2) = (ushort)puVar8[2] | (ushort)param_2[9];
    pbVar14 = param_2 + 10;
  }
  if (pbVar14 == (byte *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
    return -1;
  }
  pbVar14 = (byte *)*puVar8;
  local_18 = pbVar14;
  operator_delete(puVar8);
  if (pbVar14 == (byte *)0x2e524d46) {
LAB_6620a18e:
    local_8 = 0;
  }
  else {
    if ((((pbVar14 != (byte *)0x50524f50) && (pbVar14 != (byte *)0x434f4e54)) &&
        (pbVar14 != (byte *)0x4d445052)) && (pbVar14 != (byte *)0x44415441)) {
      *(undefined4 *)((int)this + 0x24) = 0xffffffff;
      return -1;
    }
    if (pbVar14 == (byte *)0x2e524d46) goto LAB_6620a18e;
    if (pbVar14 == (byte *)0x50524f50) {
      local_8 = 1;
    }
    else if (pbVar14 == (byte *)0x44415441) {
      local_8 = CONCAT22(extraout_var,*(short *)((int)this + 8) + -1);
    }
    else {
      local_8 = CONCAT22(local_8._2_2_,*(short *)((int)this + 8));
    }
  }
  puVar8 = operator_new(0x10);
  uVar15 = local_8 & 0xffff;
  puVar8[2] = (uint)param_2;
  *puVar8 = param_1;
  puVar8[1] = 0;
  puVar8[3] = 0;
  if (uVar15 < *(uint *)((int)this + 8)) {
    if (*(int *)((int)this + 0x90) == 0) {
      local_14 = *(byte **)(**(int **)((int)this + 0xc) + uVar15 * 4);
      if (local_14 != (byte *)0x0) {
        if (*(void **)(local_14 + 0xc) != (void *)0x0) {
          operator_delete(*(void **)(local_14 + 0xc));
          local_14[0xc] = 0;
          local_14[0xd] = 0;
          local_14[0xe] = 0;
          local_14[0xf] = 0;
        }
        operator_delete(local_14);
      }
      FUN_6624ffe0(*(void **)((int)this + 0xc),uVar15,1);
      FUN_6624ff40(*(void **)((int)this + 0xc),uVar15,puVar8,1);
    }
    else {
      operator_delete(puVar8);
    }
  }
  else {
    local_8 = local_8 + 0xffff;
    uVar15 = local_8 & 0xffff;
    FUN_6624ff40(*(void **)((int)this + 0xc),uVar15,puVar8,1);
    if (*(int *)((int)this + 0x90) != 0) {
      sVar4 = *(short *)(*(int *)((int)this + 0x52) + 8);
      puVar5 = *(undefined1 **)(*(int *)**(undefined4 **)((int)this + 0xc) + 8);
      if ((sVar4 == 0) || (sVar4 == 1)) {
        piVar9 = (int *)(*(int *)((int)this + 0x52) + 0xe);
        *piVar9 = *piVar9 + 1;
      }
      puVar6 = *(undefined4 **)((int)this + 0x52);
      *puVar5 = (char)((uint)*puVar6 >> 0x18);
      puVar5[1] = (char)((uint)*puVar6 >> 0x10);
      puVar5[2] = (char)((uint)*puVar6 >> 8);
      puVar5[3] = *(undefined1 *)puVar6;
      puVar5[4] = (char)((uint)puVar6[1] >> 0x18);
      puVar5[5] = (char)((uint)puVar6[1] >> 0x10);
      puVar5[6] = (char)((uint)puVar6[1] >> 8);
      puVar5[7] = *(undefined1 *)(puVar6 + 1);
      puVar5[8] = *(undefined1 *)((int)puVar6 + 9);
      puVar5[9] = *(undefined1 *)(puVar6 + 2);
      if ((*(short *)(puVar6 + 2) == 0) || (*(short *)(puVar6 + 2) == 1)) {
        puVar5[10] = (char)((uint)*(undefined4 *)((int)puVar6 + 10) >> 0x18);
        puVar5[0xb] = (char)((uint)*(undefined4 *)((int)puVar6 + 10) >> 0x10);
        puVar5[0xc] = (char)((uint)*(undefined4 *)((int)puVar6 + 10) >> 8);
        puVar5[0xd] = *(undefined1 *)((int)puVar6 + 10);
        puVar5[0xe] = (char)((uint)*(undefined4 *)((int)puVar6 + 0xe) >> 0x18);
        puVar5[0xf] = (char)((uint)*(undefined4 *)((int)puVar6 + 0xe) >> 0x10);
        puVar5[0x10] = (char)((uint)*(undefined4 *)((int)puVar6 + 0xe) >> 8);
        puVar5[0x11] = *(undefined1 *)((int)puVar6 + 0xe);
      }
    }
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 0xc) + 4);
  if (local_18 != (byte *)0x4d445052) {
    if (local_18 == (byte *)0x434f4e54) {
      *(uint *)((int)this + 0x20) = uVar15;
      *(int *)((int)this + 0x24) = local_c;
      return local_c;
    }
    if ((local_18 == (byte *)0x50524f50) && (*(int *)((int)this + 0x90) != 0)) {
      local_18 = (byte *)0x0;
      pbVar14 = (byte *)FUN_66209a30(this,&local_18);
      local_1c = local_18;
      FUN_6620acf0(*(void **)((int)this + 0x56),pbVar14,(int)local_18);
      if (*(short *)(*(int *)((int)this + 0x56) + 8) == 0) {
        pvVar12 = operator_new(0x32);
        if (pvVar12 == (void *)0x0) {
          return -0x7ff8fff2;
        }
        pbVar13 = FUN_6620acf0(pvVar12,param_2,param_1);
        if (pbVar13 == (byte *)0x0) {
          local_c = -1;
        }
        if ((local_c == 0) && (*(short *)((int)pvVar12 + 8) == 0)) {
          puVar2 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
          *puVar2 = *puVar2 | *(ushort *)((int)pvVar12 + 0x30);
        }
        operator_delete(pvVar12);
      }
      FUN_662095e0(*(void **)((int)this + 0x56),pbVar14,(int *)&local_1c);
    }
    *(int *)((int)this + 0x24) = local_c;
    return local_c;
  }
  puVar8 = operator_new(0x3a);
  if (puVar8 == (uint *)0x0) {
    return -0x7ff8fff2;
  }
  if (param_1 != 0) {
    bVar3 = *param_2;
    *puVar8 = (uint)bVar3 << 0x18;
    uVar15 = (uint)param_2[1] << 0x10 | (uint)bVar3 << 0x18;
    *puVar8 = uVar15;
    *puVar8 = uVar15 | (uint)param_2[2] << 8;
    *puVar8 = *puVar8 | (uint)param_2[3];
    bVar3 = param_2[4];
    puVar8[1] = (uint)bVar3 << 0x18;
    puVar8[1] = (uint)bVar3 << 0x18 | (uint)param_2[5] << 0x10;
    puVar8[1] = puVar8[1] | (uint)param_2[6] << 8;
    puVar8[1] = puVar8[1] | (uint)param_2[7];
    *(ushort *)(puVar8 + 2) = (ushort)param_2[8] << 8;
    *(ushort *)(puVar8 + 2) = (ushort)puVar8[2] | (ushort)param_2[9];
    pbVar14 = param_2 + 10;
    if ((short)puVar8[2] != 0) goto LAB_6620a5f2;
    *(ushort *)((int)puVar8 + 10) = (ushort)*pbVar14 << 8;
    *(ushort *)((int)puVar8 + 10) = *(ushort *)((int)puVar8 + 10) | (ushort)param_2[0xb];
    bVar3 = param_2[0xc];
    puVar8[3] = (uint)bVar3 << 0x18;
    puVar8[3] = (uint)bVar3 << 0x18 | (uint)param_2[0xd] << 0x10;
    puVar8[3] = puVar8[3] | (uint)param_2[0xe] << 8;
    puVar8[3] = puVar8[3] | (uint)param_2[0xf];
    bVar3 = param_2[0x10];
    puVar8[4] = (uint)bVar3 << 0x18;
    puVar8[4] = (uint)bVar3 << 0x18 | (uint)param_2[0x11] << 0x10;
    puVar8[4] = puVar8[4] | (uint)param_2[0x12] << 8;
    puVar8[4] = puVar8[4] | (uint)param_2[0x13];
    bVar3 = param_2[0x14];
    puVar8[5] = (uint)bVar3 << 0x18;
    puVar8[5] = (uint)bVar3 << 0x18 | (uint)param_2[0x15] << 0x10;
    puVar8[5] = puVar8[5] | (uint)param_2[0x16] << 8;
    puVar8[5] = puVar8[5] | (uint)param_2[0x17];
    bVar3 = param_2[0x18];
    puVar8[6] = (uint)bVar3 << 0x18;
    puVar8[6] = (uint)bVar3 << 0x18 | (uint)param_2[0x19] << 0x10;
    puVar8[6] = puVar8[6] | (uint)param_2[0x1a] << 8;
    puVar8[6] = puVar8[6] | (uint)param_2[0x1b];
    bVar3 = param_2[0x1c];
    puVar8[7] = (uint)bVar3 << 0x18;
    puVar8[7] = (uint)bVar3 << 0x18 | (uint)param_2[0x1d] << 0x10;
    puVar8[7] = puVar8[7] | (uint)param_2[0x1e] << 8;
    puVar8[7] = puVar8[7] | (uint)param_2[0x1f];
    bVar3 = param_2[0x20];
    puVar8[8] = (uint)bVar3 << 0x18;
    puVar8[8] = (uint)bVar3 << 0x18 | (uint)param_2[0x21] << 0x10;
    puVar8[8] = puVar8[8] | (uint)param_2[0x22] << 8;
    puVar8[8] = puVar8[8] | (uint)param_2[0x23];
    bVar3 = param_2[0x24];
    puVar8[9] = (uint)bVar3 << 0x18;
    puVar8[9] = (uint)bVar3 << 0x18 | (uint)param_2[0x25] << 0x10;
    puVar8[9] = puVar8[9] | (uint)param_2[0x26] << 8;
    puVar8[9] = puVar8[9] | (uint)param_2[0x27];
    bVar3 = param_2[0x28];
    *(byte *)(puVar8 + 10) = bVar3;
    local_18 = param_2 + 0x29 + bVar3;
    if ((int)local_18 - (int)param_2 <= (int)param_1) {
      *(byte **)((int)puVar8 + 0x29) = param_2 + 0x29;
      pbVar14 = local_18 + 1;
      *(byte *)((int)puVar8 + 0x2d) = *local_18;
      local_18 = pbVar14 + *(byte *)((int)puVar8 + 0x2d);
      if ((int)local_18 - (int)param_2 <= (int)param_1) {
        *(byte **)((int)puVar8 + 0x2e) = pbVar14;
        bVar3 = *local_18;
        *(uint *)((int)puVar8 + 0x32) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar8 + 0x32) = (uint)bVar3 << 0x18 | (uint)local_18[1] << 0x10;
        *(uint *)((int)puVar8 + 0x32) = *(uint *)((int)puVar8 + 0x32) | (uint)local_18[2] << 8;
        uVar15 = *(uint *)((int)puVar8 + 0x32) | (uint)local_18[3];
        *(uint *)((int)puVar8 + 0x32) = uVar15;
        pbVar14 = local_18 + 4 + uVar15;
        if ((uint)((int)pbVar14 - (int)param_2) <= param_1) {
          *(byte **)((int)puVar8 + 0x36) = local_18 + 4;
          goto LAB_6620a5f2;
        }
      }
    }
  }
  pbVar14 = (byte *)0x0;
LAB_6620a5f2:
  if (pbVar14 == (byte *)0x0) {
    local_c = -1;
  }
  if ((local_c == 0) && ((short)puVar8[2] == 0)) {
    local_1c = (byte *)CONCAT22(local_1c._2_2_,*(undefined2 *)((int)puVar8 + 10));
    if (*(int *)((int)this + 0x90) != 0) {
      local_18 = (byte *)0x0;
      local_14 = (byte *)FUN_66209a30(this,&local_18);
      pvVar12 = local_10;
      puVar11 = *(uint **)((int)this + 0x56);
      if ((local_14 != (byte *)0x0) && (local_18 != (byte *)0x0)) {
        bVar3 = *local_14;
        *puVar11 = (uint)bVar3 << 0x18;
        uVar15 = (uint)local_14[1] << 0x10 | (uint)bVar3 << 0x18;
        *puVar11 = uVar15;
        *puVar11 = uVar15 | (uint)local_14[2] << 8;
        *puVar11 = *puVar11 | (uint)local_14[3];
        bVar3 = local_14[4];
        puVar11[1] = (uint)bVar3 << 0x18;
        puVar11[1] = (uint)bVar3 << 0x18 | (uint)local_14[5] << 0x10;
        puVar11[1] = puVar11[1] | (uint)local_14[6] << 8;
        puVar11[1] = puVar11[1] | (uint)local_14[7];
        *(ushort *)(puVar11 + 2) = (ushort)local_14[8] << 8;
        *(ushort *)(puVar11 + 2) = (ushort)puVar11[2] | (ushort)local_14[9];
        if ((short)puVar11[2] == 0) {
          bVar3 = local_14[10];
          *(uint *)((int)puVar11 + 10) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 10) = (uint)bVar3 << 0x18 | (uint)local_14[0xb] << 0x10;
          *(uint *)((int)puVar11 + 10) = *(uint *)((int)puVar11 + 10) | (uint)local_14[0xc] << 8;
          *(uint *)((int)puVar11 + 10) = *(uint *)((int)puVar11 + 10) | (uint)local_14[0xd];
          bVar3 = local_14[0xe];
          *(uint *)((int)puVar11 + 0xe) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0xe) = (uint)bVar3 << 0x18 | (uint)local_14[0xf] << 0x10;
          *(uint *)((int)puVar11 + 0xe) = *(uint *)((int)puVar11 + 0xe) | (uint)local_14[0x10] << 8;
          *(uint *)((int)puVar11 + 0xe) = *(uint *)((int)puVar11 + 0xe) | (uint)local_14[0x11];
          bVar3 = local_14[0x12];
          *(uint *)((int)puVar11 + 0x12) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x12) = (uint)bVar3 << 0x18 | (uint)local_14[0x13] << 0x10;
          *(uint *)((int)puVar11 + 0x12) =
               *(uint *)((int)puVar11 + 0x12) | (uint)local_14[0x14] << 8;
          *(uint *)((int)puVar11 + 0x12) = *(uint *)((int)puVar11 + 0x12) | (uint)local_14[0x15];
          bVar3 = local_14[0x16];
          *(uint *)((int)puVar11 + 0x16) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x16) = (uint)bVar3 << 0x18 | (uint)local_14[0x17] << 0x10;
          *(uint *)((int)puVar11 + 0x16) =
               *(uint *)((int)puVar11 + 0x16) | (uint)local_14[0x18] << 8;
          *(uint *)((int)puVar11 + 0x16) = *(uint *)((int)puVar11 + 0x16) | (uint)local_14[0x19];
          bVar3 = local_14[0x1a];
          *(uint *)((int)puVar11 + 0x1a) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x1a) = (uint)bVar3 << 0x18 | (uint)local_14[0x1b] << 0x10;
          *(uint *)((int)puVar11 + 0x1a) =
               *(uint *)((int)puVar11 + 0x1a) | (uint)local_14[0x1c] << 8;
          *(uint *)((int)puVar11 + 0x1a) = *(uint *)((int)puVar11 + 0x1a) | (uint)local_14[0x1d];
          bVar3 = local_14[0x1e];
          *(uint *)((int)puVar11 + 0x1e) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x1e) = (uint)bVar3 << 0x18 | (uint)local_14[0x1f] << 0x10;
          *(uint *)((int)puVar11 + 0x1e) =
               *(uint *)((int)puVar11 + 0x1e) | (uint)local_14[0x20] << 8;
          *(uint *)((int)puVar11 + 0x1e) = *(uint *)((int)puVar11 + 0x1e) | (uint)local_14[0x21];
          bVar3 = local_14[0x22];
          *(uint *)((int)puVar11 + 0x22) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x22) = (uint)bVar3 << 0x18 | (uint)local_14[0x23] << 0x10;
          *(uint *)((int)puVar11 + 0x22) =
               *(uint *)((int)puVar11 + 0x22) | (uint)local_14[0x24] << 8;
          *(uint *)((int)puVar11 + 0x22) = *(uint *)((int)puVar11 + 0x22) | (uint)local_14[0x25];
          bVar3 = local_14[0x26];
          *(uint *)((int)puVar11 + 0x26) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x26) = (uint)bVar3 << 0x18 | (uint)local_14[0x27] << 0x10;
          *(uint *)((int)puVar11 + 0x26) =
               *(uint *)((int)puVar11 + 0x26) | (uint)local_14[0x28] << 8;
          *(uint *)((int)puVar11 + 0x26) = *(uint *)((int)puVar11 + 0x26) | (uint)local_14[0x29];
          bVar3 = local_14[0x2a];
          *(uint *)((int)puVar11 + 0x2a) = (uint)bVar3 << 0x18;
          *(uint *)((int)puVar11 + 0x2a) = (uint)bVar3 << 0x18 | (uint)local_14[0x2b] << 0x10;
          *(uint *)((int)puVar11 + 0x2a) =
               *(uint *)((int)puVar11 + 0x2a) | (uint)local_14[0x2c] << 8;
          *(uint *)((int)puVar11 + 0x2a) = *(uint *)((int)puVar11 + 0x2a) | (uint)local_14[0x2d];
          *(ushort *)((int)puVar11 + 0x2e) = (ushort)local_14[0x2e] << 8;
          *(ushort *)((int)puVar11 + 0x2e) =
               *(ushort *)((int)puVar11 + 0x2e) | (ushort)local_14[0x2f];
          *(ushort *)(puVar11 + 0xc) = (ushort)local_14[0x30] << 8;
          *(ushort *)(puVar11 + 0xc) = (ushort)puVar11[0xc] | (ushort)local_14[0x31];
        }
      }
      iVar7 = *(int *)((int)this + 0x56);
      if (*(short *)(iVar7 + 8) == 0) {
        *(uint *)(iVar7 + 10) = *(int *)(iVar7 + 10) + puVar8[3];
        *(uint *)(*(int *)((int)this + 0x56) + 0xe) =
             *(int *)(*(int *)((int)this + 0x56) + 0xe) + puVar8[4];
        if (*(uint *)(*(int *)((int)this + 0x56) + 0x12) < puVar8[5]) {
          *(uint *)(*(int *)((int)this + 0x56) + 0x12) = puVar8[5];
        }
        if (*(uint *)(*(int *)((int)this + 0x56) + 0x16) < puVar8[6]) {
          *(uint *)(*(int *)((int)this + 0x56) + 0x16) = puVar8[6];
        }
        if (*(uint *)(*(int *)((int)this + 0x56) + 0x22) < puVar8[8]) {
          *(uint *)(*(int *)((int)this + 0x56) + 0x22) = puVar8[8];
        }
        if (*(uint *)(*(int *)((int)this + 0x56) + 0x1e) < puVar8[9]) {
          *(uint *)(*(int *)((int)this + 0x56) + 0x1e) = puVar8[9];
        }
        if (*(byte *)((int)puVar8 + 0x2d) != 0) {
          uVar15 = (uint)*(byte *)((int)puVar8 + 0x2d);
          bVar18 = true;
          pcVar16 = *(char **)((int)puVar8 + 0x2e);
          pcVar17 = s_audio_x_pn_realaudio_6626f0fc;
          do {
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            bVar18 = *pcVar16 == *pcVar17;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          } while (bVar18);
          if (bVar18) {
            *(undefined4 *)((int)local_10 + 0xce) = 1;
            *(undefined2 *)((int)local_10 + 0xcc) = *(undefined2 *)((int)puVar8 + 10);
            piVar9 = FUN_6621b920(*(byte **)((int)puVar8 + 0x36),*(int *)((int)puVar8 + 0x32));
            if (piVar9 == (int *)0x0) {
              *(uint *)((int)pvVar12 + 0xc0) = puVar8[3] >> 3;
            }
            else {
              (**(code **)(*piVar9 + 0x3c))();
              uVar10 = ftol();
              *(undefined4 *)((int)pvVar12 + 0xc0) = uVar10;
              (**(code **)*piVar9)(1);
            }
          }
          uVar15 = (uint)*(byte *)((int)puVar8 + 0x2d);
          bVar18 = true;
          pcVar16 = *(char **)((int)puVar8 + 0x2e);
          pcVar17 = s_application_x_pn_imagemap_6626f0c4;
          do {
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            bVar18 = *pcVar16 == *pcVar17;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          } while (bVar18);
          if (bVar18) {
            *(undefined4 *)((int)local_10 + 0xd4) = 1;
            *(undefined2 *)((int)local_10 + 0xd2) = *(undefined2 *)((int)puVar8 + 10);
          }
        }
        psVar1 = (short *)(*(int *)((int)local_10 + 0x56) + 0x2e);
        *psVar1 = *psVar1 + 1;
        this = local_10;
      }
      pbVar14 = *(byte **)((int)this + 0x56);
      *local_14 = (byte)((uint)*(undefined4 *)pbVar14 >> 0x18);
      local_14[1] = (byte)((uint)*(undefined4 *)pbVar14 >> 0x10);
      local_14[2] = (byte)((uint)*(undefined4 *)pbVar14 >> 8);
      local_14[3] = *pbVar14;
      local_14[4] = (byte)((uint)*(undefined4 *)(pbVar14 + 4) >> 0x18);
      local_14[5] = (byte)((uint)*(undefined4 *)(pbVar14 + 4) >> 0x10);
      local_14[6] = (byte)((uint)*(undefined4 *)(pbVar14 + 4) >> 8);
      local_14[7] = pbVar14[4];
      local_14[8] = pbVar14[9];
      local_14[9] = pbVar14[8];
      if (*(short *)(pbVar14 + 8) == 0) {
        local_14[10] = (byte)((uint)*(undefined4 *)(pbVar14 + 10) >> 0x18);
        local_14[0xb] = (byte)((uint)*(undefined4 *)(pbVar14 + 10) >> 0x10);
        local_14[0xc] = (byte)((uint)*(undefined4 *)(pbVar14 + 10) >> 8);
        local_14[0xd] = pbVar14[10];
        local_14[0xe] = (byte)((uint)*(undefined4 *)(pbVar14 + 0xe) >> 0x18);
        local_14[0xf] = (byte)((uint)*(undefined4 *)(pbVar14 + 0xe) >> 0x10);
        local_14[0x10] = (byte)((uint)*(undefined4 *)(pbVar14 + 0xe) >> 8);
        local_14[0x11] = pbVar14[0xe];
        local_14[0x12] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x12) >> 0x18);
        local_14[0x13] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x12) >> 0x10);
        local_14[0x14] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x12) >> 8);
        local_14[0x15] = pbVar14[0x12];
        local_14[0x16] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x16) >> 0x18);
        local_14[0x17] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x16) >> 0x10);
        local_14[0x18] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x16) >> 8);
        local_14[0x19] = pbVar14[0x16];
        local_14[0x1a] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1a) >> 0x18);
        local_14[0x1b] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1a) >> 0x10);
        local_14[0x1c] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1a) >> 8);
        local_14[0x1d] = pbVar14[0x1a];
        local_14[0x1e] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1e) >> 0x18);
        local_14[0x1f] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1e) >> 0x10);
        local_14[0x20] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x1e) >> 8);
        local_14[0x21] = pbVar14[0x1e];
        local_14[0x22] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x22) >> 0x18);
        local_14[0x23] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x22) >> 0x10);
        local_14[0x24] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x22) >> 8);
        local_14[0x25] = pbVar14[0x22];
        local_14[0x26] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x26) >> 0x18);
        local_14[0x27] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x26) >> 0x10);
        local_14[0x28] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x26) >> 8);
        local_14[0x29] = pbVar14[0x26];
        local_14[0x2a] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x2a) >> 0x18);
        local_14[0x2b] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x2a) >> 0x10);
        local_14[0x2c] = (byte)((uint)*(undefined4 *)(pbVar14 + 0x2a) >> 8);
        local_14[0x2d] = pbVar14[0x2a];
        local_14[0x2e] = pbVar14[0x2f];
        local_14[0x2f] = pbVar14[0x2e];
        local_14[0x30] = pbVar14[0x31];
        local_14[0x31] = pbVar14[0x30];
      }
    }
    puVar11 = operator_new(0x40);
    if (puVar11 == (uint *)0x0) {
      local_c = -0x7ff8fff2;
    }
    if (local_c == 0) {
      puVar11[1] = 0;
      *(undefined2 *)((int)puVar11 + 0x1a) = local_1c._0_2_;
      *(undefined2 *)(puVar11 + 6) = (undefined2)local_8;
      puVar11[7] = (uint)param_2;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *puVar11 = param_1;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 1;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      FUN_6624ff10(*(void **)((int)this + 0x6a),*(int *)((int)*(void **)((int)this + 0x6a) + 4),
                   puVar11);
      *(short *)((int)this + 0x6e) = (short)*(undefined4 *)(*(int *)((int)this + 0x6a) + 4);
    }
  }
  operator_delete(puVar8);
  *(int *)((int)this + 0x24) = local_c;
  return local_c;
}


