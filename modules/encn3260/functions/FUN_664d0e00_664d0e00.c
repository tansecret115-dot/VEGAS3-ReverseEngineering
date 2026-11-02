/* Module: encn3260.dll
   Function: FUN_664d0e00
   Address: 664d0e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d0e00(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    FUN_664d0970((int)pvVar2);
    operator_delete(pvVar2);
    param_1[1] = 0;
  }
  return;
}


