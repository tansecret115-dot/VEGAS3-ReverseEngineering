/* Module: vegas30k.dll
   Function: riff_SetRIFFSize
   Address: 010fed40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SetRIFFSize,8 */

undefined4 riff_SetRIFFSize(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_4;
  
                    /* 0xfed40  1432  _riff_SetRIFFSize@8 */
  hFile = param_1;
  riff_SaveLocation(param_1,&param_1);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = WriteFile(hFile,&stack0x00000008,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    riff_RestoreLocation(hFile,param_1);
    return 0x8004e009;
  }
  riff_RestoreLocation(hFile,param_1);
  return 0;
}


