/* Module: vegas30k.dll
   Function: SfMpegStreamSkipCached
   Address: 01096730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegStreamSkipCached(struct tagMPEG_BIT_STREAM *,unsigned long) */

long SfMpegStreamSkipCached(tagMPEG_BIT_STREAM *param_1,ulong param_2)

{
  tagMPEG_BIT_STREAM *ptVar1;
  uint uVar2;
  long lVar3;
  
                    /* 0x96730  439  ?SfMpegStreamSkipCached@@YGJPAUtagMPEG_BIT_STREAM@@K@Z */
  lVar3 = 0;
  if (param_2 != 0) {
    ptVar1 = param_1 + 0x10;
    while (uVar2 = *(uint *)ptVar1, uVar2 < param_2) {
      if (uVar2 != 0) {
        param_2 = param_2 - uVar2;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      lVar3 = SfCdiReadFileStream(*(void **)param_1,*(uchar **)(param_1 + 0x18),
                                  *(ulong *)(param_1 + 0xc),(ulong *)ptVar1);
      if (lVar3 < 0) {
        return lVar3;
      }
      if (*(int *)(param_1 + 8) == -1) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
      }
      if (*(ulong *)ptVar1 == 0) {
        return lVar3;
      }
      if (param_2 == 0) {
        return lVar3;
      }
    }
    *(ulong *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(ulong *)ptVar1 = *(ulong *)ptVar1 - param_2;
  }
  return lVar3;
}


