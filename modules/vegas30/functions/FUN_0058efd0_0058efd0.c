/* Module: vegas30.exe
   Function: FUN_0058efd0
   Address: 0058efd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058efd0(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int *piVar3;
  LPVOID pvVar4;
  HGLOBAL pvVar5;
  LPVOID pMem;
  int iVar6;
  int *piVar7;
  LPVOID local_4;
  
  piVar3 = param_1;
  iVar6 = -0x7ff8fff2;
  iVar1 = param_1[3];
  iVar2 = param_1[1];
  pvVar4 = (LPVOID)FUN_0058f130(iVar1 * iVar2);
  if (pvVar4 != (LPVOID)0x0) {
    pvVar5 = GlobalAlloc(0x40,iVar2 * 0xf0);
    pMem = GlobalLock(pvVar5);
    if (pMem != (LPVOID)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
      EnterCriticalSection(lpCriticalSection);
      local_4 = pvVar4;
      iVar6 = _SfList_InsertList_16(param_1[5],0xffffffff,&local_4,1);
      if (-1 < iVar6) {
        local_4 = pMem;
        iVar6 = _SfList_InsertList_16(param_1[4],0xffffffff,&local_4,1);
        if (-1 < iVar6) {
          LeaveCriticalSection(lpCriticalSection);
          *param_1 = *param_1 + iVar2;
          if (0 < iVar2) {
            piVar7 = (int *)((int)pMem + 0xc);
            param_1 = (int *)iVar2;
            do {
              piVar7[-1] = (int)pvVar4;
              *piVar7 = iVar1;
              piVar7[1] = (int)piVar3;
              _SfQueueInsertHead_8(piVar3 + 6,piVar7 + -3);
              piVar7 = piVar7 + 0x3c;
              pvVar4 = (LPVOID)((int)pvVar4 + iVar1);
              param_1 = (int *)((int)param_1 + -1);
            } while (param_1 != (int *)0x0);
          }
          DAT_0064b4b0 = (uint)((iVar1 + 0xf0) * *piVar3) >> 0x14;
          return 0;
        }
        _SfList_DeleteList_16((int *)param_1[5],*(int *)param_1[5] + -1,1,0);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    FUN_0058f150(pvVar4);
    if (pMem != (LPVOID)0x0) {
      pvVar5 = GlobalHandle(pMem);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pMem);
      GlobalFree(pvVar5);
    }
  }
  return iVar6;
}


