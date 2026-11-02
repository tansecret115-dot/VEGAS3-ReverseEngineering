/* Module: vidpcore.dll
   Function: FUN_5dead620
   Address: 5dead620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead620(int param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x38),&local_8);
    FUN_5deacf30(param_1,local_8.x,local_8.y,5);
  }
  return;
}


