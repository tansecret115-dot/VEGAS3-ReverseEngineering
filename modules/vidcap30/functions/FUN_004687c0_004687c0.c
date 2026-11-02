/* Module: vidcap30.exe
   Function: FUN_004687c0
   Address: 004687c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004687c0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  *param_1 = &PTR_LAB_00592a48;
  param_1[3] = &PTR_LAB_00592a0c;
  param_1[4] = &PTR_LAB_005929f8;
  param_1[0x14] = &PTR_LAB_005929c4;
  param_1[0x15] = &PTR_LAB_005929a0;
  EnterCriticalSection(lpCriticalSection);
  param_1[0x2e] = 1;
  if ((-1 < (int)param_1[0x2a]) && ((int)param_1[0x2a] < 3)) {
    do {
      LeaveCriticalSection(lpCriticalSection);
      ResetEvent((HANDLE)param_1[0x2d]);
      SetEvent((HANDLE)param_1[0x2c]);
      WaitForSingleObject((HANDLE)param_1[0x2d],0xffffffff);
      EnterCriticalSection(lpCriticalSection);
    } while (param_1[0x2a] != 3);
    param_1[0x2a] = 4;
  }
  LeaveCriticalSection(lpCriticalSection);
  pMem = (LPCVOID)param_1[0x3c];
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  if ((HANDLE)param_1[0x2b] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  if ((HANDLE)param_1[0x2c] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  if ((HANDLE)param_1[0x2d] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2d]);
    param_1[0x2c] = 0;
  }
  if (param_1[0x28] != 0) {
    FUN_004684a0(param_1 + 0x14);
    _SfList_Destroy_4(param_1[0x28]);
    param_1[0x28] = 0;
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 0xc))(1);
    param_1[0x22] = 0;
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 0xc))(1);
    param_1[0x23] = 0;
  }
  piVar1 = (int *)param_1[0x26];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x24];
  param_1[0x26] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((HANDLE)param_1[0x29] != (HANDLE)0x0) {
    ReleaseMutex((HANDLE)param_1[0x29]);
    CloseHandle((HANDLE)param_1[0x29]);
  }
  DeleteCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  FUN_0057c340();
  return;
}


