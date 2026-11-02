/* Module: vegas30k.dll
   Function: FUN_0112ec90
   Address: 0112ec90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0112ec90(WPARAM param_1,int param_2,int param_3)

{
  HWND hWnd;
  undefined4 uVar1;
  HWND hWnd_00;
  HCURSOR hCursor;
  uint *puVar2;
  uint uVar3;
  LRESULT LVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  LONG *pLVar8;
  uint *puVar9;
  WPARAM *pWVar10;
  uint local_59c;
  uint local_598;
  uint local_594;
  undefined4 uStack_590;
  HCURSOR local_58c;
  LONG local_588 [4];
  uint *local_578;
  undefined1 *local_574;
  undefined4 uStack_570;
  int aiStack_568 [6];
  undefined1 *puStack_550;
  uint uStack_548;
  uint uStack_544;
  undefined4 uStack_53c;
  WPARAM local_534 [5];
  undefined4 local_520;
  undefined1 local_514 [260];
  undefined1 local_410 [520];
  undefined1 local_208 [520];
  
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8a);
  local_58c = SetCursor(hCursor);
  hWnd = *(HWND *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  hWnd_00 = *(HWND *)(param_1 + 0x18);
  pLVar8 = local_588;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar8 = 0;
    pLVar8 = pLVar8 + 1;
  }
  if (param_2 == -0x10000) {
    puVar2 = (uint *)GetWindowLongA(hWnd_00,-0x15);
  }
  else {
    puVar2 = (uint *)FUN_0112eb70(hWnd_00,param_2);
  }
  uVar3 = 0;
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
  if ((int)(uVar3 - 1) < 0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = *(uint **)puVar2[2];
  }
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  if ((*puVar9 & 1) == 0) {
    if (param_3 != 0) {
      SendMessageA(hWnd,0xb,0,0);
      pWVar10 = local_534;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pWVar10 = 0;
        pWVar10 = pWVar10 + 1;
      }
      local_534[1] = *(WPARAM *)(param_1 + 0x2c);
      local_534[0] = *(WPARAM *)(param_1 + 4);
      local_534[2] = 0x1f;
      local_520 = 0;
      SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_534[1],(LPARAM)local_534);
      SendMessageA(hWnd,0x1009,0,0);
      if ((*(byte *)(param_1 + 0x4e0) & 8) != 0) {
        FUN_011422b0(uVar1);
        SetWindowTextA(*(HWND *)(param_1 + 0x20),(LPCSTR)0x0);
      }
    }
    if (param_2 == -0x10000) {
      local_588[2] = 0;
    }
    else {
      LVar4 = SendMessageA(hWnd_00,0x110a,4,param_2);
      if (LVar4 != 0) {
        SendMessageA(hWnd_00,0x1101,0,LVar4);
      }
      LVar4 = SendMessageA(hWnd_00,0x110a,3,param_2);
      if (LVar4 == 0) {
        local_588[2] = GetWindowLongA(hWnd_00,-0x15);
      }
      else {
        local_588[2] = FUN_0112eb70(hWnd_00,LVar4);
      }
    }
    FUN_0112fff0(hWnd_00,param_2,local_208);
    local_59c = *puVar9;
    local_598 = puVar9[1];
    local_594 = puVar9[2];
    _SfList_DeleteList_16(puVar2,0,1,0);
    local_574 = local_208;
    local_588[0] = 1;
    local_588[3] = local_598;
    local_578 = puVar2;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_588);
    if (iVar6 == 0) {
      local_59c = local_59c | 1;
      local_594 = local_588[3];
      _SfList_AllocAndInsertItem_20(puVar2,&local_59c,0xc,0,0);
      uVar3 = *puVar2;
      if (param_3 != 0) {
        SendMessageA(hWnd,0x102f,uVar3 - 1,0);
      }
      uVar7 = 1;
      local_59c = 0x10000000;
      aiStack_568[1] = 0xffff0002;
      if (1 < uVar3) {
        do {
          uVar5 = 0;
          if (puVar2 != (uint *)0x0) {
            uVar5 = *puVar2;
          }
          if (((int)uVar7 < 0) || ((int)(uVar5 - 1) < (int)uVar7)) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = *(uint **)(puVar2[2] + uVar7 * 4);
          }
          if (puVar9 == (uint *)0x0) break;
          FUN_01052770(puVar9,local_514);
          if ((*puVar9 & 0x10000) != 0) {
            aiStack_568[2] = 0x27;
            aiStack_568[0] = param_2;
            uStack_548 = puVar9[1];
            uStack_544 = puVar9[2];
            puStack_550 = local_514;
            _SfList_CreateExZ_32(&uStack_590,4,1,0x40,0x40000002,0,0,0);
            local_598 = uVar7;
            _SfList_AllocAndInsertItem_20(uStack_590,&local_59c,0xc,0,0);
            uStack_53c = uStack_590;
            aiStack_568[0] = SendMessageA(hWnd_00,0x1100,0,(LPARAM)aiStack_568);
            if ((*puVar9 & 0x20000) != 0) {
              aiStack_568[2] = 1;
              puStack_550 = &DAT_011db13c;
              SendMessageA(hWnd_00,0x1100,0,(LPARAM)aiStack_568);
            }
          }
          if (((param_3 != 0) && ((*(uint *)(param_1 + 0x4e0) & 0x40) == 0)) &&
             (((*puVar9 & 0x10000) != 0 ||
              ((*(code **)(param_1 + 0xbb4) == (code *)0x0 ||
               (iVar6 = (**(code **)(param_1 + 0xbb4))
                                  (*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0)
                                   ,*(uint *)(param_1 + 0x4e0) & 1,puVar9 + 5), iVar6 != 0)))))) {
            FUN_011317e0(hWnd,uVar7 - 1,uVar7,local_514,puVar9[1]);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      if (param_3 == 0) goto LAB_0112f42a;
      if ((*(byte *)(param_1 + 0x4e0) & 0x40) != 0) {
        if (puVar2 == (uint *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *puVar2;
        }
        if ((int)(uVar7 - 1) < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)puVar2[2];
        }
        if (iVar6 != 0) {
          LVar4 = SendMessageA(hWnd_00,0x110a,9,0);
          if (LVar4 != 0) {
            FUN_0112fff0(hWnd_00,LVar4,local_410);
          }
          local_588[0] = 0x10;
          local_588[3] = *(uint *)(iVar6 + 8);
          local_574 = local_410;
          (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_588);
          FUN_0112f450(param_1,*(undefined4 *)(param_1 + 0x704),*(undefined4 *)(iVar6 + 8),hWnd,
                       uStack_570);
          *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(iVar6 + 8);
        }
        uVar7 = 1;
        if (1 < uVar3) {
          do {
            if (puVar2 == (uint *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *puVar2;
            }
            if (((int)uVar7 < 0) || ((int)(uVar5 - 1) < (int)uVar7)) {
              puVar9 = (uint *)0x0;
            }
            else {
              puVar9 = *(uint **)(puVar2[2] + uVar7 * 4);
            }
            if (puVar9 == (uint *)0x0) break;
            if ((((*puVar9 & 0x10000) != 0) || (*(code **)(param_1 + 0xbb4) == (code *)0x0)) ||
               (iVar6 = (**(code **)(param_1 + 0xbb4))
                                  (*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0)
                                   ,*(uint *)(param_1 + 0x4e0) & 1,puVar9 + 5), iVar6 != 0)) {
              FUN_01131830(hWnd,uVar7 - 1,uVar7,puVar9);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
        }
        *(uint **)(param_1 + 0xba8) = puVar2;
        SendMessageA(hWnd,0x1030,param_1,0x1131940);
      }
    }
    else {
      _SfList_AllocAndInsertItem_20(puVar2,&local_59c,0xc,0,0);
      param_2 = 0;
    }
    if (param_3 == 0) goto LAB_0112f42a;
  }
  else {
    if (param_3 == 0) goto LAB_0112f42a;
    SendMessageA(hWnd,0xb,0,0);
    SendMessageA(hWnd,0x1009,0,0);
    if ((*(byte *)(param_1 + 0x4e0) & 8) != 0) {
      FUN_011422b0(uVar1);
      SetWindowTextA(*(HWND *)(param_1 + 0x20),(LPCSTR)0x0);
    }
    uVar3 = *puVar2;
    SendMessageA(hWnd,0x102f,uVar3,0);
    if ((*(byte *)(param_1 + 0x4e0) & 0x40) == 0) {
      uVar7 = 1;
      if (1 < uVar3) {
        do {
          uVar5 = 0;
          if (puVar2 != (uint *)0x0) {
            uVar5 = *puVar2;
          }
          if (((int)uVar7 < 0) || ((int)(uVar5 - 1) < (int)uVar7)) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = *(uint **)(puVar2[2] + uVar7 * 4);
          }
          if ((puVar9 != (uint *)0x0) &&
             (((FUN_01052770(puVar9,local_514), (*puVar9 & 0x10000) != 0 ||
               (*(code **)(param_1 + 0xbb4) == (code *)0x0)) ||
              (iVar6 = (**(code **)(param_1 + 0xbb4))
                                 (*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                                  *(uint *)(param_1 + 0x4e0) & 1,puVar9 + 5), iVar6 != 0)))) {
            FUN_011317e0(hWnd,uVar7 - 1,uVar7,local_514,puVar9[1]);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
    }
    else {
      LVar4 = SendMessageA(hWnd_00,0x110a,9,0);
      if (LVar4 != 0) {
        FUN_0112fff0(hWnd_00,LVar4,local_410);
      }
      local_588[0] = 0x10;
      local_588[3] = puVar9[2];
      local_574 = local_410;
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_588);
      FUN_0112f450(param_1,*(undefined4 *)(param_1 + 0x704),puVar9[2],hWnd,uStack_570);
      uVar7 = 1;
      *(uint *)(param_1 + 0x704) = puVar9[2];
      if (1 < uVar3) {
        do {
          uVar5 = 0;
          if (puVar2 != (uint *)0x0) {
            uVar5 = *puVar2;
          }
          if (((int)uVar7 < 0) || ((int)(uVar5 - 1) < (int)uVar7)) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = *(uint **)(puVar2[2] + uVar7 * 4);
          }
          if ((puVar9 != (uint *)0x0) &&
             ((((*puVar9 & 0x10000) != 0 || (*(code **)(param_1 + 0xbb4) == (code *)0x0)) ||
              (iVar6 = (**(code **)(param_1 + 0xbb4))
                                 (*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                                  *(uint *)(param_1 + 0x4e0) & 1,puVar9 + 5), iVar6 != 0)))) {
            FUN_01131830(hWnd,uVar7 - 1,uVar7,puVar9);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      *(uint **)(param_1 + 0xba8) = puVar2;
      SendMessageA(hWnd,0x1030,param_1,0x1131940);
    }
  }
  SendMessageA(hWnd,0xb,1,0);
LAB_0112f42a:
  SetCursor(local_58c);
  return param_2;
}


