/* Module: extmondrv.dll
   Function: FUN_004278b0
   Address: 004278b0
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR FUN_004278b0(HWND param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
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
  lpString2 = FUN_00412df0(DAT_0045b190,0x10e4);
  lstrcpynA((LPSTR)local_3c,lpString2,0x32);
  local_b = 0;
  lstrlenA((LPCSTR)local_3c);
  if (param_4 == -0x7ffb1ff4) {
    return 1;
  }
  _Source = (uchar *)FUN_00427c70(param_3,param_4);
  param_2 = param_2 & 0xffff3fff;
  if (0 < DAT_0045e870) {
    iVar1 = lstrlenA(&DAT_0045e874);
    if (iVar1 != 0) {
      FUN_0044bbb0();
      local_8 = &stack0xffffffb8;
      _mbscpy(&stack0xffffffb8,&DAT_0045e874);
      param_2 = param_2 | 0xc000;
    }
  }
  if (param_6 != 0) {
    lstrlenA((LPCSTR)local_3c);
  }
  lstrlenA((LPCSTR)_Source);
  FUN_0044bbb0();
  if (param_6 == 0) {
    _mbscpy(&stack0xffffffb8,_Source);
  }
  else {
    _mbscpy(&stack0xffffffb8,local_3c);
    _mbscat(&stack0xffffffb8,_Source);
  }
  FUN_004279d0();
  IVar2 = FUN_004238f0(param_1,param_2,local_8,&stack0xffffffb8);
  return IVar2;
}


