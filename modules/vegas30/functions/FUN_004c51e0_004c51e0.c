/* Module: vegas30.exe
   Function: FUN_004c51e0
   Address: 004c51e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c51e0(int param_1,int param_2)

{
  RECT *lpRect;
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  tagPOINT local_8;
  
  puVar1 = *(uint **)(*(int *)(param_2 + 0x69c) + 0x54);
  puVar2 = *(uint **)(param_1 + 0x5d0);
  if ((*puVar1 & 0x1000) == 0) {
    FUN_004592f0(param_1,0,0,0,0);
    *puVar1 = *puVar1 | 0x1000;
    lpRect = (RECT *)(puVar1 + 0x39);
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
    iVar3 = FUN_004c4e10(param_1,param_2,*puVar2 >> 6 & 1);
    if (iVar3 != 0) {
      local_8.x = lpRect->left + 5;
      local_8.y = puVar1[0x3c] + 1;
      ClientToScreen(*(HWND *)(param_1 + 4),&local_8);
      iVar3 = FUN_00404830(*(undefined4 *)(param_1 + 4),iVar3,&local_8,0);
      if (iVar3 != 0) {
        FUN_004c87d0(param_1,param_1 + 0x364,iVar3,0,param_2);
      }
    }
    *puVar1 = *puVar1 & 0xffffefff;
    InvalidateRect(*(HWND *)(param_1 + 4),lpRect,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
  }
  return;
}


