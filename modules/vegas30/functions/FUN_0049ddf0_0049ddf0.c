/* Module: vegas30.exe
   Function: FUN_0049ddf0
   Address: 0049ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049de66) */

void FUN_0049ddf0(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  tagPOINT local_8;
  
  local_8.x = *(int *)(param_1 + 0xb90);
  local_8.y = *(int *)(param_1 + 0xb94);
  if (local_8.x == 0 && local_8.y == 0) {
    local_8.x = 0xffffffff;
  }
  else {
    lVar3 = ftol();
    uVar2 = lVar3 + *(int *)(param_1 + 0xac0);
    local_8.x = (LONG)uVar2;
    if ((uVar2 < 0x8000000000000000) ||
       ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < (uint)local_8.x)))) {
      if (0x3fff < (longlong)uVar2) {
        local_8.x = 0x3fff;
      }
    }
    else {
      local_8.x = 0xffffc000;
    }
  }
  local_8.y = *(int *)(param_1 + 0x94);
  ClientToScreen(*(HWND *)(param_1 + 4),&local_8);
  SetCursorPos(local_8.x,local_8.y);
  puVar1 = (undefined4 *)(param_1 + 0xe8);
  *puVar1 = *(HWND *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xec) = DAT_006471fc;
  ScreenToClient(*(HWND *)(param_1 + 4),&local_8);
  *(undefined4 *)(param_1 + 0xf8) = 1;
  *(LONG *)(param_1 + 0xf0) = local_8.x;
  *(LONG *)(param_1 + 0xf4) = local_8.y;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x23e7;
  *(undefined4 *)(param_1 + 0x108) = 0x23e7;
  *(undefined4 *)(param_1 + 0x10c) = 0x23e7;
  *(undefined4 *)(param_1 + 0x110) = 0x23e7;
  *(undefined4 *)(param_1 + 0x114) = 1;
  *(undefined4 *)(param_1 + 0x118) = 0;
  _SfWheel_AutoScrollInit_4(puVar1);
  _SfWheel_AutoScrollOriginIcon_8(puVar1,1);
  _SfWheel_AutoScrollSetCursor_4(puVar1);
  FUN_0049db20(param_1);
  return;
}


