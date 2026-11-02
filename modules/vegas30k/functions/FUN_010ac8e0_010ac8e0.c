/* Module: vegas30k.dll
   Function: FUN_010ac8e0
   Address: 010ac8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010ac8e0(int param_1)

{
  int iVar1;
  int local_10;
  undefined1 local_c [4];
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(*(HWND *)(param_1 + 0x30),&local_8);
  iVar1 = FUN_010aaad0(param_1,local_8.x,local_8.y,0,&local_10,local_c);
  if (iVar1 != 5) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    SetCursor(DAT_0128e930);
    return 1;
  }
  if (local_10 == 1) {
    SetCursor(DAT_0128e934);
    return 1;
  }
  if (local_10 == 2) {
    SetCursor(DAT_0128e938);
    return 1;
  }
  SetCursor(DAT_0128e930);
  return 1;
}


