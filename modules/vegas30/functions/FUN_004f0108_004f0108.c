/* Module: vegas30.exe
   Function: FUN_004f0108
   Address: 004f0108
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f0108(void)

{
  char cVar1;
  HGLOBAL pvVar2;
  char *pMem;
  LPCSTR lpsz;
  int iVar3;
  LPCSTR lpString;
  undefined4 unaff_retaddr;
  
  pvVar2 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar2);
  _SfGetMetricBinary_16(DAT_00647200,0x450,pMem,0x800);
  cVar1 = *pMem;
  lpsz = pMem;
  lpString = pMem;
  while (cVar1 != '\0') {
    lpsz = CharNextA(lpsz);
    if (*lpsz == '\0') {
      iVar3 = lstrlenA(lpString);
      _SfList_AllocAndInsertItem_20(unaff_retaddr,lpString,iVar3 + 1,0xffffffff,0);
      lpsz = lpsz + 1;
      lpString = lpsz;
    }
    cVar1 = *lpString;
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return unaff_retaddr;
}


