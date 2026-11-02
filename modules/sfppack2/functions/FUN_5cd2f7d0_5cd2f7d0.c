/* Module: sfppack2.dll
   Function: FUN_5cd2f7d0
   Address: 5cd2f7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cd2f7d0(LPCSTR param_1)

{
  HANDLE hObject;
  DWORD DVar1;
  
  hObject = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
    return true;
  }
  DVar1 = GetLastError();
  return DVar1 == 0x20;
}


