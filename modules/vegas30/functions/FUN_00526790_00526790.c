/* Module: vegas30.exe
   Function: FUN_00526790
   Address: 00526790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00526790(HWND param_1,uint param_2,short param_3,int param_4)

{
  undefined4 *puVar1;
  HWND hWnd;
  LPSTR lpString;
  int nMaxCount;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_00644a58,0);
      return 1;
    }
    if (param_2 != 2) {
      return 0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      return 1;
    }
  }
  else {
    if (param_2 != 0x110) {
      if (param_2 != 0x111) {
        return 0;
      }
      if (param_3 != 1) {
        if (param_3 == 2) {
          puVar1[4] = 0x80004004;
          EndDialog(param_1,2);
          return 1;
        }
        return 0;
      }
      nMaxCount = puVar1[3];
      puVar1[4] = 0;
      lpString = (LPSTR)puVar1[2];
      hWnd = GetDlgItem(param_1,0x434);
      GetWindowTextA(hWnd,lpString,nMaxCount);
      EndDialog(param_1,1);
      return 1;
    }
    _SfSetEditCtrlFont_8(param_1,0);
    FUN_00526690(param_1,param_4);
  }
  return 1;
}


