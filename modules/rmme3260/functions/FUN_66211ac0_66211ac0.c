/* Module: rmme3260.dll
   Function: FUN_66211ac0
   Address: 66211ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66211ac0(void *this,undefined4 param_1)

{
  void *this_00;
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  undefined4 in_stack_ffffff88;
  undefined4 *in_stack_ffffff8c;
  uint in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  undefined4 *in_stack_ffffff98;
  uint uVar9;
  undefined2 uVar10;
  uint *puVar11;
  uint local_50;
  uint local_4c;
  short local_48;
  ushort local_46;
  undefined4 uStack_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort local_3a;
  undefined4 uStack_38;
  ushort local_34;
  undefined4 uStack_32;
  short local_2c;
  short local_2a;
  undefined2 local_28;
  uint local_26;
  ushort local_22;
  undefined1 local_20;
  uint local_1c;
  uint local_18;
  byte local_14;
  byte *local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_66208c30(&local_1c);
  if (*(int *)((int)this + 0xf4) == 0) {
    local_8 = 0x40042;
  }
  if ((local_8 == 0) && (*(int *)((int)this + 0xbc) != 0)) {
    local_8 = FUN_6622a580((void *)((int)this + 0x128),*(int *)((int)this + 0xbc));
  }
  puVar11 = &local_c;
  uVar9 = 0x66211b13;
  local_10 = (byte *)FUN_66209a30(this,puVar11);
  puVar7 = *(uint **)((int)this + 0x56);
  if ((local_10 == (byte *)0x0) || (local_c == 0)) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar1 = *local_10;
    *puVar7 = (uint)bVar1 << 0x18;
    *puVar7 = (uint)local_10[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar6 = *puVar7 | (uint)local_10[2] << 8;
    *puVar7 = uVar6;
    *puVar7 = uVar6 | local_10[3];
    puVar7[1] = (uint)local_10[4] << 0x18;
    uVar6 = puVar7[1] | (uint)local_10[5] << 0x10;
    puVar7[1] = uVar6;
    uVar6 = uVar6 | (uint)local_10[6] << 8;
    puVar7[1] = uVar6;
    puVar7[1] = uVar6 | local_10[7];
    *(ushort *)(puVar7 + 2) = (ushort)local_10[8] << 8;
    *(ushort *)(puVar7 + 2) = (ushort)puVar7[2] | (ushort)local_10[9];
    pbVar2 = local_10 + 10;
    if ((short)puVar7[2] == 0) {
      *(uint *)((int)puVar7 + 10) = (uint)*pbVar2 << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 10) | (uint)local_10[0xb] << 0x10;
      *(uint *)((int)puVar7 + 10) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0xc] << 8;
      *(uint *)((int)puVar7 + 10) = uVar6;
      *(uint *)((int)puVar7 + 10) = uVar6 | local_10[0xd];
      *(uint *)((int)puVar7 + 0xe) = (uint)local_10[0xe] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0xe) | (uint)local_10[0xf] << 0x10;
      *(uint *)((int)puVar7 + 0xe) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x10] << 8;
      *(uint *)((int)puVar7 + 0xe) = uVar6;
      *(uint *)((int)puVar7 + 0xe) = uVar6 | local_10[0x11];
      *(uint *)((int)puVar7 + 0x12) = (uint)local_10[0x12] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x12) | (uint)local_10[0x13] << 0x10;
      *(uint *)((int)puVar7 + 0x12) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x14] << 8;
      *(uint *)((int)puVar7 + 0x12) = uVar6;
      *(uint *)((int)puVar7 + 0x12) = uVar6 | local_10[0x15];
      *(uint *)((int)puVar7 + 0x16) = (uint)local_10[0x16] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x16) | (uint)local_10[0x17] << 0x10;
      *(uint *)((int)puVar7 + 0x16) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x18] << 8;
      *(uint *)((int)puVar7 + 0x16) = uVar6;
      *(uint *)((int)puVar7 + 0x16) = uVar6 | local_10[0x19];
      *(uint *)((int)puVar7 + 0x1a) = (uint)local_10[0x1a] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x1a) | (uint)local_10[0x1b] << 0x10;
      *(uint *)((int)puVar7 + 0x1a) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x1c] << 8;
      *(uint *)((int)puVar7 + 0x1a) = uVar6;
      *(uint *)((int)puVar7 + 0x1a) = uVar6 | local_10[0x1d];
      *(uint *)((int)puVar7 + 0x1e) = (uint)local_10[0x1e] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x1e) | (uint)local_10[0x1f] << 0x10;
      *(uint *)((int)puVar7 + 0x1e) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x20] << 8;
      *(uint *)((int)puVar7 + 0x1e) = uVar6;
      *(uint *)((int)puVar7 + 0x1e) = uVar6 | local_10[0x21];
      *(uint *)((int)puVar7 + 0x22) = (uint)local_10[0x22] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x22) | (uint)local_10[0x23] << 0x10;
      *(uint *)((int)puVar7 + 0x22) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x24] << 8;
      *(uint *)((int)puVar7 + 0x22) = uVar6;
      *(uint *)((int)puVar7 + 0x22) = uVar6 | local_10[0x25];
      *(uint *)((int)puVar7 + 0x26) = (uint)local_10[0x26] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x26) | (uint)local_10[0x27] << 0x10;
      *(uint *)((int)puVar7 + 0x26) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x28] << 8;
      *(uint *)((int)puVar7 + 0x26) = uVar6;
      *(uint *)((int)puVar7 + 0x26) = uVar6 | local_10[0x29];
      *(uint *)((int)puVar7 + 0x2a) = (uint)local_10[0x2a] << 0x18;
      uVar6 = *(uint *)((int)puVar7 + 0x2a) | (uint)local_10[0x2b] << 0x10;
      *(uint *)((int)puVar7 + 0x2a) = uVar6;
      uVar6 = uVar6 | (uint)local_10[0x2c] << 8;
      *(uint *)((int)puVar7 + 0x2a) = uVar6;
      *(uint *)((int)puVar7 + 0x2a) = uVar6 | local_10[0x2d];
      *(ushort *)((int)puVar7 + 0x2e) = (ushort)local_10[0x2e] << 8;
      *(ushort *)((int)puVar7 + 0x2e) = *(ushort *)((int)puVar7 + 0x2e) | (ushort)local_10[0x2f];
      *(ushort *)(puVar7 + 0xc) = (ushort)local_10[0x30] << 8;
      *(ushort *)(puVar7 + 0xc) = (ushort)puVar7[0xc] | (ushort)local_10[0x31];
      pbVar2 = local_10 + 0x32;
    }
  }
  if (pbVar2 == (byte *)0x0) {
    local_8 = -1;
  }
  if (*(int *)((int)this + 0x2a8) == 0) {
    puVar11 = &local_c;
    uVar9 = 0x66211dd2;
    local_10 = (byte *)FUN_66209a90(*(void **)(*(int *)((int)this + 0x100) + 8),puVar11);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_46 = 0;
    uStack_44._0_2_ = 0;
    uStack_44._2_2_ = 0;
    local_40 = 0;
    uStack_3e._0_2_ = 0;
    uStack_3e._2_2_ = 0;
    local_3a = 0;
    uStack_38._0_2_ = 0;
    uStack_38._2_2_ = 0;
    local_34 = 0;
    uStack_32._0_2_ = 0;
    uStack_32._2_2_ = 0;
    if (local_10 == (byte *)0x0) {
      local_50 = 0x434f4e54;
      local_48 = 0;
      uStack_44._0_2_ = 0;
      uStack_44._2_2_ = 0;
      uStack_44 = (byte *)0x0;
      local_46 = 0;
      uStack_3e._0_2_ = 0;
      uStack_3e._2_2_ = 0;
      uStack_3e = (byte *)0x0;
      local_40 = 0;
      uStack_38._0_2_ = 0;
      uStack_38._2_2_ = 0;
      uStack_38 = (byte *)0x0;
      local_3a = 0;
      uStack_32._0_2_ = 0;
      uStack_32._2_2_ = 0;
      uStack_32 = (byte *)0x0;
      local_34 = 0;
    }
    else {
      uStack_44 = (byte *)0x0;
      uStack_3e = (byte *)0x0;
      uStack_38 = (byte *)0x0;
      uStack_32 = (byte *)0x0;
      if (local_c != 0) {
        local_50 = (uint)*local_10 << 0x18 | (uint)local_10[1] << 0x10 | (uint)local_10[2] << 8 |
                   (uint)local_10[3];
        local_4c = (uint)local_10[4] << 0x18 | (uint)local_10[5] << 0x10 | (uint)local_10[6] << 8 |
                   (uint)local_10[7];
        local_48 = CONCAT11(local_10[8],local_10[9]);
        uStack_44 = (byte *)0x0;
        uStack_3e = (byte *)0x0;
        uStack_38 = (byte *)0x0;
        uStack_32 = (byte *)0x0;
        if (CONCAT11(local_10[8],local_10[9]) == 0) {
          pbVar2 = local_10 + 0xc;
          local_46 = CONCAT11(local_10[10],local_10[0xb]);
          pbVar5 = pbVar2 + CONCAT11(local_10[10],local_10[0xb]);
          uStack_44 = (byte *)0x0;
          uStack_3e = (byte *)0x0;
          uStack_38 = (byte *)0x0;
          uStack_32 = (byte *)0x0;
          if ((int)pbVar5 - (int)local_10 <= (int)local_c) {
            uStack_44._0_2_ = SUB42(pbVar2,0);
            uStack_44._2_2_ = (undefined2)((uint)pbVar2 >> 0x10);
            pbVar3 = pbVar5 + 2;
            local_40 = CONCAT11(*pbVar5,pbVar5[1]);
            pbVar5 = pbVar3 + CONCAT11(*pbVar5,pbVar5[1]);
            uStack_44 = pbVar2;
            uStack_3e = (byte *)0x0;
            uStack_38 = (byte *)0x0;
            uStack_32 = (byte *)0x0;
            if ((int)pbVar5 - (int)local_10 <= (int)local_c) {
              uStack_3e._0_2_ = SUB42(pbVar3,0);
              uStack_3e._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
              pbVar2 = pbVar5 + 2;
              local_3a = CONCAT11(*pbVar5,pbVar5[1]);
              pbVar5 = pbVar2 + CONCAT11(*pbVar5,pbVar5[1]);
              uStack_3e = pbVar3;
              uStack_38 = (byte *)0x0;
              uStack_32 = (byte *)0x0;
              if ((int)pbVar5 - (int)local_10 <= (int)local_c) {
                uStack_38._0_2_ = SUB42(pbVar2,0);
                uStack_38._2_2_ = (undefined2)((uint)pbVar2 >> 0x10);
                pbVar3 = pbVar5 + 2;
                local_34 = CONCAT11(*pbVar5,pbVar5[1]);
                uStack_38 = pbVar2;
                uStack_32 = (byte *)0x0;
                if ((int)(pbVar3 + ((uint)CONCAT11(*pbVar5,pbVar5[1]) - (int)local_10)) <=
                    (int)local_c) {
                  uStack_32._0_2_ = SUB42(pbVar3,0);
                  uStack_32._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
                  uStack_32 = pbVar3;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = &local_50;
  }
  else if (this == (void *)0xfffffd54) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((int)this + 0x2b4);
    uStack_44 = (byte *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (byte *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (byte *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (byte *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
  }
  puVar8 = (uint *)&stack0xffffff80;
  for (iVar4 = 8; uVar10 = SUB42(puVar11,0), iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(short *)puVar8 = (short)*puVar7;
  FUN_66225880((void *)((int)this + 0x128),in_stack_ffffff80,in_stack_ffffff84,in_stack_ffffff88,
               in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98,uVar9,uVar10)
  ;
  this_00 = (void *)((int)this + 0x128);
  FUN_66225a10(this_00,*(undefined2 *)(*(int *)((int)this + 0x56) + 0x30));
  pbVar2 = local_10;
  if (local_8 == 0) {
    if (*(int **)((int)this + 0x2da) != (int *)0x0) {
      local_8 = FUN_6622a5a0(*(int **)((int)this + 0x2da));
    }
    pbVar2 = local_10;
    if (local_8 == 0) {
      local_8 = FUN_66226250(this_00);
      pbVar2 = local_10;
      if (local_8 == 0) {
        local_8 = FUN_66225a30(this_00,param_1);
        pbVar2 = (byte *)(**(code **)(*(int *)this + 0x10))();
      }
    }
  }
  uVar9 = local_18 & 0xffff;
  FUN_66224800(*(int **)((int)this + 0x2d6));
  pbVar5 = pbVar2;
  while ((pbVar2 != (byte *)0x0 && (local_8 == 0))) {
    iVar4 = FUN_6620e950(this,local_18 & 0xffff);
    if (iVar4 == 0) {
      FUN_66224860(*(void **)((int)this + 0x2d6),local_c);
      local_2c = 1;
      local_20 = 0;
      local_2a = (short)local_c + 0xd;
      local_26 = local_1c;
      local_28 = (undefined2)local_18;
      local_22 = (ushort)((local_14 & 3) == 0);
      local_8 = FUN_66229050((void *)((int)this + 0x128),&local_2c,(undefined4 *)pbVar5,local_c);
    }
    else {
      local_8 = FUN_66229920((void *)((int)this + 0x128),&local_1c,(undefined4 *)pbVar5,local_c);
      if (-1 < local_8) {
        local_8 = FUN_66224860(*(void **)((int)this + 0x2d6),local_c);
      }
    }
    (**(code **)(*(int *)this + 0x14))();
    pbVar2 = (byte *)(**(code **)(*(int *)this + 0x10))();
    pbVar5 = pbVar2;
    local_10 = pbVar2;
    if (((local_8 == 0) && (pbVar2 != (byte *)0x0)) && ((local_18 & 0xffff) != uVar9)) {
      iVar4 = FUN_6620e950(this,local_18 & 0xffff);
      pbVar5 = local_10;
      if (iVar4 == 0) {
        local_8 = FUN_66228f00((int)this + 0x128);
        uVar9 = local_18 & 0xffff;
        pbVar5 = local_10;
      }
    }
  }
  if (local_8 == 0) {
    local_8 = FUN_66229da0((void *)((int)this + 0x128));
  }
  FUN_66224940(*(int **)((int)this + 0x2d6));
  *(int *)((int)this + 0x24) = local_8;
  return;
}


