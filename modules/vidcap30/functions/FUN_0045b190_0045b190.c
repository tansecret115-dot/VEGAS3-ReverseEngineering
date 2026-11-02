/* Module: vidcap30.exe
   Function: FUN_0045b190
   Address: 0045b190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0045b190(LPCSTR param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  DWORD DVar2;
  DWORD local_4;
  
  DVar2 = 0;
  DVar1 = 0;
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar2 = GetFileSize(hFile,&local_4);
      CloseHandle(hFile);
      DVar1 = local_4;
    }
  }
  return CONCAT44(DVar1,DVar2);
}


