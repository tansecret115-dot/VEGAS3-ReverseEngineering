/* Module: qt4plug.dll
   Function: FUN_5f56b4f0
   Address: 5f56b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f56b4f0(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
  hFile = param_1;
  FUN_5f56b290(param_1,&local_c);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&param_1,4,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_5f56b2b0(hFile,local_c);
    return 0x8004e008;
  }
  if (local_8 != 4) {
    FUN_5f56b2b0(hFile,local_c);
    return 0x8004e008;
  }
  param_1 = (HANDLE)((int)param_1 + param_2);
  SetFilePointer(hFile,4,(PLONG)0x0,0);
  BVar1 = WriteFile(hFile,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_5f56b2b0(hFile,local_c);
    return 0x8004e009;
  }
  FUN_5f56b2b0(hFile,local_c);
  return 0;
}


