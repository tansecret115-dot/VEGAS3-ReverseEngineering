/* Module: encn3260.dll
   Function: FUN_664c1b10
   Address: 664c1b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c1b10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      puVar1[1] = 0;
    }
    operator_delete((void *)*puVar1);
    *param_1 = puVar1[2];
    operator_delete(puVar1);
    puVar1 = (undefined4 *)*param_1;
  }
  *param_1 = 0;
  return;
}


