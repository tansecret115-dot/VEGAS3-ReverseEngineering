/* Module: vegas30.exe
   Function: FUN_004c50f0
   Address: 004c50f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c50f0(int param_1,int param_2)

{
  RECT *lpRect;
  uint *puVar1;
  int iVar2;
  tagPOINT local_8;
  
  puVar1 = *(uint **)(*(int *)(param_2 + 0x69c) + 0x54);
  if ((*puVar1 & 0x2000) == 0) {
    FUN_004592f0(param_1,0,0,0,0);
    lpRect = (RECT *)(puVar1 + 0x41);
    *puVar1 = *puVar1 | 0x2000;
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
    iVar2 = FUN_004c5020(param_1,param_2,*(undefined4 *)(param_2 + 0x13c),param_2 + 0x144);
    if (iVar2 != 0) {
      local_8.x = lpRect->left + 5;
      local_8.y = puVar1[0x44] + 1;
      ClientToScreen(*(HWND *)(param_1 + 4),&local_8);
      iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 4),iVar2,&local_8,0);
      if (iVar2 != 0) {
        FUN_004c87d0(param_1,param_1 + 0x364,iVar2,0,param_2);
      }
    }
    *puVar1 = *puVar1 & 0xffffdfff;
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
  }
  return;
}


