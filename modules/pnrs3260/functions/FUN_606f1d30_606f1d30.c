/* Module: pnrs3260.dll
   Function: FUN_606f1d30
   Address: 606f1d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_606f1d30(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 8) = pvVar1;
  iVar2 = 0;
  *(int *)((int)this + 0xc) = param_1;
  if (0 < param_1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 8) + -4 + iVar2 * 4) = 0;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_606f1ed0((int)this);
  return this;
}


