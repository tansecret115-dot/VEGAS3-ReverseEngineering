/* Module: vegas30.exe
   Function: FUN_004ccb80
   Address: 004ccb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ccb80(int param_1)

{
  tagPOINT local_8;
  
  if (-1 < *(int *)(param_1 + 0x350)) {
    FUN_004c4b90(*(undefined4 *)(param_1 + 0xce4),*(int *)(param_1 + 0x350),param_1 + 0x240);
    GetCursorPos(&local_8);
    ScreenToClient(*(HWND *)(param_1 + 4),&local_8);
    local_8.y = local_8.y + 0x12;
    FUN_00452ba0(param_1,local_8.x,local_8.y,param_1 + 0x240,0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000;
  }
  return;
}


