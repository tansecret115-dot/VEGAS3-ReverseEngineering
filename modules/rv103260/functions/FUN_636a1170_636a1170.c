/* Module: rv103260.dll
   Function: FUN_636a1170
   Address: 636a1170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a1170(void *this,int param_1,int param_2)

{
  void *pvVar1;
  
  if (*(int *)((int)this + 0x60) == 0) {
    pvVar1 = operator_new((uint)(param_2 * param_1 * 3) >> 1);
    *(void **)((int)this + 0x60) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x80004005;
    }
  }
  return 0;
}


