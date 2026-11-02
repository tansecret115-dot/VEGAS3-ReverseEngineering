/* Module: vegas30.exe
   Function: FUN_0044a160
   Address: 0044a160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a160(LPCSTR param_1)

{
  HWND hWnd;
  int iVar1;
  WPARAM wParam;
  LPCSTR lpString;
  WPARAM wParam_00;
  int *piStack_120;
  int *local_11c;
  undefined **local_118;
  int *local_114;
  undefined4 uStack_110;
  int iStack_10c;
  CHAR aCStack_108 [264];
  
  if ((*(uint *)(param_1 + 0x9c) & 0x800) != 0) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffff7ff;
    return;
  }
  if ((*(int *)(param_1 + 0xb4) == 0) || (*(int *)(*(int *)(param_1 + 0xb4) + 0x14) == 0)) {
    ShowWindow(*(HWND *)(param_1 + 0x1a4),0);
    ShowWindow(*(HWND *)(param_1 + 0x1bc),0);
    return;
  }
  hWnd = *(HWND *)(param_1 + 0x1a4);
  SendMessageA(hWnd,0x14b,0,0);
  _SfVideoPlugin_GetInterface_12
            (&DAT_006335c8,&local_11c,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10));
  if (local_11c == (int *)0x0) {
    return;
  }
  local_118 = &PTR_LAB_006121a8;
  local_114 = local_11c;
  (**(code **)(*local_11c + 4))(local_11c);
  iStack_10c = FUN_00449ac0(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10),&local_11c);
  wParam_00 = 0xffffffff;
  local_114 = (int *)0x0;
  if (0 < iStack_10c) {
    do {
      uStack_110 = 0x103;
      iVar1 = FUN_00449b50(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10),&local_11c,local_114,
                           aCStack_108,&uStack_110);
      if (-1 < iVar1) {
        wParam = SendMessageA(hWnd,0x143,0,(LPARAM)aCStack_108);
        SendMessageA(hWnd,0x151,wParam,0);
        iVar1 = lstrcmpA(aCStack_108,param_1);
        if (iVar1 == 0) {
          wParam_00 = wParam;
        }
      }
      local_114 = (int *)((int)local_114 + 1);
    } while ((int)local_114 < iStack_10c);
    if (wParam_00 != 0xffffffff) {
      SendMessageA(hWnd,0x14e,wParam_00,0);
      goto LAB_0044a2d6;
    }
  }
  SendMessageA(hWnd,0x14e,0xffffffff,0);
  lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e29);
  SetWindowTextA(hWnd,lpString);
LAB_0044a2d6:
  ShowWindow(*(HWND *)(param_1 + 0x1a4),5);
  ShowWindow(*(HWND *)(param_1 + 0x1bc),5);
  (**(code **)(*piStack_120 + 8))(piStack_120);
  (**(code **)(*local_11c + 8))(local_11c);
  return;
}


