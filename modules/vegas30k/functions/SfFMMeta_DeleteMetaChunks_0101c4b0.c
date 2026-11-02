/* Module: vegas30k.dll
   Function: SfFMMeta_DeleteMetaChunks
   Address: 0101c4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_DeleteMetaChunks(char *) */

long SfFMMeta_DeleteMetaChunks(char *param_1)

{
  HANDLE hObject;
  int iVar1;
  
                    /* 0x1c4b0  384  ?SfFMMeta_DeleteMetaChunks@@YGJPAD@Z */
  iVar1 = 0;
  hObject = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = riff_DeleteChunk(hObject,0x20657563,&param_1,0);
    if ((-1 < iVar1) || (iVar1 == -0x7ffb1ff6)) {
      iVar1 = riff_DeleteChunk(hObject,0x6c746461,&param_1,1);
    }
    CloseHandle(hObject);
  }
  return iVar1;
}


