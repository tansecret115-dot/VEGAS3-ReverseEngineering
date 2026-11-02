/* Module: vidcap30.exe
   Function: riff64_SetRIFFSize
   Address: 004b7460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_SetRIFFSize,12 */

undefined4 riff64_SetRIFFSize(HANDLE param_1,uint param_2,int param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  bool bVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  hFile = param_1;
                    /* 0xb7460  764  _riff64_SetRIFFSize@12 */
  riff64_SaveLocation(param_1,&local_8);
  SetFilePointer(hFile,0x10,(PLONG)0x0,0);
  bVar2 = 0xffffffe7 < param_2;
  param_2 = param_2 + 0x18;
  param_3 = param_3 + (uint)bVar2;
  BVar1 = WriteFile(hFile,&param_2,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    riff64_RestoreLocation(hFile,local_8,local_4);
    return 0x8004e009;
  }
  riff64_RestoreLocation(hFile,local_8,local_4);
  return 0;
}


