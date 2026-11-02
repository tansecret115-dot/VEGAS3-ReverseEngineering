/* Module: Setup.exe
   Function: _SfList_Destroy@4
   Address: 0041ad20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_Destroy_4(int *param_1)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  
                    /* 0x1ad20  226  _SfList_Destroy@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = param_1[10];
  if (-1 < (int)uVar1) {
    if (((uVar1 & 0x40000000) == 0) && (DVar2 = GetCurrentThreadId(), DVar2 != param_1[0xd])) {
      return 0x80004005;
    }
    if (-1 < (int)uVar1) goto LAB_0041ad6e;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
LAB_0041ad6e:
  if (param_1[2] != 0) {
    if ((param_1[10] & 2U) != 0) {
      FUN_00419500(param_1);
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


