/* Module: sfpublish.dll
   Function: FUN_0040f9f0
   Address: 0040f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f9f0(int param_1,int param_2,short *param_3)

{
  LPCWSTR lpWideCharStr;
  size_t sVar1;
  uchar *puVar2;
  undefined2 *in_stack_00000020;
  
  *in_stack_00000020 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 == 8)) {
    sVar1 = wcslen(*(wchar_t **)(param_3 + 4));
    FUN_004328f0();
    lpWideCharStr = *(LPCWSTR *)(param_3 + 4);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,&stack0xfffffff0,sVar1 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    (&stack0xfffffff0)[sVar1] = 0;
    if ((param_2 != 0) &&
       (puVar2 = _mbsstr(&stack0xfffffff0,(uchar *)"shdoclc.dll"), puVar2 != (uchar *)0x0)) {
      *in_stack_00000020 = 0xffff;
      PostMessageA(*(HWND *)(param_1 + 4),0xd90,0,0);
    }
  }
  return;
}


