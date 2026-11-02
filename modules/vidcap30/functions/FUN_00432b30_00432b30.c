/* Module: vidcap30.exe
   Function: FUN_00432b30
   Address: 00432b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00432b30(int param_1)

{
  tagPAINTSTRUCT local_40;
  
  BeginPaint(*(HWND *)(param_1 + 8),&local_40);
  EndPaint(*(HWND *)(param_1 + 8),&local_40);
  return;
}


