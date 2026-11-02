/* Module: vegas30k.dll
   Function: SfMpegStreamReadCached
   Address: 010967a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegStreamReadCached(struct tagMPEG_BIT_STREAM *,unsigned char *,unsigned
   long,unsigned long *) */

long SfMpegStreamReadCached(tagMPEG_BIT_STREAM *param_1,uchar *param_2,ulong param_3,ulong *param_4)

{
  tagMPEG_BIT_STREAM *ptVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uchar *puVar6;
  uchar *puVar7;
  long local_4;
  
                    /* 0x967a0  437  ?SfMpegStreamReadCached@@YGJPAUtagMPEG_BIT_STREAM@@PAEKPAK@Z */
  lVar2 = 0;
  local_4 = 0;
  uVar5 = param_3;
  if (param_3 != 0) {
    while( true ) {
      uVar4 = *(uint *)(param_1 + 0x10);
      ptVar1 = param_1 + 0x10;
      if (uVar5 <= uVar4) {
        puVar6 = (uchar *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14));
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)puVar6;
          puVar6 = puVar6 + 4;
          param_2 = param_2 + 4;
        }
        for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_2 = *puVar6;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        }
        *(ulong *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar5;
        *(ulong *)ptVar1 = *(ulong *)ptVar1 - uVar5;
        *param_4 = param_3;
        return local_4;
      }
      if (uVar4 != 0) {
        puVar6 = (uchar *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14));
        puVar7 = param_2;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar5 = uVar5 - *(ulong *)ptVar1;
        param_2 = param_2 + *(ulong *)ptVar1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      lVar2 = SfCdiReadFileStream(*(void **)param_1,*(uchar **)(param_1 + 0x18),
                                  *(ulong *)(param_1 + 0xc),(ulong *)ptVar1);
      if (lVar2 < 0) break;
      if (*(int *)(param_1 + 8) == -1) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
      }
      if ((*(int *)(param_1 + 0x10) == 0) || (local_4 = lVar2, uVar5 == 0)) break;
    }
  }
  *param_4 = param_3 - uVar5;
  return lVar2;
}


