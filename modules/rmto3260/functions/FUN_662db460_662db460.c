/* Module: rmto3260.dll
   Function: FUN_662db460
   Address: 662db460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662db460(int param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  void *pvVar11;
  undefined1 local_bc [2];
  int local_ba;
  int local_b6;
  uint local_b2;
  int local_ae;
  undefined1 local_9c [2];
  int local_9a;
  int local_96;
  uint local_92;
  int local_8e;
  undefined1 local_7c [4];
  short sStack_78;
  undefined2 local_76;
  undefined2 uStack_74;
  short local_72;
  undefined1 local_6c [4];
  short sStack_68;
  undefined2 local_66;
  undefined2 uStack_64;
  ushort local_62;
  byte *local_60;
  uint local_5c;
  byte *local_58;
  uint local_54;
  short local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  byte *local_40;
  short local_3c [2];
  uint local_38;
  uint local_34;
  undefined2 local_30;
  undefined2 local_2e;
  ushort local_2c;
  uint local_28;
  byte *local_24;
  uint local_20;
  byte *local_1c;
  uint local_18;
  byte *local_14;
  void *local_10;
  byte *local_c;
  int local_8;
  
  local_5c = 0;
  local_8 = (**(code **)(*param_2 + 0x6c))
                      (param_2,CONCAT22((short)((uint)&local_5c >> 0x10),
                                        *(undefined2 *)(param_1 + 4)),param_4,&local_5c,local_3c);
  local_54 = 0;
  if (-1 < local_8) {
    local_8 = (**(code **)(*param_2 + 0x6c))
                        (param_2,CONCAT22((short)((uint)&local_54 >> 0x10),
                                          *(undefined2 *)(param_1 + 4)),param_3,&local_54,local_3c);
  }
  local_3c[0] = *(short *)(param_1 + 4);
  local_18 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = (byte *)0x0;
  local_4c = 0;
LAB_662db4cf:
  do {
    if (local_8 < 0) {
      return local_8;
    }
    FUN_662e2a70(&local_34);
    pvVar11 = local_10;
    uVar10 = 0;
    local_20 = 0;
    if (*(int *)(param_1 + 0x16) == 0) {
      local_8 = (**(code **)(*param_2 + 0x2c))
                          (param_2,local_7c,*(undefined4 *)((int)local_10 + 4),
                           *(undefined4 *)((int)local_10 + 8),&local_c);
      if (-1 < local_8) {
        local_20 = CONCAT22(uStack_74,local_76);
        local_50 = sStack_78;
        goto LAB_662db54e;
      }
      break;
    }
    local_8 = (**(code **)(*param_2 + 0x28))
                        (param_2,local_6c,*(undefined4 *)((int)local_10 + 4),
                         *(undefined4 *)((int)local_10 + 8),&local_c);
    if (local_8 < 0) break;
    local_20 = CONCAT22(uStack_64,local_66);
    local_50 = sStack_68;
LAB_662db54e:
    uVar10 = local_20;
  } while ((-1 < local_8) && (local_50 != local_3c[0]));
  pvVar3 = local_10;
  if ((local_8 == -0x7ffbfc36) || ((-1 < local_8 && (param_4 + 0x14 < uVar10)))) {
    return 0;
  }
  uVar10 = *(uint *)((int)pvVar11 + 0x42);
  *(uint *)((int)pvVar11 + 0x42) = uVar10 + 1;
  if (200 < uVar10) {
    if (local_8 < 0) goto LAB_662db4cf;
    uVar10 = 0;
    *(undefined4 *)((int)local_10 + 0x42) = 0;
    if (((local_54 < param_4) && (local_54 < local_20)) && (param_4 != 0)) {
      uVar10 = (local_20 * 100 + local_54 * -100) / (param_4 - local_54);
    }
    if (100 < uVar10) {
      uVar10 = 100;
    }
    iVar8 = 0;
    if (0 < *(int *)((int)local_10 + 0x36)) {
      do {
        if (local_8 < 0) break;
        piVar1 = *(int **)(*(int *)((int)pvVar3 + 0x32) + iVar8 * 4);
        local_8 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)pvVar3 + 0x36));
    }
  }
  uVar10 = local_18;
  if (-1 < local_8) {
    if (*(int *)(param_1 + 0x16) == 0) {
      local_34 = CONCAT22(uStack_74,local_76);
      local_2c = (local_72 != *(short *)(param_1 + 0x14)) - 1 & 2;
    }
    else {
      local_34 = CONCAT22(uStack_64,local_66);
      local_2c = local_62;
    }
    local_2e = 0;
    local_30 = 0;
    if ((param_3 <= local_34) && (local_c != (byte *)0x0)) {
      if (local_18 < 2) {
        FUN_66302080(local_9c);
        pvVar11 = local_10;
        FUN_663020b0(local_9c,*(byte **)((int)local_10 + 4));
        local_14 = *(byte **)((int)pvVar11 + 4);
        local_24 = operator_new((uint)(local_c + 100));
        local_1c = local_24;
        do {
          if (local_c + *(int *)((int)pvVar11 + 4) <= local_14) break;
          iVar8 = FUN_663020b0(local_9c,local_14);
          uVar6 = local_20;
          if (local_8e == 3) {
            uVar6 = local_92;
          }
          if (uVar6 < local_28) {
            local_8 = -0x7ffbfff7;
          }
          bVar2 = false;
          if (uVar10 == 0) {
            if ((local_2c & 2) != 0) {
              local_18 = 1;
              bVar2 = true;
              uVar10 = 1;
            }
          }
          else if (uVar10 != 0) {
            bVar2 = local_28 + 1 < uVar6;
            if (bVar2) {
              local_18 = local_18 + 1;
            }
            uVar10 = local_18;
            if (uVar6 == local_28) {
              if (local_48 == 0) {
                bVar2 = true;
              }
            }
            else {
              local_48 = (uint)(uVar6 == local_28 + 1);
            }
          }
          pbVar9 = local_c;
          if ((local_8e != 0) && (local_8e != 1)) {
            if (local_8e == 2) {
              pbVar9 = (byte *)(local_96 + iVar8);
            }
            else if (local_8e == 3) {
              pbVar9 = (byte *)(local_9a + iVar8);
            }
            else {
              local_8 = -0x7ffbfff7;
              pbVar9 = (byte *)0x0;
            }
          }
          if (local_c < pbVar9) {
            local_8 = -0x7ffbfff7;
          }
          if ((-1 < local_8) && ((bVar2 || (1 < uVar10)))) {
            pbVar4 = local_14;
            pbVar7 = local_1c;
            for (uVar10 = (uint)pbVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pbVar7 = *(undefined4 *)pbVar4;
              pbVar4 = pbVar4 + 4;
              pbVar7 = pbVar7 + 4;
            }
            local_1c = local_1c + (int)pbVar9;
            for (uVar5 = (uint)pbVar9 & 3; uVar10 = local_18, uVar5 != 0; uVar5 = uVar5 - 1) {
              *pbVar7 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              pbVar7 = pbVar7 + 1;
            }
          }
          local_14 = local_14 + (int)pbVar9;
          pvVar11 = local_10;
          local_28 = uVar6;
        } while (-1 < local_8);
        if (local_8 < 0) {
          local_c = (byte *)0x0;
        }
        else {
          local_c = local_1c + -(int)local_24;
          pbVar9 = local_24;
          pbVar4 = *(byte **)((int)local_10 + 4);
          for (uVar10 = (uint)local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pbVar4 = *(undefined4 *)pbVar9;
            pbVar9 = pbVar9 + 4;
            pbVar4 = pbVar4 + 4;
          }
          for (uVar10 = (uint)local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pbVar4 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            pbVar4 = pbVar4 + 1;
          }
        }
        operator_delete(local_24);
      }
      if (-1 < local_8) {
        if (((local_5c <= local_20) && (local_c != (byte *)0x0)) && (local_4c == 0)) {
          FUN_66302080(local_bc);
          pvVar11 = local_10;
          FUN_663020b0(local_bc,*(byte **)((int)local_10 + 4));
          pbVar9 = *(byte **)((int)pvVar11 + 4);
          local_40 = pbVar9;
          pbVar4 = operator_new((uint)(local_c + 100));
          local_60 = pbVar4;
          local_14 = pbVar4;
          do {
            if (local_c + *(int *)((int)local_10 + 4) <= pbVar9) break;
            local_24 = (byte *)FUN_663020b0(local_bc,pbVar9);
            uVar10 = local_20;
            if (local_ae == 3) {
              uVar10 = local_b2;
            }
            if (uVar10 < local_38) {
              local_8 = -0x7ffbfff7;
            }
            local_1c = local_58;
            if ((param_4 < uVar10) && (uVar10 != local_38)) {
              if (uVar10 == local_38 + 1) {
                local_1c = (byte *)0x1;
              }
              else {
                local_4c = 1;
                local_1c = (byte *)0x0;
              }
            }
            pbVar7 = local_c;
            if ((local_ae != 0) && (local_ae != 1)) {
              if (local_ae == 2) {
                pbVar7 = local_24 + local_b6;
              }
              else if (local_ae == 3) {
                pbVar7 = local_24 + local_ba;
              }
              else {
                local_8 = -0x7ffbfff7;
                pbVar7 = (byte *)0x0;
              }
            }
            if (local_c < pbVar7) {
              local_8 = -0x7ffbfff7;
            }
            if ((-1 < local_8) &&
               ((uVar10 <= param_4 || ((local_1c != (byte *)0x0 && (1 < local_18)))))) {
              for (uVar6 = (uint)pbVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pbVar4 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar9 + 4;
                pbVar4 = pbVar4 + 4;
              }
              for (uVar6 = (uint)pbVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pbVar4 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar4 = pbVar4 + 1;
              }
              pbVar4 = local_14 + (int)pbVar7;
              pbVar9 = local_40;
              local_14 = pbVar4;
            }
            pbVar9 = pbVar9 + (int)pbVar7;
            local_58 = local_1c;
            local_40 = pbVar9;
            local_38 = uVar10;
          } while (-1 < local_8);
          if (local_8 < 0) {
            local_c = (byte *)0x0;
          }
          else {
            local_c = pbVar4 + -(int)local_60;
            pbVar9 = local_60;
            pbVar4 = *(byte **)((int)local_10 + 4);
            for (uVar10 = (uint)local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pbVar4 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar4 = pbVar4 + 4;
            }
            for (uVar10 = (uint)local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pbVar4 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar4 = pbVar4 + 1;
            }
          }
          operator_delete(local_60);
        }
        if ((-1 < local_8) && (local_c != (byte *)0x0)) {
          local_34 = (local_34 - param_3) + param_5;
          pbVar9 = FUN_662c6a20(param_3 - param_5,*(byte **)((int)local_10 + 4),(uint)local_c,
                                &local_44);
          pvVar11 = local_10;
          if (pbVar9 != (byte *)0x0) {
            if (local_34 < *(uint *)((int)local_10 + 0x2e)) {
              local_8 = -0x7ffbfff7;
            }
            *(uint *)((int)local_10 + 0x2e) = local_34;
            if (-1 < local_8) {
              local_8 = (**(code **)(**(int **)((int)local_10 + 0x10) + 0x2c))
                                  (&local_34,pbVar9,local_44);
            }
            iVar8 = local_8;
            FUN_662dbe70(pvVar11,local_34,local_44);
            if (-1 < iVar8) {
              *(undefined4 *)((int)pvVar11 + 0x1c) = 1;
            }
            if (pbVar9 != *(byte **)((int)pvVar11 + 4)) {
              operator_delete(pbVar9);
            }
          }
        }
      }
    }
  }
  goto LAB_662db4cf;
}


