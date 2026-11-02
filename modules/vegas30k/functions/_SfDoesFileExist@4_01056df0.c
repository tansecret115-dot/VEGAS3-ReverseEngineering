/* Module: vegas30k.dll
   Function: _SfDoesFileExist@4
   Address: 01056df0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfDoesFileExist_4(LPCSTR param_1)

{
  HANDLE hObject;
  DWORD DVar1;
  
                    /* 0x56df0  902  _SfDoesFileExist@4 */
  hObject = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
    return true;
  }
  DVar1 = GetLastError();
  return DVar1 == 0x20;
}


