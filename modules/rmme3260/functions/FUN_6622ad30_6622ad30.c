/* Module: rmme3260.dll
   Function: FUN_6622ad30
   Address: 6622ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622ad30(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 400);
  if (iVar1 == 1) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 400) = 0;
      FUN_66217370(*(void **)((int)this + 0x180),param_1);
      return 0;
    }
    switch(*(undefined4 *)((int)this + 0x194)) {
    case 2:
      *(undefined4 *)((int)this + 0x194) = 3;
      FUN_6622aa50(this);
      return 0;
    case 3:
      *(undefined4 *)((int)this + 0x194) = 4;
      FUN_6622aa50(this);
      return 0;
    case 4:
      *(short *)((int)this + 0x198) = *(short *)((int)this + 0x198) + 1;
      if (*(short *)((int)this + 0x198) == *(short *)((int)this + 0x14)) {
        *(undefined4 *)((int)this + 0x194) = 5;
        FUN_6622aa50(this);
        return 0;
      }
      break;
    case 5:
      *(short *)((int)this + 0x19a) = *(short *)((int)this + 0x19a) + 1;
      if (*(short *)((int)this + 0x19a) == *(short *)((int)this + 0x38)) {
        *(undefined4 *)((int)this + 0x194) = 6;
        FUN_6622aa50(this);
        return 0;
      }
      break;
    case 6:
      *(undefined4 *)((int)this + 0x194) = 7;
    }
    FUN_6622aa50(this);
    return 0;
  }
  if (iVar1 == 2) {
    *(undefined4 *)((int)this + 400) = 0;
    FUN_662173c0(*(void **)((int)this + 0x180),param_1);
    return 0;
  }
  if (iVar1 == 3) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x19c) = 0;
      FUN_66217410(*(void **)((int)this + 0x180),param_1);
      return 0;
    }
    iVar1 = *(int *)((int)this + 0x19c);
    if (iVar1 == 1) {
      *(undefined4 *)((int)this + 0x19c) = 2;
    }
    else {
      if (iVar1 == 2) {
        *(undefined4 *)((int)this + 0x19c) = 3;
        FUN_6622b5e0(this);
        return 0;
      }
      if (iVar1 == 3) {
        *(undefined4 *)((int)this + 0x19c) = 4;
        FUN_6622b5e0(this);
        return 0;
      }
    }
    FUN_6622b5e0(this);
    return 0;
  }
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      if (param_1 < 0) {
        *(undefined4 *)((int)this + 0x1bc) = 0;
        FUN_66217480(*(void **)((int)this + 0x180),param_1);
        return 0;
      }
      switch(*(undefined4 *)((int)this + 0x1bc)) {
      case 3:
        uVar3 = *(int *)((int)this + 0x1cc) + 1;
        *(uint *)((int)this + 0x1cc) = uVar3;
        *(uint *)((int)this + 0x1bc) = (-(uint)(*(uint *)((int)this + 0x10) < uVar3) & 2) + 2;
        FUN_6622c480(this);
        return 0;
      case 6:
        uVar2 = FUN_6621a440(*(void **)((int)this + 0x1d4),param_1);
        return uVar2;
      case 8:
        *(undefined4 *)((int)this + 0x1bc) = 9;
        FUN_6622c480(this);
        return 0;
      case 0xb:
        uVar3 = *(int *)((int)this + 0x1de) + 1;
        *(uint *)((int)this + 0x1de) = uVar3;
        *(uint *)((int)this + 0x1bc) =
             (-(uint)(uVar3 < *(ushort *)((int)this + 0x14)) & 0xfffffffe) + 0xc;
        FUN_6622c480(this);
        return 0;
      case 0xd:
        uVar3 = *(int *)((int)this + 0x1e2) + 1;
        *(uint *)((int)this + 0x1e2) = uVar3;
        *(uint *)((int)this + 0x1bc) =
             (-(uint)(uVar3 < *(ushort *)((int)this + 0x14)) & 0xfffffffe) + 0xe;
      }
      FUN_6622c480(this);
    }
    return 0;
  }
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x19c) = 0;
    FUN_66217410(*(void **)((int)this + 0x180),param_1);
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x19c);
  if (iVar1 == 1) {
    *(undefined4 *)((int)this + 0x19c) = 2;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)((int)this + 0x19c) = 3;
      FUN_6622be80(this);
      return 0;
    }
    if (iVar1 == 3) {
      *(undefined4 *)((int)this + 0x19c) = 4;
      FUN_6622be80(this);
      return 0;
    }
  }
  FUN_6622be80(this);
  return 0;
}


