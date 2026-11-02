/* Module: vidcap30.exe
   Function: FUN_0048fdf0
   Address: 0048fdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048fdf0(undefined4 param_1,LPCWSTR param_2,undefined4 *param_3,LPVOID param_4,
                 DWORD param_5,LPDWORD param_6)

{
  HANDLE hFile;
  DWORD DVar1;
  CHAR local_104 [259];
  undefined1 local_1;
  
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
    WideCharToMultiByte(0,0,param_2,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x104) {
    local_104[0] = '\0';
  }
  local_1 = 0;
  hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  *param_3 = hFile;
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    ReadFile((HANDLE)*param_3,param_4,param_5,param_6,(LPOVERLAPPED)0x0);
    return;
  }
  DVar1 = GetLastError();
  _SfErrorHandler_TranslateWin32Error_4(DVar1);
  return;
}


