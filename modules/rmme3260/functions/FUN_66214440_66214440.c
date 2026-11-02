/* Module: rmme3260.dll
   Function: FUN_66214440
   Address: 66214440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66214440(int *param_1)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  void *pvVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  char *pcVar23;
  int iVar24;
  undefined4 *puVar25;
  char *pcVar26;
  undefined4 auStackY_a0 [12];
  undefined4 uStackY_70;
  uint uStackY_6c;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 uStack_41;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined1 local_36;
  undefined1 uStack_35;
  undefined1 local_30;
  undefined1 uStack_2f;
  int local_24 [3];
  byte *local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  char local_5;
  
  iVar24 = 0;
  local_c = 0;
  if (param_1[0xd5] == 0) {
    param_1[0xd5] = 1;
  }
  switch(param_1[0xd5]) {
  case 1:
    local_10 = (undefined4 *)0x0;
    if (0 < param_1[0x3f]) {
      do {
        pcVar23 = (char *)param_1[0xd6];
        puVar9 = FUN_66250280(local_24,*(char **)(iVar24 + 0x10 + param_1[0x42]));
        iVar5 = _stricmp((char *)*puVar9,pcVar23);
        local_5 = iVar5 == 0;
        FUN_66250210(local_24);
        if (local_5 != '\0') {
          iVar13 = 0;
          iVar5 = *(int *)(param_1[0x42] + iVar24);
          if (0 < iVar5) {
            psVar6 = (short *)((int *)(param_1[0x42] + iVar24))[1];
            do {
              if ((short)param_1[0xda] == *psVar6) {
                if (*(int *)((int)param_1 + 0x36a) != 0) {
                  FUN_66225600(param_1 + 0x45,
                               CONCAT22((short)((uint)param_1[0x42] >> 0x10),
                                        *(undefined2 *)
                                         (*(int *)(param_1[0x42] + 4 + (int)local_10 * 0x18) + 2 +
                                         iVar13 * 4)),1);
                }
                param_1[0xd5] = 0;
                param_1[0xcc] = 0;
                goto LAB_662152a1;
              }
              iVar13 = iVar13 + 1;
              psVar6 = psVar6 + 2;
            } while (iVar13 < iVar5);
          }
        }
        local_10 = (undefined4 *)((int)local_10 + 1);
        iVar24 = iVar24 + 0x18;
      } while ((int)local_10 < param_1[0x3f]);
    }
    if ((uint)param_1[0x3f] < 0x40) {
      pvVar12 = operator_new(0x35c);
      if (pvVar12 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        if (param_1 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = param_1 + 0x36;
        }
        uStackY_6c = 0x66214550;
        piVar7 = FUN_66268600(pvVar12,0,piVar7,(int *)param_1[0xd9]);
      }
      *(int **)((int)param_1 + 0x36e) = piVar7;
      (**(code **)(*piVar7 + 4))();
      if ((int *)param_1[0xd9] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xd9] + 8))();
        param_1[0xd9] = 0;
      }
      local_c = FUN_662686d0(*(void **)((int)param_1 + 0x36e),(char *)0x0);
    }
    else {
      local_c = -0x7fffbffb;
    }
    break;
  case 2:
    local_c = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x50524f50,0);
    break;
  case 3:
    local_c = FUN_662690e0(*(void **)((int)param_1 + 0x36e),*(undefined4 *)((int)param_1 + 0x372));
    break;
  case 4:
    local_14 = 0;
    puVar9 = operator_new(0x32);
    if (puVar9 == (undefined4 *)0x0) {
      local_c = -0x7ff8fff2;
      break;
    }
    iVar24 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    pbVar10 = (byte *)(**(code **)(**(int **)((int)param_1 + 0x376) + 0x1c))();
    if (iVar24 == 0) {
      pbVar16 = (byte *)0x0;
    }
    else {
      *puVar9 = 0x50524f50;
      puVar9[1] = 0x32;
      bVar3 = *pbVar10;
      *(ushort *)(puVar9 + 2) = (ushort)bVar3 << 8;
      sVar19 = CONCAT11(bVar3,pbVar10[1]);
      pbVar16 = pbVar10 + 2;
      *(short *)(puVar9 + 2) = sVar19;
      if (sVar19 == 0) {
        bVar3 = *pbVar16;
        *(uint *)((int)puVar9 + 10) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar9 + 10) = (uint)bVar3 << 0x18 | (uint)pbVar10[3] << 0x10;
        *(uint *)((int)puVar9 + 10) = *(uint *)((int)puVar9 + 10) | (uint)pbVar10[4] << 8;
        *(uint *)((int)puVar9 + 10) = *(uint *)((int)puVar9 + 10) | (uint)pbVar10[5];
        bVar3 = pbVar10[6];
        *(uint *)((int)puVar9 + 0xe) = (uint)bVar3 << 0x18;
        uVar17 = (uint)bVar3 << 0x18 | (uint)pbVar10[7] << 0x10;
        *(uint *)((int)puVar9 + 0xe) = uVar17;
        uVar17 = uVar17 | (uint)pbVar10[8] << 8;
        *(uint *)((int)puVar9 + 0xe) = uVar17;
        *(uint *)((int)puVar9 + 0xe) = uVar17 | pbVar10[9];
        bVar3 = pbVar10[10];
        *(uint *)((int)puVar9 + 0x12) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar9 + 0x12) = (uint)bVar3 << 0x18 | (uint)pbVar10[0xb] << 0x10;
        *(uint *)((int)puVar9 + 0x12) = *(uint *)((int)puVar9 + 0x12) | (uint)pbVar10[0xc] << 8;
        *(uint *)((int)puVar9 + 0x12) = *(uint *)((int)puVar9 + 0x12) | (uint)pbVar10[0xd];
        bVar3 = pbVar10[0xe];
        *(uint *)((int)puVar9 + 0x16) = (uint)bVar3 << 0x18;
        uVar17 = (uint)bVar3 << 0x18 | (uint)pbVar10[0xf] << 0x10;
        *(uint *)((int)puVar9 + 0x16) = uVar17;
        uVar17 = uVar17 | (uint)pbVar10[0x10] << 8;
        *(uint *)((int)puVar9 + 0x16) = uVar17;
        *(uint *)((int)puVar9 + 0x16) = uVar17 | pbVar10[0x11];
        bVar3 = pbVar10[0x12];
        *(uint *)((int)puVar9 + 0x1a) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar9 + 0x1a) = (uint)bVar3 << 0x18 | (uint)pbVar10[0x13] << 0x10;
        *(uint *)((int)puVar9 + 0x1a) = *(uint *)((int)puVar9 + 0x1a) | (uint)pbVar10[0x14] << 8;
        *(uint *)((int)puVar9 + 0x1a) = *(uint *)((int)puVar9 + 0x1a) | (uint)pbVar10[0x15];
        bVar3 = pbVar10[0x16];
        *(uint *)((int)puVar9 + 0x1e) = (uint)bVar3 << 0x18;
        uVar17 = (uint)bVar3 << 0x18 | (uint)pbVar10[0x17] << 0x10;
        *(uint *)((int)puVar9 + 0x1e) = uVar17;
        uVar17 = uVar17 | (uint)pbVar10[0x18] << 8;
        *(uint *)((int)puVar9 + 0x1e) = uVar17;
        *(uint *)((int)puVar9 + 0x1e) = uVar17 | pbVar10[0x19];
        bVar3 = pbVar10[0x1a];
        *(uint *)((int)puVar9 + 0x22) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar9 + 0x22) = (uint)bVar3 << 0x18 | (uint)pbVar10[0x1b] << 0x10;
        *(uint *)((int)puVar9 + 0x22) = *(uint *)((int)puVar9 + 0x22) | (uint)pbVar10[0x1c] << 8;
        *(uint *)((int)puVar9 + 0x22) = *(uint *)((int)puVar9 + 0x22) | (uint)pbVar10[0x1d];
        bVar3 = pbVar10[0x1e];
        *(uint *)((int)puVar9 + 0x26) = (uint)bVar3 << 0x18;
        uVar17 = (uint)bVar3 << 0x18 | (uint)pbVar10[0x1f] << 0x10;
        *(uint *)((int)puVar9 + 0x26) = uVar17;
        uVar17 = uVar17 | (uint)pbVar10[0x20] << 8;
        *(uint *)((int)puVar9 + 0x26) = uVar17;
        *(uint *)((int)puVar9 + 0x26) = uVar17 | pbVar10[0x21];
        bVar3 = pbVar10[0x22];
        *(uint *)((int)puVar9 + 0x2a) = (uint)bVar3 << 0x18;
        *(uint *)((int)puVar9 + 0x2a) = (uint)bVar3 << 0x18 | (uint)pbVar10[0x23] << 0x10;
        *(uint *)((int)puVar9 + 0x2a) = *(uint *)((int)puVar9 + 0x2a) | (uint)pbVar10[0x24] << 8;
        *(uint *)((int)puVar9 + 0x2a) = *(uint *)((int)puVar9 + 0x2a) | (uint)pbVar10[0x25];
        *(ushort *)((int)puVar9 + 0x2e) = (ushort)pbVar10[0x26] << 8;
        *(ushort *)((int)puVar9 + 0x2e) = *(ushort *)((int)puVar9 + 0x2e) | (ushort)pbVar10[0x27];
        *(ushort *)(puVar9 + 0xc) = (ushort)pbVar10[0x28] << 8;
        *(ushort *)(puVar9 + 0xc) = *(ushort *)(puVar9 + 0xc) | (ushort)pbVar10[0x29];
        pbVar16 = pbVar10 + 0x2a;
      }
    }
    if (pbVar16 == (byte *)0x0) {
      local_c = -1;
      break;
    }
    if (*(short *)(puVar9 + 2) != 0) {
      local_c = -0x7ffbfffb;
      break;
    }
    *(uint *)((int)param_1 + 0x37a) = (uint)*(ushort *)((int)puVar9 + 0x2e);
    puVar1 = (ushort *)(*(int *)((int)param_1 + 0x56) + 0x30);
    *puVar1 = *puVar1 | *(ushort *)(puVar9 + 0xc);
    puVar11 = (undefined1 *)FUN_66209a30(param_1,&local_14);
    puVar20 = *(undefined4 **)((int)param_1 + 0x56);
    *puVar11 = (char)((uint)*puVar20 >> 0x18);
    puVar11[1] = (char)((uint)*puVar20 >> 0x10);
    puVar11[2] = (char)((uint)*puVar20 >> 8);
    puVar11[3] = *(undefined1 *)puVar20;
    puVar11[4] = (char)((uint)puVar20[1] >> 0x18);
    puVar11[5] = (char)((uint)puVar20[1] >> 0x10);
    puVar11[6] = (char)((uint)puVar20[1] >> 8);
    puVar11[7] = *(undefined1 *)(puVar20 + 1);
    puVar11[8] = *(undefined1 *)((int)puVar20 + 9);
    puVar11[9] = *(undefined1 *)(puVar20 + 2);
    if (*(short *)(puVar20 + 2) == 0) {
      puVar11[10] = (char)((uint)*(undefined4 *)((int)puVar20 + 10) >> 0x18);
      puVar11[0xb] = (char)((uint)*(undefined4 *)((int)puVar20 + 10) >> 0x10);
      puVar11[0xc] = (char)((uint)*(undefined4 *)((int)puVar20 + 10) >> 8);
      puVar11[0xd] = *(undefined1 *)((int)puVar20 + 10);
      puVar11[0xe] = (char)((uint)*(undefined4 *)((int)puVar20 + 0xe) >> 0x18);
      puVar11[0xf] = (char)((uint)*(undefined4 *)((int)puVar20 + 0xe) >> 0x10);
      puVar11[0x10] = (char)((uint)*(undefined4 *)((int)puVar20 + 0xe) >> 8);
      puVar11[0x11] = *(undefined1 *)((int)puVar20 + 0xe);
      puVar11[0x12] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x12) >> 0x18);
      puVar11[0x13] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x12) >> 0x10);
      puVar11[0x14] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x12) >> 8);
      puVar11[0x15] = *(undefined1 *)((int)puVar20 + 0x12);
      puVar11[0x16] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x16) >> 0x18);
      puVar11[0x17] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x16) >> 0x10);
      puVar11[0x18] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x16) >> 8);
      puVar11[0x19] = *(undefined1 *)((int)puVar20 + 0x16);
      puVar11[0x1a] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1a) >> 0x18);
      puVar11[0x1b] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1a) >> 0x10);
      puVar11[0x1c] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1a) >> 8);
      puVar11[0x1d] = *(undefined1 *)((int)puVar20 + 0x1a);
      puVar11[0x1e] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1e) >> 0x18);
      puVar11[0x1f] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1e) >> 0x10);
      puVar11[0x20] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x1e) >> 8);
      puVar11[0x21] = *(undefined1 *)((int)puVar20 + 0x1e);
      puVar11[0x22] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x22) >> 0x18);
      puVar11[0x23] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x22) >> 0x10);
      puVar11[0x24] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x22) >> 8);
      puVar11[0x25] = *(undefined1 *)((int)puVar20 + 0x22);
      puVar11[0x26] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x26) >> 0x18);
      puVar11[0x27] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x26) >> 0x10);
      puVar11[0x28] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x26) >> 8);
      puVar11[0x29] = *(undefined1 *)((int)puVar20 + 0x26);
      puVar11[0x2a] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x2a) >> 0x18);
      puVar11[0x2b] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x2a) >> 0x10);
      puVar11[0x2c] = (char)((uint)*(undefined4 *)((int)puVar20 + 0x2a) >> 8);
      puVar11[0x2d] = *(undefined1 *)((int)puVar20 + 0x2a);
      puVar11[0x2e] = *(undefined1 *)((int)puVar20 + 0x2f);
      puVar11[0x2f] = *(undefined1 *)((int)puVar20 + 0x2e);
      puVar11[0x30] = *(undefined1 *)((int)puVar20 + 0x31);
      puVar11[0x31] = *(undefined1 *)(puVar20 + 0xc);
    }
    operator_delete(puVar9);
    if (param_1[0x41] == 0) {
      local_c = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x434f4e54,0);
      break;
    }
    goto LAB_66214ce0;
  case 5:
    local_c = FUN_662690e0(*(void **)((int)param_1 + 0x36e),*(undefined4 *)((int)param_1 + 0x372));
    break;
  case 6:
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_42 = 0;
    uStack_41 = 0;
    local_3c = 0;
    uStack_3b = 0;
    local_36 = 0;
    uStack_35 = 0;
    local_30 = 0;
    uStack_2f = 0;
    iVar24 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    puVar11 = (undefined1 *)(**(code **)(**(int **)((int)param_1 + 0x376) + 0x1c))();
    if (iVar24 == 0) {
      puVar14 = (undefined1 *)0x0;
      puVar9 = (undefined4 *)0x0;
      puVar20 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      puVar21 = (undefined4 *)0x0;
    }
    else {
      local_4c = 0x434f4e54;
      local_44 = CONCAT11(*puVar11,puVar11[1]);
      puVar14 = puVar11 + 2;
      local_48 = 0x12;
      puVar9 = (undefined4 *)0x0;
      puVar20 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      puVar21 = (undefined4 *)0x0;
      if (local_44 == 0) {
        local_42 = puVar11[3];
        uStack_41 = *puVar14;
        puVar9 = (undefined4 *)(puVar11 + 4);
        puVar14 = (undefined1 *)((int)puVar9 + (uint)CONCAT11(uStack_41,local_42));
        if (iVar24 < (int)puVar14 - (int)puVar11) {
          puVar14 = (undefined1 *)0x0;
          puVar9 = (undefined4 *)0x0;
          puVar20 = (undefined4 *)0x0;
          puVar15 = (undefined4 *)0x0;
          puVar21 = (undefined4 *)0x0;
        }
        else {
          uStack_3b = *puVar14;
          local_3c = puVar14[1];
          puVar20 = (undefined4 *)(puVar14 + 2);
          puVar14 = (undefined1 *)((int)puVar20 + (uint)CONCAT11(uStack_3b,local_3c));
          if (iVar24 < (int)puVar14 - (int)puVar11) {
            puVar14 = (undefined1 *)0x0;
            puVar20 = (undefined4 *)0x0;
            puVar15 = (undefined4 *)0x0;
            puVar21 = (undefined4 *)0x0;
          }
          else {
            uStack_35 = *puVar14;
            local_36 = puVar14[1];
            puVar15 = (undefined4 *)(puVar14 + 2);
            puVar14 = (undefined1 *)((int)puVar15 + (uint)CONCAT11(uStack_35,local_36));
            if (iVar24 < (int)puVar14 - (int)puVar11) {
              puVar14 = (undefined1 *)0x0;
              puVar15 = (undefined4 *)0x0;
              puVar21 = (undefined4 *)0x0;
            }
            else {
              uStack_2f = *puVar14;
              local_30 = puVar14[1];
              puVar21 = (undefined4 *)(puVar14 + 2);
              puVar14 = (undefined1 *)((int)puVar21 + (uint)CONCAT11(uStack_2f,local_30));
              if (iVar24 < (int)puVar14 - (int)puVar11) {
                puVar14 = (undefined1 *)0x0;
                puVar21 = (undefined4 *)0x0;
              }
            }
          }
        }
      }
    }
    if (puVar14 == (undefined1 *)0x0) {
      local_c = -1;
      break;
    }
    iVar24 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    puVar8 = operator_new(iVar24 + 8);
    *(char *)puVar8 = (char)((uint)local_4c >> 0x18);
    *(char *)((int)puVar8 + 1) = (char)((uint)local_4c >> 0x10);
    *(char *)((int)puVar8 + 2) = (char)((uint)local_4c >> 8);
    *(undefined1 *)((int)puVar8 + 3) = (undefined1)local_4c;
    *(undefined1 *)(puVar8 + 1) = 0;
    *(undefined1 *)((int)puVar8 + 5) = 0;
    *(undefined1 *)((int)puVar8 + 6) = 0;
    *(undefined1 *)((int)puVar8 + 7) = local_48;
    *(undefined1 *)(puVar8 + 2) = local_44._1_1_;
    *(undefined1 *)((int)puVar8 + 9) = (undefined1)local_44;
    if (local_44 == 0) {
      *(undefined1 *)((int)puVar8 + 10) = uStack_41;
      *(undefined1 *)((int)puVar8 + 0xb) = local_42;
      uVar4 = CONCAT11(uStack_41,local_42);
      puVar11 = (undefined1 *)((int)(puVar8 + 3) + (uint)uVar4);
      puVar25 = puVar8 + 3;
      for (uVar17 = (uint)(uVar4 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar25 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar25 = puVar25 + 1;
      }
      for (uVar17 = uVar4 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar25 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar25 = (undefined4 *)((int)puVar25 + 1);
      }
      *puVar11 = uStack_3b;
      uVar4 = CONCAT11(uStack_3b,local_3c);
      puVar11[1] = local_3c;
      puVar9 = (undefined4 *)(puVar11 + 2);
      for (uVar17 = (uint)(uVar4 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar9 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar11 = (undefined1 *)((int)(puVar11 + 2) + (uint)uVar4);
      for (uVar17 = uVar4 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar20;
        puVar20 = (undefined4 *)((int)puVar20 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *puVar11 = uStack_35;
      uVar4 = CONCAT11(uStack_35,local_36);
      puVar11[1] = local_36;
      puVar9 = (undefined4 *)(puVar11 + 2);
      for (uVar17 = (uint)(uVar4 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar9 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar11 = (undefined1 *)((int)(puVar11 + 2) + (uint)uVar4);
      for (uVar17 = uVar4 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar15;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *puVar11 = uStack_2f;
      uVar4 = CONCAT11(uStack_2f,local_30);
      local_14 = (uint)uVar4;
      puVar11[1] = local_30;
      puVar9 = (undefined4 *)(puVar11 + 2);
      for (uVar17 = (uint)(uVar4 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar9 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar17 = uVar4 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar21;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    uStackY_6c = 0x66214cbf;
    local_10 = puVar8;
    local_c = (**(code **)(*param_1 + 0x1c))();
    if (local_c == 0) {
      param_1[0x41] = 1;
    }
    if (puVar8 != (undefined4 *)0x0) {
      operator_delete(puVar8);
    }
LAB_66214ce0:
    param_1[0xd5] = 7;
    FUN_66214440(param_1);
    break;
  case 7:
    *(undefined4 *)(param_1[0x42] + param_1[0x3f] * 0x18) = 1;
    pvVar12 = operator_new(4);
    *(void **)(param_1[0x42] + 4 + param_1[0x3f] * 0x18) = pvVar12;
    *(undefined4 *)((int)param_1 + 0x37e) = 0;
    *(undefined4 *)((int)param_1 + 0x382) = 0;
    goto LAB_6621515d;
  case 8:
    local_c = FUN_662687f0(*(void **)((int)param_1 + 0x36e),0x4d445052,
                           (uint)(*(int *)((int)param_1 + 0x37e) != 0));
    break;
  case 9:
    local_c = FUN_662690e0(*(void **)((int)param_1 + 0x36e),*(undefined4 *)((int)param_1 + 0x372));
    break;
  case 10:
    local_14 = 0;
    puVar9 = operator_new(0x42);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = &DAT_6626b888;
      *(undefined4 *)((int)puVar9 + 0x3e) = 0;
    }
    local_10 = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      local_c = -0x7ff8fff2;
      break;
    }
    local_14 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    local_c = local_14;
    pbVar10 = (byte *)(**(code **)(**(int **)((int)param_1 + 0x376) + 0x1c))();
    if (local_c == 0) {
      pbVar16 = (byte *)0x0;
    }
    else {
      puVar9[1] = 0x4d445052;
      puVar9[2] = 0x2e;
      bVar3 = *pbVar10;
      *(ushort *)(puVar9 + 3) = (ushort)bVar3 << 8;
      sVar19 = CONCAT11(bVar3,pbVar10[1]);
      pbVar16 = pbVar10 + 2;
      *(short *)(puVar9 + 3) = sVar19;
      if (sVar19 == 0) {
        *(ushort *)((int)puVar9 + 0xe) = (ushort)*pbVar16 << 8;
        *(ushort *)((int)puVar9 + 0xe) = *(ushort *)((int)puVar9 + 0xe) | (ushort)pbVar10[3];
        bVar3 = pbVar10[4];
        puVar9[4] = (uint)bVar3 << 0x18;
        puVar9[4] = (uint)bVar3 << 0x18 | (uint)pbVar10[5] << 0x10;
        puVar9[4] = puVar9[4] | (uint)pbVar10[6] << 8;
        puVar9[4] = puVar9[4] | (uint)pbVar10[7];
        bVar3 = pbVar10[8];
        puVar9[5] = (uint)bVar3 << 0x18;
        puVar9[5] = (uint)bVar3 << 0x18 | (uint)pbVar10[9] << 0x10;
        puVar9[5] = puVar9[5] | (uint)pbVar10[10] << 8;
        puVar9[5] = puVar9[5] | (uint)pbVar10[0xb];
        bVar3 = pbVar10[0xc];
        puVar9[6] = (uint)bVar3 << 0x18;
        puVar9[6] = (uint)bVar3 << 0x18 | (uint)pbVar10[0xd] << 0x10;
        puVar9[6] = puVar9[6] | (uint)pbVar10[0xe] << 8;
        puVar9[6] = puVar9[6] | (uint)pbVar10[0xf];
        bVar3 = pbVar10[0x10];
        puVar9[7] = (uint)bVar3 << 0x18;
        puVar9[7] = (uint)bVar3 << 0x18 | (uint)pbVar10[0x11] << 0x10;
        puVar9[7] = puVar9[7] | (uint)pbVar10[0x12] << 8;
        puVar9[7] = puVar9[7] | (uint)pbVar10[0x13];
        bVar3 = pbVar10[0x14];
        puVar9[8] = (uint)bVar3 << 0x18;
        puVar9[8] = (uint)bVar3 << 0x18 | (uint)pbVar10[0x15] << 0x10;
        puVar9[8] = puVar9[8] | (uint)pbVar10[0x16] << 8;
        puVar9[8] = puVar9[8] | (uint)pbVar10[0x17];
        bVar3 = pbVar10[0x18];
        puVar9[9] = (uint)bVar3 << 0x18;
        puVar9[9] = (uint)bVar3 << 0x18 | (uint)pbVar10[0x19] << 0x10;
        puVar9[9] = puVar9[9] | (uint)pbVar10[0x1a] << 8;
        puVar9[9] = puVar9[9] | (uint)pbVar10[0x1b];
        bVar3 = pbVar10[0x1c];
        puVar9[10] = (uint)bVar3 << 0x18;
        puVar9[10] = (uint)bVar3 << 0x18 | (uint)pbVar10[0x1d] << 0x10;
        puVar9[10] = puVar9[10] | (uint)pbVar10[0x1e] << 8;
        puVar9[10] = puVar9[10] | (uint)pbVar10[0x1f];
        bVar3 = pbVar10[0x20];
        *(byte *)(puVar9 + 0xb) = bVar3;
        local_18 = pbVar10 + 0x21 + bVar3;
        if ((int)local_c < (int)local_18 - (int)pbVar10) {
          pbVar16 = (byte *)0x0;
        }
        else {
          *(byte **)((int)puVar9 + 0x2d) = pbVar10 + 0x21;
          bVar3 = *local_18;
          *(byte *)((int)puVar9 + 0x31) = bVar3;
          pbVar22 = local_18 + 1 + bVar3;
          if ((int)local_c < (int)pbVar22 - (int)pbVar10) {
            pbVar16 = (byte *)0x0;
          }
          else {
            *(byte **)((int)puVar9 + 0x32) = local_18 + 1;
            bVar3 = *pbVar22;
            *(uint *)((int)puVar9 + 0x36) = (uint)bVar3 << 0x18;
            *(uint *)((int)puVar9 + 0x36) = (uint)bVar3 << 0x18 | (uint)pbVar22[1] << 0x10;
            *(uint *)((int)puVar9 + 0x36) = *(uint *)((int)puVar9 + 0x36) | (uint)pbVar22[2] << 8;
            uVar17 = *(uint *)((int)puVar9 + 0x36) | (uint)pbVar22[3];
            *(uint *)((int)puVar9 + 0x36) = uVar17;
            pbVar16 = pbVar22 + 4 + uVar17;
            if (local_c < (uint)((int)pbVar16 - (int)pbVar10)) {
              pbVar16 = (byte *)0x0;
            }
            else {
              *(byte **)((int)puVar9 + 0x3a) = pbVar22 + 4;
            }
          }
        }
      }
    }
    if (pbVar16 == (byte *)0x0) {
      local_c = -1;
      break;
    }
    if (*(short *)(puVar9 + 3) != 0) {
      local_c = -0x7ffbfffb;
      break;
    }
    if (*(short *)((int)puVar9 + 0xe) == (short)param_1[0xda]) {
      puVar20 = auStackY_a0;
      puVar9 = local_10;
      for (iVar24 = 0xe; puVar9 = puVar9 + 1, iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar20 = *puVar9;
        puVar20 = puVar20 + 1;
      }
      local_c = 0;
      *(undefined2 *)puVar20 = *(undefined2 *)puVar9;
      FUN_66224cc0();
      puVar9 = local_10;
      **(undefined2 **)(param_1[0x42] + 4 + param_1[0x3f] * 0x18) =
           *(undefined2 *)((int)local_10 + 0xe);
      *(undefined2 *)(*(int *)(param_1[0x42] + 4 + param_1[0x3f] * 0x18) + 2) = (undefined2)local_c;
      FUN_6624ff10(param_1 + 0x3b,param_1[0x3c],local_c & 0xffff);
      *(short *)(param_1 + 0x3a) = (short)param_1[0x3a] + 1;
      *(undefined2 *)((int)puVar9 + 0xe) =
           *(undefined2 *)(*(int *)(param_1[0x42] + 4 + param_1[0x3f] * 0x18) + 2);
      *(undefined4 *)((int)param_1 + 0x382) = 1;
    }
    iVar24 = (**(code **)(**(int **)((int)param_1 + 0x376) + 0x18))();
    puVar11 = operator_new(iVar24 + 8);
    uStackY_6c = 0x6621510c;
    FUN_6620f800(puVar9 + 1,puVar11,(int *)&local_14);
    (**(code **)*puVar9)();
    uStackY_6c = local_14;
    uStackY_70 = 0x66215120;
    iVar24 = (**(code **)(*param_1 + 0x1c))();
    local_c = iVar24;
    if (puVar11 != (undefined1 *)0x0) {
      operator_delete(puVar11);
    }
    if (iVar24 < 0) break;
    uVar17 = *(int *)((int)param_1 + 0x37e) + 1;
    *(uint *)((int)param_1 + 0x37e) = uVar17;
    if ((*(uint *)((int)param_1 + 0x37a) <= uVar17) || (*(int *)((int)param_1 + 0x382) != 0)) {
      param_1[0xd5] = 0xb;
      FUN_66214440(param_1);
      break;
    }
LAB_6621515d:
    param_1[0xd5] = 8;
    FUN_66214440(param_1);
    break;
  case 0xb:
    *(undefined4 *)(param_1[0x42] + 8 + param_1[0x3f] * 0x18) =
         *(undefined4 *)((int)param_1 + 0x36e);
    *(undefined4 *)((int)param_1 + 0x36e) = 0;
    *(undefined4 *)(param_1[0x42] + 0xc + param_1[0x3f] * 0x18) = 1;
    pvVar12 = operator_new(*(int *)(param_1[0xd6] + -8) + 1);
    *(void **)(param_1[0x42] + 0x10 + param_1[0x3f] * 0x18) = pvVar12;
    uVar17 = 0xffffffff;
    local_18 = (byte *)(param_1[0x3f] * 3);
    pcVar23 = (char *)param_1[0xd6];
    do {
      pcVar26 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar26 = pcVar23 + 1;
      cVar2 = *pcVar23;
      pcVar23 = pcVar26;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    pcVar23 = pcVar26 + -uVar17;
    pcVar26 = *(char **)(param_1[0x42] + 0x10 + param_1[0x3f] * 0x18);
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar26 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar26 = pcVar26 + 1;
    }
    if (*(int *)((int)param_1 + 0x36a) != 0) {
      local_c = FUN_66225600(param_1 + 0x45,
                             CONCAT22((short)((uint)(param_1[0x3f] * 3) >> 0x10),
                                      *(undefined2 *)
                                       (*(int *)(param_1[0x42] + 4 + param_1[0x3f] * 0x18) + 2)),0);
    }
    param_1[0xd5] = 0xc;
    param_1[0x3f] = param_1[0x3f] + 1;
    FUN_66214440(param_1);
    break;
  case 0xc:
    param_1[0xcc] = 0;
    param_1[0xd5] = 0;
    (**(code **)(*(int *)param_1[0xcb] + 0x10))();
    break;
  default:
    local_c = -0x7ffbfff7;
  }
  if ((int)local_c < 0) {
    param_1[9] = local_c;
LAB_662152a1:
    (**(code **)(*(int *)param_1[0xcb] + 0x10))();
  }
  return 0;
}


