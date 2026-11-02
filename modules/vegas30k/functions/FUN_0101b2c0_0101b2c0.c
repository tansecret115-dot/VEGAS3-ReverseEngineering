/* Module: vegas30k.dll
   Function: FUN_0101b2c0
   Address: 0101b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_0101b2c0(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  int iVar1;
  LPCSTR lpString;
  int iVar2;
  BOOL BVar3;
  uint nNumberOfBytesToWrite;
  LONG local_c [3];
  
  hFile = param_1;
  local_c[0] = 0;
  local_c[1] = 0;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff_ReadFileID(hFile,local_c,local_c + 1);
  if (-1 < iVar1) {
    SetFilePointer(hFile,local_c[0],(PLONG)0x0,1);
    if (param_2 == 0) {
      return -0x7fffbffb;
    }
    lpString = (LPCSTR)_SfGetFileNamePtrA_4(param_2);
    iVar2 = lstrlenA(lpString);
    nNumberOfBytesToWrite = iVar2 + 1;
    iVar1 = riff_WriteChunkHeader(hFile,0x49504653,nNumberOfBytesToWrite);
    if (-1 < iVar1) {
      BVar3 = WriteFile(hFile,lpString,nNumberOfBytesToWrite,(LPDWORD)(local_c + 2),
                        (LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        return -0x7ffb1ff7;
      }
      if ((nNumberOfBytesToWrite & 1) != 0) {
        param_1 = (HANDLE)((uint)param_1 & 0xffffff00);
        BVar3 = WriteFile(hFile,&param_1,1,(LPDWORD)(local_c + 2),(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          return -0x7ffb1ff7;
        }
        nNumberOfBytesToWrite = iVar2 + 2;
      }
      riff_UpdateRIFFSize(hFile,nNumberOfBytesToWrite + 8);
      iVar1 = 0;
    }
  }
  return iVar1;
}


