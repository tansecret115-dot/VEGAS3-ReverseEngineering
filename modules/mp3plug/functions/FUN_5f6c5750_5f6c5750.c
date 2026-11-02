/* Module: mp3plug.dll
   Function: FUN_5f6c5750
   Address: 5f6c5750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c5750(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
  hFile = param_1;
  FUN_5f6c54f0(param_1,&local_c);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&param_1,4,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_5f6c5510(hFile,local_c);
    return 0x8004e008;
  }
  if (local_8 != 4) {
    FUN_5f6c5510(hFile,local_c);
    return 0x8004e008;
  }
  param_1 = (HANDLE)((int)param_1 + param_2);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = WriteFile(hFile,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_5f6c5510(hFile,local_c);
    return 0x8004e009;
  }
  FUN_5f6c5510(hFile,local_c);
  return 0;
}


