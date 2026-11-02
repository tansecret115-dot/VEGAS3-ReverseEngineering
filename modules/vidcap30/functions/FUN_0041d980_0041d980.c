/* Module: vidcap30.exe
   Function: FUN_0041d980
   Address: 0041d980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d980(LPCSTR param_1,int param_2)

{
  HANDLE hFindFile;
  undefined4 uVar1;
  _WIN32_FIND_DATAA local_140;
  
  uVar1 = 1;
  hFindFile = FindFirstFileA(param_1,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    return 0;
  }
  if ((param_2 == 1) && (((byte)local_140.dwFileAttributes & 0x10) == 0)) {
    uVar1 = 0;
  }
  FindClose(hFindFile);
  return uVar1;
}


