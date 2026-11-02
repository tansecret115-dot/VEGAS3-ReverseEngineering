/* Module: rmto3260.dll
   Function: FUN_662c80e0
   Address: 662c80e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c80e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x44))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  iVar1 = param_1[0x11];
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar3 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        piVar2 = (int *)FUN_662ed930(&local_8);
        local_c = *piVar2;
        if (local_c != 0) {
          FUN_662d08d0(&local_c);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(*(int *)param_1[0x11] + 8))();
    if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x11])(1);
    }
  }
  FUN_662d08d0(param_1 + 8);
  FUN_662d08d0(param_1 + 9);
  if ((void *)param_1[0x20] != (void *)0x0) {
    operator_delete((void *)param_1[0x20]);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[10] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (*(void **)((int)param_1 + 0x5e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5e));
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
    *(undefined4 *)((int)param_1 + 0x62) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x66) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x66))(1);
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  return;
}


