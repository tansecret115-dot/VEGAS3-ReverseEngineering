/* Module: sfpaplug.dll
   Function: FUN_004141a0
   Address: 004141a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004141a0(LPCSTR param_1)

{
  HANDLE hFile;
  uint local_40;
  _FILETIME local_3c;
  _BY_HANDLE_FILE_INFORMATION local_34;
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  GetFileInformationByHandle(hFile,&local_34);
  FileTimeToLocalFileTime(&local_34.ftLastWriteTime,&local_3c);
  FileTimeToDosDateTime(&local_3c,(LPWORD)&local_40,(LPWORD)&param_1);
  CloseHandle(hFile);
  return (int)param_1 << 0x10 | local_40 & 0xffff;
}


