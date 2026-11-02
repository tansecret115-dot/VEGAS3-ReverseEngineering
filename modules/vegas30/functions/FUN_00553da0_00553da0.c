/* Module: vegas30.exe
   Function: FUN_00553da0
   Address: 00553da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553da0(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  LPARAM lParam;
  LPARAM lParam_00;
  LPARAM lParam_01;
  
  hWnd = GetDlgItem(param_1,0x435);
  lParam = __alldiv(DAT_0063fa78,DAT_0063fa7c,10000,0);
  iVar1 = *param_2;
  lParam_00 = __alldiv(*(undefined4 *)(iVar1 + 0x7c8),*(undefined4 *)(iVar1 + 0x7cc),10000,0);
  if (*(int *)(iVar1 + 0x2eec) == 3) {
    lParam_01 = 1;
  }
  else {
    lParam_01 = (-(uint)(*(int *)(iVar1 + 0x2eec) != 2) & 9) + 1;
  }
  SendMessageA(hWnd,0x60e,0,lParam_01);
  SendMessageA(hWnd,0x60f,1,1000);
  SendMessageA(hWnd,0x611,0,lParam);
  SendMessageA(hWnd,0x610,1,lParam_00);
  SfSetDlgItemText(param_1,0x436,&DAT_0061ae90,lParam_00);
  return;
}


