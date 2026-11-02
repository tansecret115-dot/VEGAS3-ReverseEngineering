/* Module: sfpagepeel.dll
   Function: FUN_0041d640
   Address: 0041d640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d640(int param_1)

{
  HCURSOR hCursor;
  int iVar1;
  HCURSOR pHVar2;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(*(HWND *)(param_1 + 0x38),&local_8);
  iVar1 = FUN_0041cdc0(param_1,local_8.x,local_8.y);
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


