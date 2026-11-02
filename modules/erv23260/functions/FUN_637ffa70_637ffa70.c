/* Module: erv23260.dll
   Function: FUN_637ffa70
   Address: 637ffa70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637ffa70(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 != 0) && (param_1 == *(int *)(*(int *)((int)this + 4) + -4 + iVar1 * 8))) {
    *(undefined4 *)(*(int *)((int)this + 4) + iVar1 * 8 + -8) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)((int)this + 4) + iVar1 * 8) = param_2;
  *(int *)(*(int *)((int)this + 4) + 4 + *(int *)((int)this + 8) * 8) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


