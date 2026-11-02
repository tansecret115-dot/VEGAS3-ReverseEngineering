/* Module: pngu3266.dll
   Function: FUN_6061a080
   Address: 6061a080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6061a080(void *this,int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(*(int *)((int)this + 8) + param_1 * 4);
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 8);
    operator_delete(pvVar2);
    pvVar2 = pvVar1;
  }
  *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4) = 0;
  return;
}


