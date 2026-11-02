/* Module: vegas30.exe
   Function: FUN_004f00e0
   Address: 004f00e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004f00e0(void)

{
  char cVar1;
  HGLOBAL pvVar2;
  char *pMem;
  LPCSTR lpsz;
  int iVar3;
  LPCSTR lpString;
  int local_4;
  
  _SfList_CreateExZ_32(&local_4,4,0x10,0x10,0x40000002,0,0,0);
  if (local_4 == 0) {
    return 0;
  }
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
      _SfList_AllocAndInsertItem_20(local_4,lpString,iVar3 + 1,0xffffffff,0);
      lpsz = lpsz + 1;
      lpString = lpsz;
    }
    cVar1 = *lpString;
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return local_4;
}


