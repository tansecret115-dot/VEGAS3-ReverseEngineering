/* Module: vidcap30.exe
   Function: riff_FindChunkHeader
   Address: 004b5d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_FindChunkHeader,16 */

int riff_FindChunkHeader(undefined4 param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_4;
                    /* 0xb5d30  776  _riff_FindChunkHeader@16 */
  iVar1 = param_2;
  if (param_4 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_4;
  }
  while( true ) {
    if ((piVar2 != (int *)0x0) && (iVar4 < 8)) {
      *piVar2 = iVar4;
      return -0x7ffb1ff6;
    }
    iVar3 = riff_ReadChunkHeader(param_1,&param_2,&param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (param_2 == iVar1) break;
    param_4 = (int *)riff_SkipChunk(param_1,param_4);
    iVar4 = (iVar4 + -8) - (int)param_4;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar4 + -8;
  }
  return 0;
}


