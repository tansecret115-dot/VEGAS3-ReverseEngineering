/* Module: vegas30.exe
   Function: FUN_0042f530
   Address: 0042f530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f530(int *param_1,HWND__ param_2,HWND param_3,HWND__ param_4)

{
  uint *puVar1;
  HWND__ HVar2;
  HWND__ HVar3;
  SHORT SVar4;
  uchar *puVar5;
  int *piVar6;
  int iVar7;
  HGLOBAL pvVar8;
  HWND pMem;
  HCURSOR pHVar9;
  wchar_t *lpWideCharStr;
  wchar_t *_SubStr;
  wchar_t *pwVar10;
  size_t sVar11;
  HWND pHVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  LPARAM LVar16;
  HWND _Str;
  longlong lVar17;
  WCHAR local_1270 [1039];
  undefined2 local_a52;
  uchar local_a50 [520];
  uchar local_848 [520];
  undefined1 local_640 [520];
  WCHAR local_438 [259];
  undefined2 local_232;
  HWND__ local_230 [64];
  uchar local_130 [4];
  HWND__ local_12c [49];
  undefined4 uStackY_68;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  HWND pHStack_44;
  HWND pHStack_40;
  HWND pHStack_3c;
  undefined1 *puStack_38;
  int in_stack_ffffffd4;
  
  piVar6 = param_1;
  FUN_0060ac30();
  pHVar12 = (HWND)*param_1;
  param_1 = (int *)0x1;
  puVar5 = (uchar *)FUN_0043cf70();
  _mbscpy(local_a50,puVar5);
  HVar3.unused = param_4.unused;
  HVar2.unused = param_2.unused;
  iVar7 = DAT_0064b108;
  if (((0xa2ca < (uint)param_2.unused) && ((uint)param_2.unused < 0xa2eb)) ||
     ((0xa315 < (uint)param_2.unused && ((uint)param_2.unused < 0xa331)))) {
    param_3 = GetFocus();
    if (param_3 == *(HWND *)(piVar6[0x2a] + 8)) {
      piVar6 = (int *)FUN_005b87b0();
      iVar7 = FUN_004ca930();
      if (piVar6 == (int *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *piVar6;
      }
      if ((iVar7 < 0) || (iVar15 + -1 < iVar7)) {
        LVar16 = 0;
      }
      else {
        LVar16 = *(LPARAM *)(piVar6[2] + iVar7 * 4);
      }
      SendMessageA(param_3,0x111,iVar7 << 0x10 | HVar2.unused & 0xffffU,LVar16);
    }
    goto switchD_0042f75e_caseD_9caa;
  }
  if ((0xa1e9 < (uint)param_2.unused) && ((uint)param_2.unused < 0xa288))
  goto switchD_004300ff_caseD_9d29;
  if (0x9e97 < (uint)param_2.unused) {
    if ((uint)param_2.unused < 0xa7a3) {
      if (param_2.unused != 0xa7a2) {
        if ((uint)param_2.unused < 0xa159) {
          if (param_2.unused == 0xa158) {
switchD_004310c2_caseD_a15b:
            pHVar12 = GetFocus();
            if ((pHVar12 != (HWND)0x0) && (iVar7 = FUN_0040c090(), iVar7 != 0)) {
              if (iVar7 == piVar6[0x1c]) {
                SendMessageA(*(HWND *)(piVar6[0x1c] + 8),0x111,HVar2.unused,0);
              }
              else if (iVar7 == piVar6[0x2a]) {
                SendMessageA(*(HWND *)(piVar6[0x2a] + 8),0x111,HVar2.unused,0);
              }
            }
            goto switchD_0042f75e_caseD_9caa;
          }
          if ((uint)param_2.unused < 0x9fcc) {
            if (param_2.unused == 0x9fcb) {
              FUN_0042f4c0();
            }
            else if ((uint)param_2.unused < 0x9fc6) {
              if (param_2.unused == 0x9fc5) {
                FUN_005425c0();
              }
              else if ((uint)param_2.unused < 0x9e9e) {
                if ((uint)param_2.unused < 0x9e9c) {
                  if (param_2.unused == 0x9e9a) {
                    pHVar12 = (HWND)FUN_0040c120();
                    while (pHVar12 != (HWND)0x0) {
                      SendMessageA(pHVar12,0x10,0,0);
                      pHVar12 = (HWND)FUN_0040c120();
                    }
                  }
                  else if (param_2.unused == 0x9e9b) {
                    SendMessageA(pHVar12,0x227,0,0);
                  }
                }
                else {
                  SendMessageA(pHVar12,0x226,0,0);
                }
              }
              else if (param_2.unused == 0x9e9e) {
                SendMessageA(pHVar12,0x228,0,0);
              }
              else if (param_2.unused == 0x9fc4) {
                _SfHelp_ContextHelp_20();
              }
            }
            else {
              switch(param_2.unused) {
              case 0x9fc7:
                FUN_0042f4c0();
                break;
              case 0x9fc8:
                FUN_0042f4c0();
                break;
              case 0x9fc9:
                FUN_0042f4c0();
                break;
              case 0x9fca:
                FUN_0042f4c0();
              }
            }
            goto switchD_0042f75e_caseD_9caa;
          }
          switch(param_2.unused) {
          case 0x9fcc:
            _Internet_BrowseWebPage_8();
            break;
          case 0x9fcd:
            FUN_00401080();
            break;
          case 0x9fce:
          case 0x9fcf:
          case 0x9fd0:
            pHVar12 = (HWND)FUN_0040c120();
            if (pHVar12 != (HWND)0x0) {
              SendMessageA(pHVar12,0x112,HVar2.unused,0);
            }
            break;
          case 0x9fd2:
            FUN_0042f4c0();
            break;
          case 0x9fd3:
            if (DAT_0064b4f0 == 0) {
              FUN_0043c410();
              break;
            }
            goto LAB_0043100d;
          case 0x9fd4:
            FUN_0043c8b0();
            break;
          case 0xa08f:
          case 0xa092:
          case 0xa09a:
          case 0xa0a0:
          case 0xa0a1:
          case 0xa0a2:
          case 0xa0a3:
          case 0xa0a4:
          case 0xa0a5:
          case 0xa0a6:
            goto switchD_004300ff_caseD_9d29;
          }
          goto switchD_0042f75e_caseD_9caa;
        }
        if ((uint)param_2.unused < 0xa771) {
          if (param_2.unused == 0xa770) {
            DAT_00647ab0 = (uint)(DAT_00647ab0 == 0);
            FUN_00453070();
            goto switchD_0042f75e_caseD_9caa;
          }
          if ((uint)param_2.unused < 0xa2b4) {
            if ((uint)param_2.unused < 0xa2b2) {
              switch(param_2.unused) {
              case 0xa15b:
                goto switchD_004310c2_caseD_a15b;
              default:
                goto switchD_0042f75e_caseD_9caa;
              case 0xa1bb:
              case 0xa1bc:
                goto switchD_0042f821_caseD_9d08;
              case 0xa1c5:
              case 0xa1c6:
              case 0xa1d1:
                goto switchD_004300ff_caseD_9d29;
              case 0xa1cd:
                goto switchD_004300ff_caseD_9d15;
              }
            }
          }
          else {
            if (0xa76e < (uint)param_2.unused) {
              if (param_2.unused == 0xa76f) {
                FUN_005bacc0();
                DAT_0064767c = DAT_0064767c | 4;
              }
              goto switchD_0042f75e_caseD_9caa;
            }
            if (param_2.unused == 0xa76e) {
              FUN_005bacc0();
              DAT_0064767c = DAT_0064767c | 4;
              goto switchD_0042f75e_caseD_9caa;
            }
            if ((uint)param_2.unused < 0xa348) goto switchD_0042f75e_caseD_9caa;
            if (0xa349 < (uint)param_2.unused) {
              if (param_2.unused != 0xa76b) goto switchD_0042f75e_caseD_9caa;
              goto switchD_004300ff_caseD_9d29;
            }
          }
          piVar14 = (int *)FUN_005b87b0();
          iVar7 = FUN_004ca930();
          if (piVar14 == (int *)0x0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *piVar14;
          }
          if ((iVar7 < 0) || (iVar15 + -1 < iVar7)) {
            LVar16 = 0;
          }
          else {
            LVar16 = *(LPARAM *)(piVar14[2] + iVar7 * 4);
          }
          SendMessageA(*(HWND *)(piVar6[0x2a] + 8),0x111,iVar7 << 0x10 | HVar2.unused & 0xffffU,
                       LVar16);
          goto switchD_0042f75e_caseD_9caa;
        }
        switch(param_2.unused) {
        case 0xa774:
        case 0xa775:
        case 0xa776:
        case 0xa77b:
        case 0xa77c:
        case 0xa781:
        case 0xa782:
        case 0xa78a:
        case 0xa78b:
        case 0xa79f:
          goto switchD_004300ff_caseD_9d29;
        case 0xa778:
switchD_00431288_caseD_a778:
          SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x111,param_2.unused,0);
          break;
        case 0xa794:
          param_1 = (int *)FUN_005356a0();
          break;
        case 0xa795:
          lVar17 = FUN_005b8d80();
          if (lVar17 != 0) {
            param_1 = (int *)FUN_00535bf0();
          }
          break;
        case 0xa797:
          param_1 = (int *)FUN_00541900();
        }
        goto switchD_0042f75e_caseD_9caa;
      }
      goto switchD_004300ff_caseD_9d29;
    }
    if (0xc5fc < (uint)param_2.unused) {
      if (0xc61d < (uint)param_2.unused) {
        if ((uint)param_2.unused < 0xc86a) {
          if (param_2.unused == 0xc869) {
            if (piVar6[0x1e] != 0) {
              SendMessageA(*(HWND *)(piVar6[0x1e] + 8),0x111,0xc869,0);
            }
            goto switchD_0042f75e_caseD_9caa;
          }
          switch(param_2.unused) {
          case 0xc61e:
            FUN_004867e0();
            param_1 = (int *)FUN_00486a00();
            FUN_004868c0();
            break;
          case 0xc61f:
            FUN_004867e0();
            param_1 = (int *)FUN_00486d40();
            FUN_004868c0();
            break;
          case 0xc620:
            FUN_004867e0();
            param_1 = (int *)FUN_00486b00();
            FUN_004868c0();
            break;
          case 0xc621:
          case 0xc622:
          case 0xc623:
          case 0xc624:
          case 0xc625:
          case 0xc626:
            goto switchD_004315c4_caseD_c614;
          }
          goto switchD_0042f75e_caseD_9caa;
        }
        switch(param_2.unused) {
        case 0xc87b:
          param_1 = (int *)FUN_00564cb0();
          break;
        case 0xc87c:
          param_1 = (int *)FUN_00564cb0();
          break;
        case 0xc882:
          iVar7 = FUN_004292f0();
          if (iVar7 != 0) {
            FUN_00429380();
          }
          break;
        case 0xc883:
          goto switchD_004300ff_caseD_9d29;
        }
        goto switchD_0042f75e_caseD_9caa;
      }
      if (param_2.unused == 0xc61d) {
        FUN_004867e0();
        param_1 = (int *)FUN_00486bc0();
        FUN_004868c0();
        goto switchD_0042f75e_caseD_9caa;
      }
      switch(param_2.unused) {
      case 0xc604:
        FUN_004867e0();
        param_1 = (int *)FUN_004868f0();
        FUN_004868c0();
        break;
      case 0xc609:
        param_1 = (int *)FUN_0057c810();
        if (param_1 == (int *)0x0) {
          iVar7 = param_3->unused;
          _SfList_Destroy_4();
          if ((1 < iVar7) && (DAT_0064acb0 != 0)) {
            FUN_0057d6e0();
            _mbscpy(local_130,&DAT_0064aba4);
            iVar7 = FUN_00582670();
            if (iVar7 != 1) {
              FUN_0057d700();
              break;
            }
            _mbscpy(&DAT_0064aba4,local_130);
            DAT_0064acb0 = (uint)(in_stack_ffffffd4 == 0);
            UpdateWindow(pHVar12);
            FUN_0057d700();
          }
          iVar7 = FUN_0057ca40();
          if (iVar7 != 0) {
            param_1 = (int *)FUN_0057c950();
            if ((int)param_1 < 0) break;
            _mbscpy(&DAT_0064aba4,(uchar *)((int)&uStack_4c + 2));
            param_1 = (int *)FUN_0057ca40();
            if ((int)param_1 < 0) break;
          }
          param_1 = (int *)FUN_0057cb30();
          if (-1 < (int)param_1) {
            FUN_00551f00();
          }
        }
        break;
      case 0xc60a:
        param_1 = (int *)FUN_0042f250();
        if (-1 < (int)param_1) {
          FUN_00551f00();
        }
        break;
      case 0xc613:
      case 0xc618:
      case 0xc61a:
        goto switchD_004300ff_caseD_9d29;
      case 0xc614:
      case 0xc616:
      case 0xc61b:
        goto switchD_004315c4_caseD_c614;
      case 0xc617:
        DAT_006476c0 = (uint)(DAT_006476c0 == 0);
        FUN_004a4020();
        DAT_0064767c = DAT_0064767c | 4;
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    if (param_2.unused == 0xc5fc) {
switchD_004315c4_caseD_c614:
      param_1 = (int *)FUN_0043e040();
      goto switchD_0042f75e_caseD_9caa;
    }
    if (0xa7f6 < (uint)param_2.unused) {
      if (0xc58b < (uint)param_2.unused) {
        switch(param_2.unused) {
        case 0xc5b7:
          FUN_00459080();
          DAT_0064767c = DAT_0064767c | 4;
          break;
        case 0xc5b8:
          FUN_00459080();
          DAT_0064767c = DAT_0064767c | 4;
          break;
        case 0xc5e9:
          if ((DAT_0064b578 != 0) && ((DAT_0064761c & 0x4000) == 0)) {
            FUN_0057a940();
          }
          break;
        case 0xc5f5:
          FUN_004012e0();
        }
        goto switchD_0042f75e_caseD_9caa;
      }
      if (param_2.unused == 0xc58b) {
        iVar7 = FUN_0042e540();
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 3)) {
          FUN_004d48f0();
        }
        goto switchD_0042f75e_caseD_9caa;
      }
      switch(param_2.unused) {
      case 0xc4f4:
        DAT_00649ce4 = (uint)(DAT_00649ce4 == 0);
        Mixer_SetMetronomeMute((uint)(DAT_00649ce4 == 0));
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0xc578:
        goto switchD_004300ff_caseD_9d29;
      case 0xc57e:
        iVar7 = FUN_0042e540();
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 3)) {
          FUN_004d48f0();
        }
        break;
      case 0xc582:
        if ((DAT_0064762c == 0) || (*(int *)(DAT_0064762c + 0x80) == 0)) {
          FUN_0044e590();
        }
        else {
          SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0x80) + 8),0x111,0x621,0);
        }
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    if (param_2.unused == 0xa7f6) {
switchD_004300ff_caseD_9d29:
      SendMessageA(*(HWND *)(piVar6[0x2a] + 8),0x111,param_2.unused,0);
    }
    else {
      switch(param_2.unused) {
      case 0xa7a4:
        thunk_FUN_005744b0();
        break;
      case 0xa7a8:
        thunk_FUN_005744f0();
        break;
      case 0xa7aa:
        _SfHelp_ContextHelp_20();
        break;
      case 0xa7ac:
        if (DAT_0064b578 != 0) {
          FUN_0057a990();
        }
        break;
      case 0xa7b2:
        DAT_00649420 = (uint)(DAT_00649420 == 0);
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0xa7b9:
        DAT_0064761c = DAT_0064761c ^ 0x2000;
        break;
      case 0xa7bd:
      case 0xa7bf:
      case 0xa7f3:
        goto switchD_004300ff_caseD_9d29;
      case 0xa7f4:
        iVar7 = FUN_0042e540();
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 2)) {
          FUN_004d48f0();
        }
      }
    }
    goto switchD_0042f75e_caseD_9caa;
  }
  if (param_2.unused == 0x9e97) {
    param_1 = (int *)Mixer_CanAddFXBus();
    if (param_1 == (int *)0x0) {
      FUN_00422950();
      DAT_0064767c = DAT_0064767c | 4;
      goto switchD_0042f75e_caseD_9caa;
    }
    goto LAB_00430114;
  }
  if ((uint)param_2.unused < 0x9d74) {
    if (param_2.unused == 0x9d73) {
switchD_004300ff_caseD_9d70:
      if ((int *)param_4.unused == (int *)0x2) {
        FUN_00458050();
      }
      else if ((int *)param_4.unused == (int *)0x3) {
        FUN_00458050();
      }
      else if ((int *)param_4.unused == (int *)0x2a) {
        FUN_00458050();
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    if (0x9d0f < (uint)param_2.unused) {
      switch(param_2.unused) {
      case 0x9d10:
        pHVar12 = GetFocus();
        if ((pHVar12 == *(HWND *)(piVar6[0x2a] + 8)) || (pHVar12 == *(HWND *)(piVar6[0x1c] + 8))) {
          SVar4 = GetKeyState(0x10);
          if (SVar4 < 0) {
            SendMessageA(pHVar12,0x7f09,1,0);
          }
          else {
            SendMessageA(pHVar12,0x7f09,0,0);
          }
        }
        break;
      case 0x9d12:
        param_1 = (int *)FUN_004a7930();
        break;
      case 0x9d13:
        param_1 = (int *)FUN_004a7930();
        break;
      case 0x9d15:
switchD_004300ff_caseD_9d15:
        pHVar12 = GetFocus();
        if (pHVar12 == *(HWND *)(piVar6[0x2a] + 8)) {
          SendMessageA(pHVar12,0x7f07,(uint)(HVar2.unused == 0x9d15),0);
        }
        break;
      case 0x9d1c:
        pHVar12 = GetFocus();
        if (pHVar12 == *(HWND *)(piVar6[0x2a] + 8)) {
          SendMessageA(pHVar12,0x111,0xa092,0);
        }
        break;
      case 0x9d1f:
        DAT_00647788 = (uint)(DAT_00647788 == 0);
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d20:
        DAT_00647784 = (uint)(DAT_00647784 == 0);
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d21:
        DAT_0064778c = (uint)(DAT_0064778c == 0);
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d22:
        DAT_00649e0c = (uint)(DAT_00649e0c == 0);
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d23:
      case 0x9d24:
      case 0x9d25:
      case 0x9d26:
        FUN_00458e80();
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d27:
        FUN_00435c40();
        break;
      case 0x9d29:
        goto switchD_004300ff_caseD_9d29;
      case 0x9d2a:
        FUN_004352a0();
        break;
      case 0x9d2b:
        if (DAT_00647c24 != '\0') {
          if (DAT_00647d28 == 0) {
            SfPrintF();
          }
          else if (DAT_00647d28 == 1) {
            SfPrintF();
          }
          pHVar9 = (HCURSOR)_SfLoadCursor_8();
          pHVar9 = SetCursor(pHVar9);
          iVar7 = FUN_004050f0();
          if (iVar7 == 0) {
            _SfGetString_8();
            _SfGetString_8();
            SfMsgBox();
          }
          SetCursor(pHVar9);
          break;
        }
        _SfGetString_8();
LAB_0043100d:
        SfMsgBox();
        break;
      case 0x9d6d:
        goto LAB_0043010f;
      case 0x9d6e:
        FUN_004583c0();
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d6f:
        iVar7 = FUN_004584c0();
        if (iVar7 != 0) {
          FUN_004583c0();
        }
        FUN_00429480();
        DAT_0064767c = DAT_0064767c | 4;
        break;
      case 0x9d70:
        goto switchD_004300ff_caseD_9d70;
      case 0x9d71:
        FUN_00458030();
        FUN_00455250();
        break;
      case 0x9d72:
        FUN_005b8d80();
        FUN_00458030();
        FUN_00455250();
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    if (param_2.unused == 0x9d0f) {
      pHVar12 = GetFocus();
      if (pHVar12 != (HWND)0x0) {
        SendMessageA(pHVar12,0x303,0,0);
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    if ((uint)param_2.unused < 0x9cb2) {
      if (param_2.unused == 0x9cb1) {
        FUN_00578600();
        PostMessageA(pHVar12,0x10,0,0);
        goto switchD_0042f75e_caseD_9caa;
      }
      if (0x9ca6 < (uint)param_2.unused) {
        switch(param_2.unused) {
        case 0x9ca7:
          param_1 = (int *)FUN_0042f480();
          break;
        case 0x9ca8:
          param_1 = (int *)FUN_0042f4a0();
          break;
        case 0x9ca9:
          iVar7 = FUN_005b87b0();
          if ((iVar7 != 0) && (piVar6 = (int *)FUN_005b87b0(), *piVar6 != 0)) {
            param_1 = (int *)FUN_0042f4a0();
          }
          break;
        case 0x9cb0:
          FUN_005d8080();
        }
        goto switchD_0042f75e_caseD_9caa;
      }
      if (param_2.unused != 0x9ca6) {
        if ((uint)param_2.unused < 0x9c70) {
          if (param_2.unused == 0x9c6f) {
            SfPrintF();
            _Internet_BrowseWebPage_8();
            goto switchD_0042f75e_caseD_9caa;
          }
          if (param_2.unused == 2) {
            *(undefined4 *)(DAT_0064b108 + 0x5c) = 1;
            if (*(int *)(iVar7 + 0x74) != 0) {
              puVar1 = (uint *)(*(int *)(iVar7 + 0x74) + 0x1c);
              *puVar1 = *puVar1 | 1;
            }
            FUN_004e7610();
            goto switchD_0042f75e_caseD_9caa;
          }
          if (param_2.unused != 0x146b) goto switchD_0042f75e_caseD_9caa;
          goto switchD_00431288_caseD_a778;
        }
        if (param_2.unused == 0x9ca4) {
          iVar7 = FUN_004eb2d0();
          if (iVar7 != 0) {
            FUN_00578600();
            param_1 = (int *)FUN_00500660();
            DAT_0064767c = DAT_0064767c | 4;
          }
          goto switchD_0042f75e_caseD_9caa;
        }
        if (param_2.unused != 0x9ca5) goto switchD_0042f75e_caseD_9caa;
        param_1 = (int *)FUN_0042f250();
        goto LAB_0042f705;
      }
switchD_0042f821_caseD_9cc0:
      iVar7 = FUN_004eb2d0();
      if (iVar7 != 0) {
        FUN_00578600();
        param_1 = (int *)FUN_00500660();
        DAT_0064767c = DAT_0064767c | 4;
      }
      goto switchD_0042f75e_caseD_9caa;
    }
    switch(param_2.unused) {
    case 0x9cb6:
    case 0x9cb7:
    case 0x9cb8:
    case 0x9cb9:
    case 0x9cba:
    case 0x9cbb:
    case 0x9cbc:
    case 0x9cbd:
    case 0x9cbe:
    case 0x9cbf:
      param_1 = (int *)FUN_004ecd40();
      break;
    case 0x9cc0:
      goto switchD_0042f821_caseD_9cc0;
    case 0x9cc1:
      if (DAT_0064b570 != (int *)0x0) {
        param_4.unused = 0;
        iVar7 = (**(code **)(*DAT_0064b570 + 0x1c))();
        if (iVar7 == -0x7ffb1fc4) {
          FUN_0060ac30();
          iVar7 = (**(code **)(*DAT_0064b570 + 0x1c))();
        }
        if ((iVar7 == -0x7ffb1f53) || (iVar7 == -0x7ffb1f52)) {
          (**(code **)(*DAT_0064b570 + 0x28))();
          iVar7 = (**(code **)(*DAT_0064b570 + 0x1c))();
          if (iVar7 == -0x7ffb1fc4) {
            FUN_0060ac30();
            iVar7 = (**(code **)(*DAT_0064b570 + 0x1c))();
          }
        }
        if (iVar7 == -0x7ffb1f14) {
          SfPrintF();
          SfMsgBox();
          param_1 = (int *)0x0;
          break;
        }
        if (iVar7 < 0) {
          SfMsgBox();
          param_1 = (int *)0x0;
          break;
        }
        param_2.unused = 0;
        param_1 = (int *)FUN_00578330();
        if (param_2.unused != 0) break;
        if ((int)param_1 < 0) {
          SfMsgBox();
          break;
        }
        FUN_004e7610();
        puVar5 = (uchar *)FUN_005785d0();
        _mbscpy((uchar *)local_12c,puVar5);
        MultiByteToWideChar(0,1,(LPCSTR)local_12c,-1,local_438,0x104);
        local_232 = 0;
        iVar7 = FUN_004e7770();
        if (iVar7 == 0) {
          local_1270[0] = L'\0';
          local_848[0] = '\0';
          param_3 = (HWND)(DAT_0064b138 + 0x1bc);
          puVar5 = (uchar *)_SfSummary_GetItemText_8();
          if ((puVar5 != (uchar *)0x0) && (*puVar5 != '\0')) {
            _mbscat(local_848,(uchar *)"Title=");
            _mbscat(local_848,puVar5);
            _mbscat(local_848,"\r\n");
          }
          puVar5 = (uchar *)_SfSummary_GetItemText_8();
          if ((puVar5 != (uchar *)0x0) && (*puVar5 != '\0')) {
            _mbscat(local_848,(uchar *)"Artist=");
            _mbscat(local_848,puVar5);
            _mbscat(local_848,"\r\n");
          }
          puVar5 = (uchar *)_SfSummary_GetItemText_8();
          if ((puVar5 != (uchar *)0x0) && (*puVar5 != '\0')) {
            _mbscat(local_848,(uchar *)"Engineer=");
            _mbscat(local_848,puVar5);
            _mbscat(local_848,"\r\n");
          }
          puVar5 = (uchar *)_SfSummary_GetItemText_8();
          if ((puVar5 != (uchar *)0x0) && (*puVar5 != '\0')) {
            _mbscat(local_848,(uchar *)"Copyright=");
            _mbscat(local_848,puVar5);
            _mbscat(local_848,"\r\n");
          }
          MultiByteToWideChar(0,1,(LPCSTR)local_848,-1,local_1270,0x410);
          local_a52 = 0;
          param_1 = (int *)(**(code **)(*DAT_0064b570 + 0x24))();
          if ((int)param_1 < 0) {
            SfMsgBox();
          }
          break;
        }
LAB_0042f705:
        FUN_00578600();
        break;
      }
      goto LAB_0042fc07;
    case 0x9cc2:
      if (DAT_0064b570 != (int *)0x0) {
        iVar7 = (**(code **)(*DAT_0064b570 + 0x28))();
        if (iVar7 < 0) {
          if (iVar7 == -0x7ffb1f14) {
            SfPrintF();
            SfMsgBox();
            param_1 = (int *)0x0;
          }
          else {
            SfMsgBox();
            param_1 = (int *)0x0;
          }
        }
        else {
          param_1 = (int *)FUN_00575710();
        }
        break;
      }
LAB_0042fc07:
      SfMsgBox();
      break;
    case 0x9cc3:
      if (DAT_0064b574 == (HWND)0x0) {
        SfMsgBox();
        break;
      }
      local_438[0] = L'\0';
      MultiByteToWideChar(0,1,&DAT_00649cf8,-1,local_438,0x104);
      local_232 = 0;
      param_1 = (int *)0x8007000e;
      pvVar8 = GlobalAlloc(0x42,0x10400);
      pMem = GlobalLock(pvVar8);
      if (pMem == (HWND)0x0) break;
      SetCapture((HWND)*piVar6);
      pHVar9 = (HCURSOR)_SfLoadCursor_8();
      pHVar9 = SetCursor(pHVar9);
      param_3 = (HWND)0x0;
      param_1 = (int *)(**(code **)(*DAT_0064b510 + 0xc))();
      if (-1 < (int)param_1) {
        pMem = param_3;
        iVar7 = (**(code **)(param_3->unused + 0x20))();
        param_1 = (int *)0x8007000e;
        pvVar8 = GlobalAlloc(0x42,iVar7 * 0x208);
        lpWideCharStr = GlobalLock(pvVar8);
        if (lpWideCharStr != (wchar_t *)0x0) {
          puVar5 = (uchar *)_SfGetString_8();
          _mbstok(puVar5,"\t*");
          puVar5 = _mbstok((uchar *)0x0,"\t)");
          MultiByteToWideChar(0,1,(LPCSTR)puVar5,-1,lpWideCharStr,iVar7 * 0x104);
          lpWideCharStr[iVar7 * 0x104 + -1] = L'\0';
          param_1 = (int *)(**(code **)(param_3->unused + 0x14))();
          if (-1 < (int)param_1) {
            param_4.unused = 0;
            iVar7 = (**(code **)(param_3->unused + 0xc))();
            _Str = pMem;
            while (iVar7 == 0) {
              iVar7 = (*(code *)**(undefined4 **)param_4.unused)();
              if (-1 < iVar7) {
                puStack_38 = local_640;
                pHStack_40 = local_230;
                pHStack_3c = (HWND)0x104;
                pHStack_44 = (HWND)0x0;
                uStack_48 = 0;
                uStack_4c = 0;
                iVar7 = (**(code **)(_DAT_00000000 + 0x28))();
                if (-1 < iVar7) {
                  _SubStr = wcstok((wchar_t *)local_230,L"*,;");
                  while ((_SubStr != (wchar_t *)0x0 &&
                         (pwVar10 = wcsstr(lpWideCharStr,_SubStr), pwVar10 == (wchar_t *)0x0))) {
                    wcscat(lpWideCharStr,L"|");
                    wcscat(lpWideCharStr,_SubStr);
                    uStackY_68 = 0x42fe03;
                    _SubStr = wcstok((wchar_t *)0x0,L"*,;");
                  }
                }
                (**(code **)(_DAT_00000000 + 8))();
              }
                    /* WARNING: Load size is inaccurate */
              puStack_38 = (undefined1 *)0x42fe23;
              (**(code **)(*param_4.unused + 8))();
              pHStack_3c = &param_4;
              puStack_38 = (undefined1 *)0x0;
              param_4.unused = 0;
              pHStack_40 = (HWND)0x1;
              pHStack_44 = param_3;
              uStack_48 = 0x42fe36;
              iVar7 = (**(code **)(param_3->unused + 0xc))();
            }
            SetCursor(pHVar9);
            ReleaseCapture();
            puStack_38 = &stack0xffffffd8;
            pHStack_44 = DAT_0064b574;
            uStack_48 = 0x42fe6f;
            pHStack_40 = pHVar12;
            pHStack_3c = _Str;
            pMem = _Str;
            param_1 = (int *)(**(code **)(DAT_0064b574->unused + 0x10))();
            if (((int)param_1 < 0) || (sVar11 = wcslen((wchar_t *)_Str), sVar11 == 0)) {
              if (param_1 == (int *)0x8004e0ec) {
                SfPrintF();
                SfMsgBox();
              }
              else if (param_1 == (int *)0x8004e0b1) {
                SfMsgBox();
              }
              else {
                if (-1 < (int)param_1) goto LAB_0042ffce;
                SfMsgBox();
              }
              param_1 = (int *)0x0;
            }
            else {
              param_2.unused = 0;
              pHVar9 = (HCURSOR)_SfLoadCursor_8();
              pHVar9 = SetCursor(pHVar9);
              while( true ) {
                if ((_Str == (HWND)0x0) || ((short)_Str->unused != 0)) {
                  puStack_38 = (undefined1 *)0x42fedb;
                  WideCharToMultiByte(0,0,(LPCWSTR)_Str,-1,(LPSTR)local_12c,0x104,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                else if (&stack0x00000000 != (undefined1 *)0x12c) {
                  local_12c[0].unused._0_1_ = 0;
                }
                _SfGetPathNameFromFilePath_12();
                iVar7 = lstrlenA((LPCSTR)local_12c);
                if (iVar7 == 0) break;
                puStack_38 = (undefined1 *)0x0;
                pHStack_40 = local_12c;
                pHStack_3c = (HWND)0x0;
                pHStack_44 = &param_2;
                uStack_48 = 0x42ff23;
                FUN_004ec280();
                sVar11 = wcslen((wchar_t *)_Str);
                _Str = (HWND)((int)&_Str->unused + sVar11 * 2 + 2);
              }
              if ((param_1 == (int *)0x0) && (param_2.unused != 0)) {
                param_1 = (int *)FUN_004ec630();
                FUN_004ec820();
                param_2.unused = 0;
              }
              SetCursor(pHVar9);
            }
          }
LAB_0042ffce:
          pvVar8 = GlobalHandle(lpWideCharStr);
          GlobalUnlock(pvVar8);
          pvVar8 = GlobalHandle(lpWideCharStr);
          GlobalFree(pvVar8);
        }
        (**(code **)(param_3->unused + 8))();
        param_3 = (HWND)0x0;
      }
      pvVar8 = GlobalHandle(pMem);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(pMem);
      GlobalFree(pvVar8);
      break;
    case 0x9d08:
    case 0x9d09:
