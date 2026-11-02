/* Module: vegas30k.dll
   Function: FUN_0105a820
   Address: 0105a820
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_0105a820(DWORD *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  HGLOBAL hMem;
  int iVar5;
  DWORD local_c [2];
  LPVOID local_4;
  
  piVar2 = DAT_0120e878;
  DVar3 = GetCurrentThreadId();
  if (param_1 != (DWORD *)0x0) {
    *param_1 = 0;
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 3);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *piVar2;
  iVar5 = 0;
  if (0 < iVar1) {
    pDVar4 = (DWORD *)piVar2[2];
    do {
      if (DVar3 == *pDVar4) {
        if (pDVar4 != (DWORD *)0x0) goto LAB_0105a8c5;
        break;
      }
      iVar5 = iVar5 + 1;
      pDVar4 = (DWORD *)((int)pDVar4 + piVar2[1]);
    } while (iVar5 < iVar1);
  }
  local_c[1] = 0x20000;
  local_c[0] = DVar3;
  hMem = GlobalAlloc(0x40,0x20000);
  local_4 = GlobalLock(hMem);
  iVar5 = _SfList_InsertList_16(piVar2,iVar1,local_c,1);
  if ((iVar5 < 0) || (pDVar4 = (DWORD *)(piVar2[1] * iVar1 + piVar2[2]), pDVar4 == (DWORD *)0x0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
LAB_0105a8c5:
  if (param_1 != (DWORD *)0x0) {
    *param_1 = pDVar4[1];
  }
  DVar3 = pDVar4[2];
  LeaveCriticalSection(lpCriticalSection);
  return DVar3;
}


