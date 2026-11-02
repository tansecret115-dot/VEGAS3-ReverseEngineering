/* Module: rmto3260.dll
   Function: FUN_662d1940
   Address: 662d1940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662d269c) */

int FUN_662d1940(void *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  int *piStack_f4;
  undefined4 local_dc [5];
  undefined4 local_c8 [18];
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 local_7c;
  uint local_78;
  undefined2 local_74;
  ushort uStack_72;
  undefined2 local_70;
  undefined4 *local_6c;
  undefined1 *local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  undefined2 local_50;
  undefined2 local_4e;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined2 local_34;
  undefined2 uStack_32;
  byte local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined1 uStack_2c;
  uint local_2b;
  undefined1 uStack_27;
  uint local_26;
  undefined4 local_22;
  int *local_1c;
  byte *local_18;
  int *local_14;
  byte *local_10;
  int *local_c;
  int local_8;
  
  iVar18 = 0;
  local_8 = 0;
  local_14 = (int *)0x0;
  *(undefined2 *)((int)param_1 + 100) = 0;
  iVar4 = FUN_662e37f0(*(void **)((int)param_1 + 0x28),&local_18);
  if ((iVar4 == 0) || (local_18 == (byte *)0x0)) {
    iVar5 = 0;
LAB_662d19c4:
    uVar15 = CONCAT13(uStack_2f,CONCAT12(local_30,uStack_32));
  }
  else {
    iVar5 = iVar4 + 10;
    if (CONCAT11(*(undefined1 *)(iVar4 + 8),*(undefined1 *)(iVar4 + 9)) != 0) goto LAB_662d19c4;
    uVar15 = (uint)*(byte *)(iVar4 + 0x1e) << 0x18 | (uint)*(byte *)(iVar4 + 0x1f) << 0x10 |
             (uint)*(byte *)(iVar4 + 0x20) << 8 | (uint)*(byte *)(iVar4 + 0x21);
    local_22._2_2_ = CONCAT11(*(undefined1 *)(iVar4 + 0x30),*(undefined1 *)(iVar4 + 0x31));
    iVar5 = iVar4 + 0x32;
  }
  if (iVar5 == 0) {
    iVar18 = -0x7ffbff7f;
    local_8 = -0x7ffbff7f;
  }
  if (-1 < iVar18) {
    *(uint *)((int)param_1 + 0x60) = uVar15;
    FUN_662e30f0(*(void **)((int)param_1 + 0x2c),local_22._2_2_);
    (**(code **)(**(int **)((int)param_1 + 0x2c) + 0xc))();
    if (-1 < iVar18) {
      FUN_662e3850(*(void **)((int)param_1 + 0x28),&local_64);
      piStack_f4 = (int *)0x662d1a0f;
      iVar18 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x1c))();
      local_8 = iVar18;
      if (-1 < iVar18) {
        local_68 = (undefined1 *)(uint)*(ushort *)(*(int *)((int)param_1 + 0x28) + 0x6e);
      }
    }
  }
  local_6c = (undefined4 *)0x0;
  local_64 = 0;
  local_1c = (int *)0x0;
  uVar15 = local_44;
  uVar17 = local_4c;
  uVar19 = local_48;
  if (local_68 != (undefined1 *)0x0) {
    do {
      iVar18 = local_8;
      if (local_8 < 0) break;
      local_60 = (byte *)0x1;
      piStack_f4 = (int *)0x662d1a6d;
      local_10 = (byte *)FUN_662e3080(*(void **)((int)param_1 + 0x28),(uint)local_1c & 0xffff,
                                      &local_18);
      if (local_10 == (byte *)0x0) {
        local_8 = -0x7ffbff7f;
      }
      else {
        FUN_662dec30(local_c8);
        piStack_f4 = (int *)0x662d1a96;
        local_8 = FUN_662de510(local_c8,local_10,local_18);
        if (-1 < local_8) {
          FUN_662dedc0(local_c8,&local_7c);
          iVar18 = FUN_662ef820(&local_7c,s_application_x_pn_realevent_6630a0bc);
          if (iVar18 == 0) {
            *(undefined4 *)((int)param_1 + 0x66) = 1;
            uVar3 = FUN_662dee20((int)local_c8);
            local_6c = (undefined4 *)0x1;
            *(undefined2 *)((int)param_1 + 0x38) = uVar3;
            *(undefined2 *)((int)param_1 + 0x3c) = uVar3;
          }
          else {
            iVar18 = FUN_662ef820(&local_7c,s_application_x_pn_imagemap_6630a0fc);
            if (iVar18 == 0) {
              *(undefined4 *)((int)param_1 + 0x6a) = 1;
              uVar3 = FUN_662dee20((int)local_c8);
              local_64 = 1;
              *(undefined2 *)((int)param_1 + 0x3a) = uVar3;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar3;
            }
          }
          pbVar6 = (byte *)FUN_662ef820(&local_7c,s_logical_fileinfo_6630a118);
          if (pbVar6 == (byte *)0x0) {
            local_60 = pbVar6;
            puVar7 = operator_new(0x62);
            if (puVar7 == (undefined4 *)0x0) {
              local_c = (int *)0x0;
            }
            else {
              local_c = FUN_662e03d0(puVar7);
            }
            if (local_c == (int *)0x0) {
              local_8 = -0x7ff8fff2;
            }
            if (-1 < local_8) {
              piStack_f4 = (int *)0x662d1b7c;
              local_8 = (**(code **)(*local_c + 0x1c))();
              if (-1 < local_8) {
                local_8 = (**(code **)(*local_c + 0x38))();
              }
            }
            if (local_c != (int *)0x0) {
              (**(code **)*local_c)();
            }
          }
          FUN_662ef0f0(&local_7c);
        }
        if ((-1 < local_8) && (local_60 != (byte *)0x0)) {
          if (local_18 != (byte *)0x0) {
            local_58 = (uint)*local_10 << 0x18 | (uint)local_10[1] << 0x10 | (uint)local_10[2] << 8
                       | (uint)local_10[3];
            local_54 = (uint)local_10[4] << 0x18 | (uint)local_10[5] << 0x10 |
                       (uint)local_10[6] << 8 | (uint)local_10[7];
            local_50 = CONCAT11(local_10[8],local_10[9]);
            if (local_50 == 0) {
              local_4e = CONCAT11(local_10[10],local_10[0xb]);
              uVar17 = (uint)local_10[0xc] << 0x18 | (uint)local_10[0xd] << 0x10 |
                       (uint)local_10[0xe] << 8 | (uint)local_10[0xf];
              uVar19 = (uint)local_10[0x10] << 0x18 | (uint)local_10[0x11] << 0x10 |
                       (uint)local_10[0x12] << 8 | (uint)local_10[0x13];
              uVar15 = (uint)local_10[0x14] << 0x18 | (uint)local_10[0x15] << 0x10 |
                       (uint)local_10[0x16] << 8 | (uint)local_10[0x17];
              local_40 = (uint)local_10[0x18] << 0x18 | (uint)local_10[0x19] << 0x10 |
                         (uint)local_10[0x1a] << 8 | (uint)local_10[0x1b];
              local_3c = (uint)local_10[0x1c] << 0x18 | (uint)local_10[0x1d] << 0x10 |
                         (uint)local_10[0x1e] << 8 | (uint)local_10[0x1f];
              local_38 = (uint)local_10[0x20] << 0x18 | (uint)local_10[0x21] << 0x10 |
                         (uint)local_10[0x22] << 8 | (uint)local_10[0x23];
              local_30 = local_10[0x28];
              pbVar6 = local_10 + 0x29;
              local_60 = pbVar6 + (CONCAT11(uStack_2f,local_30) & 0xff);
              local_4c = uVar17;
              local_48 = uVar19;
              local_44 = uVar15;
              if ((int)local_60 - (int)local_10 <= (int)local_18) {
                uStack_2f = SUB41(pbVar6,0);
                uStack_2e = (undefined2)((uint)pbVar6 >> 8);
                uStack_2c = (undefined1)((uint)pbVar6 >> 0x18);
                bVar2 = *local_60;
                pbVar6 = local_60 + 1;
                local_2b = CONCAT31(local_2b._1_3_,bVar2);
                local_60 = pbVar6 + bVar2;
                if ((int)local_60 - (int)local_10 <= (int)local_18) {
                  local_2b._1_3_ = SUB43(pbVar6,0);
                  local_2b = CONCAT31(local_2b._1_3_,bVar2);
                  uStack_27 = (undefined1)((uint)pbVar6 >> 0x18);
                  local_26 = (uint)*local_60 << 0x18 | (uint)local_60[1] << 0x10 |
                             (uint)local_60[2] << 8 | (uint)local_60[3];
                  if (local_60 + 4 + (local_26 - (int)local_10) <= local_18) {
                    local_22 = local_60 + 4;
                  }
                }
              }
            }
          }
          if (*(ushort *)((int)param_1 + 100) < local_4e) {
            *(ushort *)((int)param_1 + 100) = local_4e;
          }
          *local_10 = (byte)(local_58 >> 0x18);
          local_10[1] = (byte)(local_58 >> 0x10);
          local_10[2] = (byte)(local_58 >> 8);
          local_10[3] = (byte)local_58;
          local_10[4] = (byte)(local_54 >> 0x18);
          local_10[5] = (byte)(local_54 >> 0x10);
          local_10[6] = (byte)(local_54 >> 8);
          local_10[7] = (byte)local_54;
          local_10[8] = local_50._1_1_;
          local_10[9] = (byte)local_50;
          local_18 = local_10 + 10;
          if (local_50 == 0) {
            *local_18 = local_4e._1_1_;
            local_10[0xb] = (byte)local_4e;
            local_10[0xc] = (byte)(uVar17 >> 0x18);
            local_10[0xd] = (byte)(uVar17 >> 0x10);
            local_10[0xe] = (byte)(uVar17 >> 8);
            local_10[0xf] = (byte)local_4c;
            local_10[0x10] = (byte)(uVar19 >> 0x18);
            local_10[0x11] = (byte)(uVar19 >> 0x10);
            local_10[0x12] = (byte)(uVar19 >> 8);
            local_10[0x13] = (byte)local_48;
            local_10[0x14] = (byte)(uVar15 >> 0x18);
            local_10[0x15] = (byte)(uVar15 >> 0x10);
            local_10[0x16] = (byte)(uVar15 >> 8);
            local_10[0x17] = (byte)local_44;
            local_10[0x18] = (byte)(local_40 >> 0x18);
            local_10[0x19] = (byte)(local_40 >> 0x10);
            local_10[0x1a] = (byte)(local_40 >> 8);
            local_10[0x1b] = (byte)local_40;
            local_10[0x1c] = (byte)(local_3c >> 0x18);
            local_10[0x1d] = (byte)(local_3c >> 0x10);
            local_10[0x1e] = (byte)(local_3c >> 8);
            local_10[0x1f] = (byte)local_3c;
            local_10[0x20] = (byte)(local_38 >> 0x18);
            local_10[0x21] = (byte)(local_38 >> 0x10);
            local_10[0x22] = (byte)(local_38 >> 8);
            local_10[0x23] = (byte)local_38;
            local_10[0x24] = 0;
            local_10[0x25] = 0;
            local_10[0x26] = 0;
            local_10[0x27] = 0;
            local_10[0x28] = local_30;
            uVar15 = CONCAT11(uStack_2f,local_30) & 0xff;
            pbVar8 = local_10 + 0x29;
            pbVar9 = pbVar8 + uVar15;
            pbVar6 = (byte *)CONCAT13(uStack_2c,CONCAT21(uStack_2e,uStack_2f));
            for (uVar15 = uVar15 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar8 = pbVar8 + 4;
            }
            for (uVar15 = CONCAT11(uStack_2f,local_30) & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pbVar8 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar8 = pbVar8 + 1;
            }
            *pbVar9 = (byte)local_2b;
            pbVar10 = pbVar9 + 1 + (local_2b & 0xff);
            pbVar6 = (byte *)CONCAT13(uStack_27,local_2b._1_3_);
            pbVar8 = pbVar9 + 1;
            for (uVar15 = (local_2b & 0xff) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar8 = pbVar8 + 4;
            }
            for (uVar15 = local_2b & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pbVar8 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar8 = pbVar8 + 1;
            }
            *pbVar10 = (byte)(local_26 >> 0x18);
            pbVar10[1] = (byte)(local_26 >> 0x10);
            pbVar10[2] = (byte)(local_26 >> 8);
            pbVar10[3] = (byte)local_26;
            pbVar6 = local_22;
            pbVar8 = pbVar10 + 4;
            for (uVar15 = local_26 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar8 = pbVar8 + 4;
            }
            local_18 = pbVar10 + 4 + local_26;
            for (uVar16 = local_26 & 3; uVar15 = local_44, uVar17 = local_4c, uVar19 = local_48,
                uVar16 != 0; uVar16 = uVar16 - 1) {
              *pbVar8 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar8 = pbVar8 + 1;
            }
          }
          local_18 = local_18 + -(int)local_10;
          piStack_f4 = (int *)0x662d1f82;
          local_8 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x1c))();
        }
        FUN_662dec80(local_c8);
      }
      local_1c = (int *)((int)local_1c + 1);
      iVar18 = local_8;
    } while ((undefined1 *)((uint)local_1c & 0xffff) < local_68);
  }
  if (((-1 < iVar18) && (*(int *)((int)param_1 + 0x34) != 0)) && (local_6c == (undefined4 *)0x0)) {
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x40));
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x48) = 0;
    }
    piStack_f4 = *(int **)((int)param_1 + 0x34);
    iVar18 = (**(code **)(*piStack_f4 + 0xc))();
    if (iVar18 < 0) goto LAB_662d2787;
    pvVar11 = operator_new(*(uint *)((int)param_1 + 0x48));
    *(void **)((int)param_1 + 0x40) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      iVar18 = -0x7ff8fff2;
    }
    if (iVar18 < 0) goto LAB_662d2787;
    local_68 = *(undefined1 **)((int)param_1 + 0x40);
    *local_68 = (char)((uint)*local_6c >> 0x18);
    local_68[1] = (char)((uint)*local_6c >> 0x10);
    local_68[2] = (char)((uint)*local_6c >> 8);
    local_68[3] = *(undefined1 *)local_6c;
    local_68[4] = (char)((uint)local_6c[1] >> 0x18);
    local_68[5] = (char)((uint)local_6c[1] >> 0x10);
    local_68[6] = (char)((uint)local_6c[1] >> 8);
    local_68[7] = *(undefined1 *)(local_6c + 1);
    local_68[8] = *(undefined1 *)((int)local_6c + 9);
    local_68[9] = *(undefined1 *)(local_6c + 2);
    puVar12 = local_68 + 10;
    if (*(short *)(local_6c + 2) == 0) {
      local_68[10] = *(undefined1 *)((int)local_6c + 0xb);
      local_68[0xb] = *(undefined1 *)((int)local_6c + 10);
      local_68[0xc] = (char)((uint)local_6c[3] >> 0x18);
      local_68[0xd] = (char)((uint)local_6c[3] >> 0x10);
      local_68[0xe] = (char)((uint)local_6c[3] >> 8);
      local_68[0xf] = *(undefined1 *)(local_6c + 3);
      local_68[0x10] = (char)((uint)local_6c[4] >> 0x18);
      local_68[0x11] = (char)((uint)local_6c[4] >> 0x10);
      local_68[0x12] = (char)((uint)local_6c[4] >> 8);
      local_68[0x13] = *(undefined1 *)(local_6c + 4);
      local_68[0x14] = (char)((uint)local_6c[5] >> 0x18);
      local_68[0x15] = (char)((uint)local_6c[5] >> 0x10);
      local_68[0x16] = (char)((uint)local_6c[5] >> 8);
      local_68[0x17] = *(undefined1 *)(local_6c + 5);
      local_68[0x18] = (char)((uint)local_6c[6] >> 0x18);
      local_68[0x19] = (char)((uint)local_6c[6] >> 0x10);
      local_68[0x1a] = (char)((uint)local_6c[6] >> 8);
      local_68[0x1b] = *(undefined1 *)(local_6c + 6);
      local_68[0x1c] = (char)((uint)local_6c[7] >> 0x18);
      local_68[0x1d] = (char)((uint)local_6c[7] >> 0x10);
      local_68[0x1e] = (char)((uint)local_6c[7] >> 8);
      local_68[0x1f] = *(undefined1 *)(local_6c + 7);
      local_68[0x20] = (char)((uint)local_6c[8] >> 0x18);
      local_68[0x21] = (char)((uint)local_6c[8] >> 0x10);
      local_68[0x22] = (char)((uint)local_6c[8] >> 8);
      local_68[0x23] = *(undefined1 *)(local_6c + 8);
      local_68[0x24] = (char)((uint)local_6c[9] >> 0x18);
      local_68[0x25] = (char)((uint)local_6c[9] >> 0x10);
      local_68[0x26] = (char)((uint)local_6c[9] >> 8);
      local_68[0x27] = *(undefined1 *)(local_6c + 9);
      local_68[0x28] = *(undefined1 *)(local_6c + 10);
      bVar2 = *(byte *)(local_6c + 10);
      puVar7 = *(undefined4 **)((int)local_6c + 0x29);
      puVar20 = (undefined4 *)(local_68 + 0x29);
      for (uVar15 = (uint)(bVar2 >> 2); uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar20 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar20 = puVar20 + 1;
      }
      for (uVar15 = bVar2 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar20 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      }
      puVar12 = (undefined1 *)((int)(local_68 + 0x29) + (uint)*(byte *)(local_6c + 10));
      *puVar12 = *(undefined1 *)((int)local_6c + 0x2d);
      puVar13 = (undefined4 *)(puVar12 + 1);
      bVar2 = *(byte *)((int)local_6c + 0x2d);
      puVar7 = *(undefined4 **)((int)local_6c + 0x2e);
      puVar20 = puVar13;
      for (uVar15 = (uint)(bVar2 >> 2); uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar20 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar20 = puVar20 + 1;
      }
      for (uVar15 = bVar2 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar20 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      }
      puVar12 = (undefined1 *)((int)puVar13 + (uint)*(byte *)((int)local_6c + 0x2d));
      *puVar12 = (char)((uint)*(undefined4 *)((int)local_6c + 0x32) >> 0x18);
      puVar12[1] = (char)((uint)*(undefined4 *)((int)local_6c + 0x32) >> 0x10);
      puVar12[2] = (char)((uint)*(undefined4 *)((int)local_6c + 0x32) >> 8);
      puVar12[3] = *(undefined1 *)((int)local_6c + 0x32);
      uVar15 = *(uint *)((int)local_6c + 0x32);
      puVar7 = *(undefined4 **)((int)local_6c + 0x36);
      puVar20 = (undefined4 *)(puVar12 + 4);
      for (uVar17 = uVar15 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar20 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar20 = puVar20 + 1;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar20 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      }
      puVar12 = (undefined1 *)((int)(puVar12 + 4) + *(int *)((int)local_6c + 0x32));
    }
    pbVar8 = puVar12 + -(int)local_68;
    pbVar6 = *(byte **)((int)param_1 + 0x40);
    *(byte **)((int)param_1 + 0x48) = pbVar8;
    if ((pbVar6 != (byte *)0x0) && (pbVar8 != (byte *)0x0)) {
      local_58 = (uint)*pbVar6 << 0x18 | (uint)pbVar6[1] << 0x10 | (uint)pbVar6[2] << 8 |
                 (uint)pbVar6[3];
      local_54 = (uint)pbVar6[4] << 0x18 | (uint)pbVar6[5] << 0x10 | (uint)pbVar6[6] << 8 |
                 (uint)pbVar6[7];
      local_50 = CONCAT11(pbVar6[8],pbVar6[9]);
      if (local_50 == 0) {
        local_4c = (uint)pbVar6[0xc] << 0x18 | (uint)pbVar6[0xd] << 0x10 | (uint)pbVar6[0xe] << 8 |
                   (uint)pbVar6[0xf];
        local_48 = (uint)pbVar6[0x10] << 0x18 | (uint)pbVar6[0x11] << 0x10 | (uint)pbVar6[0x12] << 8
                   | (uint)pbVar6[0x13];
        local_44 = (uint)pbVar6[0x14] << 0x18 | (uint)pbVar6[0x15] << 0x10 | (uint)pbVar6[0x16] << 8
                   | (uint)pbVar6[0x17];
        local_40 = (uint)pbVar6[0x18] << 0x18 | (uint)pbVar6[0x19] << 0x10 | (uint)pbVar6[0x1a] << 8
                   | (uint)pbVar6[0x1b];
        local_3c = (uint)pbVar6[0x1c] << 0x18 | (uint)pbVar6[0x1d] << 0x10 | (uint)pbVar6[0x1e] << 8
                   | (uint)pbVar6[0x1f];
        local_38 = (uint)pbVar6[0x20] << 0x18 | (uint)pbVar6[0x21] << 0x10 | (uint)pbVar6[0x22] << 8
                   | (uint)pbVar6[0x23];
        local_30 = pbVar6[0x28];
        pbVar9 = pbVar6 + 0x29;
        pbVar10 = pbVar9 + (CONCAT11(uStack_2f,local_30) & 0xff);
        if ((int)pbVar10 - (int)pbVar6 <= (int)pbVar8) {
          uStack_2f = SUB41(pbVar9,0);
          uStack_2e = (undefined2)((uint)pbVar9 >> 8);
          uStack_2c = (undefined1)((uint)pbVar9 >> 0x18);
          bVar2 = *pbVar10;
          local_2b = CONCAT31(local_2b._1_3_,bVar2);
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar10 + bVar2;
          if ((int)pbVar9 - (int)pbVar6 <= (int)pbVar8) {
            local_2b._1_3_ = SUB43(pbVar10,0);
            local_2b = CONCAT31(local_2b._1_3_,bVar2);
            uStack_27 = (undefined1)((uint)pbVar10 >> 0x18);
            local_26 = (uint)*pbVar9 << 0x18 | (uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 |
                       (uint)pbVar9[3];
            if (pbVar9 + 4 + (local_26 - (int)pbVar6) <= pbVar8) {
              local_22 = pbVar9 + 4;
            }
          }
        }
      }
    }
    *(short *)((int)param_1 + 100) = *(short *)((int)param_1 + 100) + 1;
    local_4e = *(ushort *)((int)param_1 + 100);
    local_34 = (undefined2)*(undefined4 *)((int)param_1 + 0x60);
    uStack_32 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x60) >> 0x10);
    *(ushort *)((int)param_1 + 0x3c) = local_4e;
    piStack_f4 = (int *)0x662d2474;
    FUN_662c9730(&local_58,pbVar6,(int *)((int)param_1 + 0x48));
    piStack_f4 = (int *)0x662d2483;
    iVar18 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x1c))();
  }
  if (iVar18 < 0) goto LAB_662d2787;
  if ((*(int *)((int)param_1 + 0x30) != 0) && (local_64 == 0)) {
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x44) = 0;
      *(undefined4 *)((int)param_1 + 0x4c) = 0;
    }
    piStack_f4 = *(int **)((int)param_1 + 0x30);
    puVar1 = (uint *)((int)param_1 + 0x4c);
    iVar18 = (**(code **)(*piStack_f4 + 0xc))();
    if (iVar18 < 0) goto LAB_662d2787;
    pvVar11 = operator_new(*puVar1);
    *(void **)((int)param_1 + 0x44) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      iVar18 = -0x7ff8fff2;
    }
    if (iVar18 < 0) goto LAB_662d2787;
    piStack_f4 = (int *)0x662d2502;
    FUN_662c9730(param_1,*(undefined1 **)((int)param_1 + 0x44),(int *)puVar1);
    piStack_f4 = (int *)0x662d2511;
    FUN_662ca8d0(&local_58,*(byte **)((int)param_1 + 0x44),(byte *)*puVar1);
    *(short *)((int)param_1 + 100) = *(short *)((int)param_1 + 100) + 1;
    local_4e = *(ushort *)((int)param_1 + 100);
    local_34 = (undefined2)*(undefined4 *)((int)param_1 + 0x60);
    uStack_32 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x60) >> 0x10);
    *(ushort *)((int)param_1 + 0x3e) = local_4e;
    piStack_f4 = (int *)0x662d2534;
    FUN_662c9730(&local_58,*(undefined1 **)((int)param_1 + 0x44),(int *)puVar1);
    piStack_f4 = (int *)0x662d2543;
    iVar18 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x1c))();
  }
  if (-1 < iVar18) {
    if (local_14 != (int *)0x0) {
      puVar7 = operator_new(0x62);
      if (puVar7 == (undefined4 *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = FUN_662e03d0(puVar7);
      }
      local_c = (int *)0x0;
      if (piVar14 == (int *)0x0) {
        iVar18 = -0x7ff8fff2;
      }
      local_1c = piVar14;
      if (-1 < iVar18) {
        puVar7 = (undefined4 *)FUN_662f3ed0(local_dc);
        local_80 = (undefined2)*puVar7;
        uStack_7e = (undefined2)((uint)*puVar7 >> 0x10);
        uVar15 = puVar7[1];
        local_7c._0_2_ = (undefined2)uVar15;
        local_7c._2_2_ = (undefined2)(uVar15 >> 0x10);
        local_78 = puVar7[2];
        piStack_f4 = (int *)(uVar15 & 0xffff);
        uVar15 = puVar7[3];
        local_74 = (undefined2)uVar15;
        uStack_72 = (ushort)(uVar15 >> 0x10);
        local_70 = *(undefined2 *)(puVar7 + 4);
        sprintf((char *)&local_5c,s__d__d__d__d___2d___2d_6630abc4,uVar15 & 0xffff,local_78 & 0xffff
                ,uStack_72 + 0x76c);
        puVar7 = operator_new(0x28);
        if (puVar7 == (undefined4 *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14 = (int *)FUN_662eeb70(puVar7);
        }
        if (piVar14 == (int *)0x0) {
          iVar18 = -0x7ff8fff2;
        }
        if (-1 < iVar18) {
          (**(code **)(*piVar14 + 4))();
          iVar18 = -1;
          piVar21 = &local_5c;
          do {
            if (iVar18 == 0) break;
            iVar18 = iVar18 + -1;
            iVar4 = *piVar21;
            piVar21 = (int *)((int)piVar21 + 1);
          } while ((char)iVar4 != '\0');
          piStack_f4 = &local_5c;
          (**(code **)(*piVar14 + 0x10))(piVar14);
          iVar18 = (**(code **)(*local_14 + 0x2c))(local_14,s_Modification_Date_6630abb0,piVar14);
          if (-1 < iVar18) {
            piStack_f4 = local_14;
            (**(code **)(*local_14 + 0x30))();
            piStack_f4 = local_14;
            iVar18 = (**(code **)(*local_14 + 0x2c))();
            if (-1 < iVar18) {
              piStack_f4 = (int *)0x662d26b1;
              iVar18 = FUN_662de0a0(local_14,1);
            }
          }
        }
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 8))();
        }
        piVar14 = local_1c;
        if (-1 < iVar18) {
          iVar18 = *local_1c;
          FUN_662ef160(&piStack_f4,s_logical_fileinfo_6630a118);
          iVar18 = (**(code **)(iVar18 + 0x30))();
          if (-1 < iVar18) {
            piStack_f4 = (int *)0x662d26f8;
            iVar18 = (**(code **)(*piVar14 + 0x34))();
            if (-1 < iVar18) {
              *(short *)((int)param_1 + 100) = *(short *)((int)param_1 + 100) + 1;
              FUN_662dee00(piVar14,*(undefined2 *)((int)param_1 + 100));
              if (-1 < iVar18) {
                if (*(void **)((int)param_1 + 0x76) != (void *)0x0) {
                  operator_delete(*(void **)((int)param_1 + 0x76));
                  *(undefined4 *)((int)param_1 + 0x76) = 0;
                }
                local_c = (int *)(**(code **)(*piVar14 + 0xc))();
                pvVar11 = operator_new((uint)local_c);
                *(void **)((int)param_1 + 0x76) = pvVar11;
                if (pvVar11 == (void *)0x0) {
                  iVar18 = -0x7ff8fff2;
                }
                if (-1 < iVar18) {
                  piStack_f4 = (int *)0x662d275b;
                  (**(code **)(*piVar14 + 0x18))();
                  piStack_f4 = *(int **)((int)param_1 + 0x76);
                  (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x1c))(local_c);
                }
              }
            }
          }
        }
      }
      if (piVar14 != (int *)0x0) {
        (**(code **)*piVar14)();
      }
    }
    if (-1 < iVar18) {
      iVar18 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x20))();
    }
  }
LAB_662d2787:
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  return iVar18;
}


