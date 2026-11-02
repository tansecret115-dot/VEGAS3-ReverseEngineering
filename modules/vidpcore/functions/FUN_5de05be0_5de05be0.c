/* Module: vidpcore.dll
   Function: FUN_5de05be0
   Address: 5de05be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5de05be0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[0x21];
  if (iVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x39));
  *(int *)(param_2 + 4) = param_1[0x37];
  param_1[0x37] = param_2;
  iVar2 = param_1[0x35];
  param_1[0x35] = iVar2 + -1;
  if ((iVar2 + -1 == 0) && (param_1[0x36] != 0)) {
    ReleaseSemaphore((HANDLE)param_1[0x34],param_1[0x36],(LPLONG)0x0);
    param_1[0x36] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x39));
  if (iVar1 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0x44))();
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}


