/* Module: extmondrv.dll
   Function: FUN_00404080
   Address: 00404080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404080(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  param_2 = iVar1;
  FUN_00415f10((int *)param_1[0xe],-1,&param_2,1);
  if (param_1[0xd] != 0) {
    ReleaseSemaphore((HANDLE)param_1[0xc],param_1[0xd],(LPLONG)0x0);
    param_1[0xd] = 0;
  }
  if ((param_1[0xb] == 1) && (*(int *)param_1[0xe] == param_1[0xf])) {
    (**(code **)(*param_1 + 0x30))(param_1);
    param_1[0xb] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0;
}


