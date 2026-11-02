/* Module: vegas30.exe
   Function: FUN_004a4840
   Address: 004a4840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a48db) */
/* WARNING: Removing unreachable block (ram,0x004a497e) */

void FUN_004a4840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0xbc8);
  if (iVar1 != 0) {
    local_38 = *(uint *)(param_1 + 0xb70);
    local_34 = *(int *)(param_1 + 0xb74);
    if (param_2 == 1) {
      local_38 = 0;
      local_34 = 0;
    }
    *(uint *)(param_1 + 0x18) = (DAT_006476fc & 1) << 6 | *(uint *)(param_1 + 0x18) & 0xffffffbf;
    if (iVar1 == 0) {
      local_30 = *(longlong *)(param_1 + 0x600);
    }
    else {
      local_30 = FUN_005b8d80(iVar1);
    }
    local_30 = local_30 + CONCAT44(DAT_00647e44,DAT_00647e40);
    if (local_30 <= CONCAT44(DAT_00647e3c,DAT_00647e38)) {
      local_30 = CONCAT44(DAT_00647e3c,DAT_00647e38);
    }
    FUN_004582a0(param_1,&local_20,&local_10);
    if (local_10 != 0 || local_c != 0) {
      local_30 = CONCAT44(local_1c + local_c + (uint)CARRY4(local_20,local_10),local_20 + local_10);
    }
    local_28 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x18) >> 8 & 1;
    local_24 = 0xffffffff;
    local_40 = -1;
    local_3c = -1;
    if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
      FUN_004a45b0(param_1,&local_28,&local_40);
      if (local_40 == 0 && local_3c == 0) {
        local_28 = 0xffffffff;
        local_24 = 0xffffffff;
        local_40 = -1;
        local_3c = -1;
        uVar4 = 0;
      }
    }
    iVar2 = local_34;
    if (CONCAT44(local_34,local_38) < local_30) {
      local_1c = local_34;
      local_20 = local_38;
    }
    iVar3 = *(int *)(param_1 + 0x5d0);
    local_18 = *(undefined4 *)(iVar3 + 600);
    local_14 = *(undefined4 *)(iVar3 + 0x25c);
    if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
      local_18 = *(undefined4 *)(iVar3 + 0x158);
      local_14 = *(undefined4 *)(iVar3 + 0x15c);
    }
    iVar3 = Transport_IsPlaying();
    if (iVar3 != 0) {
      (**(code **)(*(int *)(param_1 + 0xab0) + 8))(param_1,local_38,iVar2);
      return;
    }
    FUN_005fb210(iVar1,local_20,local_1c,local_30,local_28,local_24,local_40,local_3c,uVar4,local_18
                 ,local_14);
  }
  return;
}


