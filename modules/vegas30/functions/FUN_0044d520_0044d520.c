/* Module: vegas30.exe
   Function: FUN_0044d520
   Address: 0044d520
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0044d520(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  LRESULT LVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  if (param_2 < 0x204) {
    if (param_2 == 0x203) {
      return 0;
    }
    if (param_2 < 0x22) {
      if (param_2 == 0x21) {
        if ((((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 3) && ((short)param_4 == 1)) {
          SetActiveWindow(*(HWND *)(param_1 + 0x84));
          FUN_00404790(*(undefined4 *)(param_1 + 0x84));
          LVar7 = DefWindowProcA(*(HWND *)(param_1 + 8),0x21,param_3,(LPARAM)param_4);
          return LVar7;
        }
        DefWindowProcA(*(HWND *)(param_1 + 8),0x21,param_3,(LPARAM)param_4);
        LVar7 = DefWindowProcA(*(HWND *)(param_1 + 8),0x21,param_3,(LPARAM)param_4);
        return LVar7;
      }
      switch(param_2) {
      case 1:
        FUN_0044ca70(param_1);
        return 0;
      case 2:
        FUN_0043c0e0(*(undefined4 *)(param_1 + 0x1bc));
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        FUN_0043c0e0(*(undefined4 *)(param_1 + 0x15c));
        *(undefined4 *)(param_1 + 0x15c) = 0;
        LVar7 = DefWindowProcA(*(HWND *)(param_1 + 8),param_2,param_3,(LPARAM)param_4);
        return LVar7;
      case 5:
        SetWindowPos(*(HWND *)(param_1 + 0x84),(HWND)0x0,0,0,(int)(short)param_4,
                     (int)(short)((uint)param_4 >> 0x10),0x54);
        return 0;
      case 6:
        if ((short)param_3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 0x84);
        }
        FUN_00404790(uVar6);
        if (((param_1 != 0) && ((*(byte *)(param_1 + 0x9c) & 0x11) == 0)) &&
           (*(int *)(param_1 + 0xac) != 0)) {
          SetFocus(*(HWND *)(param_1 + 0x1a4));
        }
        DAT_0063de78 = 0xffffffff;
        break;
      case 0x14:
        goto switchD_0044d56b_caseD_14;
      }
    }
    else {
      switch(param_2) {
      case 0x24:
        if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
          param_4[6] = 100;
          param_4[7] = 100;
        }
        return 0;
      case 0xa3:
        return 0;
      case 0x111:
        if ((param_3 & 0xffff) != 2) {
          return 0;
        }
        LVar7 = SendMessageA(*(HWND *)(param_1 + 0x144),0x610,0,0);
        if (LVar7 == 0) {
          if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
            return 0;
          }
          SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,0x1b,1);
          return 0;
        }
        SendMessageA(*(HWND *)(param_1 + 0x144),0x1f,0,0);
        return 0;
      case 0x113:
        if (param_3 == 0x67) {
          if ((*(byte *)(param_1 + 0x9c) & 0x10) == 0) {
            uVar11 = FUN_004581e0(*(undefined4 *)(param_1 + 0x80));
            FUN_00448c20(param_1,uVar11);
            FUN_00445cb0(param_1);
          }
          KillTimer(*(HWND *)(param_1 + 8),0x67);
          LVar7 = DefWindowProcA(*(HWND *)(param_1 + 8),param_2,0x67,(LPARAM)param_4);
          return LVar7;
        }
        break;
      case 0x121:
        LVar7 = SendMessageA(DAT_00647624,param_2,param_3,(LPARAM)param_4);
        return LVar7;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x669:
      LVar7 = FUN_0044bfa0(param_1,param_4);
      return LVar7;
    case 0x66a:
      LVar7 = FUN_0044c250(param_1,param_4,param_3);
      return LVar7;
    case 0x66b:
      LVar7 = FUN_0044c570(param_1,param_3,param_4);
      return LVar7;
    case 0x66c:
      LVar7 = FUN_0044c5f0(param_1,param_3,param_4);
      return LVar7;
    case 0x66d:
      LVar7 = FUN_0044c4d0(param_1,*(undefined4 *)(param_1 + 0x88),1);
      return LVar7;
    case 0x66e:
      LVar7 = FUN_0044c2f0(param_1,param_4,param_3);
      return LVar7;
    case 0x66f:
      puVar1 = *(uint **)(param_1 + 0xb4);
      if ((puVar1 != (uint *)0x0) && (puVar1 == param_4)) {
        FUN_00448c20(param_1,puVar1[0x1a],puVar1[0x1b]);
        if ((param_3 & 8) != 0) {
          FUN_004491d0(param_1,param_3 >> 5 & 0xffff);
        }
        FUN_0044a160(param_1,0);
        FUN_00445cb0(param_1);
      }
      return 1;
    case 0x670:
      if (((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0xa8) != 6)) &&
         ((*(int *)(param_1 + 0xa8) != 5 && (DAT_0064a508 != 0)))) {
        uVar2 = *param_4;
        uVar3 = param_4[1];
        uVar11 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
        uVar4 = (uint)(uVar2 < (uint)uVar11);
        uVar5 = uVar3 - (int)((ulonglong)uVar11 >> 0x20);
        bVar10 = -1 < (int)(uVar5 - uVar4);
        if ((uVar5 != uVar4 && bVar10) || (bVar10)) {
          uVar11 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
          iVar8 = uVar2 - (uint)uVar11;
          iVar9 = (uVar3 - (int)((ulonglong)uVar11 >> 0x20)) - (uint)(uVar2 < (uint)uVar11);
        }
        else {
          iVar8 = 0;
          iVar9 = 0;
        }
        FUN_00538410(*(undefined4 *)(param_1 + 0x80),iVar8,iVar9);
      }
switchD_0044d56b_caseD_14:
      return 1;
    case 0x671:
      LVar7 = FUN_0044c390(param_1,param_4);
      return LVar7;
    case 0x672:
      LVar7 = FUN_0044c030(param_1,param_4);
      return LVar7;
    case 0x673:
      LVar7 = FUN_0044c140(param_1,param_4);
      return LVar7;
    }
  }
  LVar7 = DefWindowProcA(*(HWND *)(param_1 + 8),param_2,param_3,(LPARAM)param_4);
  return LVar7;
}


