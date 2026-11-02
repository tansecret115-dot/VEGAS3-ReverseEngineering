/* Module: vegas30.exe
   Function: FUN_0058e0a0
   Address: 0058e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058e0a0(int param_1)

{
  LONG LVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    piVar3 = (int *)(param_1 + 0x58);
    do {
      if (*piVar3 != 0) {
        FUN_0058e0a0(*piVar3);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xb8));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  LVar1 = InterlockedExchange((LONG *)(param_1 + 0xbc),0);
  if (LVar1 != 0) {
    if (*(int *)(LVar1 + 0x14) == 0) {
      (*(code *)PTR_FUN_00645d24)(*(undefined4 *)(param_1 + 0xc0));
    }
    else {
      FUN_0058e050(*(undefined4 *)(param_1 + 0x10),LVar1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0x8004e00c;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    piVar3 = *(int **)(LVar1 + 0x10);
    if (piVar3 != (int *)0x0) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        (**(code **)(*piVar3 + 0x44))(piVar3,*(int *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      (**(code **)(**(int **)(LVar1 + 0x10) + 8))(*(int **)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
    *(undefined4 *)(LVar1 + 0xc) = 0;
    ResetEvent(*(HANDLE *)(LVar1 + 8));
    _SfQueueInsert_8(iVar2 + 0x60,LVar1);
    InterlockedDecrement((LONG *)(iVar2 + 0x88));
  }
  return;
}


