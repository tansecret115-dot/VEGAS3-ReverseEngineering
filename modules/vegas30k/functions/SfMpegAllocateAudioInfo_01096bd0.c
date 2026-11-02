/* Module: vegas30k.dll
   Function: SfMpegAllocateAudioInfo
   Address: 01096bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegAllocateAudioInfo(char *,struct tagAUDIO_INFO * *) */

long SfMpegAllocateAudioInfo(char *param_1,tagAUDIO_INFO **param_2)

{
  HGLOBAL hMem;
  tagAUDIO_INFO *ptVar1;
  int iVar2;
  
                    /* 0x96bd0  423  ?SfMpegAllocateAudioInfo@@YGJPADPAPAUtagAUDIO_INFO@@@Z */
  hMem = GlobalAlloc(0x42,0x148);
  ptVar1 = GlobalLock(hMem);
  if (ptVar1 == (tagAUDIO_INFO *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = _SfList_CreateExZ_32(ptVar1 + 0x28,0xc,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (-1 < iVar2) {
      _mbscpy((uchar *)(ptVar1 + 0x44),(uchar *)param_1);
      iVar2 = _SfList_CreateExZ_32(ptVar1 + 0x34,0x10,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < iVar2) {
        *(undefined4 *)(ptVar1 + 0x24) = 0xffffffff;
        *param_2 = ptVar1;
        return iVar2;
      }
    }
  }
  SfMpegFreeAudioInfo(ptVar1);
  *param_2 = (tagAUDIO_INFO *)0x0;
  return iVar2;
}


