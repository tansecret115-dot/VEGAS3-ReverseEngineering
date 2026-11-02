/* Module: vegas30.exe
   Function: FUN_004ed1d0
   Address: 004ed1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed1d0(undefined4 param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  char *pMem;
  int iVar3;
  LPSTR lpsz;
  LPCSTR lpsz_00;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ushort local_210;
  ushort uStack_20e;
  char local_20c [524];
  
  pvVar2 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar2);
  iVar3 = _SfGetMetricBinary_16(DAT_00647200,0x44f,pMem,0x800);
  if (iVar3 != 0) {
    cVar1 = *pMem;
    lpsz_00 = pMem;
    while (lpsz = lpsz_00, cVar1 != '\0') {
      do {
        lpsz = CharNextA(lpsz);
      } while (*lpsz != '\0');
      pcVar5 = lpsz + 1;
      local_210 = (short)pcVar5 - (short)lpsz_00;
      pcVar6 = local_20c;
      for (uVar4 = (uint)(local_210 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)lpsz_00;
        lpsz_00 = lpsz_00 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = local_210 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *lpsz_00;
        lpsz_00 = lpsz_00 + 1;
        pcVar6 = pcVar6 + 1;
      }
      cVar1 = *pcVar5;
      lpsz_00 = pcVar5;
      while (cVar1 != '\0') {
        lpsz_00 = CharNextA(lpsz_00);
        cVar1 = *lpsz_00;
      }
      uStack_20e = (short)lpsz_00 - (short)pcVar5;
      if (uStack_20e != 0) {
        uStack_20e = uStack_20e + 1;
        pcVar6 = local_20c + local_210;
        for (uVar4 = (uint)(uStack_20e >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uStack_20e & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        _SfList_AllocAndInsertItem_20
                  (param_1,&local_210,uStack_20e + 5 + (uint)local_210,0xffffffff,0);
        lpsz_00 = lpsz_00 + 1;
      }
      cVar1 = *lpsz_00;
    }
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return;
}


