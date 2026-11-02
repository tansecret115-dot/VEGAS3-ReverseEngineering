/* Module: rmto3260.dll
   Function: FUN_663040f0
   Address: 663040f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_663040f0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 == iVar1) {
    return (int)this;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_1;
  }
  if (param_1 != 0) {
    *(void **)(param_1 + 8) = this;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 4);
  }
  *(int *)((int)this + 4) = param_1;
  return param_1;
}


