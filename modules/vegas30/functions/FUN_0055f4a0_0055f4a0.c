/* Module: vegas30.exe
   Function: FUN_0055f4a0
   Address: 0055f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f4a0(HWND param_1,undefined4 param_2)

{
  HWND hWnd;
  undefined1 local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x551);
  SfPrintF(local_104,"Searching %s",param_2);
  SendMessageA(hWnd,0xc,0,(LPARAM)local_104);
  return;
}


