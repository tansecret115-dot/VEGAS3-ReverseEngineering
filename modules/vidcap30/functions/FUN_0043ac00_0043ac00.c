/* Module: vidcap30.exe
   Function: FUN_0043ac00
   Address: 0043ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043ac00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  tagRECT local_10;
  
  iVar5 = GetSystemMetrics(0x2d);
  iVar6 = GetSystemMetrics(0x2e);
  GetClientRect(*(HWND *)(param_1 + 8),&local_10);
  piVar1 = (int *)(param_1 + 0x80);
  local_10.left = local_10.left + iVar5 / 2;
  local_10.right = local_10.right - iVar5 / 2;
  local_10.top = local_10.top + iVar6 / 2;
  local_10.bottom = local_10.bottom - iVar6 / 2;
  piVar2 = (int *)(param_1 + 0xb0);
  piVar3 = (int *)(param_1 + 0xa0);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  piVar4 = (int *)(param_1 + 0x90);
  *piVar3 = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *piVar4 = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *piVar3 = local_10.left;
  *(LONG *)(param_1 + 0xa4) = local_10.top;
  *(LONG *)(param_1 + 0xa8) = local_10.right;
  *(LONG *)(param_1 + 0xac) = local_10.bottom;
  local_10.top = *(int *)(param_1 + 0x1428) + 4 + local_10.top;
  if (local_10.bottom + 1 <= local_10.top) {
    local_10.top = local_10.bottom + 1;
  }
  *(LONG *)(param_1 + 0xac) = local_10.top;
  FUN_0043dc50(param_1,piVar3);
  *piVar2 = local_10.left;
  *(LONG *)(param_1 + 0xb4) = local_10.top;
  *(LONG *)(param_1 + 0xb8) = local_10.right;
  *(LONG *)(param_1 + 0xbc) = local_10.bottom;
  *piVar2 = local_10.right - *(int *)(param_1 + 0x1c28);
  FUN_0043d660(param_1,piVar2);
  if ((*(byte *)(param_1 + 0x1ae8) & 2) == 0) {
    local_10.right = *piVar2;
  }
  *piVar4 = local_10.left;
  *(LONG *)(param_1 + 0x94) = local_10.top;
  *(LONG *)(param_1 + 0x98) = local_10.right;
  *(LONG *)(param_1 + 0x9c) = local_10.bottom;
  local_10.bottom = (*(int *)(param_1 + 0x9c) - (*(int *)(param_1 + 0x140c) * 2 + 0xc)) - iVar6;
  if (local_10.bottom <= *(int *)(param_1 + 0xac)) {
    local_10.bottom = *(int *)(param_1 + 0xac);
  }
  *(LONG *)(param_1 + 0x94) = local_10.bottom;
  FUN_0043df70(param_1,piVar4);
  *piVar1 = local_10.left;
  *(LONG *)(param_1 + 0x84) = local_10.top;
  *(LONG *)(param_1 + 0x88) = local_10.right;
  *(LONG *)(param_1 + 0x8c) = local_10.bottom;
  FUN_0043dcb0(param_1,piVar1);
  return;
}


