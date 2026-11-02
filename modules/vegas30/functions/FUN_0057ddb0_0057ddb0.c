/* Module: vegas30.exe
   Function: FUN_0057ddb0
   Address: 0057ddb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057ddb0(int param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x435);
  SendMessageA(hWnd,0x1003,1,0);
  if (*(HIMAGELIST *)(param_1 + 0x14) != (HIMAGELIST)0x0) {
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


