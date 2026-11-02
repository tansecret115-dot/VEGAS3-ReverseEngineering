/* Module: Setup.exe
   Function: _SfErrorHandler_MsgBox@24
   Address: 0041f1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR _SfErrorHandler_MsgBox_24
                  (HWND param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,int param_6
                  )

{
  LPCSTR lpString2;
  uchar *_Source;
  int iVar1;
  INT_PTR IVar2;
  uchar local_3c [49];
  undefined1 local_b;
  uchar *local_8;
  
                    /* 0x1f1c0  123  _SfErrorHandler_MsgBox@24 */
  local_8 = (uchar *)0x0;
  lpString2 = _SfGetString2_8(DAT_00448e00,0x10e4);
  lstrcpynA((LPSTR)local_3c,lpString2,0x32);
  local_b = 0;
  lstrlenA((LPCSTR)local_3c);
  if (param_4 == -0x7ffb1ff4) {
    return 1;
  }
  _Source = (uchar *)FUN_0041f580(param_3,param_4);
  param_2 = param_2 & 0xffff3fff;
  if (0 < DAT_0044c348) {
    iVar1 = lstrlenA(&DAT_0044c34c);
    if (iVar1 != 0) {
      FUN_004321a0();
      local_8 = &stack0xffffffb8;
      _mbscpy(&stack0xffffffb8,&DAT_0044c34c);
      param_2 = param_2 | 0xc000;
    }
  }
  if (param_6 != 0) {
    lstrlenA((LPCSTR)local_3c);
  }
  lstrlenA((LPCSTR)_Source);
  FUN_004321a0();
  if (param_6 == 0) {
    _mbscpy(&stack0xffffffb8,_Source);
  }
  else {
    _mbscpy(&stack0xffffffb8,local_3c);
    _mbscat(&stack0xffffffb8,_Source);
  }
  _SfErrorHandler_DetailsInit_0();
  IVar2 = SfMsgBox_Custom(param_1,param_2,local_8,&stack0xffffffb8);
  return IVar2;
}


