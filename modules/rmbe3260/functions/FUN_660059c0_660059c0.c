/* Module: rmbe3260.dll
   Function: FUN_660059c0
   Address: 660059c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660059c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x124) + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(*(int *)(param_1 + 0x124) + uVar2 * 4) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x128));
    }
    operator_delete(*(void **)(param_1 + 0x124));
  }
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x120) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(int **)(param_1 + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x110) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x110))(1);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x114) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x114) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x114))(1);
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x118))(1);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}


