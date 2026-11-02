/* Module: vegas30k.dll
   Function: _SfWheel_AutoScrollSetCursor@4
   Address: 010989e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_AutoScrollSetCursor_4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  HCURSOR hCursor;
  int iVar3;
  tagPOINT local_74;
  uint local_6c [27];
  
                    /* 0x989e0  1293  _SfWheel_AutoScrollSetCursor@4 */
  GetCursorPos(&local_74);
  ScreenToClient((HWND)*param_1,&local_74);
  if (local_74.x < (int)param_1[0xd]) {
    iVar3 = 0;
  }
  else {
    iVar3 = ((int)param_1[0xf] < local_74.x) + 1;
  }
  if (local_74.y < (int)param_1[0xe]) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((int)param_1[0x10] < local_74.y) + 1;
  }
  local_6c[7] = 0x29;
  local_6c[0x18] = 0x29;
  local_6c[0x19] = 0x29;
  local_6c[0x1a] = 0x29;
  local_6c[1] = 0x27;
  local_6c[0x12] = 0x27;
  local_6c[0x13] = 0x27;
  local_6c[0x14] = 0x27;
  local_6c[10] = 0x30;
  local_6c[0xd] = 0x30;
  local_6c[0x10] = 0x30;
  local_6c[3] = 0x2a;
  local_6c[9] = 0x2a;
  local_6c[0xc] = 0x2a;
  local_6c[0xf] = 0x2a;
  local_6c[0x15] = 0x2f;
  local_6c[0x16] = 0x2f;
  local_6c[0x17] = 0x2f;
  local_6c[0] = 0x2d;
  local_6c[2] = 0x2b;
  local_6c[4] = 0x31;
  local_6c[5] = 0x28;
  local_6c[6] = 0x2e;
  local_6c[8] = 0x2c;
  local_6c[0xb] = 0x28;
  local_6c[0xe] = 0x28;
  local_6c[0x11] = 0x28;
  if (param_1[4] == 0) {
LAB_01098b05:
    if (param_1[5] != 0) {
      uVar2 = local_6c[iVar3 + iVar1 * 3 + 0x12];
      goto LAB_01098b22;
    }
  }
  else if (param_1[5] == 0) {
    if (param_1[4] != 0) {
      uVar2 = local_6c[iVar3 + iVar1 * 3 + 9];
      goto LAB_01098b22;
    }
    goto LAB_01098b05;
  }
  uVar2 = local_6c[iVar3 + iVar1 * 3];
LAB_01098b22:
  hCursor = (HCURSOR)_SfLoadCursor_8(0,uVar2 & 0xffff);
  SetCursor(hCursor);
  return;
}


