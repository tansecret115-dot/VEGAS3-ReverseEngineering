/* Module: vidcap30.exe
   Function: FUN_004ad940
   Address: 004ad940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ad940(int param_1)

{
  HCURSOR hCursor;
  int iVar1;
  HCURSOR pHVar2;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(*(HWND *)(param_1 + 0x38),&local_8);
  iVar1 = FUN_004ad0c0(param_1,local_8.x,local_8.y);
  if (iVar1 != 5) {
    return 0;
  }
  hCursor = *(HCURSOR *)(param_1 + 0x34);
  pHVar2 = GetCursor();
  if (pHVar2 != hCursor) {
    SetCursor(hCursor);
  }
  return 1;
}


