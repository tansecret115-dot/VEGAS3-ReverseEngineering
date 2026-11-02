/* Module: vegas30.exe
   Function: FUN_005d4980
   Address: 005d4980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d4980(HWND param_1,int param_2)

{
  HWND pHVar1;
  HWND wParam;
  UINT Msg;
  WPARAM wParam_00;
  LPARAM LVar2;
  CHAR local_200 [512];
  
  FUN_005d48c0(param_2,local_200,1);
  SetDlgItemTextA(param_1,0x45f,local_200);
  LVar2 = 0;
  wParam_00 = 5;
  Msg = 0xc5;
  pHVar1 = GetDlgItem(param_1,0x5dc);
  SendMessageA(pHVar1,Msg,wParam_00,LVar2);
  pHVar1 = GetDlgItem(param_1,0x5dd);
  LVar2 = 0x10;
  wParam = GetDlgItem(param_1,0x5dc);
  SendMessageA(pHVar1,0x624,(WPARAM)wParam,LVar2);
  SendMessageA(pHVar1,0x60e,0,1);
  SendMessageA(pHVar1,0x60f,0,99);
  SfPrintF(local_200,&DAT_0061052c,*(undefined4 *)(param_2 + 0x104));
  SetDlgItemTextA(param_1,0x5dc,local_200);
  return;
}


