/* Module: rmme3260.dll
   Function: FUN_6620f0d0
   Address: 6620f0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6620f0d0(void *this,void *param_1)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 auStackY_78 [14];
  undefined4 uStackY_40;
  byte *local_24;
  uint *local_20;
  undefined4 *local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  int local_8;
  
  local_8 = 0;
  local_20 = (uint *)0x0;
  local_c = (byte *)0x0;
  if (0x3f < *(uint *)((int)this + 0xf4)) {
    local_8 = -1;
  }
  if (param_1 == (void *)0x0) {
    if (local_8 != 0) goto LAB_6620f7ae;
    local_8 = -0x7ffbff7e;
  }
  if (local_8 == 0) {
    pbVar3 = (byte *)FUN_66209a30(param_1,&local_c);
    if (pbVar3 == (byte *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x80040082;
      return -0x7ffbff7e;
    }
    local_18 = pbVar3;
    local_20 = operator_new(0x32);
    if (local_20 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x8007000e;
      return -0x7ff8fff2;
    }
    if (local_c == (byte *)0x0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      bVar2 = *pbVar3;
      *local_20 = (uint)bVar2 << 0x18;
      uVar4 = (uint)local_18[1] << 0x10 | (uint)bVar2 << 0x18;
      *local_20 = uVar4;
      *local_20 = uVar4 | (uint)local_18[2] << 8;
      *local_20 = *local_20 | (uint)local_18[3];
      bVar2 = local_18[4];
      local_20[1] = (uint)bVar2 << 0x18;
      local_20[1] = (uint)bVar2 << 0x18 | (uint)local_18[5] << 0x10;
      uVar4 = local_20[1] | (uint)local_18[6] << 8;
      local_20[1] = uVar4;
      local_20[1] = uVar4 | local_18[7];
      *(ushort *)(local_20 + 2) = (ushort)local_18[8] << 8;
      *(ushort *)(local_20 + 2) = (ushort)local_20[2] | (ushort)local_18[9];
      pbVar3 = local_18 + 10;
      if ((short)local_20[2] == 0) {
        bVar2 = *pbVar3;
        *(uint *)((int)local_20 + 10) = (uint)bVar2 << 0x18;
        uVar4 = (uint)bVar2 << 0x18 | (uint)local_18[0xb] << 0x10;
        *(uint *)((int)local_20 + 10) = uVar4;
        *(uint *)((int)local_20 + 10) = uVar4 | (uint)local_18[0xc] << 8;
        *(uint *)((int)local_20 + 10) = *(uint *)((int)local_20 + 10) | (uint)local_18[0xd];
        bVar2 = local_18[0xe];
        *(uint *)((int)local_20 + 0xe) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_20 + 0xe) = (uint)bVar2 << 0x18 | (uint)local_18[0xf] << 0x10;
        uVar4 = *(uint *)((int)local_20 + 0xe) | (uint)local_18[0x10] << 8;
        *(uint *)((int)local_20 + 0xe) = uVar4;
        *(uint *)((int)local_20 + 0xe) = uVar4 | local_18[0x11];
        bVar2 = local_18[0x12];
        *(uint *)((int)local_20 + 0x12) = (uint)bVar2 << 0x18;
        uVar4 = (uint)bVar2 << 0x18 | (uint)local_18[0x13] << 0x10;
        *(uint *)((int)local_20 + 0x12) = uVar4;
        *(uint *)((int)local_20 + 0x12) = uVar4 | (uint)local_18[0x14] << 8;
        *(uint *)((int)local_20 + 0x12) = *(uint *)((int)local_20 + 0x12) | (uint)local_18[0x15];
        bVar2 = local_18[0x16];
        *(uint *)((int)local_20 + 0x16) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_20 + 0x16) = (uint)bVar2 << 0x18 | (uint)local_18[0x17] << 0x10;
        uVar4 = *(uint *)((int)local_20 + 0x16) | (uint)local_18[0x18] << 8;
        *(uint *)((int)local_20 + 0x16) = uVar4;
        *(uint *)((int)local_20 + 0x16) = uVar4 | local_18[0x19];
        bVar2 = local_18[0x1a];
        *(uint *)((int)local_20 + 0x1a) = (uint)bVar2 << 0x18;
        uVar4 = (uint)bVar2 << 0x18 | (uint)local_18[0x1b] << 0x10;
        *(uint *)((int)local_20 + 0x1a) = uVar4;
        *(uint *)((int)local_20 + 0x1a) = uVar4 | (uint)local_18[0x1c] << 8;
        *(uint *)((int)local_20 + 0x1a) = *(uint *)((int)local_20 + 0x1a) | (uint)local_18[0x1d];
        bVar2 = local_18[0x1e];
        *(uint *)((int)local_20 + 0x1e) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_20 + 0x1e) = (uint)bVar2 << 0x18 | (uint)local_18[0x1f] << 0x10;
        uVar4 = *(uint *)((int)local_20 + 0x1e) | (uint)local_18[0x20] << 8;
        *(uint *)((int)local_20 + 0x1e) = uVar4;
        *(uint *)((int)local_20 + 0x1e) = uVar4 | local_18[0x21];
        bVar2 = local_18[0x22];
        *(uint *)((int)local_20 + 0x22) = (uint)bVar2 << 0x18;
        uVar4 = (uint)bVar2 << 0x18 | (uint)local_18[0x23] << 0x10;
        *(uint *)((int)local_20 + 0x22) = uVar4;
        *(uint *)((int)local_20 + 0x22) = uVar4 | (uint)local_18[0x24] << 8;
        *(uint *)((int)local_20 + 0x22) = *(uint *)((int)local_20 + 0x22) | (uint)local_18[0x25];
        bVar2 = local_18[0x26];
        *(uint *)((int)local_20 + 0x26) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_20 + 0x26) = (uint)bVar2 << 0x18 | (uint)local_18[0x27] << 0x10;
        uVar4 = *(uint *)((int)local_20 + 0x26) | (uint)local_18[0x28] << 8;
        *(uint *)((int)local_20 + 0x26) = uVar4;
        *(uint *)((int)local_20 + 0x26) = uVar4 | local_18[0x29];
        bVar2 = local_18[0x2a];
        *(uint *)((int)local_20 + 0x2a) = (uint)bVar2 << 0x18;
        uVar4 = (uint)bVar2 << 0x18 | (uint)local_18[0x2b] << 0x10;
        *(uint *)((int)local_20 + 0x2a) = uVar4;
        *(uint *)((int)local_20 + 0x2a) = uVar4 | (uint)local_18[0x2c] << 8;
        *(uint *)((int)local_20 + 0x2a) = *(uint *)((int)local_20 + 0x2a) | (uint)local_18[0x2d];
        *(ushort *)((int)local_20 + 0x2e) = (ushort)local_18[0x2e] << 8;
        *(ushort *)((int)local_20 + 0x2e) =
             *(ushort *)((int)local_20 + 0x2e) | (ushort)local_18[0x2f];
        *(ushort *)(local_20 + 0xc) = (ushort)local_18[0x30] << 8;
        *(ushort *)(local_20 + 0xc) = (ushort)local_20[0xc] | (ushort)local_18[0x31];
        pbVar3 = local_18 + 0x32;
      }
    }
    if (pbVar3 == (byte *)0x0) {
      local_8 = -1;
    }
    if ((local_8 == 0) && ((short)local_20[2] != 0)) {
      local_8 = -0x7ffbfffb;
    }
    if (local_8 == 0) {
      puVar1 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
      *puVar1 = *puVar1 | (ushort)local_20[0xc];
      puVar5 = (undefined1 *)FUN_66209a30(this,&local_c);
      puVar8 = *(undefined4 **)((int)this + 0x56);
      *puVar5 = (char)((uint)*puVar8 >> 0x18);
      puVar5[1] = (char)((uint)*puVar8 >> 0x10);
      puVar5[2] = (char)((uint)*puVar8 >> 8);
      puVar5[3] = *(undefined1 *)puVar8;
      puVar5[4] = (char)((uint)puVar8[1] >> 0x18);
      puVar5[5] = (char)((uint)puVar8[1] >> 0x10);
      puVar5[6] = (char)((uint)puVar8[1] >> 8);
      puVar5[7] = *(undefined1 *)(puVar8 + 1);
      puVar5[8] = *(undefined1 *)((int)puVar8 + 9);
      puVar5[9] = *(undefined1 *)(puVar8 + 2);
      if (*(short *)(puVar8 + 2) == 0) {
        puVar5[10] = (char)((uint)*(undefined4 *)((int)puVar8 + 10) >> 0x18);
        puVar5[0xb] = (char)((uint)*(undefined4 *)((int)puVar8 + 10) >> 0x10);
        puVar5[0xc] = (char)((uint)*(undefined4 *)((int)puVar8 + 10) >> 8);
        puVar5[0xd] = *(undefined1 *)((int)puVar8 + 10);
        puVar5[0xe] = (char)((uint)*(undefined4 *)((int)puVar8 + 0xe) >> 0x18);
        puVar5[0xf] = (char)((uint)*(undefined4 *)((int)puVar8 + 0xe) >> 0x10);
        puVar5[0x10] = (char)((uint)*(undefined4 *)((int)puVar8 + 0xe) >> 8);
        puVar5[0x11] = *(undefined1 *)((int)puVar8 + 0xe);
        puVar5[0x12] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x12) >> 0x18);
        puVar5[0x13] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x12) >> 0x10);
        puVar5[0x14] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x12) >> 8);
        puVar5[0x15] = *(undefined1 *)((int)puVar8 + 0x12);
        puVar5[0x16] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x16) >> 0x18);
        puVar5[0x17] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x16) >> 0x10);
        puVar5[0x18] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x16) >> 8);
        puVar5[0x19] = *(undefined1 *)((int)puVar8 + 0x16);
        puVar5[0x1a] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1a) >> 0x18);
        puVar5[0x1b] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1a) >> 0x10);
        puVar5[0x1c] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1a) >> 8);
        puVar5[0x1d] = *(undefined1 *)((int)puVar8 + 0x1a);
        puVar5[0x1e] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1e) >> 0x18);
        puVar5[0x1f] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1e) >> 0x10);
        puVar5[0x20] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x1e) >> 8);
        puVar5[0x21] = *(undefined1 *)((int)puVar8 + 0x1e);
        puVar5[0x22] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x22) >> 0x18);
        puVar5[0x23] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x22) >> 0x10);
        puVar5[0x24] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x22) >> 8);
        puVar5[0x25] = *(undefined1 *)((int)puVar8 + 0x22);
        puVar5[0x26] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x26) >> 0x18);
        puVar5[0x27] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x26) >> 0x10);
        puVar5[0x28] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x26) >> 8);
        puVar5[0x29] = *(undefined1 *)((int)puVar8 + 0x26);
        puVar5[0x2a] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x2a) >> 0x18);
        puVar5[0x2b] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x2a) >> 0x10);
        puVar5[0x2c] = (char)((uint)*(undefined4 *)((int)puVar8 + 0x2a) >> 8);
        puVar5[0x2d] = *(undefined1 *)((int)puVar8 + 0x2a);
        puVar5[0x2e] = *(undefined1 *)((int)puVar8 + 0x2f);
        puVar5[0x2f] = *(undefined1 *)((int)puVar8 + 0x2e);
        puVar5[0x30] = *(undefined1 *)((int)puVar8 + 0x31);
        puVar5[0x31] = *(undefined1 *)(puVar8 + 0xc);
      }
      if ((*(int *)((int)this + 0xfc) == 0) && (iVar6 = FUN_66209a90(param_1,&local_c), iVar6 != 0))
      {
        uStackY_40 = 0x6620f5d3;
        local_8 = (**(code **)(*(int *)this + 0x1c))();
        if (local_8 == 0) {
          *(undefined4 *)((int)this + 0xfc) = 1;
        }
      }
    }
    uVar4 = (uint)*(ushort *)((int)param_1 + 0x6e);
    *(uint *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf4) * 0x14) = uVar4;
    pvVar7 = operator_new(uVar4 * 4);
    local_10 = 0;
    *(void **)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) = pvVar7;
    if (uVar4 != 0) {
      do {
        if (local_8 != 0) break;
        uStackY_40 = 0x6620f64f;
        pbVar3 = (byte *)FUN_662092c0(param_1,local_10,&local_c);
        local_18 = pbVar3;
        if (pbVar3 == (byte *)0x0) {
          local_8 = -0x7ffbff7e;
          break;
        }
        puVar8 = operator_new(0x3a);
        local_1c = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          local_8 = -0x7ff8fff2;
          break;
        }
        local_24 = local_c;
        uStackY_40 = 0x6620f682;
        pbVar9 = FUN_6620ba70(puVar8,pbVar3,local_c);
        if (pbVar9 == (byte *)0x0) {
          local_8 = -1;
        }
        if (local_8 == 0) {
          if (*(short *)(puVar8 + 2) != 0) {
            local_8 = -0x7ffbfffb;
          }
          if (local_8 == 0) {
            local_14 = 0;
            puVar10 = auStackY_78;
            for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
            FUN_66224cc0();
            puVar8 = local_1c;
            iVar6 = local_10 * 4;
            *(undefined2 *)
             (*(int *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) + iVar6)
                 = *(undefined2 *)((int)local_1c + 10);
            *(undefined2 *)
             (*(int *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) + 2 +
             iVar6) = (undefined2)local_14;
            uStackY_40 = 0x6620f737;
            FUN_6624ff10((void *)((int)this + 0xe4),*(int *)((int)this + 0xe8),local_14 & 0xffff);
            *(short *)((int)this + 0xe0) = *(short *)((int)this + 0xe0) + 1;
            *(undefined2 *)((int)puVar8 + 10) =
                 *(undefined2 *)
                  (*(int *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) + 2
                  + iVar6);
            pbVar3 = local_18;
          }
        }
        uStackY_40 = 0x6620f76b;
        FUN_6620f800(puVar8,pbVar3,(int *)&local_24);
        operator_delete(puVar8);
        if (local_8 == 0) {
          uStackY_40 = 0x6620f787;
          local_8 = (**(code **)(*(int *)this + 0x1c))();
        }
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
    }
  }
LAB_6620f7ae:
  iVar6 = local_8;
  if (local_8 == 0) {
    *(void **)(*(int *)((int)this + 0x100) + 8 + *(int *)((int)this + 0xf4) * 0x14) = param_1;
    *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) + 1;
  }
  if (local_20 != (uint *)0x0) {
    operator_delete(local_20);
  }
  *(int *)((int)this + 0x24) = iVar6;
  return iVar6;
}


