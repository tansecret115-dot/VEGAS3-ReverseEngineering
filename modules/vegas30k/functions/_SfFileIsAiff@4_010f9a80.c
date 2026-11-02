/* Module: vegas30k.dll
   Function: _SfFileIsAiff@4
   Address: 010f9a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfFileIsAiff_4(LPCSTR param_1)

{
  HANDLE hFile;
  undefined4 uVar1;
  
                    /* 0xf9a80  926  _SfFileIsAiff@4 */
  uVar1 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80000000,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    uVar1 = iff_IsAIFFFile(hFile,&param_1);
    CloseHandle(hFile);
  }
  return uVar1;
}


