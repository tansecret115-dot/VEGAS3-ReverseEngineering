/* Module: vidcap30.exe
   Function: FUN_0041a6e0
   Address: 0041a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a6e0(HWND param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  UINT UVar8;
  RECT *pRVar9;
  WPARAM WVar10;
  HWND hWnd;
  undefined *puVar11;
  BOOL BVar12;
  LPARAM LVar13;
  char local_c [12];
  
  hWnd = param_1;
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  param_1 = (HWND)0x0;
  switch(param_2) {
  case 0x4e:
    if (param_3 != 0x4b1) {
      switch(param_4[2]) {
      case 0xffffff35:
        puVar6 = (undefined4 *)puVar1[1];
        puVar7 = (undefined4 *)*puVar1;
        for (iVar2 = 0x4b6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_00418370(hWnd,*puVar1);
        BVar12 = 1;
        pRVar9 = (RECT *)0x0;
        pHVar3 = GetDlgItem(hWnd,0x4b1);
        InvalidateRect(pHVar3,pRVar9,BVar12);
        FUN_0041aab0(puVar1,hWnd);
        puVar1[2] = 0;
        return 0;
      case 0xffffff36:
        goto switchD_0041a757_caseD_ffffff36;
      case 0xffffff37:
        LVar13 = 0;
        WVar10 = 0;
        UVar8 = 0x430;
        pHVar3 = GetDlgItem(hWnd,0x4b1);
        SendMessageA(pHVar3,UVar8,WVar10,LVar13);
        FUN_0041ade0(hWnd,puVar1);
        return 0;
      case 0xffffff38:
        BVar12 = 0;
        pRVar9 = (RECT *)0x0;
        pHVar3 = GetDlgItem(hWnd,0x4b1);
        InvalidateRect(pHVar3,pRVar9,BVar12);
        FUN_0041aab0(puVar1,hWnd);
        return 0;
      default:
        return 0;
      }
    }
    if (10 < (uint)param_4[3]) {
      return 0;
    }
    uVar5 = param_4[2];
    if (uVar5 != 4) {
      if (uVar5 < 0x14) {
        return 0;
      }
      if (0x15 < uVar5) {
        return 0;
      }
    }
    _SfViewGetFieldText_16
              (local_c,10,*puVar1,&PTR_s_Enable_DV_scene_detection_00588d88 + param_4[3] * 6);
    puVar11 = &DAT_00589f2c;
    if (local_c[0] != 'T') {
      puVar11 = &DAT_00589f28;
    }
    iVar2 = _SfViewSetFieldText_12
                      (*puVar1,&PTR_s_Enable_DV_scene_detection_00588d88 + param_4[3] * 6,puVar11);
    if (iVar2 == 0) {
      return 0;
    }
    SendMessageA((HWND)*param_4,0x422,param_4[3],(uint)*(ushort *)(param_4 + 4));
    LVar13 = 0;
    UVar8 = 0x468;
    pHVar3 = GetParent(hWnd);
    SendMessageA(pHVar3,UVar8,(WPARAM)hWnd,LVar13);
    puVar1[2] = 1;
    return 0;
  default:
    goto switchD_0041a716_caseD_4f;
  case 0x53:
    iVar2 = param_4[2];
    if (iVar2 == 0x4b1) {
      ScreenToClient((HWND)param_4[3],(LPPOINT)(param_4 + 5));
      uVar5 = SendMessageA((HWND)param_4[3],0x433,((LPPOINT)(param_4 + 5))->x,param_4[6]);
      if (0xb < uVar5) break;
      iVar2 = *(int *)(&DAT_005b29c0 + uVar5 * 8);
      puVar11 = &DAT_005b29c0;
    }
    else {
      puVar11 = &DAT_005b2950;
    }
    FUN_0041f690(0,hWnd,0,iVar2,puVar11,0);
    break;
  case 0x110:
    uVar4 = FUN_00419560(hWnd,param_4);
    FUN_0041aab0(uVar4,hWnd);
    break;
  case 0x111:
    uVar4 = FUN_0041b190(hWnd,param_4,param_3 & 0xffff,param_3 >> 0x10,puVar1);
    return uVar4;
  case 0x115:
    FUN_0041aff0(hWnd,param_3,param_4,puVar1);
    return 0;
  }
  param_1 = (HWND)0x1;
switchD_0041a716_caseD_4f:
  return param_1;
switchD_0041a757_caseD_ffffff36:
  LVar13 = 0;
  WVar10 = 0;
  UVar8 = 0x430;
  pHVar3 = GetDlgItem(hWnd,0x4b1);
  SendMessageA(pHVar3,UVar8,WVar10,LVar13);
  if (puVar1[2] == 0) {
    return 0;
  }
  FUN_0041ade0(hWnd,puVar1);
  FUN_00418bc0(hWnd,*puVar1,puVar1[1]);
  puVar1[2] = 0;
  puVar1[3] = 1;
  return 0;
}


