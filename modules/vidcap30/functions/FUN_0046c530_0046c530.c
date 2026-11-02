/* Module: vidcap30.exe
   Function: FUN_0046c530
   Address: 0046c530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046c530(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(param_1 + 0x20) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    FUN_0046bd20((undefined4 *)(param_1 + 0x24));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return 0;
  }
  return 0x80070057;
}


