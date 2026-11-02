/* Module: sfcdi.dll
   Function: cdtext_SfCDTextToRawPW
   Address: 5bf10780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_SfCDTextToRawPW(struct _sfcdtext *,unsigned char * *,unsigned long *) */

long cdtext_SfCDTextToRawPW(_sfcdtext *param_1,uchar **param_2,ulong *param_3)

{
  HGLOBAL pvVar1;
  _cdtextpack *pMem;
  uchar *puVar2;
  uint uVar3;
  ulong local_4;
  
                    /* 0x10780  234  ?cdtext_SfCDTextToRawPW@@YGJPAU_sfcdtext@@PAPAEPAK@Z */
  *param_3 = 0;
  local_4 = 0x1200;
  pvVar1 = GlobalAlloc(0x42,0x1200);
  pMem = GlobalLock(pvVar1);
  if (pMem == (_cdtextpack *)0x0) {
    return -0x7ff8fff2;
  }
  param_1 = (_sfcdtext *)cdtext_SfCDTextToPackets(param_1,pMem,&local_4);
  if (-1 < (int)param_1) {
    uVar3 = local_4 / 0x12;
    if (uVar3 != 0) {
      pvVar1 = GlobalAlloc(0x42,uVar3 * 0x18);
      puVar2 = GlobalLock(pvVar1);
      *param_2 = puVar2;
      if (puVar2 == (uchar *)0x0) {
        param_1 = (_sfcdtext *)0x8007000e;
        goto LAB_5bf1080c;
      }
      cdtext_RawPWFromPack(puVar2,pMem,uVar3);
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *param_3 = uVar3 * 0x18;
    return 0;
  }
LAB_5bf1080c:
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  if (*param_2 != (uchar *)0x0) {
    pvVar1 = GlobalHandle(*param_2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*param_2);
    GlobalFree(pvVar1);
    *param_2 = (uchar *)0x0;
  }
  return (long)param_1;
}


