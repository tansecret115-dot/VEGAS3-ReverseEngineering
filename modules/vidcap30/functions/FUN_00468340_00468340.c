/* Module: vidcap30.exe
   Function: FUN_00468340
   Address: 00468340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00468340(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    piVar1 = *(int **)(param_1 + 0x40);
    *param_2 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return 0;
  }
  return 0x80070057;
}


