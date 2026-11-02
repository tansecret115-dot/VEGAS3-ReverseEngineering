/* Module: erv23260.dll
   Function: FUN_63810d20
   Address: 63810d20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_63810d20(void *this,int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  int local_8;
  
  local_10 = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  do {
    iVar5 = 0;
    local_c = 0;
    if (local_14 == 0) {
      local_10 = (uint *)*param_3;
    }
    if (local_14 == 4) {
      local_10 = (uint *)*param_4;
    }
    local_8 = 0;
    iVar3 = 0;
    local_1c = local_10;
    do {
      uVar1 = *(uint *)(param_2 + local_8 * 4);
      if (uVar1 == 0) {
        local_c = local_c + 1;
        iVar4 = iVar3;
      }
      else {
        uVar6 = *(uint *)(param_1 + local_8 * 4);
        bVar7 = (int)uVar1 < 0;
        if (bVar7) {
          uVar1 = -uVar1;
          uVar6 = -uVar6;
        }
        if (((param_5 == 0) || (local_8 != 0)) || (*(int *)((int)this + 0x178) != 0)) {
          if (0x7f < (int)uVar1) {
            uVar1 = 0x7f;
          }
          local_18 = local_18 | 1 << ((byte)local_14 & 0x1f);
          uVar6 = uVar6 & 0xffff;
        }
        else {
          if (uVar1 == 0x80) {
            uVar1 = 0xff;
          }
          uVar6 = uVar1 & 0xff;
        }
        uVar2 = local_c & 0x3f;
        local_c = 0;
        *local_1c = uVar2 << 0x19 |
                    uVar6 | ((uint)(*(int *)((int)this + 0x178) != 0) << 9 | (uint)bVar7) << 0xf |
                            (uVar1 + 0x7f & 0xff) << 0x10;
        iVar4 = iVar3 + 1;
        local_1c = local_1c + 1;
        iVar5 = iVar3;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar4;
    } while (local_8 < 0x40);
    local_10[iVar5] = local_10[iVar5] | 0x80000000;
    local_10 = local_10 + iVar4;
    param_2 = param_2 + 0x100;
    param_1 = param_1 + 0x100;
    if (local_14 == 3) {
      *param_3 = (int)local_10;
    }
    if (local_14 == 5) {
      *param_4 = (int)local_10;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 6);
  return local_18;
}


