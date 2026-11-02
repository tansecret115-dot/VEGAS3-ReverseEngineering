/* Module: rmbe3260.dll
   Function: FUN_66055880
   Address: 66055880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055880(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar3 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0x80004005;
  }
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar3 + 0x28))();
    if (iVar1 == 1) {
      (**(code **)(*piVar3 + 0x4c))(&local_8);
      if (local_8 != (int *)0x0) {
        uVar2 = (**(code **)(*local_8 + 0x28))();
        return uVar2;
      }
    }
  }
  return 0;
}


