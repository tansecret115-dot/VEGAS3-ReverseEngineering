/* Module: vegas30k.dll
   Function: FUN_0105a900
   Address: 0105a900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0105a900(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  DWORD *pDVar4;
  int iVar5;
  
  piVar1 = DAT_0120e878;
  if (DAT_0120e878 != (int *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_0120e878 + 3);
    EnterCriticalSection(lpCriticalSection);
    DVar2 = GetCurrentThreadId();
    iVar5 = 0;
    if (0 < *piVar1) {
      pDVar4 = (DWORD *)piVar1[2];
      while (DVar2 != *pDVar4) {
        iVar5 = iVar5 + 1;
        pDVar4 = (DWORD *)((int)pDVar4 + piVar1[1]);
        if (*piVar1 <= iVar5) {
          LeaveCriticalSection(lpCriticalSection);
          return;
        }
      }
      pvVar3 = GlobalHandle((LPCVOID)pDVar4[2]);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)pDVar4[2]);
      GlobalFree(pvVar3);
      _SfList_DeleteList_16(piVar1,iVar5,1,0);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}


