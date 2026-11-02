/* Module: vegas30.exe
   Function: FUN_005435b0
   Address: 005435b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005435b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    GetCurrentThreadId();
    FUN_00543290();
    FUN_005433c0(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
    iVar2 = 0;
    iVar1 = **(int **)(param_1 + 8);
    if (0 < iVar1) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + -4 + iVar2 * 4) + 0x1c) = 1;
      } while (iVar2 < iVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
      (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58))
      ;
    }
    FUN_005432d0();
  }
  return;
}


