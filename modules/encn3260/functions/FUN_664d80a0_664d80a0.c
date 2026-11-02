/* Module: encn3260.dll
   Function: FUN_664d80a0
   Address: 664d80a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d80a0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  pvVar2 = *(void **)((int)pvVar1 + 4);
  if (pvVar2 != pvVar1) {
    do {
      *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar2 + 4);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      pvVar1 = (void *)*param_1;
      pvVar2 = *(void **)((int)pvVar1 + 4);
    } while (pvVar2 != pvVar1);
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  return;
}


