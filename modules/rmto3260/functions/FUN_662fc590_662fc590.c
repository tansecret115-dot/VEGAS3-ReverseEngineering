/* Module: rmto3260.dll
   Function: FUN_662fc590
   Address: 662fc590
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662fc590(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  if (*(char *)((int)this + 0x65) == '\0') {
    uVar1 = *(uint *)((int)this + 0x8c);
  }
  else {
    uVar1 = *(uint *)((int)this + 0x90);
  }
  uVar2 = *(uint *)((int)this + 0xa0);
  if (uVar1 < *(uint *)((int)this + 0xa0)) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    if (*(char *)((int)this + 0x65) == '\0') {
      local_8 = (**(code **)(**(int **)((int)this + 4) + 0x28))
                          (*(undefined4 *)((int)this + 0xb0),uVar2);
    }
    else {
      local_8 = (**(code **)(**(int **)((int)this + 4) + 0x28))(*(undefined4 *)((int)this + 0xac));
    }
    if (local_8 != uVar2) {
      uVar3 = (**(code **)(**(int **)((int)this + 4) + 4))();
      *(undefined4 *)((int)this + 0xa0) = 0;
      if (uVar3 == 0) {
        return 0xffff;
      }
    }
    uVar1 = local_c;
    if ((uVar3 == 0) &&
       (*(uint *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) - local_8, uVar1 = local_8,
       *(char *)((int)this + 0x65) != '\0')) {
      uVar3 = (**(code **)(**(int **)((int)this + 0xa8) + 0xc))
                        (*(undefined4 *)((int)this + 0xac),
                         CONCAT22((short)((uint)*(undefined4 *)((int)this + 0xb0) >> 0x10),
                                  *(undefined2 *)((int)this + 0x90)),
                         *(undefined4 *)((int)this + 0xb0),&local_c,0);
      uVar3 = uVar3 & 0xffff;
      uVar1 = local_c;
    }
    if (uVar3 == 0) {
      *(int *)((int)this + 0x94) = param_1;
      *(uint *)((int)this + 0x98) = (uVar1 & 0xffff) - param_1;
      *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + -1;
    }
    return uVar3;
  }
  return 0xffff;
}


