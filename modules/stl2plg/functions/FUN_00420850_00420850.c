/* Module: stl2plg.dll
   Function: FUN_00420850
   Address: 00420850
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR FUN_00420850(HWND param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
                    int param_6)

{
  LPCSTR lpString2;
  uchar *_Source;
  int iVar1;
  INT_PTR IVar2;
  uchar local_3c [49];
  undefined1 local_b;
  uchar *local_8;
  
  local_8 = (uchar *)0x0;
  lpString2 = FUN_0040e730(DAT_00473620,0x10e4);
  lstrcpynA((LPSTR)local_3c,lpString2,0x32);
  local_b = 0;
  lstrlenA((LPCSTR)local_3c);
  if (param_4 == -0x7ffb1ff4) {
    return 1;
  }
  _Source = (uchar *)FUN_00420c10(param_3,param_4);
  param_2 = param_2 & 0xffff3fff;
  if (0 < DAT_004761d8) {
    iVar1 = lstrlenA(&DAT_004761dc);
    if (iVar1 != 0) {
      FUN_00462620();
      local_8 = &stack0xffffffb8;
      _mbscpy(&stack0xffffffb8,&DAT_004761dc);
      param_2 = param_2 | 0xc000;
    }
  }
  if (param_6 != 0) {
    lstrlenA((LPCSTR)local_3c);
  }
  lstrlenA((LPCSTR)_Source);
  FUN_00462620();
  if (param_6 == 0) {
    _mbscpy(&stack0xffffffb8,_Source);
  }
  else {
    _mbscpy(&stack0xffffffb8,local_3c);
    _mbscat(&stack0xffffffb8,_Source);
  }
  FUN_00420970();
  IVar2 = FUN_00426ec0(param_1,param_2,local_8,&stack0xffffffb8);
  return IVar2;
}


