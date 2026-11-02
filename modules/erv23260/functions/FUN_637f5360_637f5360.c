/* Module: erv23260.dll
   Function: FUN_637f5360
   Address: 637f5360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5360(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0x34);
  *(uint *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar4 = (param_1 % uVar1) * 0x10;
  *(int *)((int)this + 0x98) = iVar4;
  iVar3 = (param_1 / uVar1) * 0x10;
  *(int *)((int)this + 0x94) = iVar3;
  piVar2 = *(int **)((int)this + 8);
  iVar4 = *(int *)((int)this + 0x1c) * iVar3 + iVar4;
  iVar3 = iVar4 >> 1;
  *(int *)((int)this + 0xa4) = iVar4 + *piVar2;
  *(int *)((int)this + 0xa8) = piVar2[1] + iVar3;
  *(int *)((int)this + 0xac) = piVar2[2] + iVar3;
  if ((param_1 < uVar1) || ((*(byte *)((*(int *)((int)this + 0x20) + param_1) - uVar1) & 0x40) != 0)
     ) {
    *(undefined4 *)((int)this + 0x9c) = 4;
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 1;
  }
  if ((param_1 + uVar1 < *(uint *)((int)this + 0x30)) &&
     ((*(byte *)(*(int *)((int)this + 0x20) + param_1 + uVar1) & 0x40) == 0)) {
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 1;
  }
  else {
    *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 8;
  }
  if ((param_1 % uVar1 == 0) || ((*(byte *)(*(int *)((int)this + 0x20) + -1 + param_1) & 0x40) != 0)
     ) {
    *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 1;
  }
  else {
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 1;
  }
  if (((param_1 + 1) % uVar1 != 0) &&
     ((*(byte *)(*(int *)((int)this + 0x20) + 1 + param_1) & 0x40) == 0)) {
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 1;
    return;
  }
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 2;
  return;
}


