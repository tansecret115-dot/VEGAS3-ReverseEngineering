/* Module: extmondrv.dll
   Function: FUN_004019a0
   Address: 004019a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004019a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0044d660;
  FUN_00401b40((int)param_1);
  FUN_00401e50((int)param_1,(undefined4 *)0x0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0x48))(1);
    param_1[5] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  if ((int *)param_1[0x19] != (int *)0x0) {
    FUN_00417470((int *)param_1[0x19]);
    param_1[0x19] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if ((HANDLE)param_1[0x20] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x20]);
    param_1[0x20] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_0045b00c);
  return;
}


