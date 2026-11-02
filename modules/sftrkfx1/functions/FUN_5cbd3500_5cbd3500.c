/* Module: sftrkfx1.dll
   Function: FUN_5cbd3500
   Address: 5cbd3500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbd3500(int param_1)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(*(HWND *)(param_1 + 0x30),&local_8);
  uVar1 = FUN_5cbd16f0(param_1,local_8.x,local_8.y,0,&local_10,&local_c);
  if (uVar1 != 5) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    SetCursor(DAT_5cc11800);
    return 1;
  }
  if (local_10 == 1) {
    SetCursor(DAT_5cc11804);
    return 1;
  }
  if (local_10 == 2) {
    SetCursor(DAT_5cc11808);
    return 1;
  }
  SetCursor(DAT_5cc11800);
  return 1;
}


