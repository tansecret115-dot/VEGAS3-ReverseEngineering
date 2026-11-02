/* Module: vegas30.exe
   Function: FUN_004ebb70
   Address: 004ebb70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ebb70(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_4;
  
  hFile = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  if ((param_1 != (HANDLE)0x4034b50) && (param_1 != (HANDLE)0x30304b50)) {
    return 0;
  }
  return 1;
}


