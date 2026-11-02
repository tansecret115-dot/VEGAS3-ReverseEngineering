/* Module: sfcdi.dll
   Function: FUN_5bf13200
   Address: 5bf13200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf13200(HWND param_1,uint *param_2)

{
  uint uVar1;
  HDC hdc;
  uint uVar2;
  int iVar3;
  WPARAM wParam;
  int *piVar4;
  int iVar5;
  int local_b0 [3];
  LPSTR local_a4;
  undefined4 local_90;
  WPARAM local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  WPARAM local_70;
  tagSIZE local_68;
  tagRECT local_60;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_3c;
  undefined1 local_28 [8];
  undefined4 local_20;
  int local_14;
  
  GetClientRect(param_1,&local_60);
  hdc = GetDC(param_1);
  GetTextExtentPointA(hdc,"XXXXXXXX",8,&local_68);
  iVar5 = local_68.cx + 8;
  ReleaseDC(param_1,hdc);
  SendMessageA(param_1,0x1009,0,0);
  piVar4 = local_b0;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_b0[0] = 0xf;
  local_b0[1] = 1;
  local_b0[2] = (local_60.right - iVar5) / 2;
  local_a4 = FUN_5bf283e0(DAT_5bf65fc4,0x4a2);
  SendMessageA(param_1,0x101b,0,(LPARAM)local_b0);
  local_b0[1] = 0;
  local_b0[2] = (local_60.right - iVar5) / 2;
  local_a4 = FUN_5bf283e0(DAT_5bf65fc4,0x4a4);
  SendMessageA(param_1,0x101b,1,(LPARAM)local_b0);
  local_b0[1] = 1;
  local_b0[2] = iVar5;
  local_a4 = FUN_5bf283e0(DAT_5bf65fc4,0x4a3);
  SendMessageA(param_1,0x101b,2,(LPARAM)local_b0);
  wParam = 0;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    do {
      if (param_2 == (uint *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *param_2;
      }
      if (((int)wParam < 0) || ((int)(uVar2 - 1) < (int)wParam)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_2[2] + wParam * 4);
      }
      local_7c = iVar5 + 0x104;
      local_90 = 0xd;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_78 = 0x104;
      local_74 = 0;
      local_8c = wParam;
      local_70 = wParam;
      SendMessageA(param_1,0x1007,0,(LPARAM)&local_90);
      local_3c = iVar5 + 0x208;
      local_48 = 1;
      SendMessageA(param_1,0x102e,wParam,(LPARAM)local_50);
      local_20 = 2;
      local_14 = iVar5;
      SendMessageA(param_1,0x102e,wParam,(LPARAM)local_28);
      wParam = wParam + 1;
    } while (wParam < uVar1);
  }
  return;
}


