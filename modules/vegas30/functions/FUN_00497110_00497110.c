/* Module: vegas30.exe
   Function: FUN_00497110
   Address: 00497110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
FUN_00497110(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 local_23c;
  uint local_234;
  int iStack_230;
  int local_22c;
  undefined1 local_228 [24];
  uint local_210;
  int local_20c;
  uint local_208;
  int local_204;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (-1 < param_4) {
      local_23c = ftol();
      uVar6 = ftol();
      return uVar6;
    }
    local_23c._0_4_ = -param_3;
    local_23c._4_4_ = -(param_4 + (uint)(param_3 != 0));
    local_23c = ftol();
    uVar6 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
  }
  iVar2 = FUN_004942c0(param_1,&param_3);
  iVar4 = param_6;
  uVar1 = param_5;
  if (iVar2 != 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (param_4 < 0) {
      local_23c._0_4_ = -param_3;
      local_23c._4_4_ = -(param_4 + (uint)(param_3 != 0));
      local_23c = ftol();
      uVar6 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    }
    local_23c = ftol();
    uVar6 = ftol();
    return uVar6;
  }
  local_234 = param_3 + param_5;
  iStack_230 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
  iVar2 = FUN_004942c0(param_1,&local_234);
  if (iVar2 != 0) {
    local_23c._0_4_ = local_234 - uVar1;
    local_23c._4_4_ = (iStack_230 - iVar4) - (uint)(local_234 < uVar1);
    if (DAT_006476c0 == 0) {
      return CONCAT44(local_23c._4_4_,(uint)local_23c);
    }
    if (local_23c._4_4_ < 0) {
      bVar5 = (uint)local_23c != 0;
      local_23c._0_4_ = -(uint)local_23c;
      local_23c._4_4_ = -(local_23c._4_4_ + (uint)bVar5);
      local_23c = ftol();
      uVar6 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    }
    local_23c = ftol();
    uVar6 = ftol();
    return uVar6;
  }
  if (param_2 != 0) {
    local_210 = param_3;
    local_20c = param_4;
    local_208 = uVar1;
    local_204 = param_6;
    iVar2 = FUN_005c8b90(param_2,local_228);
    iVar4 = iVar2;
    if (0 < iVar2) {
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        local_22c = iVar2;
        iVar3 = FUN_00494ca0(param_1,&param_3,
                             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + iVar4 * 4));
        iVar2 = local_22c;
        if (iVar3 != 0) {
          if (DAT_006476c0 == 0) {
            return CONCAT44(param_4,param_3);
          }
          if (param_4 < 0) {
            local_23c._0_4_ = -param_3;
            local_23c._4_4_ = -(param_4 + (uint)(param_3 != 0));
            local_23c = ftol();
            uVar6 = ftol();
            return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6
                           );
          }
          local_23c = ftol();
          uVar6 = ftol();
          return uVar6;
        }
      }
    }
    local_22c = **(int **)(param_2 + 0x24);
    if (iVar2 < local_22c) {
      do {
        local_23c._0_4_ = param_3 + param_5;
        local_23c._4_4_ = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
        iVar4 = FUN_00494ba0(param_1,&local_23c,
                             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + iVar2 * 4));
        if (iVar4 != 0) {
          local_234 = (uint)local_23c - param_5;
          iStack_230 = (local_23c._4_4_ - param_6) - (uint)((uint)local_23c < param_5);
          if (DAT_006476c0 == 0) {
            return CONCAT44(iStack_230,local_234);
          }
          if (iStack_230 < 0) {
            local_23c._0_4_ = -local_234;
            local_23c._4_4_ = -(iStack_230 + (uint)(local_234 != 0));
            local_23c = ftol();
            uVar6 = ftol();
            return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6
                           );
          }
          local_23c = ftol();
          uVar6 = ftol();
          return uVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_22c);
    }
  }
  iVar4 = FUN_00494220(param_1,&param_3);
  if (iVar4 == 0) {
    uVar6 = FUN_00494da0(param_1,param_3,param_4);
    return uVar6;
  }
  if (DAT_006476c0 != 0) {
    if (param_4 < 0) {
      local_23c._0_4_ = -param_3;
      local_23c._4_4_ = -(param_4 + (uint)(param_3 != 0));
      local_23c = ftol();
      uVar6 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    }
    local_23c = ftol();
    uVar6 = ftol();
    return uVar6;
  }
  return CONCAT44(param_4,param_3);
}


