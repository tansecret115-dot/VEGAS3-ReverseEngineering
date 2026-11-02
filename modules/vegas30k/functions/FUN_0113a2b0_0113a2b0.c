/* Module: vegas30k.dll
   Function: FUN_0113a2b0
   Address: 0113a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a2b0(HWND param_1)

{
  int *piVar1;
  HWND hDlg;
  LONG LVar2;
  uint wParam;
  HWND hWnd;
  int unaff_EDI;
  UINT Msg;
  LPARAM lParam;
  int iVar3;
  
  hDlg = param_1;
  LVar2 = GetWindowLongA(param_1,8);
  piVar1 = *(int **)(LVar2 + 4);
  iVar3 = 4;
  (**(code **)(*piVar1 + 0x70))(piVar1,4,&param_1);
  (**(code **)(*piVar1 + 0x9c))(piVar1,unaff_EDI == 0);
  lParam = 0;
  wParam = (uint)(iVar3 != 0);
  Msg = 0xf1;
  hWnd = GetDlgItem(hDlg,0x47);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_01139e10(hDlg);
  return;
}


