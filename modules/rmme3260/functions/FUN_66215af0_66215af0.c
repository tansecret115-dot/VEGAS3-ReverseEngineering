/* Module: rmme3260.dll
   Function: FUN_66215af0
   Address: 66215af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66215af0(int *param_1)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  void *pvVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  bool bVar22;
  undefined4 auStackY_bc [12];
  undefined4 uStackY_8c;
  byte *pbStackY_88;
  undefined4 local_6c [9];
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  byte local_3e;
  byte bStack_3d;
  undefined4 uStack_3c;
  byte local_38;
  byte bStack_37;
  undefined4 uStack_36;
  byte local_32;
  byte bStack_31;
  undefined4 uStack_30;
  byte local_2c;
  byte bStack_2b;
  undefined4 uStack_2a;
  byte *local_20 [3];
  byte *local_14;
  byte *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x386) == 0) {
    *(undefined4 *)((int)param_1 + 0x386) = 1;
  }
  local_c = param_1;
  switch(*(undefined4 *)((int)param_1 + 0x386)) {
  case 1:
    if ((uint)param_1[0x3f] < 0x40) {
      pvVar11 = operator_new(0x35c);
      if (pvVar11 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        if (param_1 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = param_1 + 0x36;
        }
        pbStackY_88 = (byte *)0x66215b72;
        piVar5 = FUN_66268600(pvVar11,0,piVar5,(int *)param_1[0xd9]);
      }
      *(int **)((int)param_1 + 0x36e) = piVar5;
      (**(code **)(*piVar5 + 4))();
      if ((int *)param_1[0xd9] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xd9] + 8))();
        param_1[0xd9] = 0;
      }
      local_8 = FUN_662686d0(*(void **)((int)param_1 + 0x36e),(char *)0x0);
    }
    else {
      local_8 = 0x80004005;
    }
    break;
  case 2:
    local_8 = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x50524f50,0);
    break;
  case 3:
  case 9:
    local_8 = FUN_662690e0(*(void **)((int)param_1 + 0x36e),*(undefined4 *)((int)param_1 + 0x372));
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  case 4:
    local_14 = (byte *)0x0;
    puVar7 = operator_new(0x32);
    if (puVar7 == (undefined4 *)0x0) {
      local_8 = 0x8007000e;
      uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
      uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
      uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
      uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
      break;
    }
    iVar10 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    pbVar8 = (byte *)(**(code **)(**(int **)((int)param_1 + 0x376) + 0x1c))();
    if (iVar10 == 0) {
      pbVar9 = (byte *)0x0;
    }
    else {
      *puVar7 = 0x50524f50;
      puVar7[1] = 0x32;
      bVar3 = *pbVar8;
      *(ushort *)(puVar7 + 2) = (ushort)bVar3 << 8;
      sVar16 = CONCAT11(bVar3,pbVar8[1]);
      pbVar9 = pbVar8 + 2;
      *(short *)(puVar7 + 2) = sVar16;
      if (sVar16 == 0) {
        bVar3 = *pbVar9;
        *(uint *)((int)puVar7 + 10) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar7 + 10) = (uint)bVar3 << 0x18 | (uint)pbVar8[3] << 0x10;
        *(uint *)((int)puVar7 + 10) = *(uint *)((int)puVar7 + 10) | (uint)pbVar8[4] << 8;
        *(uint *)((int)puVar7 + 10) = *(uint *)((int)puVar7 + 10) | (uint)pbVar8[5];
        bVar3 = pbVar8[6];
        *(uint *)((int)puVar7 + 0xe) = (uint)bVar3 << 0x18;
        uVar14 = (uint)bVar3 << 0x18 | (uint)pbVar8[7] << 0x10;
        *(uint *)((int)puVar7 + 0xe) = uVar14;
        uVar14 = uVar14 | (uint)pbVar8[8] << 8;
        *(uint *)((int)puVar7 + 0xe) = uVar14;
        *(uint *)((int)puVar7 + 0xe) = uVar14 | pbVar8[9];
        bVar3 = pbVar8[10];
        *(uint *)((int)puVar7 + 0x12) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar7 + 0x12) = (uint)bVar3 << 0x18 | (uint)pbVar8[0xb] << 0x10;
        *(uint *)((int)puVar7 + 0x12) = *(uint *)((int)puVar7 + 0x12) | (uint)pbVar8[0xc] << 8;
        *(uint *)((int)puVar7 + 0x12) = *(uint *)((int)puVar7 + 0x12) | (uint)pbVar8[0xd];
        bVar3 = pbVar8[0xe];
        *(uint *)((int)puVar7 + 0x16) = (uint)bVar3 << 0x18;
        uVar14 = (uint)bVar3 << 0x18 | (uint)pbVar8[0xf] << 0x10;
        *(uint *)((int)puVar7 + 0x16) = uVar14;
        uVar14 = uVar14 | (uint)pbVar8[0x10] << 8;
        *(uint *)((int)puVar7 + 0x16) = uVar14;
        *(uint *)((int)puVar7 + 0x16) = uVar14 | pbVar8[0x11];
        bVar3 = pbVar8[0x12];
        *(uint *)((int)puVar7 + 0x1a) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar7 + 0x1a) = (uint)bVar3 << 0x18 | (uint)pbVar8[0x13] << 0x10;
        *(uint *)((int)puVar7 + 0x1a) = *(uint *)((int)puVar7 + 0x1a) | (uint)pbVar8[0x14] << 8;
        *(uint *)((int)puVar7 + 0x1a) = *(uint *)((int)puVar7 + 0x1a) | (uint)pbVar8[0x15];
        bVar3 = pbVar8[0x16];
        *(uint *)((int)puVar7 + 0x1e) = (uint)bVar3 << 0x18;
        uVar14 = (uint)bVar3 << 0x18 | (uint)pbVar8[0x17] << 0x10;
        *(uint *)((int)puVar7 + 0x1e) = uVar14;
        uVar14 = uVar14 | (uint)pbVar8[0x18] << 8;
        *(uint *)((int)puVar7 + 0x1e) = uVar14;
        *(uint *)((int)puVar7 + 0x1e) = uVar14 | pbVar8[0x19];
        bVar3 = pbVar8[0x1a];
        *(uint *)((int)puVar7 + 0x22) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar7 + 0x22) = (uint)bVar3 << 0x18 | (uint)pbVar8[0x1b] << 0x10;
        *(uint *)((int)puVar7 + 0x22) = *(uint *)((int)puVar7 + 0x22) | (uint)pbVar8[0x1c] << 8;
        *(uint *)((int)puVar7 + 0x22) = *(uint *)((int)puVar7 + 0x22) | (uint)pbVar8[0x1d];
        bVar3 = pbVar8[0x1e];
        *(uint *)((int)puVar7 + 0x26) = (uint)bVar3 << 0x18;
        uVar14 = (uint)bVar3 << 0x18 | (uint)pbVar8[0x1f] << 0x10;
        *(uint *)((int)puVar7 + 0x26) = uVar14;
        uVar14 = uVar14 | (uint)pbVar8[0x20] << 8;
        *(uint *)((int)puVar7 + 0x26) = uVar14;
        *(uint *)((int)puVar7 + 0x26) = uVar14 | pbVar8[0x21];
        bVar3 = pbVar8[0x22];
        *(uint *)((int)puVar7 + 0x2a) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar7 + 0x2a) = (uint)bVar3 << 0x18 | (uint)pbVar8[0x23] << 0x10;
        *(uint *)((int)puVar7 + 0x2a) = *(uint *)((int)puVar7 + 0x2a) | (uint)pbVar8[0x24] << 8;
        *(uint *)((int)puVar7 + 0x2a) = *(uint *)((int)puVar7 + 0x2a) | (uint)pbVar8[0x25];
        *(ushort *)((int)puVar7 + 0x2e) = (ushort)pbVar8[0x26] << 8;
        *(ushort *)((int)puVar7 + 0x2e) = *(ushort *)((int)puVar7 + 0x2e) | (ushort)pbVar8[0x27];
        *(ushort *)(puVar7 + 0xc) = (ushort)pbVar8[0x28] << 8;
        *(ushort *)(puVar7 + 0xc) = *(ushort *)(puVar7 + 0xc) | (ushort)pbVar8[0x29];
        pbVar9 = pbVar8 + 0x2a;
      }
    }
    if (pbVar9 == (byte *)0x0) {
      local_8 = 0xffffffff;
      uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
      uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
      uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
      uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
      break;
    }
    if (*(short *)(puVar7 + 2) != 0) {
      local_8 = 0x80040005;
      break;
    }
    *(uint *)((int)param_1 + 0x37a) = (uint)*(ushort *)((int)puVar7 + 0x2e);
    puVar1 = (ushort *)(*(int *)((int)param_1 + 0x56) + 0x30);
    *puVar1 = *puVar1 | *(ushort *)(puVar7 + 0xc);
    puVar6 = (undefined1 *)FUN_66209a30(param_1,&local_14);
    puVar18 = *(undefined4 **)((int)param_1 + 0x56);
    *puVar6 = (char)((uint)*puVar18 >> 0x18);
    puVar6[1] = (char)((uint)*puVar18 >> 0x10);
    puVar6[2] = (char)((uint)*puVar18 >> 8);
    puVar6[3] = *(undefined1 *)puVar18;
    puVar6[4] = (char)((uint)puVar18[1] >> 0x18);
    puVar6[5] = (char)((uint)puVar18[1] >> 0x10);
    puVar6[6] = (char)((uint)puVar18[1] >> 8);
    puVar6[7] = *(undefined1 *)(puVar18 + 1);
    puVar6[8] = *(undefined1 *)((int)puVar18 + 9);
    puVar6[9] = *(undefined1 *)(puVar18 + 2);
    if (*(short *)(puVar18 + 2) == 0) {
      puVar6[10] = (char)((uint)*(undefined4 *)((int)puVar18 + 10) >> 0x18);
      puVar6[0xb] = (char)((uint)*(undefined4 *)((int)puVar18 + 10) >> 0x10);
      puVar6[0xc] = (char)((uint)*(undefined4 *)((int)puVar18 + 10) >> 8);
      puVar6[0xd] = *(undefined1 *)((int)puVar18 + 10);
      puVar6[0xe] = (char)((uint)*(undefined4 *)((int)puVar18 + 0xe) >> 0x18);
      puVar6[0xf] = (char)((uint)*(undefined4 *)((int)puVar18 + 0xe) >> 0x10);
      puVar6[0x10] = (char)((uint)*(undefined4 *)((int)puVar18 + 0xe) >> 8);
      puVar6[0x11] = *(undefined1 *)((int)puVar18 + 0xe);
      puVar6[0x12] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x12) >> 0x18);
      puVar6[0x13] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x12) >> 0x10);
      puVar6[0x14] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x12) >> 8);
      puVar6[0x15] = *(undefined1 *)((int)puVar18 + 0x12);
      puVar6[0x16] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x16) >> 0x18);
      puVar6[0x17] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x16) >> 0x10);
      puVar6[0x18] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x16) >> 8);
      puVar6[0x19] = *(undefined1 *)((int)puVar18 + 0x16);
      puVar6[0x1a] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1a) >> 0x18);
      puVar6[0x1b] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1a) >> 0x10);
      puVar6[0x1c] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1a) >> 8);
      puVar6[0x1d] = *(undefined1 *)((int)puVar18 + 0x1a);
      puVar6[0x1e] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1e) >> 0x18);
      puVar6[0x1f] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1e) >> 0x10);
      puVar6[0x20] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x1e) >> 8);
      puVar6[0x21] = *(undefined1 *)((int)puVar18 + 0x1e);
      puVar6[0x22] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x22) >> 0x18);
      puVar6[0x23] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x22) >> 0x10);
      puVar6[0x24] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x22) >> 8);
      puVar6[0x25] = *(undefined1 *)((int)puVar18 + 0x22);
      puVar6[0x26] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x26) >> 0x18);
      puVar6[0x27] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x26) >> 0x10);
      puVar6[0x28] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x26) >> 8);
      puVar6[0x29] = *(undefined1 *)((int)puVar18 + 0x26);
      puVar6[0x2a] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x2a) >> 0x18);
      puVar6[0x2b] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x2a) >> 0x10);
      puVar6[0x2c] = (char)((uint)*(undefined4 *)((int)puVar18 + 0x2a) >> 8);
      puVar6[0x2d] = *(undefined1 *)((int)puVar18 + 0x2a);
      puVar6[0x2e] = *(undefined1 *)((int)puVar18 + 0x2f);
      puVar6[0x2f] = *(undefined1 *)((int)puVar18 + 0x2e);
      puVar6[0x30] = *(undefined1 *)((int)puVar18 + 0x31);
      puVar6[0x31] = *(undefined1 *)(puVar18 + 0xc);
    }
    operator_delete(puVar7);
    if (param_1[0x41] == 0) {
      local_8 = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x434f4e54,0);
      break;
    }
    goto LAB_662162e4;
  case 5:
    local_8 = FUN_662690e0(*(void **)((int)param_1 + 0x36e),*(undefined4 *)((int)param_1 + 0x372));
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  case 6:
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3e = 0;
    bStack_3d = 0;
    uStack_3c._0_2_ = 0;
    uStack_3c._2_2_ = 0;
    local_38 = 0;
    bStack_37 = 0;
    uStack_36._0_2_ = 0;
    uStack_36._2_2_ = 0;
    local_32 = 0;
    bStack_31 = 0;
    uStack_30._0_2_ = 0;
    uStack_30._2_2_ = 0;
    local_2c = 0;
    bStack_2b = 0;
    uStack_2a._0_2_ = 0;
    uStack_2a._2_2_ = 0;
    iVar10 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    puVar6 = (undefined1 *)(**(code **)(**(int **)((int)param_1 + 0x376) + 0x1c))();
    pbVar17 = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    pbVar13 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    pbVar9 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    pbVar8 = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    if (iVar10 == 0) {
      pbVar12 = (byte *)0x0;
      uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
      uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
      uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
      uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    }
    else {
      local_48 = 0x434f4e54;
      local_40 = CONCAT11(*puVar6,puVar6[1]);
      pbVar12 = puVar6 + 2;
      local_44 = 0x12;
      uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
      uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
      uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
      uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
      if (local_40 == 0) {
        local_3e = puVar6[3];
        bStack_3d = *pbVar12;
        uStack_3c = puVar6 + 4;
        pbVar12 = uStack_3c + CONCAT11(bStack_3d,local_3e);
        if (iVar10 < (int)pbVar12 - (int)puVar6) {
          pbVar12 = (byte *)0x0;
          uStack_3c = pbVar8;
          uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
          uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
          uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
        }
        else {
          bStack_37 = *pbVar12;
          local_38 = pbVar12[1];
          uStack_36 = pbVar12 + 2;
          pbVar8 = uStack_36 + CONCAT11(bStack_37,local_38);
          if (iVar10 < (int)pbVar8 - (int)puVar6) {
            pbVar12 = (byte *)0x0;
            uStack_36 = pbVar9;
            uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
            uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
          }
          else {
            bStack_31 = *pbVar8;
            local_32 = pbVar8[1];
            uStack_30 = pbVar8 + 2;
            pbVar8 = uStack_30 + CONCAT11(bStack_31,local_32);
            if (iVar10 < (int)pbVar8 - (int)puVar6) {
              pbVar12 = (byte *)0x0;
              uStack_30 = pbVar13;
              uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
            }
            else {
              bStack_2b = *pbVar8;
              local_2c = pbVar8[1];
              uStack_2a = pbVar8 + 2;
              pbVar12 = uStack_2a + CONCAT11(bStack_2b,local_2c);
              if (iVar10 < (int)pbVar12 - (int)puVar6) {
                pbVar12 = (byte *)0x0;
                uStack_2a = pbVar17;
              }
            }
          }
        }
      }
    }
    if (pbVar12 == (byte *)0x0) {
      local_8 = 0xffffffff;
      break;
    }
    iVar10 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    pbVar8 = operator_new(iVar10 + 8);
    *pbVar8 = (byte)((uint)local_48 >> 0x18);
    pbVar8[1] = (byte)((uint)local_48 >> 0x10);
    pbVar8[2] = (byte)((uint)local_48 >> 8);
    pbVar8[3] = (byte)local_48;
    pbVar8[4] = (byte)((uint)local_44 >> 0x18);
    pbVar8[5] = (byte)((uint)local_44 >> 0x10);
    pbVar8[6] = (byte)((uint)local_44 >> 8);
    pbVar8[7] = (byte)local_44;
    pbVar8[8] = local_40._1_1_;
    pbVar8[9] = (byte)local_40;
    if (local_40 == 0) {
      pbVar8[10] = bStack_3d;
      pbVar8[0xb] = local_3e;
      uVar4 = CONCAT11(bStack_3d,local_3e);
      pbVar17 = pbVar8 + 0xc + uVar4;
      pbVar9 = uStack_3c;
      pbVar13 = pbVar8 + 0xc;
      for (uVar14 = (uint)(uVar4 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar14 = uVar4 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
      *pbVar17 = bStack_37;
      uVar4 = CONCAT11(bStack_37,local_38);
      pbVar17[1] = local_38;
      pbVar9 = uStack_36;
      pbVar13 = pbVar17 + 2;
      for (uVar14 = (uint)(uVar4 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      pbVar17 = pbVar17 + 2 + uVar4;
      for (uVar14 = uVar4 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
      *pbVar17 = bStack_31;
      uVar4 = CONCAT11(bStack_31,local_32);
      pbVar17[1] = local_32;
      pbVar9 = uStack_30;
      pbVar13 = pbVar17 + 2;
      for (uVar14 = (uint)(uVar4 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      pbVar17 = pbVar17 + 2 + uVar4;
      for (uVar14 = uVar4 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
      *pbVar17 = bStack_2b;
      uVar4 = CONCAT11(bStack_2b,local_2c);
      local_14 = (byte *)(uint)uVar4;
      pbVar17[1] = local_2c;
      pbVar9 = uStack_2a;
      pbVar13 = pbVar17 + 2;
      for (uVar14 = (uint)(uVar4 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar14 = uVar4 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
    pbStackY_88 = (byte *)0x662162c3;
    local_10 = pbVar8;
    local_8 = (**(code **)(*param_1 + 0x1c))();
    if (local_8 == 0) {
      param_1[0x41] = 1;
    }
    if (pbVar8 != (byte *)0x0) {
      operator_delete(pbVar8);
    }
LAB_662162e4:
    *(undefined4 *)((int)param_1 + 0x386) = 7;
    FUN_66215af0(param_1);
    break;
  case 7:
    pvVar11 = operator_new(0xc);
    *(void **)(param_1[0x44] + param_1[0x43] * 0x2a) = pvVar11;
    *(undefined4 *)((int)param_1 + 0x37e) = 0;
    *(undefined4 *)((int)param_1 + 0x386) = 8;
    FUN_66215af0(param_1);
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  case 8:
    local_8 = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x4d445052,
                           (uint)(*(int *)((int)param_1 + 0x37e) != 0));
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  case 10:
    local_10 = (byte *)0x0;
    puVar7 = operator_new(0x42);
    piVar5 = local_c;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &DAT_6626b888;
      *(undefined4 *)((int)puVar7 + 0x3e) = 0;
    }
    if (puVar7 == (undefined4 *)0x0) {
      local_8 = 0x8007000e;
      uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
      uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
      uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
      uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    }
    else {
      pbVar8 = (byte *)(**(code **)(**(int **)((int)local_c + 0x376) + 0x18))();
      local_10 = pbVar8;
      pbVar9 = (byte *)(**(code **)(**(int **)((int)piVar5 + 0x376) + 0x1c))();
      piVar5 = local_c;
      if (pbVar8 == (byte *)0x0) {
        pbVar13 = (byte *)0x0;
      }
      else {
        puVar7[1] = 0x4d445052;
        puVar7[2] = 0x2e;
        bVar3 = *pbVar9;
        *(ushort *)(puVar7 + 3) = (ushort)bVar3 << 8;
        sVar16 = CONCAT11(bVar3,pbVar9[1]);
        pbVar13 = pbVar9 + 2;
        *(short *)(puVar7 + 3) = sVar16;
        if (sVar16 == 0) {
          *(ushort *)((int)puVar7 + 0xe) = (ushort)*pbVar13 << 8;
          *(ushort *)((int)puVar7 + 0xe) = *(ushort *)((int)puVar7 + 0xe) | (ushort)pbVar9[3];
          bVar3 = pbVar9[4];
          puVar7[4] = (uint)bVar3 << 0x18;
          puVar7[4] = (uint)bVar3 << 0x18 | (uint)pbVar9[5] << 0x10;
          puVar7[4] = puVar7[4] | (uint)pbVar9[6] << 8;
          puVar7[4] = puVar7[4] | (uint)pbVar9[7];
          bVar3 = pbVar9[8];
          puVar7[5] = (uint)bVar3 << 0x18;
          puVar7[5] = (uint)bVar3 << 0x18 | (uint)pbVar9[9] << 0x10;
          puVar7[5] = puVar7[5] | (uint)pbVar9[10] << 8;
          puVar7[5] = puVar7[5] | (uint)pbVar9[0xb];
          bVar3 = pbVar9[0xc];
          puVar7[6] = (uint)bVar3 << 0x18;
          puVar7[6] = (uint)bVar3 << 0x18 | (uint)pbVar9[0xd] << 0x10;
          puVar7[6] = puVar7[6] | (uint)pbVar9[0xe] << 8;
          puVar7[6] = puVar7[6] | (uint)pbVar9[0xf];
          bVar3 = pbVar9[0x10];
          puVar7[7] = (uint)bVar3 << 0x18;
          puVar7[7] = (uint)bVar3 << 0x18 | (uint)pbVar9[0x11] << 0x10;
          puVar7[7] = puVar7[7] | (uint)pbVar9[0x12] << 8;
          puVar7[7] = puVar7[7] | (uint)pbVar9[0x13];
          bVar3 = pbVar9[0x14];
          puVar7[8] = (uint)bVar3 << 0x18;
          puVar7[8] = (uint)bVar3 << 0x18 | (uint)pbVar9[0x15] << 0x10;
          puVar7[8] = puVar7[8] | (uint)pbVar9[0x16] << 8;
          puVar7[8] = puVar7[8] | (uint)pbVar9[0x17];
          bVar3 = pbVar9[0x18];
          puVar7[9] = (uint)bVar3 << 0x18;
          puVar7[9] = (uint)bVar3 << 0x18 | (uint)pbVar9[0x19] << 0x10;
          puVar7[9] = puVar7[9] | (uint)pbVar9[0x1a] << 8;
          puVar7[9] = puVar7[9] | (uint)pbVar9[0x1b];
          bVar3 = pbVar9[0x1c];
          puVar7[10] = (uint)bVar3 << 0x18;
          puVar7[10] = (uint)bVar3 << 0x18 | (uint)pbVar9[0x1d] << 0x10;
          puVar7[10] = puVar7[10] | (uint)pbVar9[0x1e] << 8;
          puVar7[10] = puVar7[10] | (uint)pbVar9[0x1f];
          bVar3 = pbVar9[0x20];
          *(byte *)(puVar7 + 0xb) = bVar3;
          pbVar13 = pbVar9 + 0x21 + bVar3;
          if ((int)pbVar8 < (int)pbVar13 - (int)pbVar9) {
            pbVar13 = (byte *)0x0;
          }
          else {
            *(byte **)((int)puVar7 + 0x2d) = pbVar9 + 0x21;
            bVar3 = *pbVar13;
            *(byte *)((int)puVar7 + 0x31) = bVar3;
            pbVar17 = pbVar13 + 1 + bVar3;
            if ((int)pbVar8 < (int)pbVar17 - (int)pbVar9) {
              pbVar13 = (byte *)0x0;
            }
            else {
              *(byte **)((int)puVar7 + 0x32) = pbVar13 + 1;
              bVar3 = *pbVar17;
              *(uint *)((int)puVar7 + 0x36) = (uint)bVar3 << 0x18;
              *(uint *)((int)puVar7 + 0x36) = (uint)bVar3 << 0x18 | (uint)pbVar17[1] << 0x10;
              *(uint *)((int)puVar7 + 0x36) = *(uint *)((int)puVar7 + 0x36) | (uint)pbVar17[2] << 8;
              uVar14 = *(uint *)((int)puVar7 + 0x36) | (uint)pbVar17[3];
              *(uint *)((int)puVar7 + 0x36) = uVar14;
              pbVar13 = pbVar17 + 4 + uVar14;
              if (pbVar8 < pbVar13 + -(int)pbVar9) {
                pbVar13 = (byte *)0x0;
              }
              else {
                *(byte **)((int)puVar7 + 0x3a) = pbVar17 + 4;
              }
            }
          }
        }
      }
      if (pbVar13 == (byte *)0x0) {
        local_8 = 0xffffffff;
        uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
        uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
        uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
        uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
      }
      else if (*(short *)(puVar7 + 3) == 0) {
        iVar10 = (**(code **)(**(int **)((int)local_c + 0x376) + 0x18))();
        pbVar8 = operator_new(iVar10 + 8);
        pbStackY_88 = (byte *)0x66216647;
        local_14 = pbVar8;
        FUN_6620f800(puVar7 + 1,pbVar8,(int *)&local_10);
        if (*(short *)((int)puVar7 + 0xe) == (short)piVar5[0xda]) {
          local_8 = 0;
          pbStackY_88 = (byte *)0x66216671;
          FUN_66250790(local_20,*(undefined4 **)((int)puVar7 + 0x32),
                       (uint)*(byte *)((int)puVar7 + 0x31));
          puVar19 = auStackY_bc;
          puVar18 = puVar7;
          for (iVar10 = 0xe; puVar18 = puVar18 + 1, iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar19 = *puVar18;
            puVar19 = puVar19 + 1;
          }
          *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
          piVar5 = local_c;
          FUN_662251a0();
          pcVar20 = s_audio_x_pn_realaudio_6626f0fc;
          **(undefined2 **)(piVar5[0x44] + piVar5[0x43] * 0x2a) = *(undefined2 *)((int)puVar7 + 0xe)
          ;
          *(undefined2 *)(*(int *)(piVar5[0x44] + piVar5[0x43] * 0x2a) + 2) = (undefined2)local_8;
          *(undefined4 *)(*(int *)(piVar5[0x44] + piVar5[0x43] * 0x2a) + 4) = 0;
          do {
            bVar3 = *local_20[0];
            bVar22 = bVar3 < (byte)*pcVar20;
            if (bVar3 != *pcVar20) {
LAB_66216725:
              iVar10 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
              goto LAB_6621672a;
            }
            if (bVar3 == 0) break;
            bVar3 = local_20[0][1];
            bVar22 = bVar3 < (byte)pcVar20[1];
            if (bVar3 != pcVar20[1]) goto LAB_66216725;
            local_20[0] = local_20[0] + 2;
            pcVar20 = pcVar20 + 2;
          } while (bVar3 != 0);
          iVar10 = 0;
LAB_6621672a:
          piVar5 = local_c;
          if (iVar10 == 0) {
            FUN_66218480(local_6c);
            pbStackY_88 = (byte *)0x66216746;
            FUN_66217790(local_6c,local_14,local_10);
            iVar10 = FUN_66218540((int)local_6c);
            if ((iVar10 == 0x2e726134) &&
               (uVar4 = FUN_66218520((int)local_6c), piVar5 = local_c, 1 < uVar4)) {
              *(undefined4 *)(*(int *)(local_c[0x44] + local_c[0x43] * 0x2a) + 4) = 1;
              FUN_662184d0(local_6c);
            }
            else {
              piVar5 = local_c;
              FUN_662184d0(local_6c);
            }
          }
          pbStackY_88 = (byte *)0x662167bc;
          FUN_6624ff10(piVar5 + 0x3b,piVar5[0x3c],local_8 & 0xffff);
          *(undefined2 *)((int)puVar7 + 0xe) =
               *(undefined2 *)(*(int *)(piVar5[0x44] + piVar5[0x43] * 0x2a) + 2);
          FUN_66250210((int *)local_20);
          pbVar8 = local_14;
          piVar5 = local_c;
        }
        pbStackY_88 = (byte *)0x662167f8;
        FUN_6620f800(puVar7 + 1,pbVar8,(int *)&local_10);
        (**(code **)*puVar7)();
        pbStackY_88 = local_10;
        uStackY_8c = 0x6621680c;
        uVar14 = (**(code **)(*piVar5 + 0x1c))();
        local_8 = uVar14;
        if (pbVar8 != (byte *)0x0) {
          operator_delete(pbVar8);
        }
        uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
        uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
        uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
        uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
        if (-1 < (int)uVar14) {
          uVar14 = *(int *)((int)local_c + 0x37e) + 1;
          *(uint *)((int)local_c + 0x37e) = uVar14;
          if (uVar14 < *(uint *)((int)local_c + 0x37a)) {
            *(undefined4 *)((int)local_c + 0x386) = 8;
            FUN_66215af0(local_c);
            uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
            uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
            uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
            uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
          }
          else {
            *(undefined4 *)((int)local_c + 0x386) = 0xb;
            FUN_66215af0(local_c);
            uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
            uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
            uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
            uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
          }
        }
      }
      else {
        local_8 = 0x80040005;
        uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
        uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
        uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
        uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
      }
    }
    break;
  case 0xb:
    *(undefined4 *)(param_1[0x44] + 4 + param_1[0x43] * 0x2a) =
         *(undefined4 *)((int)param_1 + 0x36e);
    *(undefined4 *)((int)param_1 + 0x36e) = 0;
    *(undefined4 *)(param_1[0x44] + 8 + param_1[0x43] * 0x2a) = 1;
    pvVar11 = operator_new(*(int *)(param_1[0xd6] + -8) + 1);
    *(void **)(param_1[0x44] + 0xc + param_1[0x43] * 0x2a) = pvVar11;
    uVar14 = 0xffffffff;
    local_14 = (byte *)(param_1[0x43] * 0x15);
    pcVar20 = (char *)param_1[0xd6];
    do {
      pcVar21 = pcVar20;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar21 = pcVar20 + 1;
      cVar2 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar20 = pcVar21 + -uVar14;
    pcVar21 = *(char **)(param_1[0x44] + 0xc + param_1[0x43] * 0x2a);
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar20;
      pcVar20 = pcVar20 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar21 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      pcVar21 = pcVar21 + 1;
    }
    *(undefined4 *)((int)param_1 + 0x386) = 0xc;
    param_1[0x43] = param_1[0x43] + 1;
    FUN_66215af0(param_1);
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  case 0xc:
    param_1[0xcc] = 0;
    *(undefined4 *)((int)param_1 + 0x386) = 0;
    (**(code **)(*(int *)param_1[0xcb] + 0x14))();
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
    break;
  default:
    local_8 = 0x80040009;
    uStack_3c = (byte *)CONCAT22(uStack_3c._2_2_,(undefined2)uStack_3c);
    uStack_36 = (byte *)CONCAT22(uStack_36._2_2_,(undefined2)uStack_36);
    uStack_30 = (byte *)CONCAT22(uStack_30._2_2_,(undefined2)uStack_30);
    uStack_2a = (byte *)CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a);
  }
  if ((int)local_8 < 0) {
    local_c[9] = local_8;
    (**(code **)(*(int *)local_c[0xcb] + 0x14))();
  }
  return 0;
}


