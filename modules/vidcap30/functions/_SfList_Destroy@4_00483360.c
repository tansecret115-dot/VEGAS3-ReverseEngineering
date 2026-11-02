/* Module: vidcap30.exe
   Function: _SfList_Destroy@4
   Address: 00483360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_Destroy_4(void *param_1)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  
                    /* 0x83360  497  _SfList_Destroy@4 */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)((int)param_1 + 0x28);
  if (-1 < (int)uVar1) {
    if (((uVar1 & 0x40000000) == 0) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != *(DWORD *)((int)param_1 + 0x34))) {
      return 0x80004005;
    }
    if (-1 < (int)uVar1) goto LAB_004833ae;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xc));
LAB_004833ae:
  if (*(int *)((int)param_1 + 8) != 0) {
    if ((*(uint *)((int)param_1 + 0x28) & 2) != 0) {
      FUN_00481b40(param_1);
    }
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 8));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 8));
    GlobalFree(pvVar3);
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xc));
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  if ((uVar1 >> 3 & 1) == 0) {
    free(param_1);
  }
  return 0;
}


