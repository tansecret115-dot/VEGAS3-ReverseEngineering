/* Module: vegas30k.dll
   Function: SfMpegStreamOpen
   Address: 010969b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegStreamOpen(struct tagMPEG_BIT_STREAM *,char *) */

long SfMpegStreamOpen(tagMPEG_BIT_STREAM *param_1,char *param_2)

{
  long lVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  tagMPEG_BIT_STREAM *ptVar4;
  undefined4 local_8 [2];
  
  ptVar4 = param_1;
                    /* 0x969b0  436  ?SfMpegStreamOpen@@YGJPAUtagMPEG_BIT_STREAM@@PAD@Z */
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)ptVar4 = 0;
    ptVar4 = ptVar4 + 4;
  }
  lVar1 = SfCdiAllocateFileStream(4,0x20000,(void **)param_1);
  if ((-1 < lVar1) &&
     (lVar1 = SfCdiInitFileStream(*(void **)param_1,param_2,0,0xffffffffffffffff,4), -1 < lVar1)) {
    SfCdiGetFileStreamSize(*(void **)param_1,(__uint64 *)local_8);
    *(undefined4 *)(param_1 + 0xc) = 0x10000;
    *(undefined4 *)(param_1 + 0x1c) = local_8[0];
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    hMem = GlobalAlloc(0x42,0x10000);
    pvVar2 = GlobalLock(hMem);
    *(LPVOID *)(param_1 + 0x18) = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      return lVar1;
    }
    return -0x7ff8fff2;
  }
  SfMpegStreamClose(param_1);
  return lVar1;
}


