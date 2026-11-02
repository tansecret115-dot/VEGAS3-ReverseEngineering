/* Module: sfpaplug.dll
   Function: FUN_004117d0
   Address: 004117d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004117d0(int *param_1)

{
  SIZE_T dwBytes;
  int iVar1;
  int iVar2;
  size_t sVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  int *pMem;
  SIZE_T local_804;
  wchar_t local_800 [1024];
  
  pMem = (int *)0x0;
  if ((param_1[7] != 0) || (iVar1 = FUN_0042baa0(param_1 + 7,4,-1,-1,0x80000002), -1 < iVar1)) {
    local_804 = 0;
    piVar5 = &DAT_0045ae94;
    do {
      iVar1 = 0;
      local_800[0] = L'\0';
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*piVar5,local_800,0x400);
      if ((-1 < iVar2) && (local_800[0] != L'\0')) {
        sVar3 = wcslen(local_800);
        dwBytes = sVar3 + 0xd + sVar3 + 1;
        if ((int)local_804 < (int)dwBytes) {
          if (pMem != (int *)0x0) {
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem);
            GlobalFree(pvVar4);
          }
          pvVar4 = GlobalAlloc(0x42,dwBytes);
          pMem = GlobalLock(pvVar4);
          local_804 = dwBytes;
          if (pMem == (int *)0x0) {
            return -0x7ff8fff2;
          }
        }
        *pMem = 0xc;
        pMem[1] = *piVar5;
        pMem[2] = (sVar3 + 1) * 2;
        wcscpy((wchar_t *)(pMem + 3),local_800);
        iVar1 = FUN_0042b770((int *)param_1[7],pMem,dwBytes,-1,(int *)0x0);
        if (iVar1 < 0) {
          pvVar4 = GlobalHandle(pMem);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem);
          GlobalFree(pvVar4);
          return -0x7ff8fff2;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 < &DAT_0045af00);
    if (pMem != (int *)0x0) {
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
  }
  return iVar1;
}


