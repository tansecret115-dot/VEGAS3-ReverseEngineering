/* Module: vegas30k.dll
   Function: riff_FindChunkHeaderInRIFF
   Address: 010ff290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_FindChunkHeaderInRIFF,16 */

int riff_FindChunkHeaderInRIFF
              (HANDLE param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  puVar2 = param_4;
                    /* 0xff290  1416  _riff_FindChunkHeaderInRIFF@16 */
  pvVar1 = param_1;
  if (param_4 != (undefined4 *)0x0) {
    param_4 = (undefined4 *)*param_4;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar3 = riff_ReadFileID(pvVar1,&param_1,local_4);
  if (-1 < iVar3) {
    param_4 = param_1;
    iVar3 = riff_FindChunkHeader(pvVar1,param_2,&local_8,&param_4);
    if (iVar3 < 0) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_4;
        return iVar3;
      }
    }
    else {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_8;
      }
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_4;
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}


