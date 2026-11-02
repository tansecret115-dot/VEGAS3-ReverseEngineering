/* Module: vegas30.exe
   Function: FUN_004d6500
   Address: 004d6500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __thiscall FUN_004d6500(int *param_1,uint param_2,WPARAM param_3,HDC param_4)

{
  int iVar1;
  LRESULT LVar2;
  HDC pHVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int *piVar6;
  LRESULT unaff_ESI;
  short sVar7;
  LRESULT local_68;
  tagPOINT local_64;
  int local_5c;
  uint local_58;
  WPARAM local_54;
  undefined1 local_50 [24];
  undefined1 local_38 [56];
  short sVar8;
  
  local_68 = 0;
  iVar1 = FUN_00548c50(param_1[9],param_2,param_3,param_4,&local_68);
  if (iVar1 == 0) {
    if ((0x1ff < param_2) && (param_2 < 0x20b)) {
      if (((param_2 == 0x201) || (param_2 == 0x204)) && ((param_1[0xc] & 2U) != 0)) {
        param_1[0xc] = param_1[0xc] & 0xffffffbd;
        if ((HWND)param_1[0x29] != (HWND)0x0) {
          SendMessageA((HWND)param_1[0x29],0x401,0,0);
        }
      }
      if (((param_1[0x24] != 0) && (((param_1[0x20] ^ param_1[0x24]) & 0xf0000U) != 0)) &&
         (param_2 == 0x200)) {
        FUN_004d6460(0,0);
      }
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        local_5c = param_1[9];
        local_50._0_4_ = param_4;
        local_54 = param_3;
        local_58 = param_2;
        SendMessageA((HWND)param_1[0x29],0x407,0,(LPARAM)&local_5c);
      }
      if ((uint)param_1[0x20] >> 0x10 < 4) {
        LVar2 = (**(code **)(*(int *)param_1[((uint)param_1[0x20] >> 0x10) + 0xd] + 0x14))
                          (param_1,param_2,param_3,param_4);
        return LVar2;
      }
      LVar2 = (**(code **)(_DAT_00000000 + 0x14))(param_1,param_2,param_3,param_4);
      return LVar2;
    }
    sVar7 = (short)param_4;
    sVar8 = (short)((uint)param_4 >> 0x10);
    if (param_2 < 0x15) {
      if (param_2 != 0x14) {
        switch(param_2) {
        case 1:
          FUN_004d5aa0();
          FUN_004d5b90();
          return local_68;
        case 2:
          FUN_004d5bb0();
          return local_68;
        default:
          goto switchD_004d6643_caseD_3;
        case 5:
          FUN_004d5e70(param_3,(int)sVar7,(int)sVar8);
          break;
        case 7:
          LVar2 = (**(code **)(*param_1 + 0x78))(param_2,param_3);
          return LVar2;
        case 8:
          LVar2 = (**(code **)(*param_1 + 0x7c))(param_2,param_3);
          return LVar2;
        case 0xf:
          pHVar3 = BeginPaint((HWND)param_1[9],(LPPAINTSTRUCT)(local_50 + 0x10));
          (*DAT_0064b174)(pHVar3,local_38,&LAB_004d6230,param_1);
          EndPaint((HWND)param_1[9],(PAINTSTRUCT *)local_50);
          return 1;
        }
      }
    }
    else {
      if (0x101 < param_2) {
        if (param_2 < 0x122) {
          if (param_2 != 0x121) {
            switch(param_2) {
            case 0x106:
              if (param_3 == 8) {
                SendMessageA((HWND)param_1[9],0x304,0,0);
                return local_68;
              }
              goto LAB_004d67b3;
            default:
              goto switchD_004d6643_caseD_3;
            case 0x111:
              LVar2 = (**(code **)(*param_1 + 0x54))(param_3,param_4);
              return LVar2;
            case 0x113:
              FUN_004d63a0(param_3);
              return local_68;
            case 0x11f:
              break;
            }
          }
          LVar2 = SendMessageA(DAT_00647624,param_2,param_3,(LPARAM)param_4);
          return LVar2;
        }
        if (param_2 < 0x312) {
          if (0x30e < param_2) {
            (**(code **)(*param_1 + 0x68))(param_2,param_3,param_4);
            return unaff_ESI;
          }
          if (param_2 == 0x2a3) {
            FUN_004d6460(0,0);
            return local_68;
          }
          if ((0x2ff < param_2) && (param_2 < 0x305)) {
LAB_004d6a3e:
            LVar2 = (**(code **)(*param_1 + 0x5c))(param_2,param_3,param_4);
            return LVar2;
          }
        }
        else if ((0x7eff < param_2) && (param_2 < 0x7f0a)) goto LAB_004d6a3e;
switchD_004d6643_caseD_3:
        LVar2 = DefWindowProcA((HWND)param_1[9],param_2,param_3,(LPARAM)param_4);
        return LVar2;
      }
      if (0xff < param_2) {
        LVar2 = (**(code **)(*param_1 + 0x58))(param_2,param_3,param_4);
        return LVar2;
      }
      switch(param_2) {
      case 0x15:
      case 0x1a:
        iVar1 = GetSystemMetrics(0x44);
        param_1[0x1e] = (iVar1 + 1) / 2;
        iVar1 = GetSystemMetrics(0x45);
        param_1[0x1f] = (iVar1 + 1) / 2;
        (**(code **)(*param_1 + 100))(param_2,param_3,param_4);
        return unaff_ESI;
      default:
        goto switchD_004d6643_caseD_3;
      case 0x1f:
        if ((uint)param_1[0x20] >> 0x10 < 4) {
          piVar6 = (int *)param_1[((uint)param_1[0x20] >> 0x10) + 0xd];
        }
        else {
          piVar6 = (int *)0x0;
        }
        (**(code **)(*piVar6 + 0x14))(param_1,0x1f,param_3,param_4);
        LVar2 = DefWindowProcA((HWND)param_1[9],param_2,param_3,(LPARAM)param_4);
        return LVar2;
      case 0x20:
        local_68 = FUN_004d5e10(param_3,(int)sVar7,(int)sVar8);
        if (local_68 == 0) {
LAB_004d67b3:
          LVar2 = DefWindowProcA((HWND)param_1[9],param_2,param_3,(LPARAM)param_4);
          return LVar2;
        }
        break;
      case 0x4e:
        LVar2 = (**(code **)(*param_1 + 0x50))(param_3,param_4);
        return LVar2;
      case 0x53:
        iVar1 = (**(code **)(*param_1 + 0x60))(param_2,param_3,param_4);
        if (iVar1 == 0) goto switchD_004d6643_caseD_3;
        break;
      case 0x7b:
        iVar1 = param_1[0x20];
        local_64.y = (LONG)sVar8;
        local_64.x = (LONG)sVar7;
        uVar5 = 1;
        if ((param_3 == 0) || (param_4 == (HDC)0xffffffff)) {
          local_64.y = param_1[0x84] + 0x10;
          local_64.x = param_1[0x83] + 0x10;
          iVar1 = param_1[0x83] + param_1[0x87];
          if (iVar1 < local_64.x) {
            local_64.x = iVar1;
          }
          iVar1 = param_1[8];
          ClientToScreen((HWND)param_1[9],&local_64);
          uVar5 = 0;
        }
        FUN_004d54b0(local_64.x,local_64.y,iVar1,uVar5);
        return local_68;
      case 0x84:
        local_68 = DefWindowProcA((HWND)param_1[9],param_2,param_3,(LPARAM)param_4);
        pHVar4 = GetCapture();
        if (pHVar4 == (HWND)0x0) {
          local_64.x = (LONG)sVar7;
          local_64.y = (LONG)sVar8;
          ScreenToClient((HWND)param_1[9],&local_64);
          FUN_004d5c00(local_64.x,local_64.y);
          return local_68;
        }
        break;
      case 0x87:
        return 4;
      }
    }
  }
  return local_68;
}


