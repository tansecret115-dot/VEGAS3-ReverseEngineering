/* Module: rmme3260.dll
   Function: FUN_6620fc50
   Address: 6620fc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6620fc50(void *this,void *param_1,uint param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 auStackY_7c [14];
  undefined4 uStackY_44;
  byte *local_28;
  uint *local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  int local_8;
  
  local_8 = 0;
  local_24 = (uint *)0x0;
  local_c = (byte *)0x0;
  if (0x3f < *(uint *)((int)this + 0xf4)) {
    local_8 = -1;
  }
  if (param_1 == (void *)0x0) {
    if (local_8 != 0) goto LAB_6621034c;
    local_8 = -0x7ffbff7e;
  }
  if (local_8 == 0) {
    pbVar4 = (byte *)FUN_66209a30(param_1,&local_c);
    if (pbVar4 == (byte *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x80040082;
      return -0x7ffbff7e;
    }
    local_14 = pbVar4;
    local_24 = operator_new(0x32);
    if (local_24 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x8007000e;
      return -0x7ff8fff2;
    }
    if (local_c == (byte *)0x0) {
      pbVar4 = (byte *)0x0;
    }
    else {
      bVar2 = *pbVar4;
      *local_24 = (uint)bVar2 << 0x18;
      uVar5 = (uint)local_14[1] << 0x10 | (uint)bVar2 << 0x18;
      *local_24 = uVar5;
      *local_24 = uVar5 | (uint)local_14[2] << 8;
      *local_24 = *local_24 | (uint)local_14[3];
      bVar2 = local_14[4];
      local_24[1] = (uint)bVar2 << 0x18;
      local_24[1] = (uint)bVar2 << 0x18 | (uint)local_14[5] << 0x10;
      uVar5 = local_24[1] | (uint)local_14[6] << 8;
      local_24[1] = uVar5;
      local_24[1] = uVar5 | local_14[7];
      *(ushort *)(local_24 + 2) = (ushort)local_14[8] << 8;
      *(ushort *)(local_24 + 2) = (ushort)local_24[2] | (ushort)local_14[9];
      pbVar4 = local_14 + 10;
      if ((short)local_24[2] == 0) {
        bVar2 = *pbVar4;
        *(uint *)((int)local_24 + 10) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_14[0xb] << 0x10;
        *(uint *)((int)local_24 + 10) = uVar5;
        *(uint *)((int)local_24 + 10) = uVar5 | (uint)local_14[0xc] << 8;
        *(uint *)((int)local_24 + 10) = *(uint *)((int)local_24 + 10) | (uint)local_14[0xd];
        bVar2 = local_14[0xe];
        *(uint *)((int)local_24 + 0xe) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0xe) = (uint)bVar2 << 0x18 | (uint)local_14[0xf] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0xe) | (uint)local_14[0x10] << 8;
        *(uint *)((int)local_24 + 0xe) = uVar5;
        *(uint *)((int)local_24 + 0xe) = uVar5 | local_14[0x11];
        bVar2 = local_14[0x12];
        *(uint *)((int)local_24 + 0x12) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_14[0x13] << 0x10;
        *(uint *)((int)local_24 + 0x12) = uVar5;
        *(uint *)((int)local_24 + 0x12) = uVar5 | (uint)local_14[0x14] << 8;
        *(uint *)((int)local_24 + 0x12) = *(uint *)((int)local_24 + 0x12) | (uint)local_14[0x15];
        bVar2 = local_14[0x16];
        *(uint *)((int)local_24 + 0x16) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x16) = (uint)bVar2 << 0x18 | (uint)local_14[0x17] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x16) | (uint)local_14[0x18] << 8;
        *(uint *)((int)local_24 + 0x16) = uVar5;
        *(uint *)((int)local_24 + 0x16) = uVar5 | local_14[0x19];
        bVar2 = local_14[0x1a];
        *(uint *)((int)local_24 + 0x1a) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_14[0x1b] << 0x10;
        *(uint *)((int)local_24 + 0x1a) = uVar5;
        *(uint *)((int)local_24 + 0x1a) = uVar5 | (uint)local_14[0x1c] << 8;
        *(uint *)((int)local_24 + 0x1a) = *(uint *)((int)local_24 + 0x1a) | (uint)local_14[0x1d];
        bVar2 = local_14[0x1e];
        *(uint *)((int)local_24 + 0x1e) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x1e) = (uint)bVar2 << 0x18 | (uint)local_14[0x1f] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x1e) | (uint)local_14[0x20] << 8;
        *(uint *)((int)local_24 + 0x1e) = uVar5;
        *(uint *)((int)local_24 + 0x1e) = uVar5 | local_14[0x21];
        bVar2 = local_14[0x22];
        *(uint *)((int)local_24 + 0x22) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_14[0x23] << 0x10;
        *(uint *)((int)local_24 + 0x22) = uVar5;
        *(uint *)((int)local_24 + 0x22) = uVar5 | (uint)local_14[0x24] << 8;
        *(uint *)((int)local_24 + 0x22) = *(uint *)((int)local_24 + 0x22) | (uint)local_14[0x25];
        bVar2 = local_14[0x26];
        *(uint *)((int)local_24 + 0x26) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x26) = (uint)bVar2 << 0x18 | (uint)local_14[0x27] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x26) | (uint)local_14[0x28] << 8;
        *(uint *)((int)local_24 + 0x26) = uVar5;
        *(uint *)((int)local_24 + 0x26) = uVar5 | local_14[0x29];
        bVar2 = local_14[0x2a];
        *(uint *)((int)local_24 + 0x2a) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_14[0x2b] << 0x10;
        *(uint *)((int)local_24 + 0x2a) = uVar5;
        *(uint *)((int)local_24 + 0x2a) = uVar5 | (uint)local_14[0x2c] << 8;
        *(uint *)((int)local_24 + 0x2a) = *(uint *)((int)local_24 + 0x2a) | (uint)local_14[0x2d];
        *(ushort *)((int)local_24 + 0x2e) = (ushort)local_14[0x2e] << 8;
        *(ushort *)((int)local_24 + 0x2e) =
             *(ushort *)((int)local_24 + 0x2e) | (ushort)local_14[0x2f];
        *(ushort *)(local_24 + 0xc) = (ushort)local_14[0x30] << 8;
        *(ushort *)(local_24 + 0xc) = (ushort)local_24[0xc] | (ushort)local_14[0x31];
        pbVar4 = local_14 + 0x32;
      }
    }
    if (pbVar4 == (byte *)0x0) {
      local_8 = -1;
    }
    if ((local_8 == 0) && ((short)local_24[2] != 0)) {
      local_8 = -0x7ffbfffb;
    }
    if (local_8 == 0) {
      puVar1 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
      *puVar1 = *puVar1 | (ushort)local_24[0xc];
      puVar6 = (undefined1 *)FUN_66209a30(this,&local_c);
      puVar9 = *(undefined4 **)((int)this + 0x56);
      *puVar6 = (char)((uint)*puVar9 >> 0x18);
      puVar6[1] = (char)((uint)*puVar9 >> 0x10);
      puVar6[2] = (char)((uint)*puVar9 >> 8);
      puVar6[3] = *(undefined1 *)puVar9;
      puVar6[4] = (char)((uint)puVar9[1] >> 0x18);
      puVar6[5] = (char)((uint)puVar9[1] >> 0x10);
      puVar6[6] = (char)((uint)puVar9[1] >> 8);
      puVar6[7] = *(undefined1 *)(puVar9 + 1);
      puVar6[8] = *(undefined1 *)((int)puVar9 + 9);
      puVar6[9] = *(undefined1 *)(puVar9 + 2);
      if (*(short *)(puVar9 + 2) == 0) {
        puVar6[10] = (char)((uint)*(undefined4 *)((int)puVar9 + 10) >> 0x18);
        puVar6[0xb] = (char)((uint)*(undefined4 *)((int)puVar9 + 10) >> 0x10);
        puVar6[0xc] = (char)((uint)*(undefined4 *)((int)puVar9 + 10) >> 8);
        puVar6[0xd] = *(undefined1 *)((int)puVar9 + 10);
        puVar6[0xe] = (char)((uint)*(undefined4 *)((int)puVar9 + 0xe) >> 0x18);
        puVar6[0xf] = (char)((uint)*(undefined4 *)((int)puVar9 + 0xe) >> 0x10);
        puVar6[0x10] = (char)((uint)*(undefined4 *)((int)puVar9 + 0xe) >> 8);
        puVar6[0x11] = *(undefined1 *)((int)puVar9 + 0xe);
        puVar6[0x12] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x12) >> 0x18);
        puVar6[0x13] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x12) >> 0x10);
        puVar6[0x14] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x12) >> 8);
        puVar6[0x15] = *(undefined1 *)((int)puVar9 + 0x12);
        puVar6[0x16] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x16) >> 0x18);
        puVar6[0x17] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x16) >> 0x10);
        puVar6[0x18] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x16) >> 8);
        puVar6[0x19] = *(undefined1 *)((int)puVar9 + 0x16);
        puVar6[0x1a] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1a) >> 0x18);
        puVar6[0x1b] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1a) >> 0x10);
        puVar6[0x1c] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1a) >> 8);
        puVar6[0x1d] = *(undefined1 *)((int)puVar9 + 0x1a);
        puVar6[0x1e] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1e) >> 0x18);
        puVar6[0x1f] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1e) >> 0x10);
        puVar6[0x20] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x1e) >> 8);
        puVar6[0x21] = *(undefined1 *)((int)puVar9 + 0x1e);
        puVar6[0x22] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x22) >> 0x18);
        puVar6[0x23] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x22) >> 0x10);
        puVar6[0x24] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x22) >> 8);
        puVar6[0x25] = *(undefined1 *)((int)puVar9 + 0x22);
        puVar6[0x26] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x26) >> 0x18);
        puVar6[0x27] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x26) >> 0x10);
        puVar6[0x28] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x26) >> 8);
        puVar6[0x29] = *(undefined1 *)((int)puVar9 + 0x26);
        puVar6[0x2a] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x2a) >> 0x18);
        puVar6[0x2b] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x2a) >> 0x10);
        puVar6[0x2c] = (char)((uint)*(undefined4 *)((int)puVar9 + 0x2a) >> 8);
        puVar6[0x2d] = *(undefined1 *)((int)puVar9 + 0x2a);
        puVar6[0x2e] = *(undefined1 *)((int)puVar9 + 0x2f);
        puVar6[0x2f] = *(undefined1 *)((int)puVar9 + 0x2e);
        puVar6[0x30] = *(undefined1 *)((int)puVar9 + 0x31);
        puVar6[0x31] = *(undefined1 *)(puVar9 + 0xc);
      }
      if ((*(int *)((int)this + 0xfc) == 0) && (iVar7 = FUN_66209a90(param_1,&local_c), iVar7 != 0))
      {
        uStackY_44 = 0x66210153;
        local_8 = (**(code **)(*(int *)this + 0x1c))();
        if (local_8 == 0) {
          *(undefined4 *)((int)this + 0xfc) = 1;
        }
      }
    }
    uVar3 = *(ushort *)((int)param_1 + 0x6e);
    *(undefined4 *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf4) * 0x14) = 1;
    pvVar8 = operator_new(4);
    *(void **)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) = pvVar8;
    local_1c = 0;
    local_18 = 0;
    if (uVar3 != 0) {
      do {
        if ((local_8 != 0) || (local_1c != 0)) break;
        uStackY_44 = 0x662101d9;
        pbVar4 = (byte *)FUN_662092c0(param_1,local_18,&local_c);
        local_14 = pbVar4;
        if (pbVar4 == (byte *)0x0) {
          local_8 = -0x7ffbff7e;
          break;
        }
        puVar9 = operator_new(0x3a);
        local_20 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          local_8 = -0x7ff8fff2;
          break;
        }
        local_28 = local_c;
        uStackY_44 = 0x6621020c;
        pbVar10 = FUN_6620ba70(puVar9,pbVar4,local_c);
        if (pbVar10 == (byte *)0x0) {
          local_8 = -1;
        }
        if (local_8 == 0) {
          if (*(short *)(puVar9 + 2) != 0) {
            local_8 = -0x7ffbfffb;
          }
          if ((local_8 == 0) && (*(ushort *)((int)puVar9 + 10) == param_2)) {
            FUN_66224970(*(void **)((int)this + 0x2d6),(int)puVar9);
            local_10 = 0;
            puVar11 = auStackY_7c;
            for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
            FUN_66224cc0();
            puVar9 = local_20;
            **(undefined2 **)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) =
                 *(undefined2 *)((int)local_20 + 10);
            *(undefined2 *)
             (*(int *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) + 2) =
                 (undefined2)local_10;
            uStackY_44 = 0x662102d1;
            FUN_6624ff10((void *)((int)this + 0xe4),*(int *)((int)this + 0xe8),local_10 & 0xffff);
            *(short *)((int)this + 0xe0) = *(short *)((int)this + 0xe0) + 1;
            local_1c = 1;
            *(undefined2 *)((int)puVar9 + 10) =
                 *(undefined2 *)
                  (*(int *)(*(int *)((int)this + 0x100) + 4 + *(int *)((int)this + 0xf4) * 0x14) + 2
                  );
            pbVar4 = local_14;
          }
        }
        uStackY_44 = 0x66210309;
        FUN_6620f800(puVar9,pbVar4,(int *)&local_28);
        operator_delete(puVar9);
        if (local_8 == 0) {
          uStackY_44 = 0x66210325;
          local_8 = (**(code **)(*(int *)this + 0x1c))();
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < (int)(uint)uVar3);
    }
  }
LAB_6621034c:
  iVar7 = local_8;
  if (local_8 == 0) {
    *(void **)(*(int *)((int)this + 0x100) + 8 + *(int *)((int)this + 0xf4) * 0x14) = param_1;
    *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) + 1;
  }
  if (local_24 != (uint *)0x0) {
    operator_delete(local_24);
  }
  *(int *)((int)this + 0x24) = iVar7;
  return iVar7;
}


