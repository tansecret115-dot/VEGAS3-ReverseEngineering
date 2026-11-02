/* Module: vegas30.exe
   Function: FUN_005b7820
   Address: 005b7820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005b7820(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  DWORD lDistanceToMove;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  LONG local_14;
  DWORD local_10;
  int local_c [2];
  int local_4;
  
  local_1c = 0;
  local_30 = 0;
  local_34 = FUN_005b7540(&local_1c,&local_30);
  if (-1 < local_34) {
    local_34 = FUN_005b7330();
    if (-1 < local_34) {
      DAT_0064761c = DAT_0064761c | 0x400;
      uVar1 = *(uint *)(param_1 + 0x13c);
      local_2c = (*(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1c8)) + -0xac;
      local_20 = uVar1;
      if (uVar1 != 0) {
        iVar5 = uVar1 - 1;
        local_18 = 0;
        if (iVar5 != 0) {
          piVar3 = (int *)(local_30 + 4);
          do {
            local_18 = local_18 + 8 + *piVar3;
            if ((local_18 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            piVar3 = piVar3 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_14 = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0x118),local_18,&local_14,1);
        lDistanceToMove = 0xffffffff;
        iVar5 = uVar1 - 1;
        local_4 = -1;
        if (-1 < iVar5) {
          local_28 = iVar5 * 0x20;
          do {
            local_24 = 0;
            local_34 = FUN_005b6620(&local_24);
            if (local_34 < 0) goto LAB_005b79d6;
            if (iVar5 != 0) {
              if (iVar5 == local_20 - 1) {
                local_18 = 0;
                local_14 = 0;
                lDistanceToMove = SetFilePointer(*(HANDLE *)(param_1 + 0x118),0,&local_14,1);
                local_4 = local_14;
              }
              local_2c = local_2c - local_24;
              iVar2 = *(int *)(local_28 + -0x1c + local_30) + 8;
              iVar4 = local_24 + iVar2;
              if ((local_2c - iVar2 & 1U) != 0) {
                iVar4 = iVar4 + 1;
              }
              local_10 = -iVar4;
              local_c[0] = -(uint)(iVar4 != 0);
              SetFilePointer(*(HANDLE *)(param_1 + 0x118),local_10,local_c,1);
            }
            iVar5 = iVar5 + -1;
            local_28 = local_28 + -0x20;
          } while (-1 < iVar5);
        }
        if ((-1 < local_34) && (1 < local_20)) {
          local_c[0] = local_4;
          local_10 = lDistanceToMove;
          SetFilePointer(*(HANDLE *)(param_1 + 0x118),lDistanceToMove,local_c,1);
        }
      }
LAB_005b79d6:
      DAT_0064761c = DAT_0064761c & 0xfffffbff;
      if (-1 < local_34) {
        local_34 = FUN_005b7360();
      }
    }
    if (local_30 != 0) {
      FUN_005b7a40(local_30);
    }
  }
  return local_34;
}


