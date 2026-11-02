/* Module: vegas30.exe
   Function: FUN_00535660
   Address: 00535660
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00535660(LPCSTR param_1)

{
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_140;
  
  hFindFile = FindFirstFileA(param_1,&local_140);
  FindClose(hFindFile);
  return hFindFile != (HANDLE)0xffffffff;
}


