/* Module: vegas30k.dll
   Function: iff_FindChunkHeader
   Address: 01120720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_FindChunkHeader,16 */

int iff_FindChunkHeader(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
                    /* 0x120720  1369  _iff_FindChunkHeader@16 */
  if (param_4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_4;
  }
  while( true ) {
    if ((param_4 != (int *)0x0) && (iVar2 < 8)) {
      *param_4 = iVar2;
      return -0x7ffb1ff6;
    }
    iVar1 = iff_ReadChunkHdr(param_1,&local_8);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_8 == param_2) break;
    local_4 = iff_SkipChunk(param_1,local_4);
    iVar2 = (iVar2 + -8) - local_4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2 + -8;
  }
  return 0;
}


