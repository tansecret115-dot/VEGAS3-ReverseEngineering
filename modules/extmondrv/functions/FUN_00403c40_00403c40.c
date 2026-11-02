/* Module: extmondrv.dll
   Function: FUN_00403c40
   Address: 00403c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403c40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0044d808;
  if (param_1[0xe] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_00404160((int)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_00417470((int *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  if ((LPVOID)param_1[4] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[4],0,0x8000);
    param_1[4] = 0;
    param_1[2] = 0;
  }
  if ((HANDLE)param_1[0xc] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xc]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  InterlockedDecrement((LONG *)&DAT_0045b00c);
  return;
}


