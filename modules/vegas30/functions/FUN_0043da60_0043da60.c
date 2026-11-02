/* Module: vegas30.exe
   Function: FUN_0043da60
   Address: 0043da60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043da60(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  DWORD local_28;
  int local_24 [2];
  LONG local_1c;
  short local_18;
  uint local_16;
  
  uVar3 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    param_1 = (LPCSTR)0x0;
    local_28 = 0;
    local_2c = 0;
    local_24[1] = 0;
    local_1c = 0;
    SetFilePointer(hFile,0,&local_1c,0);
    iVar1 = riff_ReadFileID(hFile,&local_2c,local_24);
    if ((-1 < iVar1) && (local_24[0] == 0x41444443)) {
      iVar1 = riff_FindChunkHeader(hFile,0x20746d66,&param_1,&local_2c);
      if ((-1 < iVar1) && (param_1 == (LPCSTR)0x18)) {
        BVar2 = ReadFile(hFile,&local_18,0x18,&local_28,(LPOVERLAPPED)0x0);
        if (((BVar2 != 0) && ((LPCSTR)local_28 == param_1)) && (local_18 == 1)) {
          uVar3 = 1;
          *param_2 = local_16 & 0xffff;
        }
      }
    }
    CloseHandle(hFile);
  }
  return uVar3;
}


