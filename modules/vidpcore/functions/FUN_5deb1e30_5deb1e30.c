/* Module: vidpcore.dll
   Function: FUN_5deb1e30
   Address: 5deb1e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb1e30(int param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x28),&local_8);
    FUN_5deb15a0(param_1,local_8.x,local_8.y,5);
  }
  return;
}


