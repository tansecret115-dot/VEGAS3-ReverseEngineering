/* Module: vegas30k.dll
   Function: iff_FindMarker
   Address: 011208d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_FindMarker,12 */

int iff_FindMarker(HANDLE param_1,short *param_2,short param_3)

{
  HANDLE hFile;
  short *lpBuffer;
  int iVar1;
  uint lDistanceToMove;
  int local_10;
  DWORD local_c;
  uint local_8;
  LONG local_4;
  
  hFile = param_1;
                    /* 0x1208d0  1370  _iff_FindMarker@12 */
  iVar1 = iff_FindChunkFromStart(param_1,0x4d41524b,&local_10);
  if ((-1 < iVar1) && (iVar1 = iff_ReadWORD(hFile,&param_1), lpBuffer = param_2, -1 < iVar1)) {
    for (; ((short)param_1 != 0 && (0 < local_10)); local_10 = local_10 + (-7 - lDistanceToMove)) {
      ReadFile(hFile,lpBuffer,7,&local_c,(LPOVERLAPPED)0x0);
      if (local_c != 7) {
        return -0x7ffb1f80;
      }
      iff_ByteSwap16(lpBuffer,1);
      iff_ByteSwap32(lpBuffer + 1,1);
      if (*lpBuffer == param_3) {
        return 0;
      }
      lDistanceToMove = (uint)*(byte *)(lpBuffer + 3);
      if ((*(byte *)(lpBuffer + 3) & 1) == 0) {
        lDistanceToMove = lDistanceToMove + 1;
      }
      local_4 = 0;
      local_8 = lDistanceToMove;
      SetFilePointer(hFile,lDistanceToMove,&local_4,1);
      param_1 = (HANDLE)((int)param_1 + 0xffff);
    }
    iVar1 = -0x7ffb1ff6;
  }
  return iVar1;
}


