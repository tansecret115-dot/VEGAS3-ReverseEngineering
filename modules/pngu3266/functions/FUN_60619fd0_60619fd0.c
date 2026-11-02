/* Module: pngu3266.dll
   Function: FUN_60619fd0
   Address: 60619fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619fd0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)((int)this + 8) + param_1 * 4);
  pvVar1 = (void *)*piVar2;
  if (pvVar1 != (void *)0x0) {
    while (*(int *)((int)pvVar1 + 4) != param_2) {
      piVar2 = (int *)((int)pvVar1 + 8);
      pvVar1 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 == (void *)0x0) {
        return;
      }
    }
    *piVar2 = *(int *)((int)pvVar1 + 8);
    operator_delete(pvVar1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


