/* Module: sfcdi.dll
   Function: FUN_5bf07f70
   Address: 5bf07f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf07f70(HMODULE param_1)

{
  FARPROC pFVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  SIZE_T dwBytes;
  undefined4 *puVar6;
  UINT uFlags;
  int iVar7;
  
  pFVar1 = GetProcAddress(param_1,s_ldrInterfaceProc_5bf62060);
  iVar3 = DAT_5bf66630;
  if (pFVar1 == (FARPROC)0x0) {
    return -1;
  }
  iVar2 = DAT_5bf6662c * 0xc;
  iVar7 = 0;
  *(FARPROC *)(&DAT_5bf66324 + iVar2) = pFVar1;
  *(int *)(&DAT_5bf66328 + iVar2) = iVar3;
  iVar3 = (*pFVar1)(0,0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  puVar6 = (undefined4 *)&stack0xffffffac;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  (*pFVar1)(0,1,0,&stack0xffffffac,0x40);
  if (iVar7 != 0x102) {
    return -1;
  }
  if (DAT_5bf66634 == (LPCVOID)0x0) {
    pvVar4 = GlobalAlloc(0x42,iVar3 * 0x4c);
  }
  else {
    pvVar4 = GlobalHandle(DAT_5bf66634);
    GlobalUnlock(pvVar4);
    uFlags = 0x42;
    dwBytes = (DAT_5bf66630 + iVar3) * 0x4c;
    pvVar4 = GlobalHandle(DAT_5bf66634);
    pvVar4 = GlobalReAlloc(pvVar4,dwBytes,uFlags);
  }
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 == (LPVOID)0x0) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      *(int *)((int)pvVar5 + (DAT_5bf66630 + iVar2) * 0x4c) = iVar2;
      *(FARPROC *)((int)pvVar5 + (DAT_5bf66630 + iVar2) * 0x4c + 0x48) = pFVar1;
      (*pFVar1)(iVar2,1,0,(int)pvVar5 + (DAT_5bf66630 + iVar2) * 0x4c + 8,0x40);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  DAT_5bf66634 = pvVar5;
  DAT_5bf66630 = DAT_5bf66630 + iVar3;
  return 0;
}


