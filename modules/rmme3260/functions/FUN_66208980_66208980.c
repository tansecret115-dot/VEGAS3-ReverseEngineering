/* Module: rmme3260.dll
   Function: FUN_66208980
   Address: 66208980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66208980(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_6626b59c;
        if (*(undefined4 **)((int)puVar1 + 10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)puVar1 + 10))(1);
        }
        operator_delete(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  FUN_6624fda0((void *)(param_1 + 0x18),0,0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_6626b59c;
        if (*(undefined4 **)((int)puVar1 + 10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)puVar1 + 10))(1);
        }
        operator_delete(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  FUN_6624fda0((void *)(param_1 + 0x28),0,0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      operator_delete(*(void **)(*(int *)(param_1 + 0x48) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  FUN_6624fda0((void *)(param_1 + 0x48),0,0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x38) + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
  }
  FUN_6624fda0((void *)(param_1 + 0x38),0,0xffffffff);
  return 0;
}


