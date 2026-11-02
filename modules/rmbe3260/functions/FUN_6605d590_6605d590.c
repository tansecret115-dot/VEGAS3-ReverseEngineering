/* Module: rmbe3260.dll
   Function: FUN_6605d590
   Address: 6605d590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605d590(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &PTR_LAB_66068ce8;
  while (puVar1 != (undefined4 *)0x0) {
    operator_delete((void *)*puVar1);
    piVar2 = (int *)puVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      puVar1[1] = 0;
    }
    param_1[1] = puVar1[2];
    operator_delete(puVar1);
    puVar1 = (undefined4 *)param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


