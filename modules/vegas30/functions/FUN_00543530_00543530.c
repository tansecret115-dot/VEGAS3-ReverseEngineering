/* Module: vegas30.exe
   Function: FUN_00543530
   Address: 00543530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543530(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    GetCurrentThreadId();
    FUN_00543290();
    FUN_005433c0(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
    iVar3 = 0;
    iVar1 = **(int **)(param_1 + 8);
    if (0 < iVar1) {
      do {
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + -4 + iVar3 * 4);
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
      } while (iVar3 < iVar1);
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


