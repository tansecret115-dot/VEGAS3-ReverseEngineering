/* Module: erv23260.dll
   Function: FUN_637f82a0
   Address: 637f82a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f82a0(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_10;
  
  iVar7 = 0;
  iVar6 = 0;
  local_10 = 0;
  iVar1 = param_1 * 0x144;
  *(uint *)((int)this + iVar1 + 0x13c) = param_2;
  uVar5 = param_2 + 0xf & 0xfffffff0;
  uVar3 = param_3 + 0xf & 0xfffffff0;
  *(uint *)((int)this + iVar1 + 0x140) = param_3;
  *(uint *)((int)this + iVar1 + 0x144) = uVar5;
  *(uint *)((int)this + iVar1 + 0x148) = uVar3;
  if (((((0x480 < param_3) || (param_3 < 0x20)) || ((param_3 & 3) != 0)) ||
      ((0x800 < param_2 || (param_2 < 0x20)))) || ((param_2 & 3) != 0)) {
    return 7;
  }
  *(uint *)((int)this + iVar1 + 0x14c) = uVar5 + 0x20;
  uVar3 = uVar3 * uVar5 >> 8;
  if (param_1 == 0) {
    if (*(int *)((int)this + 8) != 0) goto LAB_637f836e;
    iVar6 = uVar3 * 8;
    iVar7 = uVar3 * 10;
    local_10 = iVar6;
  }
  else {
    iVar7 = uVar3 * 2;
    iVar6 = uVar3 << 5;
  }
  iVar7 = iVar7 + 1 + iVar6;
LAB_637f836e:
  uVar5 = iVar7 + 0x20;
  if (*(uint *)((int)this + iVar1 + 0x158) < uVar5) {
    pvVar2 = *(void **)((int)this + iVar1 + 0x150);
    if (pvVar2 != (void *)0x0) {
      FUN_637f1080(pvVar2);
    }
    *(undefined4 *)((int)this + iVar1 + 0x154) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x150) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x158) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x15c) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x160) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x164) = 0;
    *(undefined4 *)((int)this + iVar1 + 0x168) = 0;
    puVar4 = FUN_637f1030(uVar5,0);
    *(undefined4 **)((int)this + iVar1 + 0x150) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      return 2;
    }
    *(uint *)((int)this + iVar1 + 0x158) = uVar5;
    *(uint *)((int)this + iVar1 + 0x154) = (int)puVar4 + 0x1fU & 0xffffffe0;
  }
  if ((param_1 == 0) && (*(int *)((int)this + 8) != 0)) {
    return 0;
  }
  iVar7 = *(int *)((int)this + iVar1 + 0x154);
  *(int *)((int)this + iVar1 + 0x15c) = iVar7;
  if (param_1 == 0) {
    *(int *)((int)this + 0x160) = iVar6 + iVar7;
    iVar6 = iVar6 + local_10;
  }
  else {
    *(undefined4 *)((int)this + iVar1 + 0x160) = 0;
  }
  *(int *)((int)this + iVar1 + 0x164) = iVar6 + iVar7;
  *(uint *)((int)this + iVar1 + 0x168) = iVar6 + uVar3 + iVar7;
  *(undefined1 *)(iVar6 + uVar3 + uVar3 + iVar7) = 0x20;
  return 0;
}