switchD_0042f821_caseD_9d08:
      FUN_004e8aa0();
      break;
    case 0x9d0b:
      pHVar12 = GetFocus();
      if (pHVar12 != (HWND)0x0) {
        SendMessageA(pHVar12,0x300,0,0);
      }
      break;
    case 0x9d0c:
      pHVar12 = GetFocus();
      if (pHVar12 != (HWND)0x0) {
        SendMessageA(pHVar12,0x301,0,0);
      }
      break;
    case 0x9d0d:
      pHVar12 = GetFocus();
      if (pHVar12 != (HWND)0x0) {
        SendMessageA(pHVar12,0x302,0,0);
      }
      break;
    case 0x9d0e:
      pHVar12 = GetFocus();
      if (pHVar12 == *(HWND *)(piVar6[0x2a] + 8)) {
        SendMessageA(pHVar12,0x111,0x9d0e,0);
      }
    }
    goto switchD_0042f75e_caseD_9caa;
  }
  if (0x9e11 < (uint)param_2.unused) {
    switch(param_2.unused) {
    case 0x9e2a:
    case 0x9e2b:
      FUN_00411410();
      FUN_004ca540();
      break;
    case 0x9e2c:
    case 0x9e2d:
      FUN_004ca5a0();
      break;
    case 0x9e2e:
    case 0x9e31:
      FUN_004114a0();
      break;
    case 0x9e2f:
      FUN_00412570();
      break;
    case 0x9e30:
      FUN_004125d0();
      break;
    case 0x9e35:
      DAT_00647aa8 = (uint)(DAT_00647aa8 == 0);
      FUN_00453070();
      break;
    case 0x9e36:
      DAT_00647aac = (uint)(DAT_00647aac == 0);
      FUN_00453070();
      break;
    case 0x9e37:
      DAT_006476b8 = (uint)(DAT_006476b8 == 0);
      FUN_004a4020();
      FUN_00453250();
      iVar7 = FUN_004e4c90();
      if (iVar7 != 0) {
        FUN_004e4c90();
        FUN_00453250();
        DAT_0064767c = DAT_0064767c | 4;
        break;
      }
      goto LAB_00430114;
    case 0x9e38:
      DAT_006476bc = (uint)(DAT_006476bc == 0);
      FUN_004a4020();
      break;
    case 0x9e39:
      DAT_006476c4 = (uint)(DAT_006476c4 == 0);
      FUN_00453250();
      iVar7 = FUN_004e4c90();
      if (iVar7 != 0) {
        FUN_004e4c90();
        FUN_00453250();
      }
      break;
    case 0x9e3e:
    case 0x9e3f:
    case 0x9e40:
    case 0x9e41:
    case 0x9e42:
    case 0x9e43:
    case 0x9e44:
    case 0x9e45:
    case 0x9e46:
    case 0x9e47:
    case 0x9e48:
    case 0x9e49:
    case 0x9e4a:
    case 0x9e4b:
    case 0x9e4c:
    case 0x9e4d:
    case 0x9e4e:
      DAT_006476c8 = *(undefined4 *)(param_2.unused * 8 + 0x5c1800);
      DAT_006476cc = *(undefined4 *)(param_2.unused * 8 + 0x5c1804);
      FUN_004a4020();
      iVar7 = FUN_004e4c90();
      if (iVar7 != 0) {
        FUN_004a4020();
      }
      break;
    case 0x9e5c:
      param_1 = (int *)FUN_005fc6f0();
      DAT_0064767c = DAT_0064767c | 4;
      break;
    case 0x9e5d:
      param_1 = (int *)FUN_005fc850();
      DAT_0064767c = DAT_0064767c | 4;
      break;
    case 0x9e5f:
      param_1 = (int *)FUN_005fc8e0();
      DAT_0064767c = DAT_0064767c | 4;
      break;
    case 0x9e66:
    case 0x9e67:
    case 0x9e68:
    case 0x9e69:
    case 0x9e6a:
    case 0x9e6b:
    case 0x9e6c:
    case 0x9e6d:
    case 0x9e6e:
    case 0x9e6f:
    case 0x9e70:
    case 0x9e71:
    case 0x9e72:
    case 0x9e75:
    case 0x9e76:
    case 0x9e77:
      goto switchD_004300ff_caseD_9d29;
    case 0x9e8e:
      FUN_0043b840();
      break;
    case 0x9e8f:
      iVar7 = FUN_004f8900();
      if (iVar7 == 0) {
        param_1 = (int *)0x8007000e;
        DAT_0064767c = DAT_0064767c | 4;
        break;
      }
LAB_00430114:
      DAT_0064767c = DAT_0064767c | 4;
      break;
    case 0x9e96:
      iVar7 = FUN_00422c80();
      if (iVar7 != 0) {
        DAT_0064767c = DAT_0064767c | 4;
      }
    }
    goto switchD_0042f75e_caseD_9caa;
  }
  if (0x9e01 < (uint)param_2.unused) {
    param_1 = (int *)Mixer_CanAddFXBus();
    if (param_1 == (int *)0x0) {
      FUN_00422950();
    }
    goto switchD_0042f75e_caseD_9caa;
  }
  switch(param_2.unused) {
  case 0x9d74:
    goto LAB_0043010f;
  case 0x9d76:
    FUN_00458430();
    DAT_0064767c = DAT_0064767c | 4;
    break;
  case 0x9d7a:
    FUN_00458480();
    DAT_0064767c = DAT_0064767c | 4;
    break;
  case 0x9d7b:
LAB_0043010f:
    FUN_004583a0();
    goto LAB_00430114;
  case 0x9d7c:
    FUN_004583f0();
    DAT_0064767c = DAT_0064767c | 4;
    break;
  case 0x9dd6:
    FUN_004c76b0();
    break;
  case 0x9dd7:
    FUN_004a0fa0();
    break;
  case 0x9dda:
    FUN_004595e0();
    FUN_00412500();
    break;
  case 0x9ddb:
    FUN_004f0400();
    if (((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x6c) != 0)) &&
       ((((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x6c) + 0xc) & 3) == 3 &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((int *)HVar3.unused == (int *)0x0) break;
    iVar7 = *(int *)(DAT_0064762c + 0x6c);
    goto LAB_00430651;
  case 0x9ddc:
    FUN_004e46f0();
    if (((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x70) != 0)) &&
       ((((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x70) + 0xc) & 3) == 3 &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((int *)HVar3.unused == (int *)0x0) break;
    iVar7 = *(int *)(DAT_0064762c + 0x70);
    goto LAB_00430651;
  case 0x9ddd:
    FUN_005732a0();
    if ((((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
        (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x74) + 0xc) & 3) == 3)) &&
       (DAT_0064aa4c != 0)) {
      FUN_00411410();
    }
    FUN_00412500();
    break;
  case 0x9dde:
    FUN_00492700();
    if (((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x78) != 0)) &&
       ((((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x78) + 0xc) & 3) == 3 &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if (((int *)HVar3.unused != (int *)0x0) && (*(int *)(DAT_0064762c + 0x78) != 0)) {
      SetFocus(*(HWND *)(*(int *)(DAT_0064762c + 0x78) + 8));
    }
    break;
  case 0x9ddf:
    FUN_00551f00();
    if (((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x7c) != 0)) &&
       ((((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x7c) + 0xc) & 3) == 3 &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((((int *)HVar3.unused != (int *)0x0) && (*(int *)(DAT_0064762c + 0x7c) != 0)) &&
       (pHVar12 = (HWND)FUN_00551f90(), pHVar12 != (HWND)0x0)) {
      SetFocus(pHVar12);
    }
    break;
  case 0x9de0:
    FUN_00428480();
    if (((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x80) != 0)) &&
       ((((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x80) + 0xc) & 3) == 3 &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    break;
  case 0x9de1:
    if (DAT_0064b4e4 == 0) {
      iVar7 = FUN_00601ab0();
      if (iVar7 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar13 = (param_2.unused & 0xffffU) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar13) {
          DAT_0064b4f0 = 0;
          DAT_0064b4e4 = uVar13;
          _DAT_0064b4f4 = pHVar12;
        }
      }
    }
    HVar2.unused = param_4.unused;
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) break;
    FUN_00500110();
    if ((param_3 != (HWND)*piVar6) &&
       (((*(int *)(DAT_0064762c + 0x84) != 0 &&
         (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x84) + 0xc) & 3) == 3)) &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((int *)HVar2.unused == (int *)0x0) break;
    iVar7 = *(int *)(DAT_0064762c + 0x84);
    goto LAB_00430651;
  case 0x9de2:
    if (DAT_0064b4e4 == 0) {
      iVar7 = FUN_00601ab0();
      if (iVar7 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar13 = (param_2.unused & 0xffffU) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar13) {
          DAT_0064b4f0 = 0;
          DAT_0064b4e4 = uVar13;
          _DAT_0064b4f4 = pHVar12;
        }
      }
    }
    HVar2.unused = param_4.unused;
    if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
      FUN_00500310();
      if (((param_3 != (HWND)*piVar6) &&
          ((*(int *)(DAT_0064762c + 0x88) != 0 &&
           (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x88) + 0xc) & 3) == 3)))) &&
         (DAT_0064aa4c != 0)) {
        FUN_00411410();
      }
      FUN_00412500();
      if (((int *)HVar2.unused != (int *)0x0) && (*(int *)(DAT_0064762c + 0x88) != 0)) {
        SetFocus(*(HWND *)(*(int *)(DAT_0064762c + 0x88) + 8));
      }
    }
    break;
  case 0x9de3:
    if (DAT_0064b4e4 == 0) {
      iVar7 = FUN_00601ab0();
      if (iVar7 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar13 = (param_2.unused & 0xffffU) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar13) {
          DAT_0064b4f0 = 0;
          DAT_0064b4e4 = uVar13;
          _DAT_0064b4f4 = pHVar12;
        }
      }
    }
    HVar2.unused = param_4.unused;
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) break;
    FUN_00500390();
    if ((param_3 != (HWND)*piVar6) &&
       (((*(int *)(DAT_0064762c + 0x8c) != 0 &&
         (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x8c) + 0xc) & 3) == 3)) &&
        (DAT_0064aa4c != 0)))) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((int *)HVar2.unused == (int *)0x0) break;
    iVar7 = *(int *)(DAT_0064762c + 0x8c);
