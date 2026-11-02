/* Module: vegas30k.dll
   Function: SfMpegAllocateVideoInfo
   Address: 01096ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegAllocateVideoInfo(char *,struct VIDEO_INFO * *) */

long SfMpegAllocateVideoInfo(char *param_1,VIDEO_INFO **param_2)

{
  HGLOBAL hMem;
  VIDEO_INFO *pVVar1;
  int iVar2;
  
                    /* 0x96ad0  424  ?SfMpegAllocateVideoInfo@@YGJPADPAPAUVIDEO_INFO@@@Z */
  hMem = GlobalAlloc(0x42,0x148);
  pVVar1 = GlobalLock(hMem);
  if (pVVar1 == (VIDEO_INFO *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = _SfList_CreateExZ_32(pVVar1 + 0x28,0x18,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (-1 < iVar2) {
      iVar2 = _SfList_CreateExZ_32(pVVar1 + 0x34,0x10,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < iVar2) {
        _mbscpy((uchar *)(pVVar1 + 0x44),(uchar *)param_1);
        *(undefined4 *)(pVVar1 + 0x24) = 0xffffffff;
        *param_2 = pVVar1;
        return iVar2;
      }
    }
  }
  SfMpegFreeVideoInfo(pVVar1);
  *param_2 = (VIDEO_INFO *)0x0;
  return iVar2;
}


