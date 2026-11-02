/* Module: sfmarket2.dll
   Function: FUN_00420b70
   Address: 00420b70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00420b70(LPCSTR param_1)

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


