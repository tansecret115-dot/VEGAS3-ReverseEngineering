/* Module: vegas30.exe
   Function: FUN_00501c80
   Address: 00501c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501c80(HANDLE param_1,LPCSTR param_2)

{
  DWORD nNumberOfBytesToWrite;
  LPCSTR pCVar1;
  undefined4 uVar2;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  pCVar1 = param_2;
  lpNumberOfBytesWritten = (LPDWORD)&param_2;
  lpOverlapped = (LPOVERLAPPED)0x0;
  nNumberOfBytesToWrite = lstrlenA(param_2);
  WriteFile(param_1,pCVar1,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  pCVar1 = (LPCSTR)lstrlenA(pCVar1);
  if (param_2 != pCVar1) {
    return 0x8004e009;
  }
  uVar2 = FUN_00501c20(param_1);
  return uVar2;
}


