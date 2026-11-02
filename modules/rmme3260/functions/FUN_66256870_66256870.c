/* Module: rmme3260.dll
   Function: FUN_66256870
   Address: 66256870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66256870(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 == iVar1) {
    return (int)this;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1;
  }
  if (param_1 != 0) {
    *(void **)(param_1 + 4) = this;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  }
  *(int *)((int)this + 8) = param_1;
  return param_1;
}


