/* Module: vegas30.exe
   Function: FUN_0057d890
   Address: 0057d890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057d890(int param_1)

{
  UINT UVar1;
  HWND hWnd;
  LPSTR lpString;
  int nMaxCount;
  
  UVar1 = IsDlgButtonChecked(*(HWND *)(param_1 + 4),0x46f);
  if (UVar1 == 0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = 1;
  }
  lpString = (LPSTR)(param_1 + 0x10);
  nMaxCount = 0x104;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x629);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  FUN_00582770(*(undefined4 *)(param_1 + 4),1);
  return;
}


