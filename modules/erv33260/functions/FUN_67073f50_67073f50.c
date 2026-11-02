/* Module: erv33260.dll
   Function: FUN_67073f50
   Address: 67073f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67073f50(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *local_8;
  
  iVar2 = 0;
  if (100 < param_1) {
    return 10;
  }
  uVar1 = param_1;
  if (*(int *)((int)this + 0x240) != 0) {
    uVar1 = *(uint *)((int)this + 0x244);
  }
  local_8 = this;
  if (*(uint *)((int)this + 0x244) < 0x15) {
    if (uVar1 < 0x15) {
      if (0x14 < *(uint *)((int)this + 0x244)) goto LAB_67073f99;
    }
    else {
      iVar2 = (**(code **)(*(int *)((int)this + -0x6c) + 0x30))();
    }
  }
  else {
LAB_67073f99:
    if (uVar1 < 0x15) {
      iVar2 = FUN_670728e0((void *)((int)this + -0x6c),-1,(int *)&local_8,(int *)&param_1);
      if (iVar2 != 0) goto LAB_67073fe5;
      *(undefined1 *)((int)this + 0x1c0) = 1;
      if (*(undefined4 **)((int)this + 0x104) != (undefined4 *)0x0) {
        FUN_6707bae0(*(undefined4 **)((int)this + 0x104));
      }
      iVar2 = 0;
      if (*(undefined4 **)((int)this + 0x108) != (undefined4 *)0x0) {
        FUN_6707bae0(*(undefined4 **)((int)this + 0x108));
      }
    }
  }
  if (iVar2 == 0) {
    *(uint *)((int)this + 0x244) = uVar1;
  }
LAB_67073fe5:
  iVar2 = FUN_670728e0((void *)((int)this + -0x6c),-1,(int *)&local_8,(int *)&param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (0x45 < uVar1) {
    *(undefined4 *)((int)this + 0x1ac) = 0;
    *(undefined4 *)((int)this + 0x1a8) = 0x10;
    *(undefined4 *)((int)this + 0x194) = 1;
    *(undefined4 *)((int)this + 400) = 1;
    return 0;
  }
  if (0x3b < uVar1) {
    *(undefined4 *)((int)this + 0x1ac) = 1;
    *(undefined4 *)((int)this + 0x1a8) = 0x20;
    *(undefined4 *)((int)this + 0x194) = 1;
    *(undefined4 *)((int)this + 400) = 1;
    return 0;
  }
  if (uVar1 < 0x32) {
    if (0x27 < uVar1) {
      *(undefined4 *)((int)this + 0x1ac) = 3;
      *(undefined4 *)((int)this + 0x1a8) = 0x10;
      *(undefined4 *)((int)this + 0x194) = 0;
      *(undefined4 *)((int)this + 400) = 0;
      return 0;
    }
    if (uVar1 < 0x1e) {
      *(undefined4 *)((int)this + 0x1ac) = 4;
      return 0;
    }
    *(undefined4 *)((int)this + 0x1ac) = 3;
    *(undefined4 *)((int)this + 0x1a8) = 0x10;
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 400) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 0x1ac) = 2;
  *(undefined4 *)((int)this + 0x1a8) = 0x10;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 400) = 1;
  return 0;
}


