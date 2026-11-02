/* Module: erv23260.dll
   Function: FUN_637f7ec0
   Address: 637f7ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f7ec0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_10;
  
  local_10 = 0;
  iVar11 = *(int *)((int)this + 0x38);
  iVar1 = *(int *)((int)this + 0x44);
  uVar2 = *(undefined4 *)((int)this + 0x48);
  uVar3 = *(undefined4 *)((int)this + 0x40);
  iVar4 = *(int *)((int)this + 0x3c);
  uVar6 = 0;
  puVar5 = (undefined4 *)((int)this + 0x300);
  puVar8 = (uint *)((int)this + 0x4c);
  do {
    *puVar8 = uVar6;
    puVar5[-2] = 0;
    *puVar5 = 0;
    puVar5[2] = 0;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 0x51;
  } while (uVar6 < 2);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if (*(int *)((int)this + 0x2dc) == 0) {
    uVar6 = 0;
    do {
      *(undefined4 *)((int)this + uVar6 * 4 + 0x31c) = 0;
      if (uVar6 == 0) {
        *(undefined4 *)((int)this + 0x324) = uVar2;
      }
      else {
        *(undefined4 *)((int)this + uVar6 * 4 + 0x324) = uVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
  }
  uVar6 = (iVar11 + (iVar4 + iVar1) * 2) * 0x18 + 0x20;
  if (*(uint *)((int)this + 0x2dc) < uVar6) {
    if (*(void **)((int)this + 0x2d4) != (void *)0x0) {
      FUN_637f1080(*(void **)((int)this + 0x2d4));
      *(undefined4 *)((int)this + 0x2d8) = 0;
      *(undefined4 *)((int)this + 0x2d4) = 0;
      *(undefined4 *)((int)this + 0x2dc) = 0;
    }
    puVar5 = FUN_637f1030(uVar6,1);
    *(undefined4 **)((int)this + 0x2d4) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    *(uint *)((int)this + 0x2dc) = uVar6;
    *(uint *)((int)this + 0x2d8) = (int)puVar5 + 0x1fU & 0xffffffe0;
  }
  else {
    puVar5 = *(undefined4 **)((int)this + 0x2d4);
    for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar5 = *(undefined4 **)((int)this + 0x2d8);
  puVar9 = (undefined4 *)0x0;
  *(undefined4 **)((int)this + 0x2e8) = puVar5;
  puVar10 = puVar9;
  if (0 < iVar11) {
    do {
      puVar9 = puVar5;
      puVar5 = puVar9 + 6;
      puVar9[4] = puVar10;
      puVar9[5] = puVar5;
      iVar11 = iVar11 + -1;
      puVar10 = puVar9;
    } while (iVar11 != 0);
  }
  puVar9[5] = 0;
  *(int *)((int)this + 0x300) = iVar1;
  *(int *)((int)this + 0x304) = iVar4;
  puVar9 = (undefined4 *)0x0;
  iVar11 = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 **)((int)this + 0x2f8) = puVar5;
  puVar10 = puVar9;
  if (0 < iVar1) {
    do {
      puVar9 = puVar5;
      puVar5 = puVar9 + 0xc;
      puVar9[10] = puVar10;
      puVar9[1] = iVar11;
      puVar9[0xb] = puVar5;
      *puVar9 = 0xffffffff;
      iVar11 = iVar11 + 1;
      puVar10 = puVar9;
    } while (iVar11 < iVar1);
  }
  puVar9[0xb] = *(undefined4 *)((int)this + 0x2f8);
  *(undefined4 **)(*(int *)((int)this + 0x2f8) + 0x28) = puVar9;
  iVar11 = 0;
  *(int *)(*(int *)((int)this + 0x2f8) + 4) = iVar1;
  puVar9 = (undefined4 *)0x0;
  *(undefined4 **)((int)this + 0x2fc) = puVar5;
  puVar10 = puVar9;
  if (0 < iVar4) {
    do {
      puVar9 = puVar5;
      puVar9[10] = puVar10;
      puVar9[1] = iVar11;
      puVar9[0xb] = puVar9 + 0xc;
      *puVar9 = 0xffffffff;
      iVar11 = iVar11 + 1;
      puVar5 = puVar9 + 0xc;
      puVar10 = puVar9;
    } while (iVar11 < iVar4);
  }
  puVar9[0xb] = *(undefined4 *)((int)this + 0x2fc);
  *(undefined4 **)(*(int *)((int)this + 0x2fc) + 0x28) = puVar9;
  *(int *)(*(int *)((int)this + 0x2fc) + 4) = iVar4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0xffffffff;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_10 = FUN_637f7de0(this,param_1,param_2,*(int *)((int)this + 0x328),
                            (int *)((int)this + 800));
    if (local_10 == 0) {
      local_10 = FUN_637f82a0(this,1,param_1,param_2);
    }
  }
  return local_10;
}


