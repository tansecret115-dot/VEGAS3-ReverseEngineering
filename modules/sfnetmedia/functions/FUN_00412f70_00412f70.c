/* Module: sfnetmedia.dll
   Function: FUN_00412f70
   Address: 00412f70
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00412f70(int param_1,HWND param_2,ULONG_PTR param_3,UINT param_4,uchar *param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  uchar *puVar3;
  uchar local_104 [260];
  
  if (param_5 == (uchar *)0x0) {
    FUN_00412c60(param_1,(LPSTR)local_104,0x104);
  }
  else {
    _mbscpy(local_104,param_5);
  }
  if ((param_1 == 0) &&
     (((param_4 == 0 || (param_4 == 2)) &&
      (bVar1 = FUN_00413a10((LPCSTR)local_104), CONCAT31(extraout_var,bVar1) == 0)))) {
    return (HWND)0x0;
  }
  if (local_104[0] != '\0') {
    if (param_1 == 0) {
      pHVar2 = (HWND)WinHelpA(param_2,(LPCSTR)local_104,param_4,param_3);
      return pHVar2;
    }
    if (param_1 == 1) {
      puVar3 = local_104;
      pHVar2 = GetDesktopWindow();
      pHVar2 = (HWND)FUN_00412f10(pHVar2,puVar3,param_4,param_3);
      if (pHVar2 != (HWND)0x0) {
        BringWindowToTop(pHVar2);
      }
      return pHVar2;
    }
  }
  return (HWND)0x0;
}


