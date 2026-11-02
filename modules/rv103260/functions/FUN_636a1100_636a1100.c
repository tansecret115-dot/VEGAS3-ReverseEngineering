/* Module: rv103260.dll
   Function: FUN_636a1100
   Address: 636a1100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a1100(void *this,int param_1,int param_2)

{
  void *pvVar1;
  
  *(int *)((int)this + 0x6c) = param_1;
  *(int *)((int)this + 0x70) = param_2;
  if (*(int *)((int)this + 0x5c) == 0) {
    pvVar1 = operator_new((uint)(param_2 * param_1 * 3) >> 1);
    *(void **)((int)this + 0x5c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x80004005;
    }
  }
  return 0;
}


