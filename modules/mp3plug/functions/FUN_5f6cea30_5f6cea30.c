/* Module: mp3plug.dll
   Function: FUN_5f6cea30
   Address: 5f6cea30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6cea30(uint *param_1,uint *param_2)

{
  double dVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [2];
  uint local_2c;
  undefined4 uStack_28;
  undefined8 local_14;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if ((param_2[2] != 0) && (*param_2 == 0)) {
    local_3c = DAT_5f75c064;
    local_40 = DAT_5f75c060;
    local_44 = DAT_5f75c05c;
    local_48 = DAT_5f75c058;
    local_4c = DAT_5f75c054;
    local_50 = DAT_5f75c050;
    local_54 = DAT_5f75c04c;
    local_5c = DAT_5f75c044;
    local_58 = param_2[2];
    local_60 = param_2[1];
    if (local_60 == 0) {
      local_60 = *param_1;
    }
    if (param_1[0x10] != 0) {
      local_38 = 0;
      FUN_5f6d1930((undefined4 *)param_1[0x10],0,&local_38);
    }
    ppuVar2 = FUN_5f6d1520((int)param_1,(int *)&local_60,(int *)param_1[0x10]);
    if (ppuVar2 != (undefined **)0x0) {
      if (param_1[0x22] == 0) {
LAB_5f6ceb3b:
        if (param_1[0x10] != 0) {
          local_34[0] = 0;
          uVar4 = param_1[0x11];
          if (uVar4 == 0) {
            local_34[0] = 0;
          }
          else if (uVar4 == 1) {
            local_34[0] = 5;
          }
          else if (uVar4 == 2) {
            local_34[0] = 9;
          }
          FUN_5f6d1930((undefined4 *)param_1[0x10],0,local_34);
        }
        return 0;
      }
      local_60 = 1;
      ppuVar2 = FUN_5f6d1520((int)param_1,(int *)&local_60,(int *)param_1[0x10]);
      if (ppuVar2 != (undefined **)0x0) goto LAB_5f6ceb3b;
    }
    param_1[0x2e] = local_58;
    param_1[0x2d] = local_60;
    dVar1 = (double)local_5c;
    local_14._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
    local_14._0_4_ = SUB84(dVar1,0);
    uVar4 = local_14._4_4_ >> 0x14 & 0x7ff;
    if (uVar4 < 0x3ff) {
      local_2c = 0;
    }
    else {
      local_2c = (local_14._4_4_ << 0xb | (uint)local_14 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar4 & 0x1f);
      if ((longlong)dVar1 < 0) {
        local_2c = -local_2c;
      }
    }
    param_1[0x2c] = local_2c;
    local_14 = dVar1;
LAB_5f6cec2d:
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x24] = 0;
    uVar3 = FUN_5f6ce270(param_1);
    return uVar3;
  }
  if (param_2[1] <= *param_1) {
    local_2c = *param_2;
    uStack_28 = 0;
    if ((float)local_2c <= (float)param_1[1]) {
      param_1[0x2c] = *param_2;
      param_1[0x2d] = param_2[1];
      param_1[0x2e] = param_2[2];
      goto LAB_5f6cec2d;
    }
  }
  return 0;
}


