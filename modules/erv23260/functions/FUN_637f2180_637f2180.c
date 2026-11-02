/* Module: erv23260.dll
   Function: FUN_637f2180
   Address: 637f2180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f2180(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  if (uVar1 < 0x18) {
    uVar2 = *(uint *)(&DAT_6382f078 + uVar1 * 4) >> 1 & 1;
  }
  else {
    uVar2 = 0;
  }
  *(uint *)((int)this + 0x34) = param_1;
  if (uVar2 != 0) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x38) = 0;
      return;
    }
    if ((uVar1 == 0xb) || (uVar1 == 0xc)) {
      iVar3 = param_1 + *(int *)((int)this + 0x20) * *(int *)((int)this + 0x10);
      *(int *)((int)this + 0x38) = iVar3;
      *(uint *)((int)this + 0x3c) =
           ((uint)(*(int *)((int)this + 0x24) * *(int *)((int)this + 0x10)) >> 1) + iVar3;
    }
    else {
      if (uVar1 == 0xd) {
        iVar3 = param_1 + *(int *)((int)this + 0x20) * *(int *)((int)this + 0x10);
        *(int *)((int)this + 0x3c) = iVar3;
        *(uint *)((int)this + 0x38) =
             ((uint)(*(int *)((int)this + 0x28) * *(int *)((int)this + 0x10)) >> 1) + iVar3;
        return;
      }
      if (uVar1 == 10) {
        iVar3 = param_1 + *(int *)((int)this + 0x20) * *(int *)((int)this + 0x10);
        *(int *)((int)this + 0x3c) = iVar3;
        *(uint *)((int)this + 0x38) =
             ((uint)(*(int *)((int)this + 0x28) * *(int *)((int)this + 0x10)) >> 2) + iVar3;
        return;
      }
    }
  }
  return;
}


