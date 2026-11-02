/* Module: sftrans1.dll
   Function: FUN_0052bf70
   Address: 0052bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052bf70(HWND param_1)

{
  LONG LVar1;
  int iVar2;
  HCURSOR hCursor;
  undefined4 uVar3;
  tagPOINT local_8;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetCursorPos(&local_8);
  ScreenToClient(param_1,&local_8);
  if (*(int *)(LVar1 + 0x2ec) != 0) {
    if (*(int *)(LVar1 + 0x2f8) == 1) {
      uVar3 = *(undefined4 *)(LVar1 + 0x4a0);
    }
    else {
      iVar2 = FUN_0052b270(LVar1,&local_8,0);
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(LVar1 + 0x4a8);
      }
      else {
        uVar3 = *(undefined4 *)(LVar1 + 0x4a4);
      }
    }
    hCursor = (HCURSOR)FUN_00505b00(uVar3);
    SetCursor(hCursor);
    return 1;
  }
  return 0;
}


