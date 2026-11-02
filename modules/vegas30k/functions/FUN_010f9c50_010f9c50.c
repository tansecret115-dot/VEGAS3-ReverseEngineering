/* Module: vegas30k.dll
   Function: FUN_010f9c50
   Address: 010f9c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_010f9c50(HANDLE param_1,size_t *param_2)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  void *lpBuffer;
  size_t *psVar3;
  undefined1 local_8 [4];
  size_t local_4;
  
  hFile = param_1;
  lpBuffer = (void *)0x0;
  psVar3 = param_2;
  if (param_2 == (size_t *)0x0) {
    psVar3 = &local_4;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  riff_ReadFileID(hFile,local_8,&param_1);
  if (param_1 != (HANDLE)0x45564157) {
    return (void *)0x0;
  }
  iVar1 = riff_FindChunkHeader(hFile,0x20746d66,psVar3,local_8);
  if (iVar1 == 0) {
    lpBuffer = calloc(1,*psVar3);
    if (lpBuffer != (void *)0x0) {
      BVar2 = ReadFile(hFile,lpBuffer,*psVar3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        free(lpBuffer);
        lpBuffer = (void *)0x0;
        param_2 = (size_t *)0x0;
      }
      _SfAudio_FixBadWfx_4(lpBuffer);
      *psVar3 = (size_t)param_2;
    }
  }
  return lpBuffer;
}


