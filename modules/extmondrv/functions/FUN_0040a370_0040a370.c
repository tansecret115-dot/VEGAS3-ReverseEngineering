/* Module: extmondrv.dll
   Function: FUN_0040a370
   Address: 0040a370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a370(int *param_1,uint param_2)

{
  HGLOBAL pvVar1;
  char *pMem;
  int iVar2;
  
  if ((-1 < (int)param_2) && (param_2 < 0x14)) {
    pvVar1 = GlobalAlloc(0x42,4);
    pMem = GlobalLock(pvVar1);
    if (pMem != (char *)0x0) {
      *(undefined4 *)pMem = *(undefined4 *)(&DAT_0045a038 + param_2 * 4);
      iVar2 = FUN_0040a400(param_1,pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return iVar2;
    }
    return -0x7ff8fff2;
  }
  return -0x7fffbffb;
}


