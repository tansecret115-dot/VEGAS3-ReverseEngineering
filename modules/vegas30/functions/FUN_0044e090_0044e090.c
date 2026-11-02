/* Module: vegas30.exe
   Function: FUN_0044e090
   Address: 0044e090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044e090(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  byte *pbVar2;
  SHORT SVar3;
  WPARAM wParam;
  WPARAM *pWVar4;
  WPARAM WVar5;
  int iVar6;
  LRESULT LVar7;
  LRESULT *pLVar8;
  LRESULT LVar9;
  undefined4 uVar10;
  bool bVar11;
  HWND hWnd;
  UINT Msg;
  uint wParam_00;
  LPARAM lParam;
  
  uVar10 = 0;
  SVar3 = GetKeyState(0x11);
  bVar11 = SVar3 < 0;
  switch(param_5) {
  case 0:
    iVar6 = FUN_0044de80(param_1,param_2);
    if (iVar6 == 1) {
      wParam = SendMessageA(*(HWND *)(param_1 + 0x144),0x60c,0,param_4 << 0x10 | param_3 & 0xffff);
      pWVar4 = (WPARAM *)FUN_004452b0(param_1);
      WVar5 = 0;
      if (pWVar4 != (WPARAM *)0x0) {
        WVar5 = *pWVar4;
      }
      if ((int)wParam < 0) {
        wParam = WVar5;
      }
      switch(*(undefined4 *)(param_1 + 0xa8)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
        SendMessageA(*(HWND *)(param_1 + 0x144),0x60d,wParam,0);
        return 0x10;
      case 5:
      case 7:
      case 8:
        FUN_0044ddd0(param_1,1);
      }
      return 0x10;
    }
    if (iVar6 == 2) {
      FUN_0044ddd0(param_1,1);
      return 0;
    }
    FUN_0044ddd0(param_1,0);
    SendMessageA(*(HWND *)(param_1 + 0x144),0x60e,0,0);
    return 0x7f88;
  case 1:
    FUN_0044ddd0(param_1,0);
    SendMessageA(*(HWND *)(param_1 + 0x144),0x60e,0,0);
    return 0;
  case 2:
    goto switchD_0044e0b5_caseD_2;
  case 3:
    iVar6 = FUN_0044de80(param_1,param_2);
    if (iVar6 == 1) {
      LVar7 = SendMessageA(*(HWND *)(param_1 + 0x144),0x60c,0,param_4 << 0x10 | param_3 & 0xffff);
      pLVar8 = (LRESULT *)FUN_004452b0(param_1);
      LVar9 = 0;
      if (pLVar8 != (LRESULT *)0x0) {
        LVar9 = *pLVar8;
      }
      if (LVar7 < 0) {
        LVar7 = LVar9;
      }
      switch(*(int *)(param_1 + 0xa8)) {
      case 1:
        FUN_005a3ec0(DAT_00647630,*(undefined4 *)(param_1 + 0xac),param_2,0xffffffff,0xffffffff,
                     bVar11,1,LVar7);
        break;
      case 2:
      case 3:
        FUN_005a4080(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xac),param_2,
                     0xffffffff,0xffffffff,bVar11,1,*(int *)(param_1 + 0xa8) == 2,LVar7);
        break;
      case 4:
        FUN_005a3bd0(param_2,LVar7,0);
        break;
      case 5:
        FUN_005a3eb0(*(undefined4 *)(param_1 + 0xb0),param_2,1);
        break;
      case 6:
        FUN_005a3d30(*(undefined4 *)(param_1 + 0xac),param_2,1,LVar7);
        break;
      case 7:
        puVar1 = *(uint **)(**(int **)(param_2 + 8) + 0x20c);
        if (((puVar1 != (uint *)0x0) && ((*puVar1 & 4) == 0)) && ((*puVar1 & 1) != 0)) {
          FUN_005a3780(DAT_00647630,*(undefined4 *)(param_1 + 0xac),1,puVar1,1,0);
        }
        break;
      case 8:
        puVar1 = *(uint **)(**(int **)(param_2 + 8) + 0x20c);
        if (((puVar1 != (uint *)0x0) && ((*puVar1 & 4) == 0)) && ((*puVar1 & 1) != 0)) {
          FUN_005a3780(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xac),2,puVar1,1,0)
          ;
        }
      }
      goto switchD_0044e237_default;
    }
    if (iVar6 != 2) goto switchD_0044e0b5_caseD_2;
    break;
  default:
    goto switchD_0044e0b5_default;
  }
  FUN_0044ddd0(param_1,1);
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 1:
    FUN_005a4990(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xac),param_2,0xffffffff,
                 0xffffffff,bVar11,1);
    lParam = *(LPARAM *)(param_1 + 0xac);
    Msg = 0x669;
    goto LAB_0044e4a3;
  case 2:
  case 3:
    FUN_005a4b60(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xac),param_2,0xffffffff,
                 0xffffffff,bVar11,1,*(uint *)(param_1 + 0x9c) >> 9 & 1);
    lParam = *(LPARAM *)(param_1 + 0xac);
    hWnd = *(HWND *)(param_1 + 8);
    wParam_00 = *(uint *)(param_1 + 0x9c) >> 9 & 1;
    Msg = 0x66a;
    goto LAB_0044e4a7;
  case 4:
    FUN_005a46a0(param_2);
    lParam = 0;
    Msg = 0x66d;
LAB_0044e4a3:
    wParam_00 = 0;
    hWnd = *(HWND *)(param_1 + 8);
    goto LAB_0044e4a7;
  case 6:
    FUN_005a4810(*(undefined4 *)(param_1 + 0xac),param_2,1);
    lParam = *(LPARAM *)(param_1 + 0xac);
    hWnd = *(HWND *)(param_1 + 8);
    wParam_00 = *(uint *)(param_1 + 0x9c) >> 9 & 1;
    Msg = 0x66e;
LAB_0044e4a7:
    SendMessageA(hWnd,Msg,wParam_00,lParam);
    break;
  case 7:
    pbVar2 = *(byte **)(**(int **)(param_2 + 8) + 0x20c);
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
      lParam = *(LPARAM *)(param_1 + 0xac);
      iVar6 = FUN_005a3990(*(undefined4 *)(param_1 + 0x80),lParam,1,pbVar2,1,0);
      if (-1 < iVar6) {
        hWnd = *(HWND *)(param_1 + 8);
        wParam_00 = 0;
        Msg = 0x672;
        goto LAB_0044e4a7;
      }
    }
    break;
  case 8:
    pbVar2 = *(byte **)(**(int **)(param_2 + 8) + 0x20c);
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
      lParam = *(LPARAM *)(param_1 + 0xac);
      iVar6 = FUN_005a3990(*(undefined4 *)(param_1 + 0x80),lParam,2,pbVar2,1,0);
      if (-1 < iVar6) {
        hWnd = *(HWND *)(param_1 + 8);
        wParam_00 = 0;
        Msg = 0x673;
        goto LAB_0044e4a7;
      }
    }
  }
  LVar7 = 0;
switchD_0044e237_default:
  FUN_00445200(param_1,LVar7);
  FUN_00446940(param_1);
switchD_0044e0b5_caseD_2:
  uVar10 = 1;
switchD_0044e0b5_default:
  return uVar10;
}


