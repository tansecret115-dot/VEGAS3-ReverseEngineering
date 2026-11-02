/* Module: vidcap30.exe
   Function: FUN_004393a0
   Address: 004393a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004393a0(int param_1,int param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
  byte bVar1;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  uint wParam;
  BOOL BVar5;
  bool bVar6;
  bool bVar7;
  HWND hWnd;
  undefined4 uVar8;
  undefined4 uVar9;
  
  SVar2 = GetKeyState(0x10);
  bVar6 = SVar2 < 0;
  SVar2 = GetKeyState(0x11);
  bVar7 = SVar2 < 0;
  GetKeyState(0x12);
  iVar4 = param_1 + 0xa48;
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x60a,0,0);
  iVar3 = FUN_00434a00(param_1);
  switch(param_4) {
  case 9:
    if ((*(uint *)(param_1 + 0x1ae8) & 4) == 0) {
      if ((*(uint *)(param_1 + 0x1ae8) & 9) == 0) {
        SetFocus(*(HWND *)(param_1 + 8));
        return;
      }
      BVar5 = IsWindowVisible(*(HWND *)(param_1 + 0x1668));
      if ((BVar5 != 0) && (BVar5 = IsWindowEnabled(*(HWND *)(param_1 + 0x1668)), BVar5 != 0)) {
        SetFocus(*(HWND *)(param_1 + 0x1668));
        return;
      }
      SetFocus(*(HWND *)(param_1 + 8));
      return;
    }
    if (bVar6) {
      BVar5 = IsWindowVisible(*(HWND *)(param_1 + 0x14f4));
      if ((BVar5 != 0) && (BVar5 = IsWindowEnabled(*(HWND *)(param_1 + 0x14f4)), BVar5 != 0)) {
        SetFocus(*(HWND *)(param_1 + 0x14f4));
        return;
      }
    }
    else {
      BVar5 = IsWindowVisible(*(HWND *)(param_1 + 0x14dc));
      if ((BVar5 != 0) && (BVar5 = IsWindowEnabled(*(HWND *)(param_1 + 0x14dc)), BVar5 != 0)) {
        SetFocus(*(HWND *)(param_1 + 0x14dc));
        return;
      }
    }
    goto LAB_00439486;
  default:
    DefWindowProcA(*(HWND *)(param_1 + 8),param_3,param_4,param_5);
    break;
  case 0xd:
    if (DAT_005bba94 == 0) {
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d7,0);
      return;
    }
    break;
  case 0x1b:
    if (DAT_005bba94 != 0) {
      *(int *)(param_1 + 0x1c10) = iVar3;
      FUN_004041c0(0);
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
      *(undefined4 *)(param_1 + 0x1c10) = 0;
      SetFocus(*(HWND *)(param_1 + 8));
      return;
    }
    if (iVar3 == 0) {
      if (param_2 == 0) {
        if ((*(uint *)(param_1 + 0x1ac0) & 0x100) == 0) {
          SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
          return;
        }
      }
      else {
        iVar4 = FUN_00424c80(param_1 + 0xd8);
        if ((iVar4 != 0) || ((*(byte *)(param_1 + 0x1c34) & 2) != 0)) {
          SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
          return;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c10) = 1;
      FUN_004041c0(0);
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d1,0);
      *(undefined4 *)(param_1 + 0x1c10) = 0;
    }
LAB_00439486:
    SetFocus(*(HWND *)(param_1 + 8));
    return;
  case 0x20:
  case 0x7b:
    if (DAT_005bba94 != 0) {
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
      return;
    }
    if (param_2 == 0) {
      if (((*(uint *)(param_1 + 0x1ac0) & 0x100) != 0) ||
         ((*(uint *)(param_1 + 0x1ac0) & 0x80) != 0)) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d6,0);
        return;
      }
    }
    else {
      iVar3 = FUN_00424c80(param_1 + 0xd8);
      if (iVar3 == 0) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d6,0);
        return;
      }
    }
    if ((DAT_005bb4fc != 0) &&
       ((iVar4 = FUN_004264b0(iVar4), iVar4 != 0 ||
        (iVar4 = FUN_00424c80(param_1 + 0xd8), iVar4 != 0)))) {
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d7,0);
      return;
    }
    SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
    return;
  case 0x21:
    if (DAT_005bba94 != 0) {
      return;
    }
    iVar4 = (-(uint)(*(int *)(param_1 + 0x1bf8) != 0) & 0x28) + 2;
    if ((*(int *)(param_1 + 0x1bf8) == 0) && ((*(byte *)(param_1 + 0x1aec) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
    }
    goto LAB_00439781;
  case 0x22:
    if (DAT_005bba94 != 0) {
      return;
    }
    iVar4 = (-(uint)(*(int *)(param_1 + 0x1bf8) != 0) & 0x28) + 2;
    if (*(int *)(param_1 + 0x1bf8) == 0) {
      bVar1 = *(byte *)(param_1 + 0x1aec);
joined_r0x0043970f:
      if ((bVar1 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
      }
    }
    goto LAB_00439781;
  case 0x25:
    if (DAT_005bba94 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1bf8) == 0) {
      if (bVar6) {
        if ((!bVar7) && ((*(byte *)(param_1 + 0x1aec) & 1) != 0)) {
          *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
        }
      }
      else if (bVar7) {
        if ((*(byte *)(param_1 + 0x1aec) & 1) != 0) {
          *(undefined4 *)(param_1 + 0x1c04) = 0x1dc;
        }
      }
      else if ((*(byte *)(param_1 + 0x1aec) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x1c04) = 0x1d9;
      }
    }
    if (*(uint *)(param_1 + 0x1c04) == 0) {
      return;
    }
    wParam = ((-(uint)(*(int *)(param_1 + 0x1bf8) != 0) & 0x28) + 2) * 0x10000 |
             *(uint *)(param_1 + 0x1c04) & 0xffff;
    hWnd = *(HWND *)(param_1 + 8);
    goto LAB_004397ae;
  case 0x26:
  case 0x6b:
    if ((((*(byte *)(param_1 + 0x1ae8) & 1) == 0) && (iVar3 = FUN_00434f90(param_1), iVar3 == 0)) &&
       (((*(byte *)(param_1 + 0x1ac4) & 4) != 0 && (iVar4 = FUN_0042c980(iVar4,1), -1 < iVar4)))) {
      FUN_00411120(1);
      return;
    }
    break;
  case 0x27:
    if (DAT_005bba94 != 0) {
      return;
    }
    iVar4 = (-(uint)(*(int *)(param_1 + 0x1bf8) != 0) & 0x28) + 2;
    if (*(int *)(param_1 + 0x1bf8) == 0) {
      if (bVar6) {
        if (!bVar7) {
          bVar1 = *(byte *)(param_1 + 0x1aec);
          goto joined_r0x0043970f;
        }
      }
      else if (bVar7) {
        if ((*(byte *)(param_1 + 0x1aec) & 1) != 0) {
          *(undefined4 *)(param_1 + 0x1c04) = 0x1de;
        }
      }
      else if ((*(byte *)(param_1 + 0x1aec) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x1c04) = 0x1da;
      }
    }
LAB_00439781:
    if (*(int *)(param_1 + 0x1c04) != 0) {
      hWnd = *(HWND *)(param_1 + 8);
      wParam = iVar4 << 0x10 | (uint)*(ushort *)(param_1 + 0x1c04);
LAB_004397ae:
      SendMessageA(hWnd,0x111,wParam,0);
      *(undefined4 *)(param_1 + 0x1bf8) = 1;
      return;
    }
    break;
  case 0x28:
  case 0x6d:
    if (((((*(byte *)(param_1 + 0x1ae8) & 1) == 0) && (iVar3 = FUN_00434f90(param_1), iVar3 == 0))
        && ((*(byte *)(param_1 + 0x1ac4) & 4) != 0)) && (iVar4 = FUN_0042c980(iVar4,0), -1 < iVar4))
    {
      FUN_00411120(1);
      return;
    }
    break;
  case 0x49:
  case 0xdb:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 4) != 0)) {
      if (!bVar6) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x205,0);
        return;
      }
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x207,0);
      return;
    }
    break;
  case 0x4a:
    if (DAT_005bba94 == 0) {
      uVar9 = 1;
      uVar8 = 0;
LAB_00439c05:
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,uVar8,uVar9);
      return;
    }
    break;
  case 0x4b:
    if (DAT_005bba94 == 0) {
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0);
      return;
    }
    break;
  case 0x4c:
    if (DAT_005bba94 == 0) {
      if (!bVar7) {
        uVar9 = 1;
        uVar8 = 1;
        goto LAB_00439c05;
      }
      if (((*(byte *)(param_1 + 0x1ae8) & 4) != 0) && ((*(uint *)(param_1 + 0x1aec) & 0x800) != 0))
      {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x217,0);
        return;
      }
    }
    break;
  case 0x4f:
  case 0xdd:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 4) != 0)) {
      if (!bVar6) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x206,0);
        return;
      }
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x208,0);
      return;
    }
    break;
  case 0x52:
    if (((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 2) != 0)) && (bVar7)) {
      if (bVar6) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d0,0);
        return;
      }
      SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1ce,0);
      return;
    }
    break;
  case 0x7f:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0);
      return;
    }
    break;
  case 0x80:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,1);
        return;
      }
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0xffffffff);
      return;
    }
    break;
  case 0x81:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,2);
        return;
      }
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0xfffffffe);
      return;
    }
    break;
  case 0x82:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,3);
        return;
      }
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0xfffffffd);
      return;
    }
    break;
  case 0x83:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,4);
        return;
      }
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0xfffffffc);
      return;
    }
    break;
  case 0x84:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,5);
        return;
      }
      uVar9 = 0xfffffffb;
      uVar8 = 4;
      goto LAB_00439c05;
    }
    break;
  case 0x85:
  case 0x86:
    if ((DAT_005bba94 == 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
      if (!bVar7) {
        FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,6);
        return;
      }
      FUN_00441070(*(undefined4 *)(param_1 + 0x13c8),0x1fb,param_1,4,0xfffffffa);
      return;
    }
  }
  return;
}


