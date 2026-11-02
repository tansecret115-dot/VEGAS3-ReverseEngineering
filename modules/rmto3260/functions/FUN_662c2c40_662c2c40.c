/* Module: rmto3260.dll
   Function: FUN_662c2c40
   Address: 662c2c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c2c40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x34);
  local_8 = param_1;
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        piVar3 = (int *)FUN_662ed930(&local_8);
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
    if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        piVar3 = (int *)FUN_662ed930(&local_8);
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x38))(1);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        puVar4 = (undefined4 *)FUN_662ed930(&local_8);
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 8))();
    if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        puVar4 = (undefined4 *)FUN_662ed930(&local_8);
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 8))();
    if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        puVar4 = (undefined4 *)FUN_662ed930(&local_8);
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
    if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


