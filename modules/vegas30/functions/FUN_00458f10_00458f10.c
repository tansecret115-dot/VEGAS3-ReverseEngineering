/* Module: vegas30.exe
   Function: FUN_00458f10
   Address: 00458f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00458f10(int param_1)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  HWND pHVar2;
  uint uVar3;
  BOOL BVar4;
  tagPOINT local_18;
  tagRECT local_10;
  
  FUN_00456c20(param_1);
  pHVar2 = GetCapture();
  if (pHVar2 != (HWND)0x0) {
    uVar3 = *(uint *)(param_1 + 0x174) >> 0x10 & 0xf;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
    if (uVar3 < 0x10) {
      piVar1 = *(int **)(param_1 + 0x50 + uVar3 * 4);
      local_18.x = *(uint *)(param_1 + 0x178);
      *(int *)(param_1 + 0x174) = piVar1[8];
      local_18.y = *(LONG *)(param_1 + 0x17c);
      if (*(code **)(*piVar1 + 8) != (code *)0x0) {
        uVar3 = (**(code **)(*piVar1 + 8))
                          (param_1,piVar1,*(undefined4 *)(param_1 + 0x178),
                           *(undefined4 *)(param_1 + 0x17c));
        *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | uVar3;
      }
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
    }
    FUN_00456a90(param_1);
    return *(undefined4 *)(param_1 + 0x174);
  }
  GetCursorPos(&local_18);
  GetWindowRect(*(HWND *)(param_1 + 4),&local_10);
  pt.y = local_18.y;
  pt.x = local_18.x;
  BVar4 = PtInRect(&local_10,pt);
  if (BVar4 == 0) {
    if (*(HWND *)(param_1 + 0x388) != (HWND)0x0) {
      GetWindowRect(*(HWND *)(param_1 + 0x388),&local_10);
      pt_00.y = local_18.y;
      pt_00.x = local_18.x;
      BVar4 = PtInRect(&local_10,pt_00);
      if (BVar4 != 0) {
        SendMessageA(*(HWND *)(param_1 + 0x388),0x84,0,local_18.y << 0x10 | local_18.x & 0xffffU);
      }
    }
  }
  else {
    ScreenToClient(*(HWND *)(param_1 + 4),&local_18);
    if ((-1 < local_18.x) && (-1 < local_18.y)) {
      FUN_004569d0(param_1,local_18.x,local_18.y);
      return *(undefined4 *)(param_1 + 0x174);
    }
  }
  return *(undefined4 *)(param_1 + 0x174);
}


