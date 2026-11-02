/* Module: enlv3260.dll
   Function: FUN_661d3530
   Address: 661d3530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d3530(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x1c))(*(undefined4 *)((int)this + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    **(int **)((int)this + 8) = iVar1;
    *(int *)((int)this + 8) = iVar1;
    return;
  }
  *(int *)((int)this + 4) = iVar1;
  *(int *)((int)this + 8) = iVar1;
  return;
}


