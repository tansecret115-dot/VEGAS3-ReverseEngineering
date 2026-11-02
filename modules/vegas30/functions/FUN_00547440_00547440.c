/* Module: vegas30.exe
   Function: FUN_00547440
   Address: 00547440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00547440(int param_1,int *param_2)

{
  int *piVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xb0) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 0xa8));
  return 0;
}


