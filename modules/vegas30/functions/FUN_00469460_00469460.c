/* Module: vegas30.exe
   Function: FUN_00469460
   Address: 00469460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00469460(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0xcd4) != 0) {
    FUN_004693b0(*(int *)(param_1 + 0xcd4));
    pHVar1 = GetClipboardOwner();
    if (pHVar1 == *(HWND *)(param_1 + 4)) {
      OpenClipboard((HWND)0x0);
      EmptyClipboard();
      CloseClipboard();
    }
  }
  return;
}


