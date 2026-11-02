/* Module: vidcap30.exe
   Function: riff_FindListChunkFromStart
   Address: 004b5f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_FindListChunkFromStart,12 */

int riff_FindListChunkFromStart(HANDLE param_1,undefined4 param_2,undefined4 *param_3)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 local_8;
  undefined1 local_4 [4];
  
                    /* 0xb5f20  779  _riff_FindListChunkFromStart@12 */
  pvVar1 = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar2 = riff_ReadFileID(pvVar1,&param_1,local_4);
  if (-1 < iVar2) {
    iVar2 = riff_FindListChunk(pvVar1,param_2,&local_8,&param_1);
    if (-1 < iVar2) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_8;
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


