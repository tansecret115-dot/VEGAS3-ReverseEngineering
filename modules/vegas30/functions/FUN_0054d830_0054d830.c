/* Module: vegas30.exe
   Function: FUN_0054d830
   Address: 0054d830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054d830(uint param_1)

{
  int iVar1;
  uint uVar2;
  LRESULT LVar3;
  int iVar4;
  WPARAM wParam;
  WPARAM *pWVar5;
  int local_30;
  WPARAM local_28 [8];
  int *local_8;
  
  iVar1 = param_1;
  local_30 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_30 = FUN_004ec820(*(int *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (local_30 < 0) {
      return local_30;
    }
  }
  uVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1032,0,0);
  wParam = 0xffffffff;
  param_1 = 0;
  if (uVar2 != 0) {
    while (wParam = SendMessageA(*(HWND *)(iVar1 + 0x9c),0x100c,wParam,2), wParam != 0xffffffff) {
      pWVar5 = local_28;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pWVar5 = 0;
        pWVar5 = pWVar5 + 1;
      }
      local_28[0] = 4;
      local_28[1] = wParam;
      LVar3 = SendMessageA(*(HWND *)(iVar1 + 0x9c),0x1005,0,(LPARAM)local_28);
      if (((LVar3 == 1) && ((*(byte *)(*local_8 + 0x134) & 0x20) == 0)) &&
         (local_30 = FUN_004ec280(iVar1 + 0xb8,*local_8 + 0x170,0,0,0,0xffffffff,0xffffffff,0,
                                  0xffffffff,0,0,0), local_30 < 0)) {
        return local_30;
      }
      param_1 = param_1 + 1;
      if (uVar2 <= param_1) {
        return local_30;
      }
    }
  }
  return local_30;
}


