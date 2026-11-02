/* Module: erv33260.dll
   Function: FUN_670784d0
   Address: 670784d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_670784d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  uint local_dc [11];
  uint local_b0 [11];
  uint local_84 [3];
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58 [2];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28 [5];
  int local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)0x0;
  local_14 = 0;
  FUN_670721d0(local_b0);
  FUN_670721d0(local_dc);
  local_5 = *(undefined1 *)((int)this + 0x22c);
  local_28[4] = (int)(*(int *)((int)this + 0x294) != 0);
  if (local_28[4] != 0) {
    local_c = param_1[2] + 0xf & 0xfffffff0;
    local_10 = param_1[1] + 0xf & 0xfffffff0;
    local_2c = local_c + 0xf >> 4;
    local_30 = local_10 + 0xf >> 4;
    if ((uint)param_1[1] < 0xe1) {
      param_1 = (undefined4 *)0x180;
    }
    else {
      param_1 = (undefined4 *)CONCAT31((int3)(local_10 + 0x9f >> 8),0x80);
    }
    this_00 = (void *)FUN_67072130(0x2c);
    if (this_00 != (void *)0x0) {
      puVar3 = FUN_6707b4a0(this_00,0,puVar2[1],puVar2[2],*(undefined4 *)((int)this + 0x32c),
                            &local_14);
    }
    if (puVar3 == (undefined4 *)0x0) {
      return 2;
    }
    if (local_14 != 0) {
      FUN_6707b5e0(puVar3);
      FUN_67072140(puVar3);
      return local_14;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    iVar1 = *(int *)((int)this + 0x1e4);
    local_78 = *(int *)(iVar1 + 4);
    local_70 = *(undefined4 *)(iVar1 + 8);
    local_74 = *(undefined4 *)(iVar1 + 0xc);
    local_6c = *(undefined4 *)(iVar1 + 0x10);
    local_68 = *(undefined4 *)((int)this + 0x88);
    local_60 = *(undefined4 *)((int)this + 0x8c);
    local_64 = *(int *)((int)this + 0x1d0) << 4;
    local_5c = *(int *)((int)this + 0x1cc) << 4;
    local_50 = puVar3[1];
    local_48 = puVar3[2];
    local_4c = puVar3[3];
    local_40 = puVar2[1];
    local_44 = puVar3[4];
    local_38 = puVar2[2];
    local_3c = local_10;
    local_34 = local_c;
    local_58[0] = 3;
    FUN_6707d3c0(&local_78,&local_50,local_28,local_58,
                 CONCAT31((int3)(local_c >> 8),*(int *)((int)this + 0x1b4) == 1),
                 *(char *)(*(int *)((int)this + 4) + 0x18));
    FUN_6707d2e0(puVar3[1],local_10,local_c,(int)param_1,0x10);
    local_c = local_c >> 1;
    local_10 = local_10 >> 1;
    FUN_6707d2e0(puVar3[2],local_10,local_c,(int)param_1,8);
    FUN_6707d2e0(puVar3[3],local_10,local_c,(int)param_1,8);
    param_1 = puVar3;
  }
  FUN_670787a0((int)this);
  *(undefined4 *)((int)this + 0x10) = puVar2[1];
  *(undefined4 *)((int)this + 0x14) = puVar2[2];
  *(undefined4 *)((int)this + 0x3c) = puVar2[1];
  *(undefined4 *)((int)this + 0x40) = puVar2[2];
  *(undefined4 *)((int)this + 0x88) = puVar2[1];
  *(undefined4 *)((int)this + 0x8c) = puVar2[2];
  local_14 = FUN_670788c0(this);
  if (local_14 == 0) {
    if (local_28[4] != 0) {
      puVar2 = *(undefined4 **)((int)this + 0x1e0);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_6707b5e0(puVar2);
        FUN_67072140(puVar2);
      }
      *(undefined4 **)((int)this + 0x1e4) = param_1;
      local_28[0] = 0;
      local_28[1] = 0;
      *(undefined4 **)((int)this + 0x1e0) = param_1;
      local_28[3] = local_2c;
      local_28[2] = local_30;
      (**(code **)(**(int **)((int)this + 0x16c) + 0x24))(local_28,param_1);
      *(undefined1 *)((int)this + 0x22c) = local_5;
      return local_14;
    }
    FUN_670721d0(local_84);
  }
  return local_14;
}


