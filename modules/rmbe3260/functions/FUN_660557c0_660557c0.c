/* Module: rmbe3260.dll
   Function: FUN_660557c0
   Address: 660557c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660557c0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    iVar1 = *(int *)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((iVar1 != 0) && (*(int **)(iVar1 + 0x10) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x20))();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 8);
    }
  }
  return 0;
}


