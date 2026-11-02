/* Module: vegas30.exe
   Function: FUN_00532560
   Address: 00532560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00532560(LPCVOID param_1)

{
  int *piVar1;
  void *pvVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  
  if ((*(int *)((int)param_1 + 0x13c) != 0) && (*(int *)((int)param_1 + 0x140) != 0)) {
    uVar4 = 0;
    if (*(int *)((int)param_1 + 0x140) != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)param_1 + 0x13c) + uVar4 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        pvVar2 = *(void **)(*(int *)((int)param_1 + 0x138) + uVar4 * 4);
        if (pvVar2 != (void *)0x0) {
          free(pvVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x140));
    }
    if (*(void **)((int)param_1 + 0x13c) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x13c));
    }
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    if (*(void **)((int)param_1 + 0x138) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x138));
    }
    *(undefined4 *)((int)param_1 + 0x138) = 0;
  }
  if ((*(int *)((int)param_1 + 0x128) != 0) && (*(int *)((int)param_1 + 0x130) != 0)) {
    uVar4 = 0;
    if (*(int *)((int)param_1 + 0x130) != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)param_1 + 0x128) + uVar4 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        pvVar2 = *(void **)(*(int *)((int)param_1 + 0x124) + uVar4 * 4);
        if (pvVar2 != (void *)0x0) {
          free(pvVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x130));
    }
    if (*(void **)((int)param_1 + 0x128) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x128));
    }
    *(undefined4 *)((int)param_1 + 0x128) = 0;
    if (*(void **)((int)param_1 + 0x124) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x124));
    }
    *(undefined4 *)((int)param_1 + 0x124) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pvVar3 = GlobalHandle(param_1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(param_1);
  GlobalFree(pvVar3);
  return;
}


