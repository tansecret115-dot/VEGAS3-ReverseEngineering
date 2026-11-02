/* Module: rmme3260.dll
   Function: FUN_662601b0
   Address: 662601b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662601b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  FUN_66261540(param_1);
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_662615d0(param_1);
    if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x58))(1);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_662626e0(puVar2);
    operator_delete(puVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_66262b80(puVar2);
    operator_delete(puVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x14);
  if (pvVar3 != (void *)0x0) {
    FUN_66261930((int)pvVar3);
    operator_delete(pvVar3);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1c);
  if (pvVar3 != (void *)0x0) {
    FUN_66261930((int)pvVar3);
    operator_delete(pvVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    FUN_66262340(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    FUN_662633e0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    FUN_662633e0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    FUN_662633e0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    FUN_66262070(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    FUN_66263060(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    FUN_66263300(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    FUN_66263b30(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


