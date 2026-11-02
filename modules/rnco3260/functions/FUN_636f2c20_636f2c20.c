/* Module: rnco3260.dll
   Function: FUN_636f2c20
   Address: 636f2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636f2c20(void *this,uint param_1)

{
  void *pvVar1;
  
  if (*(void **)((int)this + 4) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (0 < (int)param_1) {
    pvVar1 = operator_new(param_1);
    *(void **)((int)this + 4) = pvVar1;
  }
  return;
}


