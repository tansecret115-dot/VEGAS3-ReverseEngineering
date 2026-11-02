/* Module: vidcap30.exe
   Function: FUN_00442ad0
   Address: 00442ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00442ad0(int param_1,int param_2)

{
  WPARAM WVar1;
  LRESULT LVar2;
  WPARAM wParam;
  WPARAM wParam_00;
  WPARAM WVar3;
  int iVar4;
  WPARAM *pWVar5;
  undefined4 local_2c;
  undefined4 local_28;
  WPARAM local_24 [2];
  uint local_1c;
  undefined4 local_18;
  int local_8;
  
  local_28 = 0xc;
  pWVar5 = local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pWVar5 = 0;
    pWVar5 = pWVar5 + 1;
  }
  local_2c = 1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1004,0,0);
  wParam = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,0xffffffff,2);
  local_18 = 3;
  if (wParam != 0xffffffff) {
    wParam_00 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,wParam,2);
    WVar1 = wParam;
    while (wParam_00 != 0xffffffff) {
      local_24[0] = wParam_00;
      WVar3 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,wParam_00,2);
      WVar1 = wParam_00;
      wParam_00 = WVar3;
    }
    iVar4 = -wParam;
    if ((param_2 < iVar4) || (iVar4 = (LVar2 - WVar1) + -1, iVar4 < param_2)) {
      param_2 = iVar4;
    }
    local_24[0] = WVar1;
    if (param_2 < 1) {
      local_24[0] = wParam;
      if (param_2 < 0) {
        for (; (int)local_24[0] <= (int)WVar1; local_24[0] = local_24[0] + 1) {
          SendMessageA(*(HWND *)(param_1 + 0x1668),0x1005,0,(LPARAM)&local_28);
          if ((local_1c & 2) != 0) {
            *(uint *)(local_8 + 0x11c) = local_1c;
            iVar4 = FUN_00441a80(local_8);
            local_2c = FUN_00441920(iVar4,iVar4 + param_2);
          }
        }
      }
    }
    else {
      for (; (int)wParam <= (int)local_24[0]; local_24[0] = local_24[0] - 1) {
        SendMessageA(*(HWND *)(param_1 + 0x1668),0x1005,0,(LPARAM)&local_28);
        if ((local_1c & 2) != 0) {
          *(uint *)(local_8 + 0x11c) = local_1c;
          iVar4 = FUN_00441a80(local_8);
          local_2c = FUN_00441920(iVar4,iVar4 + param_2);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1c08) = *(undefined4 *)(param_1 + 0x1668);
  return local_2c;
}


