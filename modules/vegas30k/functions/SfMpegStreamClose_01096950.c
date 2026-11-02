/* Module: vegas30k.dll
   Function: SfMpegStreamClose
   Address: 01096950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegStreamClose(struct tagMPEG_BIT_STREAM *) */

long SfMpegStreamClose(tagMPEG_BIT_STREAM *param_1)

{
  void *pvVar1;
  HGLOBAL pvVar2;
  
                    /* 0x96950  435  ?SfMpegStreamClose@@YGJPAUtagMPEG_BIT_STREAM@@@Z */
  pvVar1 = *(void **)param_1;
  if ((pvVar1 != (void *)0x0) && (pvVar1 != (void *)0xffffffff)) {
    SfCdiDeinitFileStream(pvVar1);
    SfCdiFreeFileStream(*(void **)param_1);
  }
  if (*(LPCVOID *)(param_1 + 0x18) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x18));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x18));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 0;
  }
  return 0;
}


