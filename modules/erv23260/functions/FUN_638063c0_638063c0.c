/* Module: erv23260.dll
   Function: FUN_638063c0
   Address: 638063c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638063c0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *this_00;
  undefined4 *puVar4;
  uint local_d8 [11];
  uint local_ac [11];
  uint local_80 [3];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54 [2];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24 [5];
  void *local_10;
  int local_c;
  uint local_8;
  
  puVar2 = param_2;
  local_c = 0;
  local_10 = this;
  FUN_637f20a0(local_ac);
  FUN_637f20a0(local_d8);
  local_24[4] = (int)(*(int *)((int)this + 0x81c) != 0);
  if (local_24[4] != 0) {
    uVar3 = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
    local_8 = *(uint *)(param_1 + 4) + 0xf & 0xfffffff0;
    local_28 = uVar3 + 0xf >> 4;
    local_2c = local_8 + 0xf >> 4;
    if (*(uint *)(param_1 + 4) < 0xe1) {
      param_2 = (undefined4 *)0x180;
    }
    else {
      param_2 = (undefined4 *)CONCAT31((int3)(local_8 + 0x9f >> 8),0x80);
    }
    this_00 = (void *)FUN_637f2000(0x24);
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_63809340(this_00,0,*(uint *)(param_1 + 4),*(int *)(param_1 + 8),
                            *(undefined4 *)((int)this + 0x8bc),&local_c);
    }
    if (puVar4 == (undefined4 *)0x0) {
      return 2;
    }
    if (local_c != 0) {
      FUN_63809470(puVar4);
      FUN_637f2010(puVar4);
      return local_c;
    }
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    iVar1 = puVar2[0x1be];
    local_74 = *(int *)(iVar1 + 4);
    local_6c = *(undefined4 *)(iVar1 + 8);
    local_70 = *(undefined4 *)(iVar1 + 0xc);
    local_68 = *(undefined4 *)(iVar1 + 0x10);
    local_64 = puVar2[1];
    local_5c = puVar2[2];
    local_60 = puVar2[0x1b8] << 4;
    local_58 = puVar2[0x1b7] << 4;
    local_4c = puVar4[1];
    local_44 = puVar4[2];
    local_48 = puVar4[3];
    local_3c = *(undefined4 *)(param_1 + 4);
    local_40 = puVar4[4];
    local_34 = *(undefined4 *)(param_1 + 8);
    local_38 = local_8;
    local_54[0] = 3;
    local_30 = uVar3;
    FUN_637ff670(&local_74,&local_4c,local_24,local_54,
                 CONCAT31((int3)((uint)local_10 >> 8),puVar2[0x193] == 1),
                 *(char *)(*(int *)((int)local_10 + 4) + 0x18));
    FUN_637fd730(puVar4[1],local_8,uVar3,(int)param_2,0x10);
    local_8 = local_8 >> 1;
    FUN_637fd730(puVar4[2],local_8,uVar3 >> 1,(int)param_2,8);
    FUN_637fd730(puVar4[3],local_8,uVar3 >> 1,(int)param_2,8);
    param_2 = puVar4;
  }
  FUN_63806690((int)local_10);
  *(undefined4 *)((int)local_10 + 0x10) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)local_10 + 0x14) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)local_10 + 0x3c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)local_10 + 0x40) = *(undefined4 *)(param_1 + 8);
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  local_c = FUN_63806830((int)local_10);
  if (local_c == 0) {
    if (local_24[4] == 0) {
      FUN_637f20a0(local_80);
    }
    else {
      puVar4 = (undefined4 *)puVar2[0x1bd];
      if (puVar4 != (undefined4 *)0x0) {
        FUN_63809470(puVar4);
        FUN_637f2010(puVar4);
      }
      local_24[2] = local_2c;
      local_24[3] = local_28;
      puVar2[0x1be] = param_2;
      puVar2[0x1bd] = param_2;
      local_24[0] = 0;
      local_24[1] = 0;
      (**(code **)(*(int *)puVar2[0x171] + 0x38))(local_24,param_2);
      *(undefined1 *)(puVar2 + 0x1d0) = 0;
    }
    *(undefined4 *)((int)local_10 + 0x804) = 0;
  }
  return local_c;
}


