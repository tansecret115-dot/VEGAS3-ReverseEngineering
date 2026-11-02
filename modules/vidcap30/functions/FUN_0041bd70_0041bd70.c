/* Module: vidcap30.exe
   Function: FUN_0041bd70
   Address: 0041bd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bd70(int *param_1,HWND param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  CHAR local_c [12];
  
  SfPrintF(local_c,&DAT_00589f30,*(int *)(*param_1 + 0x12bc) / 1000);
  CheckDlgButton(param_2,0x519,*(UINT *)(*param_1 + 0x12b8));
  hWnd = GetDlgItem(param_2,0x518);
  EnableWindow(hWnd,*(BOOL *)(*param_1 + 0x12b8));
  SetWindowTextA(hWnd,local_c);
  hWnd_00 = GetDlgItem(param_2,0x517);
  EnableWindow(hWnd_00,*(BOOL *)(*param_1 + 0x12b8));
  SendMessageA(hWnd_00,0x624,(WPARAM)hWnd,9);
  SendMessageA(hWnd_00,0x60e,0,1000);
  SendMessageA(hWnd_00,0x60f,0,600000);
  return;
}


