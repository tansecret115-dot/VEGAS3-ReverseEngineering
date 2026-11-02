/* Module: rmme3260.dll
   Function: FUN_66210e70
   Address: 66210e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66210e70(void *this,uint param_1)

{
  ushort *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined1 *puVar11;
  void *pvVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  local_10 = 0xffffffff;
  local_c = 0;
  bVar16 = false;
  uVar14 = local_10;
  if (*(uint *)((int)this + 0xf4) != 0) {
    puVar13 = (uint *)(*(int *)((int)this + 0x100) + 8);
    do {
      uVar14 = uVar4;
      if (*puVar13 == param_1) break;
      uVar4 = uVar4 + 1;
      puVar13 = puVar13 + 5;
      uVar14 = local_10;
    } while (uVar4 < *(uint *)((int)this + 0xf4));
  }
  local_10 = uVar14;
  if ((int)local_10 < 0) {
    local_8 = -0x7ffbff7e;
  }
  if (*(int *)((int)this + 0xfc) != 0) {
    if (local_8 != 0) goto LAB_66211931;
    iVar5 = FUN_66209a90(*(void **)(local_10 * 0x14 + 8 + *(int *)((int)this + 0x100)),&local_c);
    iVar6 = FUN_66209a90(this,&local_c);
    bVar16 = iVar5 == iVar6;
    if (bVar16) {
      uVar7 = FUN_66209a90(*(void **)(local_10 * 0x14 + 8 + *(int *)((int)this + 0x100)),&local_c);
      (**(code **)(*(int *)this + 0x60))(uVar7,local_c);
      *(undefined4 *)((int)this + 0xfc) = 0;
    }
  }
  if (local_8 == 0) {
    pbVar8 = (byte *)FUN_66209a30(*(void **)(*(int *)((int)this + 0x100) + 8 + local_10 * 0x14),
                                  &local_c);
    if (pbVar8 == (byte *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x80040082;
      return;
    }
    puVar13 = operator_new(0x32);
    if (puVar13 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x8007000e;
      return;
    }
    if (local_c == 0) {
      pbVar9 = (byte *)0x0;
    }
    else {
      bVar2 = *pbVar8;
      *puVar13 = (uint)bVar2 << 0x18;
      uVar14 = (uint)pbVar8[1] << 0x10 | (uint)bVar2 << 0x18;
      *puVar13 = uVar14;
      *puVar13 = uVar14 | (uint)pbVar8[2] << 8;
      *puVar13 = *puVar13 | (uint)pbVar8[3];
      bVar2 = pbVar8[4];
      puVar13[1] = (uint)bVar2 << 0x18;
      puVar13[1] = (uint)bVar2 << 0x18 | (uint)pbVar8[5] << 0x10;
      uVar14 = puVar13[1] | (uint)pbVar8[6] << 8;
      puVar13[1] = uVar14;
      puVar13[1] = uVar14 | pbVar8[7];
      *(ushort *)(puVar13 + 2) = (ushort)pbVar8[8] << 8;
      *(ushort *)(puVar13 + 2) = (ushort)puVar13[2] | (ushort)pbVar8[9];
      pbVar9 = pbVar8 + 10;
      if ((short)puVar13[2] == 0) {
        bVar2 = *pbVar9;
        *(uint *)((int)puVar13 + 10) = (uint)bVar2 << 0x18;
        uVar14 = (uint)bVar2 << 0x18 | (uint)pbVar8[0xb] << 0x10;
        *(uint *)((int)puVar13 + 10) = uVar14;
        *(uint *)((int)puVar13 + 10) = uVar14 | (uint)pbVar8[0xc] << 8;
        *(uint *)((int)puVar13 + 10) = *(uint *)((int)puVar13 + 10) | (uint)pbVar8[0xd];
        bVar2 = pbVar8[0xe];
        *(uint *)((int)puVar13 + 0xe) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar13 + 0xe) = (uint)bVar2 << 0x18 | (uint)pbVar8[0xf] << 0x10;
        uVar14 = *(uint *)((int)puVar13 + 0xe) | (uint)pbVar8[0x10] << 8;
        *(uint *)((int)puVar13 + 0xe) = uVar14;
        *(uint *)((int)puVar13 + 0xe) = uVar14 | pbVar8[0x11];
        bVar2 = pbVar8[0x12];
        *(uint *)((int)puVar13 + 0x12) = (uint)bVar2 << 0x18;
        uVar14 = (uint)bVar2 << 0x18 | (uint)pbVar8[0x13] << 0x10;
        *(uint *)((int)puVar13 + 0x12) = uVar14;
        *(uint *)((int)puVar13 + 0x12) = uVar14 | (uint)pbVar8[0x14] << 8;
        *(uint *)((int)puVar13 + 0x12) = *(uint *)((int)puVar13 + 0x12) | (uint)pbVar8[0x15];
        bVar2 = pbVar8[0x16];
        *(uint *)((int)puVar13 + 0x16) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar13 + 0x16) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x17] << 0x10;
        uVar14 = *(uint *)((int)puVar13 + 0x16) | (uint)pbVar8[0x18] << 8;
        *(uint *)((int)puVar13 + 0x16) = uVar14;
        *(uint *)((int)puVar13 + 0x16) = uVar14 | pbVar8[0x19];
        bVar2 = pbVar8[0x1a];
        *(uint *)((int)puVar13 + 0x1a) = (uint)bVar2 << 0x18;
        uVar14 = (uint)bVar2 << 0x18 | (uint)pbVar8[0x1b] << 0x10;
        *(uint *)((int)puVar13 + 0x1a) = uVar14;
        *(uint *)((int)puVar13 + 0x1a) = uVar14 | (uint)pbVar8[0x1c] << 8;
        *(uint *)((int)puVar13 + 0x1a) = *(uint *)((int)puVar13 + 0x1a) | (uint)pbVar8[0x1d];
        bVar2 = pbVar8[0x1e];
        *(uint *)((int)puVar13 + 0x1e) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar13 + 0x1e) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x1f] << 0x10;
        uVar14 = *(uint *)((int)puVar13 + 0x1e) | (uint)pbVar8[0x20] << 8;
        *(uint *)((int)puVar13 + 0x1e) = uVar14;
        *(uint *)((int)puVar13 + 0x1e) = uVar14 | pbVar8[0x21];
        bVar2 = pbVar8[0x22];
        *(uint *)((int)puVar13 + 0x22) = (uint)bVar2 << 0x18;
        uVar14 = (uint)bVar2 << 0x18 | (uint)pbVar8[0x23] << 0x10;
        *(uint *)((int)puVar13 + 0x22) = uVar14;
        *(uint *)((int)puVar13 + 0x22) = uVar14 | (uint)pbVar8[0x24] << 8;
        *(uint *)((int)puVar13 + 0x22) = *(uint *)((int)puVar13 + 0x22) | (uint)pbVar8[0x25];
        bVar2 = pbVar8[0x26];
        *(uint *)((int)puVar13 + 0x26) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar13 + 0x26) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x27] << 0x10;
        uVar14 = *(uint *)((int)puVar13 + 0x26) | (uint)pbVar8[0x28] << 8;
        *(uint *)((int)puVar13 + 0x26) = uVar14;
        *(uint *)((int)puVar13 + 0x26) = uVar14 | pbVar8[0x29];
        bVar2 = pbVar8[0x2a];
        *(uint *)((int)puVar13 + 0x2a) = (uint)bVar2 << 0x18;
        uVar14 = (uint)bVar2 << 0x18 | (uint)pbVar8[0x2b] << 0x10;
        *(uint *)((int)puVar13 + 0x2a) = uVar14;
        *(uint *)((int)puVar13 + 0x2a) = uVar14 | (uint)pbVar8[0x2c] << 8;
        *(uint *)((int)puVar13 + 0x2a) = *(uint *)((int)puVar13 + 0x2a) | (uint)pbVar8[0x2d];
        *(ushort *)((int)puVar13 + 0x2e) = (ushort)pbVar8[0x2e] << 8;
        *(ushort *)((int)puVar13 + 0x2e) = *(ushort *)((int)puVar13 + 0x2e) | (ushort)pbVar8[0x2f];
        *(ushort *)(puVar13 + 0xc) = (ushort)pbVar8[0x30] << 8;
        *(ushort *)(puVar13 + 0xc) = (ushort)puVar13[0xc] | (ushort)pbVar8[0x31];
        pbVar9 = pbVar8 + 0x32;
      }
    }
    if (pbVar9 == (byte *)0x0) {
      local_8 = -1;
    }
    if (local_8 == 0) {
      if ((short)puVar13[2] != 0) {
        local_8 = -0x7ffbfffb;
      }
      if (local_8 == 0) {
        param_1 = 0;
        local_14 = 0;
        *(undefined2 *)(*(int *)((int)this + 0x56) + 0x30) = 0;
        do {
          if (*(uint *)((int)this + 0xf4) <= param_1) break;
          if (param_1 != local_10) {
            puVar10 = operator_new(0x32);
            if (puVar10 == (uint *)0x0) {
              local_8 = -0x7ff8fff2;
              break;
            }
            pbVar8 = (byte *)FUN_66209a30(*(void **)(local_14 + 8 + *(int *)((int)this + 0x100)),
                                          &local_c);
            if (pbVar8 == (byte *)0x0) {
              local_8 = -0x7ffbff7e;
              break;
            }
            if (local_c == 0) {
              pbVar9 = (byte *)0x0;
            }
            else {
              bVar2 = *pbVar8;
              *puVar10 = (uint)bVar2 << 0x18;
              uVar14 = (uint)pbVar8[1] << 0x10 | (uint)bVar2 << 0x18;
              *puVar10 = uVar14;
              *puVar10 = uVar14 | (uint)pbVar8[2] << 8;
              *puVar10 = *puVar10 | (uint)pbVar8[3];
              bVar2 = pbVar8[4];
              puVar10[1] = (uint)bVar2 << 0x18;
              puVar10[1] = (uint)bVar2 << 0x18 | (uint)pbVar8[5] << 0x10;
              puVar10[1] = puVar10[1] | (uint)pbVar8[6] << 8;
              puVar10[1] = puVar10[1] | (uint)pbVar8[7];
              *(ushort *)(puVar10 + 2) = (ushort)pbVar8[8] << 8;
              *(ushort *)(puVar10 + 2) = (ushort)puVar10[2] | (ushort)pbVar8[9];
              pbVar9 = pbVar8 + 10;
              if ((short)puVar10[2] == 0) {
                bVar2 = *pbVar9;
                *(uint *)((int)puVar10 + 10) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 10) = (uint)bVar2 << 0x18 | (uint)pbVar8[0xb] << 0x10;
                *(uint *)((int)puVar10 + 10) = *(uint *)((int)puVar10 + 10) | (uint)pbVar8[0xc] << 8
                ;
                *(uint *)((int)puVar10 + 10) = *(uint *)((int)puVar10 + 10) | (uint)pbVar8[0xd];
                bVar2 = pbVar8[0xe];
                *(uint *)((int)puVar10 + 0xe) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0xe) = (uint)bVar2 << 0x18 | (uint)pbVar8[0xf] << 0x10;
                *(uint *)((int)puVar10 + 0xe) =
                     *(uint *)((int)puVar10 + 0xe) | (uint)pbVar8[0x10] << 8;
                *(uint *)((int)puVar10 + 0xe) = *(uint *)((int)puVar10 + 0xe) | (uint)pbVar8[0x11];
                bVar2 = pbVar8[0x12];
                *(uint *)((int)puVar10 + 0x12) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x12) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x13] << 0x10;
                *(uint *)((int)puVar10 + 0x12) =
                     *(uint *)((int)puVar10 + 0x12) | (uint)pbVar8[0x14] << 8;
                *(uint *)((int)puVar10 + 0x12) = *(uint *)((int)puVar10 + 0x12) | (uint)pbVar8[0x15]
                ;
                bVar2 = pbVar8[0x16];
                *(uint *)((int)puVar10 + 0x16) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x16) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x17] << 0x10;
                *(uint *)((int)puVar10 + 0x16) =
                     *(uint *)((int)puVar10 + 0x16) | (uint)pbVar8[0x18] << 8;
                *(uint *)((int)puVar10 + 0x16) = *(uint *)((int)puVar10 + 0x16) | (uint)pbVar8[0x19]
                ;
                bVar2 = pbVar8[0x1a];
                *(uint *)((int)puVar10 + 0x1a) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x1a) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x1b] << 0x10;
                *(uint *)((int)puVar10 + 0x1a) =
                     *(uint *)((int)puVar10 + 0x1a) | (uint)pbVar8[0x1c] << 8;
                *(uint *)((int)puVar10 + 0x1a) = *(uint *)((int)puVar10 + 0x1a) | (uint)pbVar8[0x1d]
                ;
                bVar2 = pbVar8[0x1e];
                *(uint *)((int)puVar10 + 0x1e) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x1e) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x1f] << 0x10;
                *(uint *)((int)puVar10 + 0x1e) =
                     *(uint *)((int)puVar10 + 0x1e) | (uint)pbVar8[0x20] << 8;
                *(uint *)((int)puVar10 + 0x1e) = *(uint *)((int)puVar10 + 0x1e) | (uint)pbVar8[0x21]
                ;
                bVar2 = pbVar8[0x22];
                *(uint *)((int)puVar10 + 0x22) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x22) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x23] << 0x10;
                *(uint *)((int)puVar10 + 0x22) =
                     *(uint *)((int)puVar10 + 0x22) | (uint)pbVar8[0x24] << 8;
                *(uint *)((int)puVar10 + 0x22) = *(uint *)((int)puVar10 + 0x22) | (uint)pbVar8[0x25]
                ;
                bVar2 = pbVar8[0x26];
                *(uint *)((int)puVar10 + 0x26) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x26) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x27] << 0x10;
                *(uint *)((int)puVar10 + 0x26) =
                     *(uint *)((int)puVar10 + 0x26) | (uint)pbVar8[0x28] << 8;
                *(uint *)((int)puVar10 + 0x26) = *(uint *)((int)puVar10 + 0x26) | (uint)pbVar8[0x29]
                ;
                bVar2 = pbVar8[0x2a];
                *(uint *)((int)puVar10 + 0x2a) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar10 + 0x2a) = (uint)bVar2 << 0x18 | (uint)pbVar8[0x2b] << 0x10;
                *(uint *)((int)puVar10 + 0x2a) =
                     *(uint *)((int)puVar10 + 0x2a) | (uint)pbVar8[0x2c] << 8;
                *(uint *)((int)puVar10 + 0x2a) = *(uint *)((int)puVar10 + 0x2a) | (uint)pbVar8[0x2d]
                ;
                *(ushort *)((int)puVar10 + 0x2e) = (ushort)pbVar8[0x2e] << 8;
                *(ushort *)((int)puVar10 + 0x2e) =
                     *(ushort *)((int)puVar10 + 0x2e) | (ushort)pbVar8[0x2f];
                *(ushort *)(puVar10 + 0xc) = (ushort)pbVar8[0x30] << 8;
                *(ushort *)(puVar10 + 0xc) = (ushort)puVar10[0xc] | (ushort)pbVar8[0x31];
                pbVar9 = pbVar8 + 0x32;
              }
            }
            if (pbVar9 == (byte *)0x0) {
              local_8 = -1;
              break;
            }
            puVar1 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
            *puVar1 = *puVar1 | (ushort)puVar10[0xc];
            operator_delete(puVar10);
            if ((((*(int *)((int)this + 0xfc) == 0) && (bVar16)) &&
                (iVar5 = FUN_66209a90(*(void **)(local_14 + 8 + *(int *)((int)this + 0x100)),
                                      &local_c), iVar5 != 0)) &&
               (local_8 = (**(code **)(*(int *)this + 0x1c))(local_c,iVar5), local_8 == 0)) {
              *(undefined4 *)((int)this + 0xfc) = 1;
            }
          }
          param_1 = param_1 + 1;
          local_14 = local_14 + 0x14;
        } while (local_8 == 0);
      }
    }
    puVar11 = (undefined1 *)FUN_66209a30(this,&local_c);
    puVar3 = *(undefined4 **)((int)this + 0x56);
    *puVar11 = (char)((uint)*puVar3 >> 0x18);
    puVar11[1] = (char)((uint)*puVar3 >> 0x10);
    puVar11[2] = (char)((uint)*puVar3 >> 8);
    puVar11[3] = *(undefined1 *)puVar3;
    puVar11[4] = (char)((uint)puVar3[1] >> 0x18);
    puVar11[5] = (char)((uint)puVar3[1] >> 0x10);
    puVar11[6] = (char)((uint)puVar3[1] >> 8);
    puVar11[7] = *(undefined1 *)(puVar3 + 1);
    puVar11[8] = *(undefined1 *)((int)puVar3 + 9);
    puVar11[9] = *(undefined1 *)(puVar3 + 2);
    if (*(short *)(puVar3 + 2) == 0) {
      puVar11[10] = (char)((uint)*(undefined4 *)((int)puVar3 + 10) >> 0x18);
      puVar11[0xb] = (char)((uint)*(undefined4 *)((int)puVar3 + 10) >> 0x10);
      puVar11[0xc] = (char)((uint)*(undefined4 *)((int)puVar3 + 10) >> 8);
      puVar11[0xd] = *(undefined1 *)((int)puVar3 + 10);
      puVar11[0xe] = (char)((uint)*(undefined4 *)((int)puVar3 + 0xe) >> 0x18);
      puVar11[0xf] = (char)((uint)*(undefined4 *)((int)puVar3 + 0xe) >> 0x10);
      puVar11[0x10] = (char)((uint)*(undefined4 *)((int)puVar3 + 0xe) >> 8);
      puVar11[0x11] = *(undefined1 *)((int)puVar3 + 0xe);
      puVar11[0x12] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x12) >> 0x18);
      puVar11[0x13] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x12) >> 0x10);
      puVar11[0x14] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x12) >> 8);
      puVar11[0x15] = *(undefined1 *)((int)puVar3 + 0x12);
      puVar11[0x16] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x16) >> 0x18);
      puVar11[0x17] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x16) >> 0x10);
      puVar11[0x18] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x16) >> 8);
      puVar11[0x19] = *(undefined1 *)((int)puVar3 + 0x16);
      puVar11[0x1a] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1a) >> 0x18);
      puVar11[0x1b] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1a) >> 0x10);
      puVar11[0x1c] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1a) >> 8);
      puVar11[0x1d] = *(undefined1 *)((int)puVar3 + 0x1a);
      puVar11[0x1e] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1e) >> 0x18);
      puVar11[0x1f] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1e) >> 0x10);
      puVar11[0x20] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x1e) >> 8);
      puVar11[0x21] = *(undefined1 *)((int)puVar3 + 0x1e);
      puVar11[0x22] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x22) >> 0x18);
      puVar11[0x23] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x22) >> 0x10);
      puVar11[0x24] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x22) >> 8);
      puVar11[0x25] = *(undefined1 *)((int)puVar3 + 0x22);
      puVar11[0x26] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x26) >> 0x18);
      puVar11[0x27] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x26) >> 0x10);
      puVar11[0x28] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x26) >> 8);
      puVar11[0x29] = *(undefined1 *)((int)puVar3 + 0x26);
      puVar11[0x2a] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x2a) >> 0x18);
      puVar11[0x2b] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x2a) >> 0x10);
      puVar11[0x2c] = (char)((uint)*(undefined4 *)((int)puVar3 + 0x2a) >> 8);
      puVar11[0x2d] = *(undefined1 *)((int)puVar3 + 0x2a);
      puVar11[0x2e] = *(undefined1 *)((int)puVar3 + 0x2f);
      puVar11[0x2f] = *(undefined1 *)((int)puVar3 + 0x2e);
      puVar11[0x30] = *(undefined1 *)((int)puVar3 + 0x31);
      puVar11[0x31] = *(undefined1 *)(puVar3 + 0xc);
    }
    operator_delete(puVar13);
    if (local_8 == 0) {
      param_1 = local_10;
      if (local_10 < *(int *)((int)this + 0xf4) - 1U) {
        iVar5 = local_10 * 0x14;
        do {
          iVar6 = *(int *)((int)this + 0x100) + iVar5;
          uVar14 = (uint)*(ushort *)(*(int *)(iVar6 + 0x1c) + 0x6e);
          operator_delete(*(void **)(iVar6 + 4));
          pvVar12 = operator_new(uVar14 * 4);
          *(void **)(iVar5 + 4 + *(int *)((int)this + 0x100)) = pvVar12;
          iVar6 = 0;
          if (uVar14 != 0) {
            do {
              *(undefined2 *)(*(int *)(iVar5 + *(int *)((int)this + 0x100) + 4) + iVar6 * 4) =
                   *(undefined2 *)(*(int *)(iVar5 + 0x18 + *(int *)((int)this + 0x100)) + iVar6 * 4)
              ;
              iVar15 = *(int *)((int)this + 0x100) + iVar5;
              iVar6 = iVar6 + 1;
              *(undefined2 *)(*(int *)(iVar15 + 4) + -2 + iVar6 * 4) =
                   *(undefined2 *)(*(int *)(iVar15 + 0x18) + -2 + iVar6 * 4);
            } while (iVar6 < (int)uVar14);
          }
          param_1 = param_1 + 1;
          iVar5 = iVar5 + 0x14;
        } while (param_1 < *(int *)((int)this + 0xf4) - 1U);
      }
      operator_delete(*(void **)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14
                                ));
      *(undefined4 *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) = 0;
      if (local_8 == 0) {
        uVar4 = 0;
        uVar14 = (uint)*(ushort *)
                        (*(int *)(local_10 * 0x14 + 8 + *(int *)((int)this + 0x100)) + 0x6e);
        if (uVar14 != 0) {
          do {
            if (local_8 != 0) break;
            uVar7 = FUN_662092c0(*(void **)(local_10 * 0x14 + 8 + *(int *)((int)this + 0x100)),uVar4
                                 ,&local_c);
            local_8 = (**(code **)(*(int *)this + 0x60))(uVar7,local_c);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)uVar14);
        }
        if (local_8 == 0) {
          iVar5 = local_10 * 0x14;
          if (*(int *)(iVar5 + 0xc + *(int *)((int)this + 0x100)) != 0) {
            puVar3 = *(undefined4 **)(iVar5 + *(int *)((int)this + 0x100) + 8);
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(1);
            }
            *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x100)) = 0;
          }
          pvVar12 = *(void **)(iVar5 + 0x10 + *(int *)((int)this + 0x100));
          if (pvVar12 != (void *)0x0) {
            operator_delete(pvVar12);
            *(undefined4 *)(iVar5 + 0x10 + *(int *)((int)this + 0x100)) = 0;
          }
          if (local_10 < *(int *)((int)this + 0xf4) - 1U) {
            do {
              iVar6 = *(int *)((int)this + 0x100) + iVar5;
              *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar6 + 0x1c);
              iVar6 = *(int *)((int)this + 0x100) + iVar5;
              *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar6 + 0x20);
              iVar6 = *(int *)((int)this + 0x100) + iVar5;
              local_10 = local_10 + 1;
              iVar5 = iVar5 + 0x14;
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 0x24);
            } while (local_10 < *(int *)((int)this + 0xf4) - 1U);
          }
          *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) + -1;
        }
      }
    }
  }
LAB_66211931:
  *(int *)((int)this + 0x24) = local_8;
  return;
}


