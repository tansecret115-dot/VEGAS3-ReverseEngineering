/* Module: rmto3260.dll
   Function: FUN_662d8590
   Address: 662d8590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d8590(int param_1)

{
  uint uVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x10);
    if ((short)uVar1 != 0) {
      uVar1 = uVar1 & 0xffff;
      do {
        pvVar2 = (void *)FUN_662ed7e0(*(int **)(param_1 + 8));
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 8))(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int **)(param_1 + 0xaa) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa) + 8))();
    if (*(undefined4 **)(param_1 + 0xaa) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xaa))(1);
      *(undefined4 *)(param_1 + 0xaa) = 0;
    }
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


