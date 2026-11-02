/* Module: sfcdi.dll
   Function: FUN_5bf0d7a0
   Address: 5bf0d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf0d7a0(HANDLE param_1,LPCSTR param_2)

{
  LPCSTR nNumberOfBytesToWrite;
  LPCSTR pCVar1;
  
  pCVar1 = param_2;
  if (param_2 != (LPCSTR)0x0) {
    nNumberOfBytesToWrite = (LPCSTR)lstrlenA(param_2);
    if (nNumberOfBytesToWrite != (LPCSTR)0x0) {
      WriteFile(param_1,pCVar1,(DWORD)nNumberOfBytesToWrite,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
      if (nNumberOfBytesToWrite != param_2) {
        return 0x8004e009;
      }
    }
  }
  pCVar1 = (LPCSTR)lstrlenA(PTR_DAT_5bf63614);
  WriteFile(param_1,PTR_DAT_5bf63614,(DWORD)pCVar1,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  return -(uint)(pCVar1 != param_2) & 0x8004e009;
}


