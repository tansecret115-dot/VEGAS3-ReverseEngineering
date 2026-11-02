/* Module: vegas30.exe
   Function: FUN_004c52e0
   Address: 004c52e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c52e0(int param_1,int param_2)

{
  RECT *lpRect;
  uint *puVar1;
  int iVar2;
  tagPOINT local_8;
  
  puVar1 = *(uint **)(*(int *)(param_2 + 0x69c) + 0x54);
  if ((*puVar1 & 0x1000) == 0) {
    FUN_004592f0(param_1,0,0,0,0);
    lpRect = (RECT *)(puVar1 + 0x31);
    *puVar1 = *puVar1 | 0x10000;
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
    iVar2 = FUN_004c52d0(param_1,param_2);
    if (iVar2 != 0) {
      local_8.x = lpRect->left + 5;
      local_8.y = puVar1[0x34] + 1;
      ClientToScreen(*(HWND *)(param_1 + 4),&local_8);
      iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 4),iVar2,&local_8,0);
      if (iVar2 != 0) {
        FUN_004c87d0(param_1,param_1 + 0x364,iVar2,0,param_2);
      }
    }
    *puVar1 = *puVar1 & 0xfffeffff;
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
  }
  return;
}


