/* Module: vegas30.exe
   Function: FUN_00502380
   Address: 00502380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502380(LPCSTR param_1,undefined4 *param_2,DWORD *param_3)

{
  HANDLE hFile;
  LPCSTR dwBytes;
  HGLOBAL hMem;
  LPVOID lpBuffer;
  LONG local_4;
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0x8004e007;
  }
  local_4 = 0;
  dwBytes = (LPCSTR)SetFilePointer(hFile,0,&local_4,2);
  hMem = GlobalAlloc(0x42,(SIZE_T)dwBytes);
  lpBuffer = GlobalLock(hMem);
  if (lpBuffer == (LPVOID)0x0) {
    CloseHandle(hFile);
    return 0x8007000e;
  }
  local_4 = 0;
  SetFilePointer(hFile,0,&local_4,0);
  ReadFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  if (param_1 != dwBytes) {
    return 0x8004e008;
  }
  *param_2 = lpBuffer;
  *param_3 = (DWORD)dwBytes;
  return 0;
}


