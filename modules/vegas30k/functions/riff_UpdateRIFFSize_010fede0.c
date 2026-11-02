/* Module: vegas30k.dll
   Function: riff_UpdateRIFFSize
   Address: 010fede0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_UpdateRIFFSize,8 */

undefined4 riff_UpdateRIFFSize(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 local_c;
  DWORD local_8;
  DWORD local_4;
  
  hFile = param_1;
                    /* 0xfede0  1434  _riff_UpdateRIFFSize@8 */
  riff_SaveLocation(param_1,&local_c);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&param_1,4,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    riff_RestoreLocation(hFile,local_c);
    return 0x8004e008;
  }
  if (local_8 != 4) {
    riff_RestoreLocation(hFile,local_c);
    return 0x8004e008;
  }
  param_1 = (HANDLE)((int)param_1 + param_2);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = WriteFile(hFile,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    riff_RestoreLocation(hFile,local_c);
    return 0x8004e009;
  }
  riff_RestoreLocation(hFile,local_c);
  return 0;
}


