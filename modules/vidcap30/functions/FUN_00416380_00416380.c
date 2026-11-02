/* Module: vidcap30.exe
   Function: FUN_00416380
   Address: 00416380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416380(HWND param_1,int param_2,LPARAM param_3)

{
  HWND hWnd;
  CHAR local_c [12];
  
  hWnd = GetDlgItem(param_1,param_2);
  SfPrintF(local_c,"%d %%",param_3);
  SendMessageA(hWnd,0x60c,1,param_3);
  SetWindowTextA(hWnd,local_c);
  return;
}


