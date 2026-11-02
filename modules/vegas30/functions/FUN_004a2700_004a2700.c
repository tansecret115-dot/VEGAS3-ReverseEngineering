/* Module: vegas30.exe
   Function: FUN_004a2700
   Address: 004a2700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a290d) */

int FUN_004a2700(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  undefined8 local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_28;
  int local_24;
  undefined1 local_20 [32];
  
  local_60 = -1;
  local_68 = -1;
  local_70 = 0;
  if (((*(uint *)(param_2 + 0x10) & 0x80000) == 0) || ((*(uint *)(param_2 + 0x10) & 0x10000) != 0))
  {
    local_78 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
    local_78 = 1;
  }
  iVar1 = FUN_005382e0(iVar2);
  FUN_004606f0(param_2,*(int *)(*(int *)(param_2 + 0x69c) + 0x24) -
                       *(int *)(*(int *)(param_2 + 0x69c) + 0x1c),1,&local_5c,&local_58);
  local_58 = *(int *)(*(int *)(param_2 + 0x69c) + 0x1c) + local_5c + local_58;
  if (param_4 < local_58) {
    return 0;
  }
  local_50 = FUN_005be610(1,local_20);
  local_6c = local_50 + -1;
  local_64 = 0;
  if (iVar2 != 0) {
    local_6c = (param_4 - local_58) / iVar1;
    local_64 = local_6c;
  }
  lVar4 = ftol();
  lVar4 = lVar4 + *(longlong *)(param_1 + 0xb88);
  local_30 = (uint)lVar4;
  iVar2 = (int)((ulonglong)lVar4 >> 0x20);
  local_48 = FUN_00538340(param_1,local_78);
  local_7c = local_64;
  if (local_64 <= local_6c) {
    do {
      local_54 = FUN_005be910(local_7c,local_20);
      if (local_54 != 0) {
        local_40 = 0xffffffff;
        local_3c = 0x7fffffff;
        local_74 = 0;
        if (0 < local_54) {
          while( true ) {
            FUN_005bec40(local_7c,local_74,local_20,local_4c,&local_28,0,0,0);
            uVar3 = local_28 - local_30;
            iVar1 = (local_24 - iVar2) - (uint)(local_28 < local_30);
            if ((iVar1 < 1) && (iVar1 < 0)) {
              uVar3 = local_30 - local_28;
              iVar1 = (iVar2 - local_24) - (uint)(local_30 < local_28);
            }
            local_38 = local_28 - (uint)local_48;
            local_34 = (local_24 - local_48._4_4_) - (uint)(local_28 < (uint)local_48);
            if (iVar2 < local_34) break;
            if (((((local_34 < iVar2) || (local_38 <= local_30)) &&
                 (CONCAT44(iVar2,local_30) < local_48 + CONCAT44(local_24,local_28))) &&
                (iVar1 <= local_3c)) && ((iVar1 < local_3c || (uVar3 < local_40)))) {
              local_70 = 1;
              local_60 = local_7c;
              local_68 = local_74;
              local_40 = uVar3;
              local_3c = iVar1;
              if ((uVar3 == 0) && (iVar1 == 0)) break;
            }
            if ((iVar2 < local_34) || ((iVar2 <= local_34 && (local_30 < local_38)))) break;
            if (local_78 != 0) {
              local_68 = local_74;
            }
            local_74 = local_74 + 1;
            if (local_54 <= local_74) break;
          }
        }
      }
      local_7c = local_7c + 1;
    } while (local_7c <= local_6c);
    if (local_70 != 0) goto LAB_004a29c3;
  }
  if (local_64 < 0) {
    return local_70;
  }
  if (local_50 <= local_64) {
    return local_70;
  }
  local_70 = 2;
  local_60 = local_64;
LAB_004a29c3:
  *(int *)(param_1 + 0xcf0) = local_60;
  *(int *)(param_1 + 0xce8) = local_68;
  return local_70;
}


