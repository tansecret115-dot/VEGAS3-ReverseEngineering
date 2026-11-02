/* Module: wavplug.dll
   Function: FUN_5f3a2ac0
   Address: 5f3a2ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3a2ac0(int *param_1)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = param_1[10];
  if (-1 < (int)uVar1) {
    if (((uVar1 & 0x40000000) == 0) && (DVar2 = GetCurrentThreadId(), DVar2 != param_1[0xd])) {
      return 0x80004005;
    }
    if (-1 < (int)uVar1) goto LAB_5f3a2b0e;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
LAB_5f3a2b0e:
  if (param_1[2] != 0) {
    if ((param_1[10] & 2U) != 0) {
      FUN_5f3a12a0(param_1);
    }
    pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalFree(pvVar3);
    param_1[2] = 0;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  param_1[9] = 0;
  if ((uVar1 >> 3 & 1) == 0) {
    free(param_1);
  }
  return 0;
}


