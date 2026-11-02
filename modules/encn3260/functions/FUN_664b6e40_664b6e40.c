/* Module: encn3260.dll
   Function: FUN_664b6e40
   Address: 664b6e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b6e40(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = &PTR_FUN_664df470;
  param_1[1] = &PTR_LAB_664df438;
  if (pvVar1 != (void *)0x0) {
    FUN_664b09b0((int)pvVar1);
    operator_delete(pvVar1);
    param_1[4] = 0;
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[3] = 0;
  }
  return;
}


