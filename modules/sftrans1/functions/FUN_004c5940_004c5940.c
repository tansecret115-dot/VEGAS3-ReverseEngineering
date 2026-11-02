/* Module: sftrans1.dll
   Function: FUN_004c5940
   Address: 004c5940
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_004c5940(int param_1,HWND param_2,ULONG_PTR param_3,UINT param_4,uchar *param_5)

{
  int iVar1;
  HWND pHVar2;
  uchar *puVar3;
  uchar local_104 [260];
  
  if (param_5 == (uchar *)0x0) {
    FUN_004c5630(param_1,local_104,0x104);
  }
  else {
    _mbscpy(local_104,param_5);
  }
  if ((param_1 == 0) &&
     (((param_4 == 0 || (param_4 == 2)) && (iVar1 = FUN_005099c0(local_104), iVar1 == 0)))) {
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
      pHVar2 = (HWND)FUN_004c58e0(pHVar2,puVar3,param_4,param_3);
      if (pHVar2 != (HWND)0x0) {
        BringWindowToTop(pHVar2);
      }
      return pHVar2;
    }
  }
  return (HWND)0x0;
}


