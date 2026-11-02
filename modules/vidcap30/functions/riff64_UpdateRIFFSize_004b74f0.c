/* Module: vidcap30.exe
   Function: riff64_UpdateRIFFSize
   Address: 004b74f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_UpdateRIFFSize,12 */

undefined4 riff64_UpdateRIFFSize(HANDLE param_1,uint param_2,int param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  bool bVar3;
  DWORD local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xb74f0  766  _riff64_UpdateRIFFSize@12 */
  hFile = param_1;
  uVar2 = 0x8004e009;
  riff64_SaveLocation(param_1,&local_8);
  SetFilePointer(hFile,0x10,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&local_10,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    uVar2 = 0x8004e008;
  }
  else if (param_1 == (HANDLE)0x8) {
    bVar3 = CARRY4(local_10,param_2);
    local_10 = local_10 + param_2;
    local_c = local_c + param_3 + (uint)bVar3;
    SetFilePointer(hFile,0x10,(PLONG)0x0,0);
    BVar1 = WriteFile(hFile,&local_10,8,&local_14,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      riff64_RestoreLocation(hFile,local_8,local_4);
      return 0;
    }
  }
  else {
    uVar2 = 0x8004e008;
  }
  riff64_RestoreLocation(hFile,local_8,local_4);
  return uVar2;
}