LAB_00430651:
    if (iVar7 != 0) {
      SetFocus(*(HWND *)(iVar7 + 8));
    }
    break;
  case 0x9de4:
    FUN_005084b0();
    if ((((param_3 != (HWND)*piVar6) && (*(int *)(DAT_0064762c + 0x90) != 0)) &&
        (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0x90) + 0xc) & 3) == 3)) &&
       (DAT_0064aa4c != 0)) {
      FUN_00411410();
    }
    FUN_00412500();
    if ((((int *)HVar3.unused != (int *)0x0) && (*(int *)(DAT_0064762c + 0x90) != 0)) &&
       (pHVar12 = (HWND)FUN_0052b630(), pHVar12 != (HWND)0x0)) {
      SetFocus(pHVar12);
    }
    break;
  case 0x9de9:
    FUN_0040c3b0();
    break;
  case 0x9dee:
  case 0x9def:
  case 0x9df0:
  case 0x9df1:
  case 0x9df2:
  case 0x9df3:
  case 0x9df4:
  case 0x9df5:
  case 0x9df6:
  case 0x9df7:
  case 0x9df8:
  case 0x9df9:
    iVar7 = FUN_0043b0e0();
    if (iVar7 == 0) {
      param_1 = (int *)0x8007000e;
    }
    if (DAT_0064b184 != 0) {
      DAT_0064767c = DAT_0064767c | 4;
    }
  }
switchD_0042f75e_caseD_9caa:
  if (-1 < (int)param_1) {
    param_1 = (int *)_SfErrorHandler_GetLastError_0();
  }
  if (((int)param_1 < 0) || (param_1 == (int *)0x4e005)) {
    _SfErrorHandler_MsgBox_24();
  }
  return;
}


