/* Module: encn3260.dll
   Function: FUN_664d2a60
   Address: 664d2a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d2a60(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_664dfef0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    operator_delete(*(void **)((int)pvVar1 + 0x10));
    operator_delete(pvVar1);
  }
  return;
}


