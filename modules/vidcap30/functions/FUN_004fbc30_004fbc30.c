/* Module: vidcap30.exe
   Function: FUN_004fbc30
   Address: 004fbc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_004fbc30(int param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  uint *puVar1;
  byte bVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  int iVar6;
  LRESULT *pLVar7;
  WPARAM wParam;
  bool bVar8;
  bool bVar9;
  int *local_38;
  HWND local_34;
  int local_30;
  int local_2c;
  LRESULT local_28;
  LRESULT local_24 [5];
  uint local_10;
  
  bVar8 = false;
  bVar9 = false;
  bVar2 = 0;
  pHVar3 = GetFocus();
  hWnd = *(HWND *)(param_1 + 0x18);
  hWnd_00 = *(HWND *)(param_1 + 0x1c);
  local_34 = *(HWND *)(param_1 + 0x10);
  if (local_34 != (HWND)0x0) {
    pLVar7 = local_24;
    for (iVar6 = 8; pLVar7 = (LRESULT *)((int)pLVar7 + 4), iVar6 != 0; iVar6 = iVar6 + -1) {
      *pLVar7 = 0;
    }
    local_24[2] = *(undefined4 *)(param_1 + 4);
    local_24[1] = 0x412;
    if (pHVar3 == hWnd_00) {
      local_24[0] = SendMessageA(hWnd,0x110a,9,0);
      if (local_24[0] != 0) {
        local_38 = (int *)FUN_004f6ec0(hWnd,local_24[0]);
        iVar6 = *local_38;
        local_2c = iVar6;
        local_28 = SendMessageA(hWnd_00,0x1032,0,0);
        if (local_28 != 0) {
          if (local_28 == 1) {
            LVar4 = SendMessageA(hWnd_00,0x100c,0xffffffff,2);
            iVar5 = FUN_004f3c20(hWnd_00,LVar4);
            if (iVar6 <= iVar5) {
              return;
            }
            puVar1 = *(uint **)(local_38[2] + iVar5 * 4);
            local_24[4] = *puVar1;
            bVar8 = (local_24[4] & 0x80000U) == 0;
            local_10 = puVar1[3];
            (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_24 + 1);
            if (local_10 != 0) {
              bVar2 = 1;
            }
          }
          else {
            wParam = 0xffffffff;
            local_30 = 0;
            if (0 < local_28) {
              do {
                wParam = SendMessageA(hWnd_00,0x100c,wParam,2);
                iVar6 = FUN_004f3c20(hWnd_00,wParam);
                if (local_2c <= iVar6) {
                  return;
                }
                puVar1 = *(uint **)(local_38[2] + iVar6 * 4);
                local_24[4] = *puVar1;
                if ((local_24[4] & 0x80000U) == 0) {
                  bVar8 = true;
                }
                local_10 = puVar1[3];
                (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                          (*(int **)(param_1 + 0x3c),local_24 + 1);
                if (local_10 != 0) {
                  bVar2 = 1;
                }
                local_30 = local_30 + 1;
              } while (local_30 < local_28);
            }
          }
        }
        iVar6 = FUN_004f79a0(hWnd,local_24[0],&local_38);
        if ((**(uint **)(local_38[2] + iVar6 * 4) & 0x40000) == 0) {
          bVar9 = true;
        }
      }
    }
    else if ((pHVar3 == hWnd) && (LVar4 = SendMessageA(hWnd,0x110a,9,0), LVar4 != 0)) {
      iVar6 = FUN_004f79a0(hWnd,LVar4,local_24);
      puVar1 = *(uint **)(*(int *)(local_24[0] + 8) + iVar6 * 4);
      local_24[4] = *puVar1;
      bVar8 = (local_24[4] & 0x80000U) == 0;
      bVar9 = (local_24[4] & 0x40000U) == 0;
      local_10 = puVar1[3];
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_24 + 1);
      if (local_10 != 0) {
        bVar2 = 1;
      }
    }
    if ((*(uint *)(param_1 + 0x4e0) & 0x80000) == 0) {
      SendMessageA(local_34,0x411,0x9c62,(-(uint)bVar8 & 0xfffffff4) + 0x10 & 0xffff);
      SendMessageA(local_34,0x411,0x9c61,(-(uint)bVar9 & 0xfffffff4) + 0x10 & 0xffff);
    }
    SendMessageA(local_34,0x411,0x9c63,(-(uint)bVar2 & 0xfffffff4) + 0x10 & 0xffff);
  }
  return;
}


