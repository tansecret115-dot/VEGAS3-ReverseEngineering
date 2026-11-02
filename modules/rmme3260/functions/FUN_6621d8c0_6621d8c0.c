/* Module: rmme3260.dll
   Function: FUN_6621d8c0
   Address: 6621d8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6621d8c0(void *this,int *param_1)

{
  ushort *puVar1;
  void *this_00;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  byte *local_3c [3];
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  byte *local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  local_10 = 0;
  if (9 < *(uint *)((int)this + 0xe4)) {
    iVar5 = -1;
    local_8 = -1;
  }
  puVar7 = (uint *)0x0;
  local_c = this;
  if (param_1 == (int *)0x0) {
    if (iVar5 != 0) goto LAB_6621e337;
    iVar5 = -0x7ffbff7e;
    local_8 = -0x7ffbff7e;
  }
  if (iVar5 == 0) {
    pbVar6 = (byte *)FUN_66209a30(param_1,&local_10);
    if (pbVar6 == (byte *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x80040082;
      return -0x7ffbff7e;
    }
    puVar7 = operator_new(0x32);
    if (puVar7 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x8007000e;
      return -0x7ff8fff2;
    }
    if (local_10 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      bVar2 = *pbVar6;
      *puVar7 = (uint)bVar2 << 0x18;
      uVar13 = (uint)pbVar6[1] << 0x10 | (uint)bVar2 << 0x18;
      *puVar7 = uVar13;
      uVar13 = uVar13 | (uint)pbVar6[2] << 8;
      *puVar7 = uVar13;
      *puVar7 = uVar13 | pbVar6[3];
      bVar2 = pbVar6[4];
      puVar7[1] = (uint)bVar2 << 0x18;
      puVar7[1] = (uint)bVar2 << 0x18 | (uint)pbVar6[5] << 0x10;
      puVar7[1] = puVar7[1] | (uint)pbVar6[6] << 8;
      puVar7[1] = puVar7[1] | (uint)pbVar6[7];
      *(ushort *)(puVar7 + 2) = (ushort)pbVar6[8] << 8;
      *(ushort *)(puVar7 + 2) = (ushort)puVar7[2] | (ushort)pbVar6[9];
      pbVar8 = pbVar6 + 10;
      if ((short)puVar7[2] == 0) {
        bVar2 = *pbVar8;
        *(uint *)((int)puVar7 + 10) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar7 + 10) = (uint)bVar2 << 0x18 | (uint)pbVar6[0xb] << 0x10;
        *(uint *)((int)puVar7 + 10) = *(uint *)((int)puVar7 + 10) | (uint)pbVar6[0xc] << 8;
        *(uint *)((int)puVar7 + 10) = *(uint *)((int)puVar7 + 10) | (uint)pbVar6[0xd];
        bVar2 = pbVar6[0xe];
        *(uint *)((int)puVar7 + 0xe) = (uint)bVar2 << 0x18;
        uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0xf] << 0x10;
        *(uint *)((int)puVar7 + 0xe) = uVar13;
        uVar13 = uVar13 | (uint)pbVar6[0x10] << 8;
        *(uint *)((int)puVar7 + 0xe) = uVar13;
        *(uint *)((int)puVar7 + 0xe) = uVar13 | pbVar6[0x11];
        bVar2 = pbVar6[0x12];
        *(uint *)((int)puVar7 + 0x12) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar7 + 0x12) = (uint)bVar2 << 0x18 | (uint)pbVar6[0x13] << 0x10;
        *(uint *)((int)puVar7 + 0x12) = *(uint *)((int)puVar7 + 0x12) | (uint)pbVar6[0x14] << 8;
        *(uint *)((int)puVar7 + 0x12) = *(uint *)((int)puVar7 + 0x12) | (uint)pbVar6[0x15];
        bVar2 = pbVar6[0x16];
        *(uint *)((int)puVar7 + 0x16) = (uint)bVar2 << 0x18;
        uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x17] << 0x10;
        *(uint *)((int)puVar7 + 0x16) = uVar13;
        uVar13 = uVar13 | (uint)pbVar6[0x18] << 8;
        *(uint *)((int)puVar7 + 0x16) = uVar13;
        *(uint *)((int)puVar7 + 0x16) = uVar13 | pbVar6[0x19];
        bVar2 = pbVar6[0x1a];
        *(uint *)((int)puVar7 + 0x1a) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar7 + 0x1a) = (uint)bVar2 << 0x18 | (uint)pbVar6[0x1b] << 0x10;
        *(uint *)((int)puVar7 + 0x1a) = *(uint *)((int)puVar7 + 0x1a) | (uint)pbVar6[0x1c] << 8;
        *(uint *)((int)puVar7 + 0x1a) = *(uint *)((int)puVar7 + 0x1a) | (uint)pbVar6[0x1d];
        bVar2 = pbVar6[0x1e];
        *(uint *)((int)puVar7 + 0x1e) = (uint)bVar2 << 0x18;
        uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x1f] << 0x10;
        *(uint *)((int)puVar7 + 0x1e) = uVar13;
        uVar13 = uVar13 | (uint)pbVar6[0x20] << 8;
        *(uint *)((int)puVar7 + 0x1e) = uVar13;
        *(uint *)((int)puVar7 + 0x1e) = uVar13 | pbVar6[0x21];
        bVar2 = pbVar6[0x22];
        *(uint *)((int)puVar7 + 0x22) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar7 + 0x22) = (uint)bVar2 << 0x18 | (uint)pbVar6[0x23] << 0x10;
        *(uint *)((int)puVar7 + 0x22) = *(uint *)((int)puVar7 + 0x22) | (uint)pbVar6[0x24] << 8;
        *(uint *)((int)puVar7 + 0x22) = *(uint *)((int)puVar7 + 0x22) | (uint)pbVar6[0x25];
        bVar2 = pbVar6[0x26];
        *(uint *)((int)puVar7 + 0x26) = (uint)bVar2 << 0x18;
        uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x27] << 0x10;
        *(uint *)((int)puVar7 + 0x26) = uVar13;
        uVar13 = uVar13 | (uint)pbVar6[0x28] << 8;
        *(uint *)((int)puVar7 + 0x26) = uVar13;
        *(uint *)((int)puVar7 + 0x26) = uVar13 | pbVar6[0x29];
        bVar2 = pbVar6[0x2a];
        *(uint *)((int)puVar7 + 0x2a) = (uint)bVar2 << 0x18;
        *(uint *)((int)puVar7 + 0x2a) = (uint)bVar2 << 0x18 | (uint)pbVar6[0x2b] << 0x10;
        *(uint *)((int)puVar7 + 0x2a) = *(uint *)((int)puVar7 + 0x2a) | (uint)pbVar6[0x2c] << 8;
        *(uint *)((int)puVar7 + 0x2a) = *(uint *)((int)puVar7 + 0x2a) | (uint)pbVar6[0x2d];
        *(ushort *)((int)puVar7 + 0x2e) = (ushort)pbVar6[0x2e] << 8;
        *(ushort *)((int)puVar7 + 0x2e) = *(ushort *)((int)puVar7 + 0x2e) | (ushort)pbVar6[0x2f];
        *(ushort *)(puVar7 + 0xc) = (ushort)pbVar6[0x30] << 8;
        *(ushort *)(puVar7 + 0xc) = (ushort)puVar7[0xc] | (ushort)pbVar6[0x31];
        pbVar8 = pbVar6 + 0x32;
      }
    }
    if (pbVar8 == (byte *)0x0) {
      local_8 = -1;
    }
    local_1c = puVar7;
    if (local_8 == 0) {
      if ((short)puVar7[2] != 0) {
        local_8 = -0x7ffbfffb;
      }
      if (local_8 == 0) {
        *(undefined4 *)(*(int *)((int)this + 0xec) + 0x26 + *(int *)((int)this + 0xe4) * 0x3a) =
             *(undefined4 *)((int)puVar7 + 0xe);
        if (*(int *)(*(int *)((int)this + 0xec) + 0x26 + *(int *)((int)this + 0xe4) * 0x3a) == 0) {
          *(undefined4 *)((int)this + 0xf0) = 0;
        }
        puVar1 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
        *puVar1 = *puVar1 | (ushort)puVar7[0xc];
        puVar9 = (undefined1 *)FUN_66209a30(this,&local_10);
        puVar10 = *(undefined4 **)((int)this + 0x56);
        *puVar9 = (char)((uint)*puVar10 >> 0x18);
        puVar9[1] = (char)((uint)*puVar10 >> 0x10);
        puVar9[2] = (char)((uint)*puVar10 >> 8);
        puVar9[3] = *(undefined1 *)puVar10;
        puVar9[4] = (char)((uint)puVar10[1] >> 0x18);
        puVar9[5] = (char)((uint)puVar10[1] >> 0x10);
        puVar9[6] = (char)((uint)puVar10[1] >> 8);
        puVar9[7] = *(undefined1 *)(puVar10 + 1);
        puVar9[8] = *(undefined1 *)((int)puVar10 + 9);
        puVar9[9] = *(undefined1 *)(puVar10 + 2);
        if (*(short *)(puVar10 + 2) == 0) {
          puVar9[10] = (char)((uint)*(undefined4 *)((int)puVar10 + 10) >> 0x18);
          puVar9[0xb] = (char)((uint)*(undefined4 *)((int)puVar10 + 10) >> 0x10);
          puVar9[0xc] = (char)((uint)*(undefined4 *)((int)puVar10 + 10) >> 8);
          puVar9[0xd] = *(undefined1 *)((int)puVar10 + 10);
          puVar9[0xe] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 0x18);
          puVar9[0xf] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 0x10);
          puVar9[0x10] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 8);
          puVar9[0x11] = *(undefined1 *)((int)puVar10 + 0xe);
          puVar9[0x12] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x12) >> 0x18);
          puVar9[0x13] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x12) >> 0x10);
          puVar9[0x14] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x12) >> 8);
          puVar9[0x15] = *(undefined1 *)((int)puVar10 + 0x12);
          puVar9[0x16] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x16) >> 0x18);
          puVar9[0x17] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x16) >> 0x10);
          puVar9[0x18] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x16) >> 8);
          puVar9[0x19] = *(undefined1 *)((int)puVar10 + 0x16);
          puVar9[0x1a] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1a) >> 0x18);
          puVar9[0x1b] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1a) >> 0x10);
          puVar9[0x1c] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1a) >> 8);
          puVar9[0x1d] = *(undefined1 *)((int)puVar10 + 0x1a);
          puVar9[0x1e] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1e) >> 0x18);
          puVar9[0x1f] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1e) >> 0x10);
          puVar9[0x20] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x1e) >> 8);
          puVar9[0x21] = *(undefined1 *)((int)puVar10 + 0x1e);
          puVar9[0x22] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x22) >> 0x18);
          puVar9[0x23] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x22) >> 0x10);
          puVar9[0x24] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x22) >> 8);
          puVar9[0x25] = *(undefined1 *)((int)puVar10 + 0x22);
          puVar9[0x26] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x26) >> 0x18);
          puVar9[0x27] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x26) >> 0x10);
          puVar9[0x28] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x26) >> 8);
          puVar9[0x29] = *(undefined1 *)((int)puVar10 + 0x26);
          puVar9[0x2a] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x2a) >> 0x18);
          puVar9[0x2b] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x2a) >> 0x10);
          puVar9[0x2c] = (char)((uint)*(undefined4 *)((int)puVar10 + 0x2a) >> 8);
          puVar9[0x2d] = *(undefined1 *)((int)puVar10 + 0x2a);
          puVar9[0x2e] = *(undefined1 *)((int)puVar10 + 0x2f);
          puVar9[0x2f] = *(undefined1 *)((int)puVar10 + 0x2e);
          puVar9[0x30] = *(undefined1 *)((int)puVar10 + 0x31);
          puVar9[0x31] = *(undefined1 *)(puVar10 + 0xc);
        }
      }
    }
    if ((((local_8 == 0) && (*(int *)((int)this + 0xe8) == 0)) &&
        (iVar5 = FUN_66209a90(param_1,&local_10), iVar5 != 0)) &&
       (local_8 = (**(code **)(*(int *)this + 0x1c))(local_10,iVar5), local_8 == 0)) {
      *(undefined4 *)((int)this + 0xe8) = 1;
    }
    local_28 = 0;
    local_24 = 0;
    local_30 = (uint)*(ushort *)((int)param_1 + 0x6e);
    if (local_30 != 0) {
      do {
        puVar7 = local_1c;
        this = local_c;
        if (local_8 != 0) break;
        pbVar6 = (byte *)FUN_662092c0(param_1,local_24,&local_10);
        local_14 = pbVar6;
        if (pbVar6 == (byte *)0x0) {
          local_8 = -0x7ffbff7e;
          puVar7 = local_1c;
          this = local_c;
          break;
        }
        puVar7 = operator_new(0x3a);
        if (puVar7 == (uint *)0x0) {
          local_8 = -0x7ff8fff2;
          puVar7 = local_1c;
          this = local_c;
          break;
        }
        local_2c = local_10;
        if (local_10 == 0) {
LAB_6621e0e3:
          pbVar8 = (byte *)0x0;
        }
        else {
          bVar2 = *pbVar6;
          *puVar7 = (uint)bVar2 << 0x18;
          uVar13 = (uint)pbVar6[1] << 0x10 | (uint)bVar2 << 0x18;
          *puVar7 = uVar13;
          uVar13 = uVar13 | (uint)pbVar6[2] << 8;
          *puVar7 = uVar13;
          *puVar7 = uVar13 | pbVar6[3];
          bVar2 = pbVar6[4];
          puVar7[1] = (uint)bVar2 << 0x18;
          puVar7[1] = (uint)bVar2 << 0x18 | (uint)pbVar6[5] << 0x10;
          puVar7[1] = puVar7[1] | (uint)pbVar6[6] << 8;
          puVar7[1] = puVar7[1] | (uint)pbVar6[7];
          *(ushort *)(puVar7 + 2) = (ushort)pbVar6[8] << 8;
          *(ushort *)(puVar7 + 2) = (ushort)puVar7[2] | (ushort)pbVar6[9];
          pbVar8 = pbVar6 + 10;
          if ((short)puVar7[2] == 0) {
            *(ushort *)((int)puVar7 + 10) = (ushort)*pbVar8 << 8;
            *(ushort *)((int)puVar7 + 10) = *(ushort *)((int)puVar7 + 10) | (ushort)pbVar6[0xb];
            bVar2 = pbVar6[0xc];
            puVar7[3] = (uint)bVar2 << 0x18;
            puVar7[3] = (uint)bVar2 << 0x18 | (uint)pbVar6[0xd] << 0x10;
            puVar7[3] = puVar7[3] | (uint)pbVar6[0xe] << 8;
            puVar7[3] = puVar7[3] | (uint)pbVar6[0xf];
            bVar2 = pbVar6[0x10];
            puVar7[4] = (uint)bVar2 << 0x18;
            uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x11] << 0x10;
            puVar7[4] = uVar13;
            uVar13 = uVar13 | (uint)pbVar6[0x12] << 8;
            puVar7[4] = uVar13;
            puVar7[4] = uVar13 | pbVar6[0x13];
            bVar2 = pbVar6[0x14];
            puVar7[5] = (uint)bVar2 << 0x18;
            puVar7[5] = (uint)bVar2 << 0x18 | (uint)pbVar6[0x15] << 0x10;
            puVar7[5] = puVar7[5] | (uint)pbVar6[0x16] << 8;
            puVar7[5] = puVar7[5] | (uint)pbVar6[0x17];
            bVar2 = pbVar6[0x18];
            puVar7[6] = (uint)bVar2 << 0x18;
            uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x19] << 0x10;
            puVar7[6] = uVar13;
            uVar13 = uVar13 | (uint)pbVar6[0x1a] << 8;
            puVar7[6] = uVar13;
            puVar7[6] = uVar13 | pbVar6[0x1b];
            bVar2 = pbVar6[0x1c];
            puVar7[7] = (uint)bVar2 << 0x18;
            puVar7[7] = (uint)bVar2 << 0x18 | (uint)pbVar6[0x1d] << 0x10;
            puVar7[7] = puVar7[7] | (uint)pbVar6[0x1e] << 8;
            puVar7[7] = puVar7[7] | (uint)pbVar6[0x1f];
            bVar2 = pbVar6[0x20];
            puVar7[8] = (uint)bVar2 << 0x18;
            uVar13 = (uint)bVar2 << 0x18 | (uint)pbVar6[0x21] << 0x10;
            puVar7[8] = uVar13;
            uVar13 = uVar13 | (uint)pbVar6[0x22] << 8;
            puVar7[8] = uVar13;
            puVar7[8] = uVar13 | pbVar6[0x23];
            bVar2 = pbVar6[0x24];
            puVar7[9] = (uint)bVar2 << 0x18;
            puVar7[9] = (uint)bVar2 << 0x18 | (uint)pbVar6[0x25] << 0x10;
            puVar7[9] = puVar7[9] | (uint)pbVar6[0x26] << 8;
            puVar7[9] = puVar7[9] | (uint)pbVar6[0x27];
            bVar2 = pbVar6[0x28];
            *(byte *)(puVar7 + 10) = bVar2;
            pbVar8 = pbVar6 + 0x29 + bVar2;
            if ((int)pbVar8 - (int)local_14 <= (int)local_10) {
              *(byte **)((int)puVar7 + 0x29) = pbVar6 + 0x29;
              bVar2 = *pbVar8;
              *(byte *)((int)puVar7 + 0x2d) = bVar2;
              pbVar6 = pbVar8 + 1 + bVar2;
              if ((int)pbVar6 - (int)local_14 <= (int)local_10) {
                *(byte **)((int)puVar7 + 0x2e) = pbVar8 + 1;
                bVar2 = *pbVar6;
                *(uint *)((int)puVar7 + 0x32) = (uint)bVar2 << 0x18;
                *(uint *)((int)puVar7 + 0x32) = (uint)bVar2 << 0x18 | (uint)pbVar6[1] << 0x10;
                *(uint *)((int)puVar7 + 0x32) = *(uint *)((int)puVar7 + 0x32) | (uint)pbVar6[2] << 8
                ;
                uVar13 = *(uint *)((int)puVar7 + 0x32) | (uint)pbVar6[3];
                *(uint *)((int)puVar7 + 0x32) = uVar13;
                pbVar8 = pbVar6 + 4 + uVar13;
                if ((uint)((int)pbVar8 - (int)local_14) <= local_10) {
                  *(byte **)((int)puVar7 + 0x36) = pbVar6 + 4;
                  goto LAB_6621e0e5;
                }
              }
            }
            goto LAB_6621e0e3;
          }
        }
LAB_6621e0e5:
        if (pbVar8 == (byte *)0x0) {
          local_8 = -1;
        }
        FUN_66224970((void *)local_c[0x45],(int)puVar7);
        if ((local_8 == 0) && ((short)puVar7[2] != 0)) {
          local_8 = -0x7ffbfffb;
        }
        bVar15 = false;
        local_20 = 0;
        if (local_8 == 0) {
          FUN_66250790(local_3c,*(undefined4 **)((int)puVar7 + 0x2e),
                       (uint)*(byte *)((int)puVar7 + 0x2d));
          pcVar14 = s_logical_fileinfo_6626f524;
          pbVar6 = local_3c[0];
          do {
            bVar2 = *pbVar6;
            bVar15 = bVar2 < (byte)*pcVar14;
            if (bVar2 != *pcVar14) {
LAB_6621e15e:
              iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_6621e163;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar15 = bVar2 < (byte)pcVar14[1];
            if (bVar2 != pcVar14[1]) goto LAB_6621e15e;
            pbVar6 = pbVar6 + 2;
            pcVar14 = pcVar14 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_6621e163:
          bVar15 = iVar5 == 0;
          if (bVar15) {
            local_20 = 1;
          }
          FUN_66250210((int *)local_3c);
        }
        if (bVar15) {
          puVar10 = operator_new(0x62);
          if (puVar10 == (undefined4 *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = FUN_66219cc0(puVar10);
          }
          (**(code **)(*piVar11 + 0x1c))(local_14,local_2c);
          piVar4 = local_c;
          if (local_c[0x44] == 0) {
            local_c[0x44] = (int)piVar11;
          }
          else {
            local_18 = (int *)0x0;
            iVar5 = (**(code **)(*piVar11 + 0x38))(&local_18);
            if (-1 < iVar5) {
              (**(code **)(*(int *)piVar4[0x44] + 0x34))(local_18,0);
            }
            if (local_18 != (int *)0x0) {
              (**(code **)(*local_18 + 8))(local_18);
              local_18 = (int *)0x0;
            }
            if (piVar11 != (int *)0x0) {
              (**(code **)*piVar11)(1);
            }
          }
        }
        if ((local_8 == 0) && (local_20 == 0)) {
          if (local_28 == 0) {
            local_28 = 1;
            piVar11 = param_1;
          }
          else {
            piVar11 = FUN_662090e0((char *)param_1[0x1e]);
          }
          puVar10 = operator_new(0x22);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            uVar3 = *(ushort *)((int)puVar7 + 10);
            puVar10[2] = (uint)*(ushort *)((int)local_c + 0xe2);
            puVar10[1] = (uint)uVar3;
            *puVar10 = piVar11;
            puVar10[3] = 0;
            puVar10[4] = 0;
            FUN_66208c30(puVar10 + 5);
            *(int **)((int)puVar10 + 0x1e) = local_c + 0x3d;
          }
          *(undefined2 *)((int)puVar7 + 10) = *(undefined2 *)((int)local_c + 0xe2);
          *(short *)((int)local_c + 0xe2) = *(short *)((int)local_c + 0xe2) + 1;
          if ((piVar11 == (int *)0x0) || (puVar10 == (undefined4 *)0x0)) {
            local_8 = -0x7fffbffb;
          }
          if (-1 < local_8) {
            FUN_6624ff10((void *)(local_c[0x3b] + local_c[0x39] * 0x3a),
                         *(int *)(local_c[0x3b] + 4 + local_c[0x39] * 0x3a),puVar10);
          }
        }
        pbVar6 = local_14;
        FUN_6620f800(puVar7,local_14,(int *)&local_2c);
        operator_delete(puVar7);
        if ((local_8 == 0) && (local_20 == 0)) {
          local_8 = (**(code **)(*local_c + 0x1c))(local_10,pbVar6);
        }
        local_24 = local_24 + 1;
        puVar7 = local_1c;
        this = local_c;
      } while ((int)local_24 < (int)local_30);
    }
  }
LAB_6621e337:
  iVar5 = local_8;
  if (local_8 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0xec) + 0x10 + *(int *)((int)this + 0xe4) * 0x3a) = 0;
    this_00 = (void *)(*(int *)((int)this + 0xec) + *(int *)((int)this + 0xe4) * 0x3a);
    uVar12 = FUN_6621ea10(this_00,(undefined4 *)((int)this_00 + 0x14),
                          (undefined4 *)((int)this_00 + 0x22));
    *(undefined4 *)(*(int *)((int)this + 0xec) + 0x1e + *(int *)((int)this + 0xe4) * 0x3a) = uVar12;
    *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + 1;
  }
  if (puVar7 != (uint *)0x0) {
    operator_delete(puVar7);
  }
  *(int *)((int)this + 0x24) = iVar5;
  return iVar5;
}


