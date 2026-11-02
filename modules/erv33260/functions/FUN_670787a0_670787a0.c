/* Module: erv33260.dll
   Function: FUN_670787a0
   Address: 670787a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670787a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  if (*(void **)(param_1 + 0x330) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x330));
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x318);
  if (piVar1 != (int *)0x0) {
    FUN_6707b6b0(piVar1);
    FUN_67072140(piVar1);
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  *(undefined4 *)(param_1 + 0x324) = 0;
  if (*(void **)(param_1 + 0x224) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x224));
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c4))(1);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1d8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_6707b5e0(puVar2);
    FUN_67072140(puVar2);
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1e0);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_6707b5e0(puVar2);
    FUN_67072140(puVar2);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_6707b5e0(puVar2);
    FUN_67072140(puVar2);
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x16c) + 0xc))();
  pvVar3 = *(void **)(param_1 + 0x170);
  if (pvVar3 != (void *)0x0) {
    FUN_6707b970((int)pvVar3);
    FUN_67072140(pvVar3);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x174);
  if (pvVar3 != (void *)0x0) {
    FUN_6707b970((int)pvVar3);
    FUN_67072140(pvVar3);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  return;
}


