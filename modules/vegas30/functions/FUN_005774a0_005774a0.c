/* Module: vegas30.exe
   Function: FUN_005774a0
   Address: 005774a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005774ed) */

void FUN_005774a0(DWORD param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  HANDLE hFile;
  longlong lVar4;
  uchar in_stack_0000006c;
  WCHAR in_stack_0000086c;
  HWND in_stack_00001070;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  LPCSTR pCVar5;
  
  FUN_0060ac30();
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  pHVar1 = GetDlgItem(in_stack_00001070,0x46e);
  LVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  if (LVar2 == 0) {
    in_stack_0000006c = '\0';
    iVar3 = _SfDoesFileExist_4();
    if (iVar3 != 0) {
      if (DAT_00659e38 == 0) {
        _mbscat(&stack0x0000006c,(uchar *)"Rendered As: ");
        _mbscat(&stack0x0000006c,&DAT_00659b28);
        iVar3 = (**(code **)(*DAT_0064b510 + 0x84))();
        if (-1 < iVar3) {
          if ((&stack0x00000000 == (undefined1 *)0xfffff794) || (in_stack_0000086c != L'\0')) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0x0000086c,-1,&stack0x0000046c,0x400,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          _mbscat(&stack0x0000006c,"\r\n");
          _mbscat(&stack0x0000006c,&stack0x0000046c);
          _mbscat(&stack0x0000006c,"\r\n");
        }
      }
      hFile = CreateFileA(&DAT_00659d30,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        GetFileSize(hFile,&param_1);
        CloseHandle(hFile);
        __alldiv();
        _SfLongLongToText_16();
        _mbscat(&stack0x0000006c,(uchar *)"Size: ");
        _mbscat(&stack0x0000006c,&stack0x00000008);
        _mbscat(&stack0x0000006c,(uchar *)&PTR_LAB_0061bac4);
      }
    }
    pCVar5 = (LPCSTR)&stack0x0000006c;
    pHVar1 = GetDlgItem(in_stack_00001070,0x1409);
    SetWindowTextA(pHVar1,pCVar5);
    return;
  }
  lVar4 = FUN_00575ce0();
  if ((0 < lVar4) && (iVar3 = FUN_00575ec0(), iVar3 != -1)) {
    FUN_00575f50();
    iVar3 = (**(code **)(*DAT_0064b510 + 0x84))();
    if (-1 < iVar3) {
      FUN_005788b0();
    }
  }
  pCVar5 = &stack0x0000046c;
  pHVar1 = GetDlgItem(in_stack_00001070,0x1409);
  SetWindowTextA(pHVar1,pCVar5);
  return;
}


