/* Module: vegas30.exe
   Function: FUN_004bb120
   Address: 004bb120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bb120(void)

{
  SIZE_T dwBytes;
  HGLOBAL pvVar1;
  uchar *_Dest;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uStack00000137;
  undefined4 in_stack_0000014c;
  undefined4 in_stack_00000150;
  CHAR in_stack_00000154;
  LPCSTR in_stack_00001d08;
  LPCSTR in_stack_00001d0c;
  LPCSTR in_stack_00001d10;
  
  FUN_0060ac30();
  if (in_stack_00001d08 == (LPCSTR)0x0) {
    in_stack_00000154 = '\0';
  }
  else {
    lstrcpynA(&stack0x00000154,in_stack_00001d08,0x400);
  }
  if (in_stack_00001d0c == (LPCSTR)0x0) {
    _SfLoadString_16();
  }
  else {
    lstrcpynA(&stack0x00000954,in_stack_00001d0c,0x400);
  }
  if (in_stack_00001d10 != (LPCSTR)0x0) {
    lstrcpynA(&stack0x00000554,in_stack_00001d10,0x400);
  }
  iVar2 = -0x7fffbffb;
  if (in_stack_00001d10 != (LPCSTR)0x0 &&
      (in_stack_00001d0c != (LPCSTR)0x0 && in_stack_00001d08 != (LPCSTR)0x0)) {
    iVar2 = FUN_004bade0();
    if (iVar2 < 0) {
      _SfGetString_8();
      SfMsgBox();
    }
  }
  else {
    while (iVar2 < 0) {
      iVar2 = FUN_005026c0();
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_004bade0();
      if (-1 < iVar2) break;
      _SfGetString_8();
      SfMsgBox();
    }
  }
  puVar3 = (undefined4 *)register0x00000010;
  for (iVar2 = 0xe; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  if (&stack0x00000000 == (undefined1 *)0xfffff2ac) {
    dwBytes = 0;
  }
  else {
    iVar2 = lstrlenA(&stack0x00000d54);
    dwBytes = iVar2 + 1;
  }
  pvVar1 = GlobalAlloc(2,dwBytes);
  _Dest = GlobalLock(pvVar1);
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,&stack0x00000d54);
    lstrcpynA(&stack0x00000034,&stack0x00000154,0x104);
    uStack00000137 = 0;
    lstrlenA(&stack0x00000034);
    iVar2 = _SfList_AllocAndInsertItem_20();
    if (iVar2 < 0) {
      pvVar1 = GlobalHandle(_Dest);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(_Dest);
      GlobalFree(pvVar1);
      return iVar2;
    }
    _SfList_Sort_12();
    FUN_004ba9e0();
    return iVar2;
  }
  return -0x7ff8fff2;
}


