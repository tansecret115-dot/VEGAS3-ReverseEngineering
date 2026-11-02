/* Module: sfppack2.dll
   Function: FUN_5cd0a920
   Address: 5cd0a920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0a920(int param_1,LONG param_2,LONG param_3)

{
  int iVar1;
  POINT pt;
  RECT local_1c;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x90);
  local_1c.right = *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x94) != iVar1) {
    local_8 = (local_1c.right - *(int *)(param_1 + 0x78)) + -1;
    if (0 < local_8) {
      local_c = *(int *)(param_1 + 0x94) - iVar1;
      local_1c.right =
           (LONG)(((longlong)(*(int *)(param_1 + 0x20) - iVar1) * (longlong)local_8) /
                 (longlong)local_c);
    }
  }
  local_1c.top = *(LONG *)(param_1 + 0x7c);
  local_1c.left = local_1c.right + -2;
  local_1c.bottom = *(LONG *)(param_1 + 0x84);
  local_1c.right = local_1c.right + 2;
  pt.y = param_3;
  pt.x = param_2;
  PtInRect(&local_1c,pt);
  return;
}


