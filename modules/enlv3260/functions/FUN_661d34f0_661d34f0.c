/* Module: enlv3260.dll
   Function: FUN_661d34f0
   Address: 661d34f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d34f0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x1c))(0,*(undefined4 *)((int)this + 4));
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int *)((int)this + 4) != 0) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  *(int *)((int)this + 8) = iVar1;
  *(int *)((int)this + 4) = iVar1;
  return;
}


