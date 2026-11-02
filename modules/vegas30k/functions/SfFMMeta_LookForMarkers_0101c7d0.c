/* Module: vegas30k.dll
   Function: SfFMMeta_LookForMarkers
   Address: 0101c7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_LookForMarkers(char *) */

long SfFMMeta_LookForMarkers(char *param_1)

{
  HANDLE hFile;
  int iVar1;
  long lVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
                    /* 0x1c7d0  386  ?SfFMMeta_LookForMarkers@@YGJPAD@Z */
  lVar2 = -0x7ffb1ff6;
  hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    iVar1 = riff_ReadFileID(hFile,&param_1,local_8);
    if (-1 < iVar1) {
      iVar1 = riff_FindChunkHeader(hFile,0x20657563,local_4,&param_1);
      if (-1 < iVar1) {
        lVar2 = 0;
      }
    }
    CloseHandle(hFile);
  }
  return lVar2;
}


