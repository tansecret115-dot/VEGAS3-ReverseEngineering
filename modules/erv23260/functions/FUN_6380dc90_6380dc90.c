/* Module: erv23260.dll
   Function: FUN_6380dc90
   Address: 6380dc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6380dc90(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *param_1;
  local_10 = param_1[3] + local_8;
  uVar4 = param_1[2] + param_1[1];
  local_c = uVar4;
  if (local_8 < local_10) {
    do {
      uVar3 = param_1[1];
      if (uVar3 < uVar4) {
        iVar6 = (local_8 * *(int *)((int)this + 0x124) + uVar3) * 0x7c;
        iVar5 = uVar4 - uVar3;
        do {
          FUN_6380e950(this,iVar6 + *(int *)((int)this + 8),&local_30,1);
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x38) =
               *(int *)(iVar6 + 8 + *(int *)((int)this + 8)) - local_30;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x3c) =
               *(int *)(iVar6 + 0xc + *(int *)((int)this + 8)) - local_2c;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x40) =
               *(int *)(iVar6 + 0x10 + *(int *)((int)this + 8)) - local_28;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x44) =
               *(int *)(iVar6 + 0x14 + *(int *)((int)this + 8)) - local_24;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x48) =
               *(int *)(iVar6 + 0x18 + *(int *)((int)this + 8)) - local_20;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x4c) =
               *(int *)(iVar6 + 0x1c + *(int *)((int)this + 8)) - local_1c;
          *(int *)(iVar6 + *(int *)((int)this + 8) + 0x50) =
               *(int *)(iVar6 + 0x20 + *(int *)((int)this + 8)) - local_18;
          iVar2 = iVar6 + 0x24;
          iVar1 = iVar6 + *(int *)((int)this + 8);
          iVar6 = iVar6 + 0x7c;
          iVar5 = iVar5 + -1;
          *(int *)(iVar1 + 0x54) = *(int *)(iVar2 + *(int *)((int)this + 8)) - local_14;
          uVar4 = local_c;
        } while (iVar5 != 0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  return 0;
}


