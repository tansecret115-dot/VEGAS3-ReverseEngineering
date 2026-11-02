/* Module: vidcap30.exe
   Function: riff_GetFileSize
   Address: 004b58d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_GetFileSize,8 */

int riff_GetFileSize(HANDLE param_1,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined1 local_4 [4];
  
                    /* 0xb58d0  780  _riff_GetFileSize@8 */
  pvVar1 = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar2 = riff_ReadFileID(pvVar1,&param_1,local_4);
  if (-1 < iVar2) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1 + 8;
    }
    iVar2 = 0;
  }
  return iVar2;
}


