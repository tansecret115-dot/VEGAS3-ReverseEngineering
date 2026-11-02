/* Module: vegas30.exe
   Function: FUN_00544940
   Address: 00544940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544940(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
  if (*(int *)(param_1 + 0x44) == 0) {
    piVar1 = *(int **)(param_1 + 0xb0);
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      ReleaseMutex(*(HANDLE *)(param_1 + 0xa8));
      return 0;
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0xac);
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      ReleaseMutex(*(HANDLE *)(param_1 + 0xa8));
      return 0;
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  ReleaseMutex(*(HANDLE *)(param_1 + 0xa8));
  return 1;
}


