/* Module: vegas30k.dll
   Function: iff_SeekChunkHeader
   Address: 011207b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_SeekChunkHeader,12 */

int iff_SeekChunkHeader(HANDLE param_1,int param_2,uint *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  uint local_8;
  LONG local_4;
  
  while( true ) {
    iVar1 = iff_ReadChunkHdr(param_1,&local_10);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_10 == param_2) break;
    if ((local_c & 1) != 0) {
      local_c = local_c + 1;
    }
    local_4 = 0;
    local_8 = local_c;
    SetFilePointer(param_1,local_c,&local_4,1);
  }
  *param_3 = local_c;
  return 0;
}


