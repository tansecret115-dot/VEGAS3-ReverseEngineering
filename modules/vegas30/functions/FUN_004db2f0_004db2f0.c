/* Module: vegas30.exe
   Function: FUN_004db2f0
   Address: 004db2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004db2f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_58 = *(uint *)(param_1 + 0xb70);
  local_54 = *(int *)(param_1 + 0xb74);
  if (param_2 == 1) {
    local_58 = 0;
    local_54 = 0;
  }
  iVar2 = Transport_IsPreviewPlaying();
  if (iVar2 != 0) {
    FUN_005fd4c0(1);
  }
  *(uint *)(param_1 + 0x18) = (DAT_00647700 & 1) << 6 | *(uint *)(param_1 + 0x18) & 0xffffffbf;
  if (*(int *)(param_1 + 0xd50) != 0) {
    uVar3 = *(uint *)(param_1 + 0x600);
    iVar2 = *(int *)(param_1 + 0x604);
    local_40 = uVar3;
    local_3c = iVar2;
    FUN_004582a0(param_1,&local_68,&local_38);
    local_60 = uVar3;
    if (local_38 != 0 || local_34 != 0) {
      iVar2 = local_64 + local_34 + (uint)CARRY4(local_68,local_38);
      local_60 = local_68 + local_38;
    }
    uVar3 = *(uint *)(param_1 + 0x18) >> 8 & 1;
    local_48 = 0xffffffff;
    local_44 = -1;
    local_50 = 0xffffffff;
    local_4c = -1;
    local_5c = iVar2;
    if ((uVar3 != 0) && (FUN_004a45b0(param_1,&local_48,&local_50), local_50 == 0 && local_4c == 0))
    {
      local_48 = 0;
      local_44 = 0;
      local_4c = local_3c;
      local_50 = local_40;
    }
    if ((iVar2 < local_54) || ((iVar2 <= local_54 && (iVar2 = local_5c, local_60 <= local_58)))) {
      iVar2 = local_5c;
      if ((local_58 == local_40) && (local_54 == local_3c)) {
        local_68 = 0;
        local_64 = 0;
        if (((uVar3 != 0) && (local_50 + local_48 == local_40)) &&
           (local_4c + local_44 + (uint)CARRY4(local_50,local_48) == local_3c)) {
          local_68 = local_48;
          local_64 = local_44;
        }
      }
    }
    else {
      local_68 = local_58;
      local_64 = local_54;
    }
    iVar1 = *(int *)(DAT_00647630 + 0x5d0);
    local_40 = *(undefined4 *)(iVar1 + 600);
    local_3c = *(undefined4 *)(iVar1 + 0x25c);
    if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
      local_40 = *(undefined4 *)(iVar1 + 0x158);
      local_3c = *(undefined4 *)(iVar1 + 0x15c);
    }
    FUN_004e40a0(1);
    local_18 = *(undefined4 *)(param_1 + 0xd50);
    local_28 = local_68;
    local_2c = 0;
    local_10 = 0;
    local_14 = 0;
    local_20 = local_60 - local_68;
    local_24 = local_64;
    local_1c = (iVar2 - local_64) - (uint)(local_60 < local_68);
    local_30 = 0x10;
    FUN_005fcfc0(&local_30,param_1,local_48,local_44,local_50,local_4c,uVar3,local_40,local_3c,0);
  }
  return;
}


