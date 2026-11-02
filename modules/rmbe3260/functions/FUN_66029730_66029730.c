/* Module: rmbe3260.dll
   Function: FUN_66029730
   Address: 66029730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66029730(void *this,uint param_1)

{
  void *pvVar1;
  
  if (*(void **)((int)this + 0x1f0) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1f0));
    *(undefined4 *)((int)this + 0x1f0) = 0;
    *(undefined4 *)((int)this + 500) = 0;
  }
  if (param_1 != 0) {
    pvVar1 = operator_new(param_1);
    *(void **)((int)this + 0x1f0) = pvVar1;
    *(uint *)((int)this + 500) = param_1;
  }
  return 0;
}


