/* Module: vegas30.exe
   Function: FUN_00593c50
   Address: 00593c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00593c50(undefined4 param_1,int param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int param_10)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 uVar6;
  float10 extraout_ST0;
  undefined8 uVar7;
  undefined2 *puVar8;
  double local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_2c;
  undefined8 local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_18;
  int local_14;
  ushort local_10;
  ushort uStack_e;
  undefined2 local_c;
  
  local_2c._0_4_ = *(uint *)(param_3 + 2);
  uVar6 = 0;
  local_2c._4_4_ = 0;
  local_50 = (double)(uint)local_2c;
  local_2c = ftol();
  local_38 = (double)(ulonglong)*(uint *)(*(int *)(param_2 + 0x2c) + 4);
  local_40 = 0.0;
  local_48 = 0;
  local_44 = 0;
  local_38 = (double)(extraout_ST0 / (float10)(longlong)local_38);
  if (param_10 != 0) {
    uVar1 = *(uint *)(param_10 + 0x10);
    uVar4 = uVar1 & 0x30000000;
    if (uVar4 == 0) {
      if ((*(int *)(param_10 + 0x28) == 0) && (*(int *)(param_10 + 0x2c) == 0x3ff00000)) {
        local_40 = 0.0;
      }
      else {
        local_40 = _DAT_006106d0 / *(double *)(param_10 + 0x28);
      }
      if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar1 >> 0x19 & 7) * 8)) {
        FUN_00591240(*(undefined4 *)(param_3 + 2),(undefined4)local_40,local_40._4_4_,&local_48,
                     &local_44);
      }
      else {
        local_48 = ftol();
        local_44 = local_48;
      }
      uVar6 = local_48;
      ftol();
      local_24 = (ulonglong)*(uint *)(param_3 + 2);
    }
    else {
      if (uVar4 != 0x20000000) {
        local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
        if (uVar4 == 0x10000000) {
          local_38 = local_38 / *(double *)(param_10 + 0x28);
          local_40 = *(double *)(param_10 + 0x28);
          if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar1 >> 0x19 & 7) * 8)) {
            FUN_00591240(*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_10 + 0x28),
                         *(undefined4 *)(param_10 + 0x2c),&local_48,&local_44);
            uVar6 = local_48;
          }
          else {
            uVar6 = ftol();
            local_48 = uVar6;
            local_44 = uVar6;
          }
        }
        goto LAB_00593e6a;
      }
      local_38 = local_38 / *(double *)(param_10 + 0x28);
      local_40 = 0.0;
      local_24 = ftol();
    }
    uVar7 = ftol();
    local_2c = uVar7;
  }
LAB_00593e6a:
  iVar3 = FUN_0058f8e0(param_6,param_7,(uint)local_2c,DAT_0065ab98,param_8,&local_50,
                       (undefined4)local_38,local_38._4_4_,(undefined4)local_40,local_40._4_4_,uVar6
                       ,local_44);
  if ((iVar3 < 0) || (local_50._0_4_ == 0)) {
    return 0xfffffffe;
  }
  puVar2 = *(undefined2 **)(param_2 + 0x2c);
  if ((puVar2[1] == 1) && (param_3[1] == 2)) {
    local_1c = *param_3;
    local_1a = 1;
    local_18 = *(int *)(param_3 + 2);
    local_c = 0;
    uVar5 = (ushort)param_3[7] >> 3;
    _local_10 = CONCAT22(param_3[7],uVar5);
    local_14 = (uint)uVar5 * local_18;
    if ((_DAT_006106d0 == local_38) && (_DAT_00610fd8 == local_40)) {
      _SfAudio_Copy_24(&local_1c,DAT_0065ab98,puVar2,DAT_0065ab98,local_50._0_4_,0x3f800000);
    }
    _SfAudio_ChannelChange_20(param_4,2,DAT_0065ab98,&local_1c,local_50._0_4_);
    return local_50._0_4_;
  }
  if ((puVar2[1] != 2) || (param_3[1] != 1)) {
    puVar8 = param_3;
    if ((_DAT_006106d0 == local_38) && (_DAT_00610fd8 == local_40)) {
      puVar8 = puVar2;
    }
    _SfAudio_Copy_24(param_3,param_4,puVar8,DAT_0065ab98,local_50._0_4_,0x3f800000);
    if ((((*(short *)(*(int *)(param_2 + 0x2c) + 2) == 2) && (param_3[1] == 2)) && (param_10 != 0))
       && (*(int *)(param_10 + 0xf8) != 1000)) {
      FUN_00591a30(*(int *)(param_10 + 0xf8),param_3,param_4,local_50._0_4_);
    }
    return local_50._0_4_;
  }
  local_1c = *param_3;
  local_1a = 2;
  local_18 = *(int *)(param_3 + 2);
  local_c = 0;
  uVar5 = ((ushort)param_3[7] >> 3) << 1;
  _local_10 = CONCAT22(param_3[7],uVar5);
  local_14 = (uint)uVar5 * local_18;
  if ((_DAT_006106d0 == local_38) && (_DAT_00610fd8 == local_40)) {
    _SfAudio_Copy_24(&local_1c,DAT_0065ab9c,puVar2,DAT_0065ab98,local_50._0_4_,0x3f800000);
    if ((param_10 != 0) && (*(int *)(param_10 + 0xf8) != 1000)) {
      FUN_00591a30(*(int *)(param_10 + 0xf8),&local_1c,DAT_0065ab9c,local_50._0_4_);
    }
    _SfAudio_ChannelChangeAvg_20(param_4,1,DAT_0065ab9c,&local_1c,local_50._0_4_);
    return local_50._0_4_;
  }
  if ((param_10 != 0) && (*(int *)(param_10 + 0xf8) != 1000)) {
    FUN_00591a30(*(int *)(param_10 + 0xf8),&local_1c,DAT_0065ab98,local_50._0_4_);
  }
  _SfAudio_ChannelChangeAvg_20(param_4,1,DAT_0065ab98,&local_1c,local_50._0_4_);
  return local_50._0_4_;
}


