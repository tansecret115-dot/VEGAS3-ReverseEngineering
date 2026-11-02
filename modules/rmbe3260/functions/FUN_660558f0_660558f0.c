/* Module: rmbe3260.dll
   Function: FUN_660558f0
   Address: 660558f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660558f0(void *this,int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int *local_8;
  
  local_8 = this;
  piVar3 = (int *)(**(code **)(*param_1 + 0x10))();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      return 0x80004005;
    }
    iVar4 = (**(code **)(*piVar1 + 0x28))();
    if (iVar4 == 1) {
      (**(code **)(*piVar1 + 0x4c))(&local_8);
      if (local_8 == (int *)0x0) {
        return 0x80004005;
      }
      FUN_660558f0(this,local_8);
    }
    (**(code **)(*(int *)this + 8))(param_1,piVar3,piVar1);
    puVar2 = *(uint **)((int)this + 8);
    if ((piVar3[2] - 1U <= *puVar2) &&
       (piVar1 = (int *)(puVar2[4] + (piVar3[2] - 1U) * 4), *piVar1 != 0)) {
      *piVar1 = 0;
      puVar2[2] = puVar2[2] - 1;
    }
    (**(code **)(*param_1 + 8))(piVar3);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    piVar3 = (int *)(**(code **)(*param_1 + 0x10))();
  } while (piVar3 != (int *)0x0);
  return 0;
}


