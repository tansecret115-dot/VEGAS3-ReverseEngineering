/* Module: vidcap30.exe
   Function: riff64_FindListChunkFromStart
   Address: 004b7fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_FindListChunkFromStart,24 */

int riff64_FindListChunkFromStart
              (HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [16];
  
                    /* 0xb7fa0  749  _riff64_FindListChunkFromStart@24 */
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff64_ReadFileID(param_1,local_18,local_10);
  if (-1 < iVar1) {
    iVar1 = riff64_FindListChunk(param_1,param_2,param_3,param_4,param_5,&local_20,local_18);
    if (-1 < iVar1) {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_20;
        param_6[1] = local_1c;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


