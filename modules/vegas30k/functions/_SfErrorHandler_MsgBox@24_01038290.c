/* Module: vegas30k.dll
   Function: _SfErrorHandler_MsgBox@24
   Address: 01038290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfErrorHandler_MsgBox_24
          (undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int param_6)

{
  LPCSTR lpString2;
  uchar *_Source;
  int iVar1;
  undefined4 uVar2;
  uchar local_3c [49];
  undefined1 local_b;
  undefined1 *local_8;
  
                    /* 0x38290  922  _SfErrorHandler_MsgBox@24 */
  local_8 = (undefined1 *)0x0;
  lpString2 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10e4);
  lstrcpynA((LPSTR)local_3c,lpString2,0x32);
  local_b = 0;
  lstrlenA((LPCSTR)local_3c);
  if (param_4 == -0x7ffb1ff4) {
    return 1;
  }
  _Source = (uchar *)FUN_01038650(param_3,param_4,param_5);
  param_2 = param_2 & 0xffff3fff;
  if (0 < DAT_0120c320) {
    iVar1 = lstrlenA(&DAT_0120c324);
    if (iVar1 != 0) {
      FUN_01002100();
      local_8 = &stack0xffffffb8;
      _mbscpy(&stack0xffffffb8,&DAT_0120c324);
      param_2 = param_2 | 0xc000;
    }
  }
  if (param_6 != 0) {
    lstrlenA((LPCSTR)local_3c);
  }
  lstrlenA((LPCSTR)_Source);
  FUN_01002100();
  if (param_6 == 0) {
    _mbscpy(&stack0xffffffb8,_Source);
  }
  else {
    _mbscpy(&stack0xffffffb8,local_3c);
    _mbscat(&stack0xffffffb8,_Source);
  }
  _SfErrorHandler_DetailsInit_0();
  uVar2 = SfMsgBox_Custom(param_1,param_2,local_8,&stack0xffffffb8);
  return uVar2;
}


