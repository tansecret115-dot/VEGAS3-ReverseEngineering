/* Module: vfplugs.dll
   Function: FUN_00473ba0
   Address: 00473ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00473ba0(HWND param_1)

{
  LONG LVar1;
  int iVar2;
  HCURSOR hCursor;
  uint uVar3;
  tagPOINT local_8;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetCursorPos(&local_8);
  ScreenToClient(param_1,&local_8);
  if (*(int *)(LVar1 + 0x2ec) != 0) {
    if (*(int *)(LVar1 + 0x2f8) == 1) {
      uVar3 = *(uint *)(LVar1 + 0x4a0);
    }
    else {
      iVar2 = FUN_00472ea0(LVar1,&local_8.x,0);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(LVar1 + 0x4a8);
      }
      else {
        uVar3 = *(uint *)(LVar1 + 0x4a4);
      }
    }
    hCursor = (HCURSOR)FUN_0044f330(uVar3);
    SetCursor(hCursor);
    return 1;
  }
  return 0;
}


