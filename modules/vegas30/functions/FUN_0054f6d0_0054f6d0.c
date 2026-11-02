/* Module: vegas30.exe
   Function: FUN_0054f6d0
   Address: 0054f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054f6d0(uint param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uint *pMem;
  LRESULT LVar4;
  WPARAM wParam;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  WPARAM WVar9;
  WPARAM *pWVar10;
  undefined4 local_60;
  uint *local_5c;
  uint local_58;
  WPARAM local_50 [8];
  undefined4 local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = param_1;
  puVar7 = (uint *)0x0;
  local_60 = 0;
  if (*(int *)(param_1 + 0x84) == 2) {
    iVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1032,0,0);
    WVar9 = 0xffffffff;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      WVar9 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100c,WVar9,2);
      if (WVar9 != 0xffffffff) {
        local_50[4] = 2;
        local_50[3] = 0;
        SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,WVar9,(LPARAM)local_50);
      }
    }
    iVar2 = FUN_0054a530(param_1);
    if (iVar2 != 0) {
      pWVar10 = local_50;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pWVar10 = 0;
        pWVar10 = pWVar10 + 1;
      }
      local_50[0] = 1;
      local_50[2] = iVar2;
      WVar9 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100d,0xffffffff,(LPARAM)local_50);
      if (WVar9 != 0xffffffff) {
        local_18 = 1;
        local_1c = 1;
        SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,WVar9,(LPARAM)local_28);
      }
    }
    WVar9 = SendMessageA(*(HWND *)(param_1 + 0x98),0x43e,0,0);
    if (WVar9 == 0) {
      return 0;
    }
    pvVar3 = GlobalAlloc(0x42,WVar9 << 4);
    pMem = GlobalLock(pvVar3);
    if (pMem == (uint *)0x0) {
      return 0x8007000e;
    }
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0x98),0x43d,WVar9,(LPARAM)pMem);
    puVar7 = pMem;
    local_5c = pMem;
    if (LVar4 == 0) {
      local_60 = 0x80004005;
    }
    else {
      for (; WVar9 != 0; WVar9 = WVar9 - 1) {
        uVar5 = *puVar7;
        param_1 = puVar7[2];
        uVar8 = uVar5;
        if (param_1 <= uVar5) {
          uVar8 = param_1;
        }
        if (param_1 < uVar5) {
          param_1 = uVar5;
        }
        if ((uVar8 == 0xffff) || (param_1 == 0xffff)) {
          uVar8 = 0;
          param_1 = *(int *)(iVar1 + 0x554) - 1;
        }
        if (param_1 < **(uint **)(iVar1 + 0xb4)) {
          for (; uVar8 <= param_1; uVar8 = uVar8 + 1) {
            iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xb4) + 8) + uVar8 * 4);
            pWVar10 = local_50;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pWVar10 = 0;
              pWVar10 = pWVar10 + 1;
            }
            local_50[0] = 1;
            local_50[2] = iVar2;
            wParam = SendMessageA(*(HWND *)(iVar1 + 0x9c),0x100d,0xffffffff,(LPARAM)local_50);
            if (wParam != 0xffffffff) {
              local_18 = 2;
              local_1c = 2;
              SendMessageA(*(HWND *)(iVar1 + 0x9c),0x102b,wParam,(LPARAM)local_28);
            }
            puVar7 = local_5c;
          }
          puVar7 = puVar7 + 4;
          local_5c = puVar7;
        }
      }
    }
  }
  else {
    iVar2 = FUN_0054a530(param_1);
    if ((iVar2 != 0) &&
       (WVar9 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(param_1 + 0xb4),0,0xffffffff,iVar2)
       , WVar9 != 0xffffffff)) {
      SendMessageA(*(HWND *)(param_1 + 0x98),0x40f,WVar9,-1);
    }
    uVar5 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1032,0,0);
    if (uVar5 == 0) {
      SendMessageA(*(HWND *)(param_1 + 0x98),0x43f,0,0);
      return 0;
    }
    param_1 = 0;
    pvVar3 = GlobalAlloc(0x42,uVar5 << 4);
    pMem = GlobalLock(pvVar3);
    if (pMem == (uint *)0x0) {
      return 0x8007000e;
    }
    WVar9 = 0xffffffff;
    local_58 = 0;
    if (uVar5 != 0) {
      do {
        WVar9 = SendMessageA(*(HWND *)(iVar1 + 0x9c),0x100c,WVar9,2);
        if (WVar9 == 0xffffffff) break;
        pWVar10 = local_50;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pWVar10 = 0;
          pWVar10 = pWVar10 + 1;
        }
        local_50[0] = 4;
        local_50[1] = WVar9;
        LVar4 = SendMessageA(*(HWND *)(iVar1 + 0x9c),0x1005,0,(LPARAM)local_50);
        if (LVar4 == 1) {
          uVar8 = _SfList_FindSpecificItemRange_16
                            (*(undefined4 *)(iVar1 + 0xb4),0,0xffffffff,local_30);
          if (uVar8 == 0xffffffff) break;
          if (puVar7 == (uint *)0x0) {
            param_1 = 1;
            puVar7 = pMem;
LAB_0054fa54:
            *puVar7 = uVar8;
            puVar7[2] = uVar8;
          }
          else {
            if (puVar7[2] + 1 != uVar8) {
              param_1 = param_1 + 1;
              puVar7 = puVar7 + 4;
              goto LAB_0054fa54;
            }
            puVar7[2] = puVar7[2] + 1;
          }
          puVar7[1] = 0xffff;
          puVar7[3] = 0xffff;
        }
        local_58 = local_58 + 1;
      } while (local_58 < uVar5);
    }
    SendMessageA(*(HWND *)(iVar1 + 0x98),0x43f,param_1,(LPARAM)pMem);
  }
  pvVar3 = GlobalHandle(pMem);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem);
  GlobalFree(pvVar3);
  return local_60;
}


