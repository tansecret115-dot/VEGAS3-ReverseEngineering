/* Module: vidcap30.exe
   Function: riff_SeekListEntry
   Address: 004b6010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SeekListEntry,12 */

int riff_SeekListEntry(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_3;
                    /* 0xb6010  792  _riff_SeekListEntry@12 */
  iVar1 = param_2;
  iVar4 = 0;
  while( true ) {
    if (iVar1 == iVar4) {
      return 0;
    }
    if ((piVar2 != (int *)0x0) && (*piVar2 < 8)) break;
    iVar3 = riff_ReadChunkHeader(param_1,&param_2,&param_3);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + -8;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    param_3 = (int *)riff_SkipChunk(param_1,param_3);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 - (int)param_3;
    }
    iVar4 = iVar4 + 1;
  }
  return -0x7ffb1ff6;
}


