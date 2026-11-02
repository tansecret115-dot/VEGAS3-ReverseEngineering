/* Module: vidcap30.exe
   Function: FUN_004682d0
   Address: 004682d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004682d0(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    piVar1 = *(int **)(param_1 + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(param_1 + 0x40) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    FUN_00467500(param_1 + -0x50,(undefined4 *)(param_1 + 0x48));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return 0;
  }
  return 0x80070057;
}


