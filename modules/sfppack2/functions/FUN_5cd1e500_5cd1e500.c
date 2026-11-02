/* Module: sfppack2.dll
   Function: FUN_5cd1e500
   Address: 5cd1e500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd1e500(int param_1)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(*(HWND *)(param_1 + 0x30),&local_8);
  uVar1 = FUN_5cd1c740(param_1,local_8.x,local_8.y,&local_10,&local_c);
  if (uVar1 != 5) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    SetCursor(DAT_5cd67d88);
    return 1;
  }
  if (local_10 == 1) {
    SetCursor(DAT_5cd67d8c);
    return 1;
  }
  if (local_10 == 2) {
    SetCursor(DAT_5cd67d90);
    return 1;
  }
  SetCursor(DAT_5cd67d88);
  return 1;
}


