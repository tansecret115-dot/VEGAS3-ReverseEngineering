/* Module: rmbe3260.dll
   Function: FUN_66010110
   Address: 66010110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66010110(int *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 uStack_32;
  uint local_30;
  int local_2c;
  undefined2 local_28;
  uint local_24;
  int local_20;
  undefined2 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_8 = 0;
  FUN_6602f240(&local_24);
  local_c = (undefined1 *)0x0;
  local_10 = (undefined1 *)0x0;
  local_14 = 0;
  local_18 = 0;
  if (param_1[9] == 0) {
    local_8 = -0x7ffbfda8;
    goto LAB_660105a7;
  }
  iVar6 = param_1[0x11];
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x10) != 0)) && (*(int *)(iVar6 + 0x14) == 0)) {
    return 0x40267;
  }
  if ((param_1[0x22] == 0) && (param_1[0x24] == 0)) {
    local_8 = -0x7ffbfff9;
    goto LAB_660105a7;
  }
  if (param_1[0x2b] == 0) {
    if (param_1[0x21] == 0) {
      local_8 = (**(code **)(*param_1 + 0x48))(param_1);
    }
    else {
      local_8 = -0x7fffbffb;
    }
  }
  if (local_8 < 0) goto LAB_660105a7;
  if (param_1[0xe] == 1) {
    return 0;
  }
  local_8 = (**(code **)(*param_2 + 0x10))(param_2,&local_10,&local_c,&local_14,&local_18);
  if (local_8 < 0) goto LAB_660105a7;
  if (param_1[10] == 0) {
    iVar6 = param_1[0x11];
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x10) != 0)) {
      uVar5 = *(uint *)(iVar6 + 0x18);
      if (local_14 < uVar5) goto LAB_66010216;
      uVar5 = local_14 - uVar5;
      goto LAB_66010219;
    }
  }
  else {
    uVar5 = param_1[0xb];
    if (local_14 < uVar5) {
LAB_66010216:
      uVar5 = (local_14 - uVar5) - 1;
    }
    else {
      uVar5 = local_14 - uVar5;
    }
LAB_66010219:
    if (86400000 < uVar5) {
      local_8 = 0x40267;
      goto LAB_660105a7;
    }
  }
  param_1[0xb] = local_14;
  if (param_1[0xd] == 0) {
    param_1[0xc] = local_14;
    param_1[0xd] = 1;
    param_1[0x2e] = local_14;
    param_1[0x2f] = local_14;
  }
  if (local_c < (undefined1 *)0x14) {
    local_8 = -0x7fffbffb;
  }
  else {
    if (local_10 == (undefined1 *)0x0) {
      uVar7 = uStack_32;
    }
    else {
      local_44._2_2_ = CONCAT11(local_10[2],local_10[3]);
      local_40 = (uint)(byte)local_10[4] << 0x18 | (uint)(byte)local_10[5] << 0x10 |
                 (uint)(byte)local_10[6] << 8 | (uint)(byte)local_10[7];
      local_3c = (uint)(byte)local_10[8] << 0x18 | (uint)(byte)local_10[9] << 0x10 |
                 (uint)(byte)local_10[10] << 8 | (uint)(byte)local_10[0xb];
      local_38 = CONCAT11(local_10[0xc],local_10[0xd]);
      local_36 = CONCAT11(local_10[0xe],local_10[0xf]);
      _local_34 = CONCAT22(CONCAT11(local_10[0x12],local_10[0x13]),
                           CONCAT11(local_10[0x10],local_10[0x11]));
      uVar7 = CONCAT11(local_10[0x12],local_10[0x13]);
    }
    uVar5 = local_40;
    if ((local_34 <= local_38) || (uVar7 <= local_36)) {
      return -0x7ff8ffa9;
    }
    uVar1 = *(undefined2 *)((int)param_1 + 0xaa);
    local_44 = CONCAT22(local_44._2_2_,uVar1);
    uVar3 = local_44;
    local_44._1_1_ = (undefined1)((ushort)uVar1 >> 8);
    *local_10 = local_44._1_1_;
    local_44._0_1_ = (undefined1)uVar1;
    local_10[1] = (undefined1)local_44;
    local_10[2] = local_44._3_1_;
    local_10[3] = local_44._2_1_;
    local_10[4] = (char)(local_40 >> 0x18);
    local_10[5] = (char)(local_40 >> 0x10);
    local_10[6] = (char)(local_40 >> 8);
    local_10[7] = (undefined1)local_40;
    local_10[8] = (char)(local_3c >> 0x18);
    local_10[9] = (char)(local_3c >> 0x10);
    local_10[10] = (char)(local_3c >> 8);
    local_10[0xb] = (undefined1)local_3c;
    local_10[0xc] = local_38._1_1_;
    local_10[0xd] = (undefined1)local_38;
    local_10[0xe] = local_36._1_1_;
    local_10[0xf] = (undefined1)local_36;
    local_10[0x10] = local_34._1_1_;
    local_10[0x11] = (undefined1)local_34;
    local_10[0x12] = uStack_32._1_1_;
    local_10[0x13] = (undefined1)uStack_32;
    local_24 = 1;
    if (local_14 != 0) {
      local_24 = local_14;
    }
    local_20 = (uint)*(ushort *)((int)param_1 + 0xaa) << 0x10;
    local_1c = (undefined2)local_18;
    local_44 = uVar3;
    if ((int *)param_1[0x22] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x22] + 0x2c))(&local_24,local_10,local_c);
    }
    uVar1 = local_1c;
    uVar4 = local_24;
    if (param_1[0x24] != 0) {
      local_2c = local_20;
      puVar8 = &local_44;
      puVar9 = &local_44;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      local_28 = uVar1;
      iVar6 = param_1[0x11];
      local_30 = uVar4;
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x10) != 0)) && (*(int *)(iVar6 + 0x14) != 0)) {
        uVar2 = *(uint *)(iVar6 + 0x18);
        if (uVar4 < uVar2) {
          uVar4 = (uVar4 - uVar2) - 1;
        }
        else {
          uVar4 = uVar4 - uVar2;
        }
        local_30 = -(uint)(uVar4 < 86400000) & uVar4;
        uVar4 = *(uint *)(iVar6 + 0x18);
        uVar5 = uVar5 * 100;
        if (uVar5 < uVar4) {
          uVar5 = (uVar5 - uVar4) - 1;
        }
        else {
          uVar5 = uVar5 - uVar4;
        }
        local_40 = uVar5 / 100;
        uVar5 = local_3c * 100;
        if (uVar5 < uVar4) {
          uVar5 = (uVar5 - uVar4) - 1;
        }
        else {
          uVar5 = uVar5 - uVar4;
        }
        uVar5 = uVar5 / 100;
        *local_10 = (char)((uint)local_44 >> 8);
        local_10[1] = (char)local_44;
        local_10[2] = (char)((uint)local_44 >> 0x18);
        local_10[3] = (char)((uint)local_44 >> 0x10);
        local_10[4] = (char)(local_40 >> 0x18);
        local_10[5] = (char)(local_40 >> 0x10);
        local_10[6] = (char)(local_40 >> 8);
        local_10[7] = (char)local_40;
        local_10[8] = (char)(uVar5 >> 0x18);
        local_10[9] = (char)(uVar5 >> 0x10);
        local_10[10] = (char)(uVar5 >> 8);
        local_10[0xb] = (char)uVar5;
        local_10[0xc] = (char)(local_38 >> 8);
        local_10[0xd] = (char)local_38;
        local_10[0xe] = (char)(local_36 >> 8);
        local_10[0xf] = (char)local_36;
        local_10[0x10] = (char)((uint)_local_34 >> 8);
        local_10[0x11] = (char)_local_34;
        local_10[0x12] = (char)((uint)_local_34 >> 0x18);
        local_10[0x13] = (char)((uint)_local_34 >> 0x10);
        local_c = local_10 + 0x13 + (1 - (int)local_10);
      }
      (**(code **)(*(int *)param_1[0x24] + 0x2c))(&local_30,local_10,local_c);
    }
    *(short *)((int)param_1 + 0xaa) = *(short *)((int)param_1 + 0xaa) + 1;
    *(uint *)((int)param_1 + 0xa6) = local_14;
    (**(code **)(*param_1 + 0x5c))(param_1,local_14,local_c);
  }
LAB_660105a7:
  if (((param_1[10] == 0) && (-1 < local_8)) && (local_8 != 0x40267)) {
    param_1[10] = 1;
    return local_8;
  }
  return local_8;
}


