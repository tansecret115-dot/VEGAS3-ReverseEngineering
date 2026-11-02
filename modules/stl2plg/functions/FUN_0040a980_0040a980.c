/* Module: stl2plg.dll
   Function: FUN_0040a980
   Address: 0040a980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040a980(int param_1)

{
  LPCWSTR lpWideCharStr;
  HANDLE hFile;
  undefined4 uVar1;
  undefined4 local_108;
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    lpWideCharStr = (LPCWSTR)(param_1 + 0x50);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x104) {
      local_104[0] = '\0';
    }
    local_1 = 0;
    hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      ((LPFILETIME)(param_1 + 0xc))->dwLowDateTime = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,(LPFILETIME)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      uVar1 = FUN_0040aa80();
      CloseHandle(hFile);
      *(undefined4 *)(param_1 + 8) = 1;
      return uVar1;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return local_108;
  }
  return 0x80070057;
}


