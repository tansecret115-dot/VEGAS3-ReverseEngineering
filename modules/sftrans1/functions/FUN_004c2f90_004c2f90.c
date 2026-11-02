/* Module: sftrans1.dll
   Function: FUN_004c2f90
   Address: 004c2f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2f90(int param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x28),&local_8);
    FUN_004c2700(param_1,local_8.x,local_8.y,5);
  }
  return;
}


