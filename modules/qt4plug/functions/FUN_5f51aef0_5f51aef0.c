/* Module: qt4plug.dll
   Function: FUN_5f51aef0
   Address: 5f51aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f51aef0(int param_1)

{
  LPCWSTR lpWideCharStr;
  HANDLE hFile;
  DWORD DVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  DWORD local_114;
  int iStack_110;
  undefined4 uStack_10c;
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    lpWideCharStr = (LPCWSTR)(param_1 + 0x140);
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
      DVar1 = GetFileSize(hFile,&local_114);
      *(DWORD *)(param_1 + 0x130) = DVar1;
      *(DWORD *)(param_1 + 0x134) = local_114;
      CloseHandle(hFile);
    }
    uVar2 = FUN_5f576210();
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uStack_10c = FUN_5f575ff0();
    iStack_110 = FUN_5f575fb0();
    if (iStack_110 == 0) {
      iStack_110 = 1;
    }
    uVar3 = ftol();
    *(undefined8 *)(param_1 + 0x128) = uVar3;
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  return 0x80070057;
}


