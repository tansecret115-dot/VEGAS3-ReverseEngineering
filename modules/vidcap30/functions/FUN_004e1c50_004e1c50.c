/* Module: vidcap30.exe
   Function: FUN_004e1c50
   Address: 004e1c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e1c50(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  int in_stack_00000028;
  int in_stack_00000030;
  uint local_fc [4];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  byte local_94;
  undefined3 uStack_93;
  byte local_90;
  undefined3 uStack_8f;
  byte local_8c;
  undefined3 uStack_8b;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_38 = *(int *)(in_stack_00000028 + 0x68);
  local_60 = *(int *)(in_stack_00000028 + 100);
  iVar9 = *(int *)(in_stack_00000028 + 0x18);
  iVar14 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  local_98 = iVar14;
  iVar7 = (iVar9 - 1U | 0x3fff) + 1;
  local_44 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = *(int *)(in_stack_00000028 + 0x1c);
  local_18 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar7 - 1U | 0x3fff) + 1;
  local_84 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) + 1;
  local_48 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_7c = (iVar14 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_a0 = iVar9 + local_44 * -0x4000 + 0x4000;
  local_14 = (local_18 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_a4 = iVar7 + local_84 * -0x4000 + 0x4000;
  if (local_84 - local_18 < 2) {
    local_14 = iVar7 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_44 - iVar14 < 2) {
    local_7c = iVar9 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_20 = *(uint *)(in_stack_00000028 + 0x44);
  local_c = local_14;
  if (local_18 < local_84) {
    local_9c = local_48 - 1;
    do {
      local_24 = *(uint *)(in_stack_00000028 + 0x40);
      pcVar13 = (char *)(*(int *)(in_stack_00000028 + 8) * local_18 +
                         *(int *)(in_stack_00000028 + 4) + iVar14 * 4);
      local_10 = local_7c;
      if (local_9c <= (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe) {
        local_20 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) - 0x3fff;
      }
      local_8 = (int *)(uint)(local_18 != local_84 + -1);
      iVar9 = (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar12 = local_20 & 0x80003fff;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffc000) + 1;
      }
      local_88 = uVar12;
      local_ac = *(int *)(in_stack_00000028 + 0x38) * iVar9 + *(int *)(in_stack_00000028 + 0x34);
      local_28 = iVar14;
      local_a8 = (iVar9 + (int)local_8) * *(int *)(in_stack_00000028 + 0x38) +
                 *(int *)(in_stack_00000028 + 0x34);
      if (iVar14 < local_44) {
        do {
          local_1c = (uint)((longlong)local_10 * (longlong)local_38) >> 0xe |
                     (int)((ulonglong)((longlong)local_10 * (longlong)local_38) >> 0x20) << 0x12;
          local_34 = (int)((local_24 & 0xffffc000) + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar9 = ((local_1c - 1) + local_24 | 0x3fff) + 1;
          iVar9 = (int)((iVar9 >> 0x1f & 0x3fffU) + iVar9) >> 0xe;
          local_40 = (local_34 + 1) * 0x4000 - local_24;
          local_14 = local_1c + iVar9 * -0x4000 + 0x4000 + local_24;
          local_3c = iVar9 - local_34;
          if (iVar9 - local_34 < 2) {
            local_40 = local_1c;
          }
          local_70 = iVar9 + -1;
          puVar11 = local_fc;
          for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          local_8 = &local_ac;
          puVar11 = local_fc + 2;
          local_4c = 2;
          do {
            iVar9 = *local_8;
            uVar10 = *(byte *)(iVar9 + local_34 * 4) * local_40;
            puVar1 = puVar11 + -2;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar10;
            iVar7 = local_34;
            puVar11[-1] = puVar11[-1] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
            uVar10 = *(byte *)(iVar9 + 1 + iVar7 * 4) * local_40;
            uVar2 = *puVar11;
            *puVar11 = *puVar11 + uVar10;
            iVar7 = local_34;
            puVar11[1] = puVar11[1] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
            uVar10 = *(byte *)(iVar9 + 2 + iVar7 * 4) * local_40;
            puVar1 = puVar11 + 2;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar10;
            iVar7 = local_34;
            puVar11[3] = puVar11[3] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
            uVar10 = *(byte *)(iVar9 + 3 + iVar7 * 4) * local_40;
            puVar1 = puVar11 + 4;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar10;
            iVar7 = local_70;
            puVar11[5] = puVar11[5] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
            local_30 = local_34 + 1;
            if (local_30 < iVar7) {
              local_2c = (byte *)(iVar9 + local_30 * 4);
              local_78 = local_70 - local_30;
              local_30 = local_30 + (local_70 - local_30);
              do {
                bVar3 = *local_2c;
                puVar1 = puVar11 + -2;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                pbVar5 = local_2c;
                puVar11[-1] = puVar11[-1] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar5[1];
                uVar2 = *puVar11;
                *puVar11 = *puVar11 + (uint)bVar3 * 0x4000;
                pbVar5 = local_2c;
                puVar11[1] = puVar11[1] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar5[2];
                puVar1 = puVar11 + 2;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                pbVar5 = local_2c;
                puVar11[3] = puVar11[3] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar5[3];
                puVar1 = puVar11 + 4;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                puVar11[5] = puVar11[5] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                local_78 = local_78 + -1;
                local_2c = local_2c + 4;
              } while (local_78 != 0);
            }
            if (1 < local_3c) {
              uVar10 = (uint)*(byte *)(iVar9 + local_30 * 4) * local_14;
              puVar1 = puVar11 + -2;
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar10;
              iVar7 = local_30;
              puVar11[-1] = puVar11[-1] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
              uVar10 = (uint)*(byte *)(iVar9 + 1 + iVar7 * 4) * local_14;
              uVar2 = *puVar11;
              *puVar11 = *puVar11 + uVar10;
              iVar7 = local_30;
              puVar11[1] = puVar11[1] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
              uVar10 = (uint)*(byte *)(iVar9 + 2 + iVar7 * 4) * local_14;
              puVar1 = puVar11 + 2;
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar10;
              iVar7 = local_30;
              puVar11[3] = puVar11[3] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
              uVar2 = puVar11[4];
              uVar10 = (uint)*(byte *)(iVar9 + 3 + iVar7 * 4) * local_14;
              puVar11[4] = uVar2 + uVar10;
              puVar11[5] = puVar11[5] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar2,uVar10);
            }
            puVar11 = puVar11 + 10;
            local_4c = local_4c + -1;
            local_8 = local_8 + 1;
          } while (local_4c != 0);
          iVar9 = (int)uVar12 >> 0x1f;
          if (((local_10 == 0x4000) && (local_c == 0x4000)) || (in_stack_00000030 != 0)) {
            iVar7 = 0x4000 - uVar12;
            local_58 = iVar7 >> 0x1f;
            local_50 = local_38 >> 0x1f;
            local_54 = local_38;
            local_68 = uVar12;
            local_64 = iVar9;
            local_5c = iVar7;
            uVar15 = __allmul(uVar12,iVar9,local_d4,local_d0);
            local_3c = (int)uVar15;
            lVar16 = __allmul(iVar7,local_58,local_fc[0],local_fc[1]);
            uVar15 = __alldiv(lVar16 + CONCAT44((int)((ulonglong)uVar15 >> 0x20),local_3c),0x4000,0)
            ;
            cVar6 = __alldiv(uVar15,local_54,local_50);
            *pcVar13 = cVar6;
            lVar16 = __allmul(local_68,local_64,local_cc,local_c8);
            lVar17 = __allmul(local_5c,local_58,local_fc[2],local_fc[3]);
            uVar15 = __alldiv(lVar16 + lVar17,0x4000,0);
            cVar6 = __alldiv(uVar15,local_54,local_50);
            pcVar13[1] = cVar6;
            lVar16 = __allmul(local_68,local_64,local_c4,local_c0);
            lVar17 = __allmul(local_5c,local_58,local_ec,local_e8);
            uVar15 = __alldiv(lVar16 + lVar17,0x4000,0);
            cVar6 = __alldiv(uVar15,local_54,local_50);
            pcVar13[2] = cVar6;
            lVar16 = __allmul(local_5c,local_58,local_e4,local_e0);
            lVar17 = __allmul(local_68,local_64,local_bc,local_b8);
            uVar15 = __alldiv(lVar16 + lVar17,0x4000,0);
            cVar6 = __alldiv(uVar15,local_54,local_50);
LAB_004e2385:
            pcVar13[3] = cVar6;
            uVar12 = local_88;
          }
          else if (0 < (int)local_1c) {
            local_6c = (uint)((longlong)local_10 * (longlong)local_c) >> 0xe |
                       (int)((ulonglong)((longlong)local_10 * (longlong)local_c) >> 0x20) << 0x12;
            local_4c = (int)(local_6c * 0xff + ((int)(local_6c * 0xff) >> 0x1f & 0x3fffU)) >> 0xe;
            local_80 = CONCAT31(local_80._1_3_,*pcVar13);
            uVar15 = __allmul(0x4000 - uVar12,(int)(0x4000 - uVar12) >> 0x1f,local_fc[0],local_fc[1]
                             );
            local_3c = (int)uVar15;
            lVar16 = __allmul(uVar12,iVar9,local_d4,local_d0);
            uVar15 = __alldiv(lVar16 + CONCAT44((int)((ulonglong)uVar15 >> 0x20),local_3c),0x4000,0)
            ;
            uVar12 = __alldiv(uVar15,local_1c,(int)local_1c >> 0x1f);
            uVar12 = uVar12 & 0xff;
            local_4c = local_4c & 0xff;
            bVar3 = pcVar13[1];
            _local_90 = CONCAT31(uStack_8f,bVar3);
            iVar9 = (uVar12 - (local_80 & 0xff)) * local_4c;
            *pcVar13 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + (char)local_80;
            iVar9 = (uVar12 - bVar3) * local_4c;
            bVar4 = pcVar13[2];
            pcVar13[1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar3;
            _local_94 = CONCAT31(uStack_93,bVar4);
            iVar9 = (uVar12 - bVar4) * local_4c;
            bVar3 = pcVar13[3];
            _local_8c = CONCAT31(uStack_8b,bVar3);
            pcVar13[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar4;
            iVar9 = (uVar12 - bVar3) * local_4c;
            cVar6 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar3;
            goto LAB_004e2385;
          }
          pcVar13 = pcVar13 + 4;
          if (local_28 == local_44 + -2) {
            local_74 = (uint)((longlong)local_10 * (longlong)local_38) >> 0xe |
                       (int)((ulonglong)((longlong)local_10 * (longlong)local_38) >> 0x20) << 0x12;
            local_24 = local_24 + local_74;
            local_10 = local_a0;
          }
          else {
            local_10 = 0x4000;
            local_24 = local_1c + local_24;
          }
          local_28 = local_28 + 1;
          iVar14 = local_98;
        } while (local_28 < local_44);
      }
      if (local_18 == local_84 + -2) {
        local_48 = (uint)((longlong)local_c * (longlong)local_60) >> 0xe |
                   (int)((ulonglong)((longlong)local_c * (longlong)local_60) >> 0x20) << 0x12;
        local_20 = local_20 + local_48;
        local_c = local_a4;
      }
      else {
        local_c = 0x4000;
        local_20 = local_20 + local_60;
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_84);
  }
  return;
}


