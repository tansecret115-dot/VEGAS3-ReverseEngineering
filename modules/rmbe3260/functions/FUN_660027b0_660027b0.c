/* Module: rmbe3260.dll
   Function: FUN_660027b0
   Address: 660027b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660027b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_660013b0(param_1);
  if (*(int **)(param_1 + 0x412) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x412) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x412) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x412))(1);
    }
  }
  if (*(int **)(param_1 + 0x416) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x416) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x416) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x416))(1);
    }
  }
  if (*(int **)(param_1 + 0x41a) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x41a) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x41a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x41a))(1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x41e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x41e))(1);
  }
  if (*(undefined4 **)(param_1 + 0x422) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x422))(1);
  }
  piVar2 = (int *)(param_1 + 0x162);
  iVar1 = 4;
  do {
    if ((int *)piVar2[-4] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[-4] + 0xbc))();
      if ((undefined4 *)piVar2[-4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[-4])(1);
      }
    }
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xbc))();
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
    }
    if ((int *)piVar2[4] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[4] + 0xbc))();
      if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[4])(1);
      }
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x406) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x40a) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x406) + uVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(*(int *)(param_1 + 0x406) + uVar3 * 4) = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x40a));
    }
    operator_delete(*(void **)(param_1 + 0x406));
  }
  return;
}


