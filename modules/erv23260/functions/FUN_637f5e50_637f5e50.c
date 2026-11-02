/* Module: erv23260.dll
   Function: FUN_637f5e50
   Address: 637f5e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f5e50(void *this,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  switch(param_1) {
  case 1:
    if (((*(byte *)((int)this + 0x9c) & 1) != 0) ||
       (iVar5 = FUN_637f6310(this,*(int *)((int)this + 0x90) - 1), iVar5 == 0)) {
      return 0;
    }
    local_14 = *(int *)((int)this + 0xa8) + -2;
    iVar6 = *(int *)((int)this + 0xa4) + -4;
    local_18 = *(int *)((int)this + 0xac) + -2;
    break;
  case 2:
    if ((*(byte *)((int)this + 0x9c) & 2) != 0) {
      return 0;
    }
    iVar5 = FUN_637f6310(this,*(int *)((int)this + 0x90) + 1);
    if (iVar5 == 0) {
      return 0;
    }
    local_14 = *(int *)((int)this + 0xa8) + 8;
    iVar6 = *(int *)((int)this + 0xa4) + 0x10;
    local_18 = *(int *)((int)this + 0xac) + 8;
    break;
  default:
    iVar6 = param_1;
    break;
  case 4:
    if ((*(byte *)((int)this + 0x9c) & 4) != 0) {
      return 0;
    }
    iVar5 = FUN_637f6310(this,*(int *)((int)this + 0x90) - *(int *)((int)this + 0x34));
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = *(int *)((int)this + 0x1c);
    iVar6 = *(int *)((int)this + 0xa4) + iVar5 * -4;
    local_14 = *(int *)((int)this + 0xa8) + iVar5 * -2;
    local_18 = *(int *)((int)this + 0xac) + iVar5 * -2;
    break;
  case 8:
    if ((*(byte *)((int)this + 0x9c) & 8) != 0) {
      return 0;
    }
    iVar5 = FUN_637f6310(this,*(int *)((int)this + 0x34) + *(int *)((int)this + 0x90));
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = *(int *)((int)this + 0xa4) + *(int *)((int)this + 0x1c) * 0x10;
    iVar5 = *(int *)((int)this + 0x1c) * 8;
    local_14 = *(int *)((int)this + 0xa8) + iVar5;
    local_18 = *(int *)((int)this + 0xac) + iVar5;
  }
  if ((param_1 != 4) && (param_1 != 8)) {
    local_c = *(int *)((int)this + 0xa4);
    param_1 = local_c + 4;
    local_8 = local_c + 8;
    local_10 = local_c + 0xc;
    iVar5 = 0;
    do {
      iVar2 = 0;
      local_24 = 0x10;
      do {
        uVar1 = *(undefined1 *)(iVar2 + iVar5 + iVar6);
        *(undefined1 *)(iVar2 + local_10) = uVar1;
        *(undefined1 *)(iVar2 + local_8) = uVar1;
        *(undefined1 *)(iVar2 + param_1) = uVar1;
        *(undefined1 *)(iVar2 + local_c) = uVar1;
        iVar2 = iVar2 + *(int *)((int)this + 0x1c);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar5 = iVar5 + 1;
      local_c = local_c + 1;
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while (iVar5 < 4);
    iVar5 = *(int *)((int)this + 0xa8);
    param_1 = iVar5 + 2;
    local_8 = iVar5 + 4;
    local_10 = iVar5 + 6;
    iVar6 = 0;
    do {
      iVar2 = 0;
      local_24 = 8;
      do {
        uVar1 = *(undefined1 *)(iVar2 + iVar6 + local_14);
        *(undefined1 *)(iVar2 + local_10) = uVar1;
        *(undefined1 *)(iVar2 + local_8) = uVar1;
        *(undefined1 *)(iVar2 + param_1) = uVar1;
        *(undefined1 *)(iVar2 + iVar5) = uVar1;
        iVar2 = iVar2 + *(int *)((int)this + 0x1c);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while (iVar6 < 2);
    iVar5 = *(int *)((int)this + 0xac);
    param_1 = iVar5 + 2;
    local_8 = iVar5 + 4;
    local_10 = iVar5 + 6;
    iVar6 = 0;
    do {
      iVar2 = 0;
      local_24 = 8;
      do {
        uVar1 = *(undefined1 *)(iVar2 + iVar6 + local_18);
        *(undefined1 *)(iVar2 + local_10) = uVar1;
        *(undefined1 *)(iVar2 + local_8) = uVar1;
        *(undefined1 *)(iVar2 + param_1) = uVar1;
        *(undefined1 *)(iVar2 + iVar5) = uVar1;
        iVar2 = iVar2 + *(int *)((int)this + 0x1c);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while (iVar6 < 2);
    return 1;
  }
  local_c = *(int *)((int)this + 0xa4);
  iVar2 = *(int *)((int)this + 0x1c) * 4;
  iVar4 = local_c + iVar2;
  iVar5 = iVar4 + iVar2;
  local_2c = 4;
  puVar7 = (undefined1 *)(iVar5 + iVar2);
  do {
    local_28 = 0x10;
    puVar3 = puVar7;
    do {
      uVar1 = puVar3[iVar6 - (int)puVar7];
      *puVar3 = uVar1;
      puVar3[iVar5 - (int)puVar7] = uVar1;
      puVar3 = puVar3 + 1;
      puVar3[(iVar4 - (int)puVar7) + -1] = uVar1;
      puVar3[(local_c - (int)puVar7) + -1] = uVar1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
    iVar2 = *(int *)((int)this + 0x1c);
    local_c = local_c + iVar2;
    iVar6 = iVar6 + iVar2;
    iVar4 = iVar4 + iVar2;
    iVar5 = iVar5 + iVar2;
    puVar7 = puVar7 + iVar2;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  local_c = *(int *)((int)this + 0xa8);
  iVar6 = *(int *)((int)this + 0x1c) * 2;
  iVar2 = local_c + iVar6;
  local_28 = 2;
  iVar5 = iVar2 + iVar6;
  puVar7 = (undefined1 *)(iVar5 + iVar6);
  do {
    local_2c = 8;
    puVar3 = puVar7;
    do {
      uVar1 = puVar3[local_14 - (int)puVar7];
      *puVar3 = uVar1;
      puVar3[iVar5 - (int)puVar7] = uVar1;
      puVar3[iVar2 - (int)puVar7] = uVar1;
      puVar3[local_c - (int)puVar7] = uVar1;
      local_2c = local_2c + -1;
      puVar3 = puVar3 + 1;
    } while (local_2c != 0);
    iVar6 = *(int *)((int)this + 0x1c);
    local_c = local_c + iVar6;
    local_14 = local_14 + iVar6;
    iVar2 = iVar2 + iVar6;
    iVar5 = iVar5 + iVar6;
    puVar7 = puVar7 + iVar6;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  local_c = *(int *)((int)this + 0xac);
  iVar6 = *(int *)((int)this + 0x1c) * 2;
  iVar2 = local_c + iVar6;
  local_28 = 2;
  iVar5 = iVar2 + iVar6;
  puVar7 = (undefined1 *)(iVar5 + iVar6);
  do {
    local_2c = 8;
    puVar3 = puVar7;
    do {
      uVar1 = puVar3[local_18 - (int)puVar7];
      *puVar3 = uVar1;
      puVar3[iVar5 - (int)puVar7] = uVar1;
      puVar3[iVar2 - (int)puVar7] = uVar1;
      puVar3[local_c - (int)puVar7] = uVar1;
      local_2c = local_2c + -1;
      puVar3 = puVar3 + 1;
    } while (local_2c != 0);
    iVar6 = *(int *)((int)this + 0x1c);
    local_c = local_c + iVar6;
    local_18 = local_18 + iVar6;
    iVar2 = iVar2 + iVar6;
    iVar5 = iVar5 + iVar6;
    puVar7 = puVar7 + iVar6;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return 1;
}


