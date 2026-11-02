/* Module: vegas30k.dll
   Function: FUN_010ab9a0
   Address: 010ab9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ab9a0(int param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0xb0) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x30),&local_8);
    FUN_010aace0(param_1,local_8.x,local_8.y,5,0);
  }
  return;
}


