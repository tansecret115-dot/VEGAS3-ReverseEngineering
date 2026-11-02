/* Module: vidcap30.exe
   Function: riff_WriteChunk
   Address: 004b5a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_WriteChunk,20 */

int riff_WriteChunk(HANDLE param_1,DWORD param_2,LPCVOID param_3,uint param_4,int *param_5)

{
  int iVar1;
  BOOL BVar2;
  uint nNumberOfBytesToWrite;
  
                    /* 0xb5a40  798  _riff_WriteChunk@20 */
  nNumberOfBytesToWrite = param_4;
  iVar1 = riff_WriteChunkHeader(param_1,param_2,param_4);
  if (-1 < iVar1) {
    BVar2 = WriteFile(param_1,param_3,nNumberOfBytesToWrite,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return -0x7ffb1ff7;
    }
    if ((nNumberOfBytesToWrite & 1) != 0) {
      param_4 = param_4 & 0xffffff00;
      BVar2 = WriteFile(param_1,&param_4,1,&param_2,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff7;
      }
      nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = nNumberOfBytesToWrite + 8;
    }
    iVar1 = 0;
  }
  return iVar1;
}


