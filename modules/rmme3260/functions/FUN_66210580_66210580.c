/* Module: rmme3260.dll
   Function: FUN_66210580
   Address: 66210580
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66210580(void *this,void *param_1,uint param_2)

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
  char *pcVar12;
  bool bVar13;
  undefined4 auStackY_cc [13];
  undefined4 uStackY_98;
  undefined4 local_80 [19];
  byte *local_34 [3];
  uint local_28;
  uint *local_24;
  byte *local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  local_8 = 0;
  local_24 = (uint *)0x0;
  local_c = (byte *)0x0;
  if (0x3f < *(uint *)((int)this + 0x104)) {
    local_8 = -1;
  }
  if (param_1 == (void *)0x0) {
    if (local_8 != 0) goto LAB_66210d21;
    local_8 = -0x7ffbff7e;
  }
  if (local_8 == 0) {
    pbVar4 = (byte *)FUN_66209a30(param_1,&local_c);
    if (pbVar4 == (byte *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0x80040082;
      return -0x7ffbff7e;
    }
    local_10 = pbVar4;
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
      uVar5 = (uint)local_10[1] << 0x10 | (uint)bVar2 << 0x18;
      *local_24 = uVar5;
      *local_24 = uVar5 | (uint)local_10[2] << 8;
      *local_24 = *local_24 | (uint)local_10[3];
      bVar2 = local_10[4];
      local_24[1] = (uint)bVar2 << 0x18;
      local_24[1] = (uint)bVar2 << 0x18 | (uint)local_10[5] << 0x10;
      uVar5 = local_24[1] | (uint)local_10[6] << 8;
      local_24[1] = uVar5;
      local_24[1] = uVar5 | local_10[7];
      *(ushort *)(local_24 + 2) = (ushort)local_10[8] << 8;
      *(ushort *)(local_24 + 2) = (ushort)local_24[2] | (ushort)local_10[9];
      pbVar4 = local_10 + 10;
      if ((short)local_24[2] == 0) {
        bVar2 = *pbVar4;
        *(uint *)((int)local_24 + 10) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_10[0xb] << 0x10;
        *(uint *)((int)local_24 + 10) = uVar5;
        *(uint *)((int)local_24 + 10) = uVar5 | (uint)local_10[0xc] << 8;
        *(uint *)((int)local_24 + 10) = *(uint *)((int)local_24 + 10) | (uint)local_10[0xd];
        bVar2 = local_10[0xe];
        *(uint *)((int)local_24 + 0xe) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0xe) = (uint)bVar2 << 0x18 | (uint)local_10[0xf] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0xe) | (uint)local_10[0x10] << 8;
        *(uint *)((int)local_24 + 0xe) = uVar5;
        *(uint *)((int)local_24 + 0xe) = uVar5 | local_10[0x11];
        bVar2 = local_10[0x12];
        *(uint *)((int)local_24 + 0x12) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_10[0x13] << 0x10;
        *(uint *)((int)local_24 + 0x12) = uVar5;
        *(uint *)((int)local_24 + 0x12) = uVar5 | (uint)local_10[0x14] << 8;
        *(uint *)((int)local_24 + 0x12) = *(uint *)((int)local_24 + 0x12) | (uint)local_10[0x15];
        bVar2 = local_10[0x16];
        *(uint *)((int)local_24 + 0x16) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x16) = (uint)bVar2 << 0x18 | (uint)local_10[0x17] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x16) | (uint)local_10[0x18] << 8;
        *(uint *)((int)local_24 + 0x16) = uVar5;
        *(uint *)((int)local_24 + 0x16) = uVar5 | local_10[0x19];
        bVar2 = local_10[0x1a];
        *(uint *)((int)local_24 + 0x1a) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_10[0x1b] << 0x10;
        *(uint *)((int)local_24 + 0x1a) = uVar5;
        *(uint *)((int)local_24 + 0x1a) = uVar5 | (uint)local_10[0x1c] << 8;
        *(uint *)((int)local_24 + 0x1a) = *(uint *)((int)local_24 + 0x1a) | (uint)local_10[0x1d];
        bVar2 = local_10[0x1e];
        *(uint *)((int)local_24 + 0x1e) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x1e) = (uint)bVar2 << 0x18 | (uint)local_10[0x1f] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x1e) | (uint)local_10[0x20] << 8;
        *(uint *)((int)local_24 + 0x1e) = uVar5;
        *(uint *)((int)local_24 + 0x1e) = uVar5 | local_10[0x21];
        bVar2 = local_10[0x22];
        *(uint *)((int)local_24 + 0x22) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_10[0x23] << 0x10;
        *(uint *)((int)local_24 + 0x22) = uVar5;
        *(uint *)((int)local_24 + 0x22) = uVar5 | (uint)local_10[0x24] << 8;
        *(uint *)((int)local_24 + 0x22) = *(uint *)((int)local_24 + 0x22) | (uint)local_10[0x25];
        bVar2 = local_10[0x26];
        *(uint *)((int)local_24 + 0x26) = (uint)bVar2 << 0x18;
        *(uint *)((int)local_24 + 0x26) = (uint)bVar2 << 0x18 | (uint)local_10[0x27] << 0x10;
        uVar5 = *(uint *)((int)local_24 + 0x26) | (uint)local_10[0x28] << 8;
        *(uint *)((int)local_24 + 0x26) = uVar5;
        *(uint *)((int)local_24 + 0x26) = uVar5 | local_10[0x29];
        bVar2 = local_10[0x2a];
        *(uint *)((int)local_24 + 0x2a) = (uint)bVar2 << 0x18;
        uVar5 = (uint)bVar2 << 0x18 | (uint)local_10[0x2b] << 0x10;
        *(uint *)((int)local_24 + 0x2a) = uVar5;
        *(uint *)((int)local_24 + 0x2a) = uVar5 | (uint)local_10[0x2c] << 8;
        *(uint *)((int)local_24 + 0x2a) = *(uint *)((int)local_24 + 0x2a) | (uint)local_10[0x2d];
        *(ushort *)((int)local_24 + 0x2e) = (ushort)local_10[0x2e] << 8;
        *(ushort *)((int)local_24 + 0x2e) =
             *(ushort *)((int)local_24 + 0x2e) | (ushort)local_10[0x2f];
        *(ushort *)(local_24 + 0xc) = (ushort)local_10[0x30] << 8;
        *(ushort *)(local_24 + 0xc) = (ushort)local_24[0xc] | (ushort)local_10[0x31];
        pbVar4 = local_10 + 0x32;
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
        uStackY_98 = 0x66210a83;
        local_8 = (**(code **)(*(int *)this + 0x1c))();
        if (local_8 == 0) {
          *(undefined4 *)((int)this + 0xfc) = 1;
        }
      }
    }
    uVar3 = *(ushort *)((int)param_1 + 0x6e);
    local_28 = (uint)uVar3;
    pvVar8 = operator_new(0xc);
    local_1c = 0;
    *(void **)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) = pvVar8;
    if (uVar3 != 0) {
      do {
        if (local_8 != 0) break;
        uStackY_98 = 0x66210ae9;
        pbVar4 = (byte *)FUN_662092c0(param_1,local_1c,&local_c);
        local_10 = pbVar4;
        if (pbVar4 == (byte *)0x0) {
          local_8 = -0x7ffbff7e;
          break;
        }
        puVar9 = operator_new(0x3a);
        local_18 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          local_8 = -0x7ff8fff2;
          break;
        }
        local_20 = local_c;
        uStackY_98 = 0x66210b1c;
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
            local_14 = 0;
            uStackY_98 = 0x66210b81;
            FUN_66250790(local_34,*(undefined4 **)((int)puVar9 + 0x2e),
                         (uint)*(byte *)((int)puVar9 + 0x2d));
            puVar11 = auStackY_cc;
            for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
            FUN_662251a0();
            pcVar12 = s_audio_x_pn_realaudio_6626f0fc;
            **(undefined2 **)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) =
                 *(undefined2 *)((int)local_18 + 10);
            *(undefined2 *)
             (*(int *)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) + 2) =
                 (undefined2)local_14;
            *(undefined4 *)
             (*(int *)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) + 4) = 0;
            pbVar4 = local_34[0];
            do {
              bVar2 = *pbVar4;
              bVar13 = bVar2 < (byte)*pcVar12;
              if (bVar2 != *pcVar12) {
LAB_66210c26:
                iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_66210c2b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar13 = bVar2 < (byte)pcVar12[1];
              if (bVar2 != pcVar12[1]) goto LAB_66210c26;
              pbVar4 = pbVar4 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar2 != 0);
            iVar7 = 0;
LAB_66210c2b:
            if (iVar7 == 0) {
              FUN_66218480(local_80);
              uStackY_98 = 0x66210c47;
              FUN_66217790(local_80,local_10,local_20);
              iVar7 = FUN_66218540((int)local_80);
              if ((iVar7 == 0x2e726134) && (uVar3 = FUN_66218520((int)local_80), 1 < uVar3)) {
                *(undefined4 *)
                 (*(int *)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) + 4) =
                     1;
              }
              FUN_662184d0(local_80);
            }
            uStackY_98 = 0x66210ca4;
            FUN_6624ff10((void *)((int)this + 0xe4),*(int *)((int)this + 0xe8),local_14 & 0xffff);
            *(undefined2 *)((int)local_18 + 10) =
                 *(undefined2 *)
                  (*(int *)(*(int *)((int)this + 0x108) + *(int *)((int)this + 0x104) * 0x26) + 2);
            FUN_66250210((int *)local_34);
            puVar9 = local_18;
            pbVar4 = local_10;
          }
        }
        uStackY_98 = 0x66210cde;
        FUN_6620f800(puVar9,pbVar4,(int *)&local_20);
        operator_delete(puVar9);
        if (local_8 == 0) {
          uStackY_98 = 0x66210cfa;
          local_8 = (**(code **)(*(int *)this + 0x1c))();
        }
        local_1c = local_1c + 1;
      } while ((int)local_1c < (int)local_28);
    }
  }
LAB_66210d21:
  iVar7 = local_8;
  if (local_8 == 0) {
    *(void **)(*(int *)((int)this + 0x108) + 4 + *(int *)((int)this + 0x104) * 0x26) = param_1;
    *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + 1;
  }
  if (local_24 != (uint *)0x0) {
    operator_delete(local_24);
  }
  *(int *)((int)this + 0x24) = iVar7;
  return iVar7;
}


