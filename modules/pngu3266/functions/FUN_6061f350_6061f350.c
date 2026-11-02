/* Module: pngu3266.dll
   Function: FUN_6061f350
   Address: 6061f350
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061f350(void *this,byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    return -0x7ff8ffa9;
  }
  if (*(int *)((int)this + 100) == 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
    iVar2 = FUN_6061f770(*(void **)((int)this + 0x68),(uint)bVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x4c);
    *(undefined4 *)((int)this + 100) = 2;
  }
  else if (*(int *)((int)this + 100) != 2) {
    return -0x7ffbfff7;
  }
  uVar3 = (uint)*param_1;
  param_2 = param_2 - 1;
  if (uVar3 <= param_2) {
    do {
      if (uVar3 == 0) {
LAB_6061f414:
        param_2 = 0xffffffff;
        iVar2 = FUN_6061f8e0(*(void **)((int)this + 0x68),&param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        goto LAB_6061f42b;
      }
      iVar2 = FUN_6061f820(*(void **)((int)this + 0x68),(undefined4 *)(param_1 + 1),uVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_1 = param_1 + 1 + uVar3;
      iVar2 = param_2 - uVar3;
      if ((uVar3 == 0) || (iVar2 == 0)) goto LAB_6061f414;
      uVar3 = (uint)*param_1;
      param_2 = iVar2 - 1;
    } while (uVar3 <= param_2);
  }
  return -0x7fffbffb;
LAB_6061f42b:
  if ((*(int *)(*(int *)((int)this + 0x68) + 0x10044) == 1) ||
     (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x58))) {
LAB_6061f48a:
    *(undefined4 *)((int)this + 100) = 3;
    return 0;
  }
  if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0x54)) goto LAB_6061f48a;
  if ((param_2 == 0xffffffff) && (*(int *)(*(int *)((int)this + 0x68) + 0x10048) == 1)) {
    return 0;
  }
  *(char *)(*(uint *)((int)this + 8) * *(uint *)((int)this + 0x58) + *(int *)((int)this + 0x4c) +
           *(uint *)((int)this + 0x54)) = (char)param_2;
  FUN_6061f4b0((int)this);
  param_2 = 0xffffffff;
  iVar2 = FUN_6061f8e0(*(void **)((int)this + 0x68),&param_2);
  if (iVar2 != 0) {
    return iVar2;
  }
  goto LAB_6061f42b;
}


