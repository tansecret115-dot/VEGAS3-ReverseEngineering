/* Module: vegas30.exe
   Function: FUN_0058e2d0
   Address: 0058e2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058e2d0(int param_1)

{
  int iVar1;
  LONG LVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0xb8)) {
    piVar3 = (int *)(param_1 + 0x58);
    do {
      if (*piVar3 != 0) {
        FUN_0058e2d0(*piVar3);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xb8));
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  LVar2 = InterlockedExchange((LONG *)(param_1 + 0xbc),0);
  if (LVar2 != 0) {
    piVar3 = *(int **)(LVar2 + 0x10);
    if (piVar3 != (int *)0x0) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        (**(code **)(*piVar3 + 0x44))(piVar3,*(int *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      (**(code **)(**(int **)(LVar2 + 0x10) + 8))(*(int **)(LVar2 + 0x10));
      *(undefined4 *)(LVar2 + 0x10) = 0;
    }
    *(undefined4 *)(LVar2 + 0xc) = 0;
    ResetEvent(*(HANDLE *)(LVar2 + 8));
    _SfQueueInsert_8(iVar1 + 0x60,LVar2);
    InterlockedDecrement((LONG *)(iVar1 + 0x88));
  }
  return;
}


