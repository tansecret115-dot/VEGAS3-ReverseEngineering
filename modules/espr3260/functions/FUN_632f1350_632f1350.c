/* Module: espr3260.dll
   Function: FUN_632f1350
   Address: 632f1350
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_632f1350(void *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined **)this = &DAT_632fa0c8;
    FUN_632f1330((undefined4 *)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_632fa0a0;
  *(int *)((int)this + *(int *)(*(int *)this + 4) + -4) = *(int *)(*(int *)this + 4) + -0x28;
  return this;
}


