/* Module: rv203260.dll
   Function: FUN_638a1630
   Address: 638a1630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a1630(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x2d2) == 0) {
    *(uint *)((int)this + 0x2d6) = param_1;
    *(uint *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x2f6) = param_2;
    pvVar2 = malloc(param_2 * param_1 * 3 >> 1);
    *(void **)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x316) = pvVar2;
    if (*(int *)((int)this + *(int *)((int)this + 0x2d2) * 4 + 0x316) == 0) {
      local_8 = 0x80004005;
    }
    uVar4 = *(uint *)((int)this + 0xf6);
    uVar3 = uVar4;
    if (uVar4 <= param_1) {
      uVar3 = param_1;
    }
    uVar1 = *(uint *)((int)this + 0xfa);
    if (param_2 < uVar1) {
      param_2 = uVar1;
    }
    uVar3 = param_2 * uVar3;
    if (uVar1 * uVar4 <= uVar3 && uVar3 - uVar1 * uVar4 != 0) {
      if (*(void **)((int)this + 0x1c2) != (void *)0x0) {
        free(*(void **)((int)this + 0x1c2));
        *(undefined4 *)((int)this + 0x1c2) = 0;
      }
      uVar4 = uVar3 * 3 >> 1;
      pvVar2 = malloc(uVar4);
      *(void **)((int)this + 0x1c2) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0x80004005;
      }
      if (*(void **)((int)this + 0x1ba) != (void *)0x0) {
        free(*(void **)((int)this + 0x1ba));
        *(undefined4 *)((int)this + 0x1ba) = 0;
      }
      pvVar2 = malloc(uVar4);
      *(void **)((int)this + 0x1ba) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0x80004005;
      }
    }
    *(int *)((int)this + 0x2d2) = *(int *)((int)this + 0x2d2) + 1;
  }
  return local_8;
}


