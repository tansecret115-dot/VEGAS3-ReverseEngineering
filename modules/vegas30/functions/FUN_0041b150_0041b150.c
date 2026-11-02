/* Module: vegas30.exe
   Function: FUN_0041b150
   Address: 0041b150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041b984) */

undefined4 FUN_0041b150(int param_1,uint param_2,HWND param_3)

{
  HWND hWnd;
  SHORT SVar1;
  uint uVar2;
  LRESULT LVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  int iVar7;
  WPARAM unaff_EBP;
  WPARAM unaff_ESI;
  int *unaff_EDI;
  WPARAM WVar8;
  bool bVar9;
  int *piVar10;
  int *piVar11;
  int *local_318;
  undefined1 auStack_314 [4];
  undefined4 local_310;
  undefined4 local_30c;
  CHAR local_304 [260];
  WCHAR local_200 [255];
  undefined2 local_2;
  
  uVar2 = param_2 & 0xffff;
  param_2 = param_2 >> 0x10;
  if (uVar2 < 0x192) {
    if (uVar2 == 0x191) {
      FUN_005747e0();
      FUN_00418c70();
      return 0;
    }
    if (uVar2 < 0xce) {
      if (uVar2 == 0xcd) {
        if ((*(int *)(param_1 + 0x1c0) != 0) && (*(uint *)(param_1 + 0x1bc) == param_2)) {
          return 0;
        }
        FUN_005b8630();
        iVar4 = *(int *)(param_1 + 0x8c);
        if ((iVar4 == 4) || ((iVar4 == 3 || (iVar4 == 2)))) {
          FUN_005b4320();
        }
        FUN_0041a890();
        FUN_00418090();
        return 0;
      }
      switch(uVar2) {
      case 1:
        iVar4 = Transport_IsPreviewPlaying();
        if (iVar4 != 0) {
          FUN_00561900();
        }
        SVar1 = GetKeyState(0x11);
        if (SVar1 < 0) {
          *(undefined4 *)(param_1 + 0x2a8) = 1;
        }
        SendMessageA(*(HWND *)(param_1 + 8),0x111,1,(LPARAM)param_3);
        return 0;
      case 2:
        if ((*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) &&
           (LVar3 = SendMessageA(*(HWND *)(param_1 + 0x1b4),0x610,0,0), LVar3 != 0)) {
          SendMessageA(*(HWND *)(param_1 + 0x1b4),0x1f,0,0);
          return 0;
        }
        if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
          SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,0x1b,1);
          return 0;
        }
        if (*(int *)(param_1 + 0x8c) != 5) {
          return 0;
        }
        iVar4 = Transport_IsPreviewPlaying();
        if (iVar4 != 0) {
          FUN_00561900();
        }
        FUN_004043e0();
        return 0;
      default:
        return 0;
      case 0xc9:
        if (*(uint *)(param_1 + 0x230) == param_2) {
          return 0;
        }
        FUN_0041a280();
        return 0;
      case 0xcc:
        goto switchD_0041b1a3_caseD_cc;
      }
    }
    if (uVar2 == 0xcf) {
      if (param_2 != 1) {
        return 0;
      }
      SendMessageA(param_3,0x147,0,0);
      FUN_00417ad0();
      if (*(int **)(param_1 + 0x23c) == (int *)0x0) {
        return 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x220) + *(int *)(param_1 + 0x230) * 0x44 + 0x1c) == 0) {
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 0x23c) + 0x1c))();
      return 0;
    }
    if (uVar2 == 0xd2) {
      return 0;
    }
    if (uVar2 != 400) {
      return 0;
    }
    FUN_005747c0();
    FUN_00418c70();
    return 0;
  }
  switch(uVar2) {
  case 0x192:
    FUN_0041c6e0();
    return 0;
  case 0x193:
    switch(*(undefined4 *)(param_1 + 0x8c)) {
    case 2:
      if (DAT_0064a52c == 0) {
        local_30c = *(undefined4 *)(param_1 + 0x1bc);
        iVar4 = _SfAudio_CreateGraphObject_4();
        (**(code **)(*local_318 + 0x20))();
        local_30c = 0x20;
        piVar10 = unaff_EBX;
        (**(code **)(*unaff_EBX + 0x6c))();
        if (iVar4 < 0) {
          return 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x94) + 0x244) == 0) {
          piVar5 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
          if (piVar5 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar5;
          }
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              piVar5 = (int *)FUN_005d0cc0();
              (**(code **)(*unaff_EDI + 0x84))();
              (**(code **)(*piVar5 + 8))();
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar4);
          }
          iVar4 = 0;
          piVar5 = (int *)&stack0xfffffce0;
          iVar7 = (**(code **)(*unaff_EDI + 0xb8))();
          if (iVar7 < 0) {
            return 0xffffffff;
          }
          if (unaff_EDI == (int *)0x0) {
            return 0xffffffff;
          }
          piVar11 = (int *)0x0;
          iVar7 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
          while (piVar5 != (int *)0x0) {
            iVar7 = *piVar5;
            uVar6 = FUN_005d15e0(*(undefined4 *)(param_1 + 0x94),iVar4);
            (**(code **)(iVar7 + 0x4c))(piVar5,uVar6);
            (**(code **)(*piVar11 + 8))(piVar11);
            iVar7 = (**(code **)(*piVar11 + 0xc))(piVar11,1,&stack0xfffffcb8,0);
            iVar4 = iVar4 + 1;
          }
          (**(code **)(*piVar10 + 8))(piVar10);
          if (iVar7 < 0) {
            return 0xffffffff;
          }
        }
        _SfGetString_8();
        SfPrintF();
        FUN_005b8630();
        FUN_005b4320(0xffffffff);
        FUN_004e9f70();
        FUN_004ea250();
        uVar6 = FUN_0052b4f0(DAT_00647624,auStack_314,DAT_0064a52c == 0,unaff_EDI);
        piVar10 = (int *)0x0;
        iVar4 = (**(code **)(*unaff_EDI + 0x30))(unaff_EDI);
        FUN_0052b580(uVar6);
        if (iVar4 == 0) {
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          if (*(int **)(param_1 + 0x80) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
          }
        }
        FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
        FUN_0041ab80(param_1,piVar10);
        (**(code **)(*piVar10 + 8))(piVar10);
        if (iVar4 != 0) {
          return 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x94) + 0x244) == 0) {
          piVar10 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
          if (piVar10 == (int *)0x0) goto LAB_0041b909;
          iVar4 = *piVar10;
        }
        else {
          iVar4 = FUN_005d0420();
        }
        if (iVar4 == 0) goto LAB_0041b909;
        FUN_00419310();
        piVar10 = (int *)(iVar4 + -1);
        if ((int)unaff_EBX < iVar4 + -1) {
          piVar10 = unaff_EBX;
        }
        hWnd = *(HWND *)(param_1 + 0x1b4);
      }
      else {
        local_30c = *(undefined4 *)(param_1 + 0x1bc);
        bVar9 = true;
        Transport_Suspend();
        iVar4 = _SfAudio_CreateGraphObject_4();
        (**(code **)(*local_318 + 0x20))();
        local_30c = 0x20;
        piVar10 = unaff_EBX;
        (**(code **)(*unaff_EBX + 0x6c))();
        if (-1 < iVar4) {
          if (*(int *)(*(int *)(param_1 + 0x94) + 0x244) == 0) {
            piVar5 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
            if (piVar5 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *piVar5;
            }
          }
          else {
            iVar4 = FUN_005d0420();
          }
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              piVar5 = (int *)FUN_005d0cc0();
              (**(code **)(*unaff_EDI + 0x84))();
              (**(code **)(*piVar5 + 8))();
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar4);
          }
          iVar4 = 0;
          piVar5 = (int *)&stack0xfffffce0;
          iVar7 = (**(code **)(*unaff_EDI + 0xb8))();
          if (iVar7 < 0) {
            return 0xffffffff;
          }
          if (unaff_EDI == (int *)0x0) {
            return 0xffffffff;
          }
          piVar11 = (int *)0x0;
          iVar7 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
          while (piVar5 != (int *)0x0) {
            iVar7 = *piVar5;
            uVar6 = FUN_005d15e0(*(undefined4 *)(param_1 + 0x94),iVar4);
            (**(code **)(iVar7 + 0x4c))(piVar5,uVar6);
            (**(code **)(*piVar11 + 8))(piVar11);
            iVar7 = (**(code **)(*piVar11 + 0xc))(piVar11,1,&stack0xfffffcb8,0);
            iVar4 = iVar4 + 1;
          }
          (**(code **)(*piVar10 + 8))(piVar10);
          if (iVar7 < 0) {
            return 0xffffffff;
          }
          iVar4 = param_1 + 0xa8;
          uVar6 = _SfGetString_8(DAT_00647204,0x50bf);
          SfPrintF(&stack0xfffffcd0,uVar6,iVar4);
          FUN_005b8630(*(undefined4 *)(param_1 + 700));
          FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
          FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
          FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
          uVar6 = FUN_0052b4f0(DAT_00647624,&stack0xfffffcd0,DAT_0064a52c == 0,piVar11,1,1,
                               &stack0xfffffcc8,1);
          piVar10 = (int *)0x0;
          iVar4 = (**(code **)(*piVar11 + 0x30))(piVar11,FUN_0052b5b0,uVar6,0);
          bVar9 = iVar4 != 0;
          FUN_0052b580(uVar6);
          if (iVar4 == 0) {
            FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
            if (*(int **)(param_1 + 0x80) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
            }
          }
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
          FUN_0041ab80(param_1,piVar10);
          (**(code **)(*piVar10 + 8))(piVar10);
        }
        Transport_Resume(0);
        if (bVar9) {
          return 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x94) + 0x244) == 0) {
          piVar10 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
          if (piVar10 == (int *)0x0) goto LAB_0041b909;
          iVar4 = *piVar10;
        }
        else {
          iVar4 = FUN_005d0420();
        }
        if (iVar4 == 0) {
LAB_0041b909:
          *(uint *)**(undefined4 **)(param_1 + 700) = *(uint *)**(undefined4 **)(param_1 + 700) | 8;
          FUN_00422110();
          return 0;
        }
        FUN_00419310();
        piVar10 = (int *)(iVar4 + -1);
        if ((int)unaff_EBX < iVar4 + -1) {
          piVar10 = unaff_EBX;
        }
        hWnd = *(HWND *)(param_1 + 0x1b4);
      }
      break;
    case 3:
      local_30c = *(undefined4 *)(param_1 + 0x1bc);
      _SfGetString_8();
      SfPrintF();
      FUN_005b8630();
      FUN_005b4320();
      FUN_004e9f70();
      FUN_004ea590();
      FUN_0052b4f0();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x90) + 0x30))();
      FUN_0052b580();
      if ((iVar4 == 0) && (*(int **)(param_1 + 0x80) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
      }
      *(uint *)**(undefined4 **)(param_1 + 700) = *(uint *)**(undefined4 **)(param_1 + 700) | 0x8000
      ;
      if (iVar4 == 0) {
        iVar4 = FUN_00418e90();
        if (iVar4 == 0) {
          FUN_00422ed0();
        }
        else {
          FUN_00419310();
          iVar4 = FUN_00418e90();
          WVar8 = iVar4 - 1U;
          if ((int)unaff_EBP < (int)(iVar4 - 1U)) {
            WVar8 = unaff_EBP;
          }
          FUN_00418090();
          if (*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) {
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,WVar8,0);
          }
          FUN_0041a890();
        }
        FUN_004eb2b0();
      }
      FUN_004ea040();
      return 0;
    case 4:
      local_30c = *(undefined4 *)(param_1 + 0x1bc);
      _SfGetString_8();
      SfPrintF();
      FUN_005b8630();
      FUN_005b4320();
      FUN_004e9f70();
      FUN_004ea590();
      FUN_0052b4f0();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x90) + 0x30))();
      FUN_0052b580();
      if (iVar4 == 0) {
        FUN_004eb2b0();
        if (*(int **)(param_1 + 0x80) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
        }
      }
      FUN_004ea040();
      *(uint *)**(undefined4 **)(param_1 + 700) = *(uint *)**(undefined4 **)(param_1 + 700) | 0x8000
      ;
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = FUN_00418e90();
      if (iVar4 == 0) {
        DestroyWindow(*(HWND *)(param_1 + 8));
        return 0xffffffff;
      }
      iVar4 = FUN_00418e90();
      piVar10 = (int *)(iVar4 + -1);
      if ((int)unaff_EBX < iVar4 + -1) {
        piVar10 = unaff_EBX;
      }
      FUN_00418090();
      hWnd = *(HWND *)(param_1 + 0x1b4);
      break;
    case 5:
      local_310 = 0;
      _SfGetString_8();
      SfPrintF();
      FUN_0052b4f0();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x90) + 0x30))();
      FUN_0052b580();
      if (iVar4 == 0) {
        iVar4 = FUN_00418e90();
        if (iVar4 == 0) {
          EndDialog(*(HWND *)(param_1 + 8),2);
          return 0xffffffff;
        }
        FUN_00419310();
        iVar4 = FUN_00418e90();
        WVar8 = iVar4 - 1U;
        if ((int)unaff_ESI < (int)(iVar4 - 1U)) {
          WVar8 = unaff_ESI;
        }
        FUN_00418090();
        FUN_00418c70();
        SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,WVar8,0);
        FUN_0041a890();
        return 0;
      }
    default:
      goto switchD_0041b1a3_caseD_3;
    }
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x602,(WPARAM)piVar10,0);
    }
    FUN_0041a890();
    return 0;
  case 0x194:
    GetWindowTextA(*(HWND *)(param_1 + 0x254),local_304,0x100);
    MultiByteToWideChar(0,1,local_304,-1,local_200,0x100);
    local_2 = 0;
    if (*(int **)(param_1 + 0x1c0) == (int *)0x0) {
      return 0;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x44))();
    if (iVar4 != -0x7ff8fffb) {
      if (iVar4 < 0) {
        return 0;
      }
      if (iVar4 != 0) {
        return 0;
      }
      FUN_00417720();
      return 0;
    }
    _SfGetString_8();
    break;
  case 0x195:
    GetWindowTextA(*(HWND *)(param_1 + 0x254),local_304,0x100);
    MultiByteToWideChar(0,1,local_304,-1,local_200,0x100);
    local_2 = 0;
    if (*(int **)(param_1 + 0x1c0) == (int *)0x0) {
      return 0;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x48))();
    if (iVar4 == 0) {
      FUN_00417720();
      return 0;
    }
    if (iVar4 != -0x7ff8fffb) {
      return 0;
    }
    _SfGetString_8();
    break;
  case 0x196:
switchD_0041b1a3_caseD_cc:
    FUN_0041a040();
    return 0;
  default:
    goto switchD_0041b1a3_caseD_3;
  case 0x198:
    iVar4 = Transport_IsPreviewPlaying();
    if (iVar4 != 0) {
      FUN_00561900();
      FUN_00418c70();
      return 0;
    }
    FUN_005618a0();
    FUN_00418c70();
    return 0;
  case 0x19a:
    DAT_00649e08 = (uint)(DAT_00649e08 == 0);
    iVar4 = Transport_IsPreviewPlaying();
    if (iVar4 != 0) {
      FUN_00561910();
    }
    FUN_00418c70();
    return 0;
  case 0x19b:
    FUN_0041ada0();
    return 0;
  }
  SfMsgBox();
switchD_0041b1a3_caseD_3:
  return 0;
}


