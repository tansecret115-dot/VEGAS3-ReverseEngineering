/* Module: erv33260.dll
   Function: FUN_6707e7a0
   Address: 6707e7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6707e7a0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  *(int *)((int)this + 0xa0) = param_3;
  *(int *)((int)this + 0x98) = param_4 << 4;
  *(int *)((int)this + 0xa4) = param_4;
  *(int *)((int)this + 0x94) = param_3 << 4;
  *(int *)((int)this + 0xac) = param_4 * 4;
  *(int *)((int)this + 0xa8) = param_3 * 4;
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_5 + 0x10);
  local_8 = 0;
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)(param_5 + 0x18);
  puVar1 = FUN_67071030(0x853,1);
  *(undefined4 **)((int)this + 0x100) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = (int)puVar1 + 0xfU & 0xfffffff0;
    *(uint *)((int)this + 0x7c) = uVar4;
    *(uint *)((int)this + 0x80) = uVar4 + 0x100;
    *(uint *)((int)this + 0xc0) = uVar4 + 0x200;
  }
  iVar3 = *(int *)((int)this + 0xac) * *(int *)((int)this + 0xa8);
  puVar1 = FUN_67071030(iVar3 * 4 + 0xf,1);
  *(undefined4 **)((int)this + 0x104) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = (int)puVar1 + 0xfU & 0xfffffff0;
    *(uint *)((int)this + 0x74) = uVar4;
    *(uint *)((int)this + 0x78) = uVar4 + iVar3 * 2;
  }
  puVar1 = FUN_67071030(iVar3 + 0xf,1);
  *(undefined4 **)((int)this + 0x108) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *(uint *)((int)this + 0x84) = (int)puVar1 + 0xfU & 0xfffffff0;
  }
  iVar3 = *(int *)((int)this + 0xa0) * *(int *)((int)this + 0xa4);
  puVar1 = FUN_67071030(iVar3 * 0x18 + 0xf,1);
  *(undefined4 **)((int)this + 0x10c) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = (int)puVar1 + 0xfU & 0xfffffff0;
    *(uint *)((int)this + 0x88) = uVar4;
    *(uint *)((int)this + 0x8c) = uVar4 + iVar3 * 0xc;
  }
  iVar3 = FUN_67072130(iVar3 * 0x10);
  puVar1 = (undefined4 *)0x0;
  *(int *)((int)this + 0x90) = iVar3;
  *(undefined4 *)((int)this + 300) = 0;
  if ((((*(int *)((int)this + 0x100) != 0) && (*(int *)((int)this + 0x104) != 0)) &&
      (*(int *)((int)this + 0x108) != 0)) && ((*(int *)((int)this + 0x10c) != 0 && (iVar3 != 0)))) {
    FUN_6707f0a0(this);
    pvVar2 = (void *)FUN_67072130(0x2c);
    if (pvVar2 != (void *)0x0) {
      puVar1 = FUN_6707b4a0(pvVar2,0x40,param_3 << 4,param_4 << 4,*(undefined4 *)((int)this + 0x158)
                            ,&local_8);
    }
    *(undefined4 **)((int)this + 0x110) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 2;
    }
    if (local_8 != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_6707b5e0(puVar1);
        FUN_67072140(puVar1);
      }
      *(undefined4 *)((int)this + 0x110) = 0;
      return local_8;
    }
    *(undefined4 *)((int)this + 0x114) = puVar1[1];
    iVar3 = puVar1[1] + *(int *)((int)this + 0x9c);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x114);
    *(int *)((int)this + 0x118) = iVar3;
    *(int *)((int)this + 0x70) = iVar3;
    *(undefined1 *)((int)this + 0x128) = 0;
    *(undefined1 *)((int)this + 0x129) = 0;
    pvVar2 = (void *)FUN_67072130(0x2c);
    if (pvVar2 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_6707b4a0(pvVar2,0,param_3 << 4,param_4 << 4,*(undefined4 *)((int)this + 0x158),
                            &local_8);
    }
    *(undefined4 **)((int)this + 0x124) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 2;
    }
    if (local_8 != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_6707b5e0(puVar1);
        FUN_67072140(puVar1);
      }
      *(undefined4 *)((int)this + 0x124) = 0;
      return local_8;
    }
    FUN_6707eae0((int)this);
    FUN_67082ea0();
    FUN_67081d80();
    if (*(int *)((int)this + 0xc) != 0) {
      return local_8;
    }
    uVar4 = ((param_3 + 2) * (param_4 + 2) & 0xffffffU) << 7;
    puVar1 = FUN_67071030(uVar4,1);
    *(undefined4 **)((int)this + 0x11c) = puVar1;
    puVar1 = FUN_67071030(uVar4,1);
    *(undefined4 **)((int)this + 0x120) = puVar1;
    if ((*(int *)((int)this + 0x11c) != 0) && (puVar1 != (undefined4 *)0x0)) {
      *(undefined4 **)((int)this + 0x70) = puVar1;
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x11c);
      return local_8;
    }
  }
  return 2;
}


