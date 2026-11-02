/* Module: vegas30.exe
   Function: FUN_0041c730
   Address: 0041c730
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0041c730(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCSTR lpString2;
  uint uVar4;
  EMIXERTYPE EVar5;
  long lVar6;
  BOOL BVar7;
  LRESULT LVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  char *lpString2_00;
  WPARAM WVar9;
  bool bVar10;
  undefined4 uVar11;
  HWND pHVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *local_118;
  int *local_114;
  int *local_110;
  int local_10c;
  ulong local_108;
  char local_104 [260];
  
  local_110 = (int *)0x0;
  if (param_2 == 0xcb) {
    return (int *)0x0;
  }
  if (param_2 == 0xcd) {
    switch(*(undefined4 *)(param_1 + 0x8c)) {
    case 2:
      iVar2 = param_3[2];
      if (iVar2 == 0x1003) {
        FUN_0044ed00(param_3[3],param_3[4],0,0x800);
        return (int *)0x1;
      }
      if (iVar2 == 0x1000) {
        iVar2 = *(int *)(param_1 + 0x94);
        local_114 = *(int **)(iVar2 + 8);
        local_108 = FUN_005d15e0(iVar2,param_3[3]);
        local_10c = FUN_0041e020(param_1,param_3[3],local_108);
        if (local_10c == 0) {
          return local_110;
        }
        FUN_005b8630(*(undefined4 *)(param_1 + 700));
        local_118 = (int *)FUN_00404830(*(undefined4 *)(param_1 + 8),local_10c,0,2);
        if (local_118 < (int *)0xa1c3) {
          if (local_118 == (int *)0xa1c2) {
            FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                         *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
            FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
            Transport_Suspend();
            FUN_005d1750(iVar2,param_3[3],1);
            Transport_Resume(0);
            FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
            FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
            FUN_00419310(param_1);
            iVar2 = param_3[3];
            pHVar12 = *(HWND *)(param_1 + 0x1b4);
LAB_0041c97e:
            SendMessageA(pHVar12,0x602,iVar2 - 1,0);
LAB_0041c984:
            piVar1 = (int *)(param_3[3] + -1);
            goto LAB_0041c989;
          }
          if (local_118 == (int *)0x0) {
            return local_110;
          }
          if (local_118 == (int *)0xa1c1) {
            FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                         *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x21b,0);
            FUN_004ea9f0(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),param_3[3],
                         0x22);
            FUN_005d16a0(iVar2,param_3[3],local_108 == 0);
            FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
            FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
            FUN_005b41d0(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                         *(undefined4 *)(param_1 + 0x94));
            FUN_00419310(param_1);
            InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
            return local_110;
          }
        }
        else {
          if (local_118 == (int *)0xa1c3) {
            FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                         *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
            FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
            Transport_Suspend();
            FUN_005d1750(iVar2,param_3[3],0);
            Transport_Resume(0);
            FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
            FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
            FUN_00419310(param_1);
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[3] + 1,0);
            piVar1 = (int *)(param_3[3] + 1);
            goto LAB_0041c989;
          }
          if (local_118 == (int *)0xa1c4) {
            FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                         *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
            FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
            Transport_Suspend();
            FUN_005d1250(local_114,iVar2,param_3[3]);
            Transport_Resume(0);
            FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
            FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
            iVar2 = FUN_005d1590(iVar2);
            if (iVar2 == 0) {
              *(uint *)*local_114 = *(uint *)*local_114 | 8;
              DestroyWindow(*(HWND *)(param_1 + 8));
              return local_110;
            }
            FUN_00419310(param_1);
            if ((int)param_3[3] < 1) {
              piVar1 = (int *)0x0;
            }
            else {
              piVar1 = (int *)(param_3[3] + -1);
            }
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,(WPARAM)piVar1,0);
            goto LAB_0041c989;
          }
        }
        if (local_118 < (int *)0x206c) {
          return local_110;
        }
        if ((int *)0x2133 < local_118) {
          return local_110;
        }
        FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                     *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
        piVar1 = local_118;
        SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,(WPARAM)(local_118 + -0x81b),0);
        piVar1 = piVar1 + -0x81b;
        goto LAB_0041c989;
      }
      if (iVar2 != 0x1001) {
        if (iVar2 == 0x1002) {
          FUN_005b8630(*(undefined4 *)(param_1 + 700));
          FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
          FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x21b,0);
          FUN_004ea9f0(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),param_3[3],
                       0x22);
          FUN_005d16a0(*(undefined4 *)(param_1 + 0x94),param_3[3],param_3[4] == 0);
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
          FUN_005b41d0(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94));
          FUN_00419310(param_1);
          InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
          return local_110;
        }
        if (iVar2 != -0x208) {
          return (int *)0x0;
        }
        switch((int)(param_3[0x1a] << 0x18) >> 0x1e) {
        case 0:
          uVar15 = 0x50c3;
          break;
        case 1:
          iVar2 = FUN_0041c4d0(param_1,param_3[0x1a] & 0x3f);
          if (iVar2 == 0) {
            uVar15 = 0x50c5;
          }
          else {
            uVar15 = 0x50c4;
          }
          break;
        case 2:
          uVar15 = 0x50c6;
          break;
        case 3:
          uVar15 = 0x50c7;
          break;
        default:
          uVar15 = 0x50c8;
        }
        lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar15);
        if (lpString2 == (LPCSTR)0x0) {
          return local_110;
        }
        lstrcpynA((LPSTR)(param_3 + 4),lpString2,0x50);
        *(undefined1 *)((int)param_3 + 0x5f) = 0;
        return local_110;
      }
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                   *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
      FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
      Transport_Suspend();
      FUN_005d17b0(*(undefined4 *)(param_1 + 0x94),param_3[3],param_3[4]);
LAB_0041dada:
      Transport_Resume(0);
      FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
LAB_0041daf9:
      FUN_00419310(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[4],0);
      FUN_0041a890(param_1,param_3[4]);
      FUN_00418090(param_1,param_3[4]);
      return local_110;
    case 3:
    case 4:
      goto switchD_0041c778_caseD_3;
    case 5:
      iVar2 = param_3[2];
      if (iVar2 == 0x1003) goto LAB_0041d2e6;
      if (iVar2 != 0x1000) {
        if (iVar2 == 0x1001) {
          local_118 = (int *)0x0;
          FUN_0041aa30(param_1,param_3[3],&local_118);
          if (local_118 != (int *)0x0) {
            Transport_Suspend();
            (**(code **)(**(int **)(param_1 + 0x90) + 0x98))
                      (*(int **)(param_1 + 0x90),local_118,param_3[4] - param_3[3]);
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            Transport_Resume(0);
          }
          FUN_00419310(param_1);
          SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[4],0);
          FUN_0041a890(param_1,param_3[4]);
          FUN_00418090(param_1,param_3[4]);
          return local_110;
        }
        if (iVar2 != 0x1002) {
          return (int *)0x0;
        }
        FUN_0041aa30(param_1,param_3[3],&local_118);
        if (local_118 == (int *)0x0) {
          return local_110;
        }
        (**(code **)(*local_118 + 0x4c))(local_118,param_3[4] == 0);
        FUN_00419310(param_1);
        InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        return unaff_EBX;
      }
      uVar15 = *(undefined4 *)(param_1 + 0x94);
      local_10c = FUN_005d15e0(uVar15,param_3[3]);
      local_114 = (int *)FUN_0041e020(param_1,param_3[3],local_10c);
      if (local_114 == (int *)0x0) {
        return local_110;
      }
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      piVar1 = (int *)FUN_00404830(*(undefined4 *)(param_1 + 8),local_114,0,2);
      local_118 = piVar1;
      if (piVar1 < (int *)0xa1c3) {
        if (piVar1 == (int *)0xa1c2) {
          FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
          FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
          FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
          Transport_Suspend();
          FUN_005d1750(uVar15,param_3[3],1);
          Transport_Resume(0);
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
          FUN_00419310(param_1);
          pHVar12 = *(HWND *)(param_1 + 0x1b4);
          if (pHVar12 != (HWND)0x0) {
            iVar2 = param_3[3];
            goto LAB_0041c97e;
          }
          goto LAB_0041c984;
        }
        if (piVar1 == (int *)0x0) {
          return local_110;
        }
        if (piVar1 == (int *)0xa1c1) {
          FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
          FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x21b,0);
          FUN_004ea9f0(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),param_3[3],
                       0x22);
          FUN_005d16a0(uVar15,param_3[3],local_10c == 0);
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
          FUN_005b41d0(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94));
          FUN_00419310(param_1);
          if (*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) {
            InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
          }
          FUN_0041a890(param_1,*(undefined4 *)(param_1 + 0x1bc));
          return local_110;
        }
      }
      else {
        if (piVar1 == (int *)0xa1c3) {
          FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
          FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x218,0);
          FUN_004ea250(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),0x21,0);
          Transport_Suspend();
          FUN_005d1750(uVar15,param_3[3],0);
          Transport_Resume(0);
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
          FUN_00419310(param_1);
          if (*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) {
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[3] + 1,0);
          }
          FUN_0041a890(param_1,param_3[3] + 1);
          return local_110;
        }
        if (piVar1 == (int *)0xa1c4) {
          local_118 = (int *)0x0;
          FUN_0041aa30(param_1,param_3[3],&local_118);
          iVar2 = FUN_00418e90(*(undefined4 *)(param_1 + 0x90));
          if (local_118 != (int *)0x0) {
            iVar3 = Transport_IsPreviewPlaying();
            if (iVar3 != 0) {
              FUN_00561900(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),0,
                           *(undefined4 *)(param_1 + 0x90));
            }
            (**(code **)(**(int **)(param_1 + 0x90) + 0x90))(*(int **)(param_1 + 0x90),local_118);
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            if (iVar3 != 0 && iVar2 != 1) {
              FUN_005618a0(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),0,
                           *(undefined4 *)(param_1 + 0x90));
            }
          }
          if (iVar2 != 1) {
            FUN_00419310(param_1);
            if ((int)param_3[3] < 1) {
              WVar9 = 0;
            }
            else {
              WVar9 = param_3[3] - 1;
            }
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,WVar9,0);
            FUN_0041a890(param_1,WVar9);
            return local_110;
          }
          *(uint *)**(undefined4 **)(param_1 + 700) =
               *(uint *)**(undefined4 **)(param_1 + 700) | 0x8000;
          goto LAB_0041cab4;
        }
      }
      if (((int *)0x206b < piVar1) && (piVar1 < (int *)0x2134)) {
        SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,(WPARAM)(piVar1 + -0x81b),0);
        FUN_0041a890(param_1,piVar1 + -0x81b);
        return local_110;
      }
    default:
      goto switchD_0041c778_default;
    }
  }
  iVar2 = param_3[2];
  if (iVar2 == -0x66) {
    WVar9 = param_3[3];
    if (((WVar9 != 0xd) && (WVar9 != 0x1b)) && (WVar9 != 0x20)) {
      return (int *)0x0;
    }
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      return (int *)0x0;
    }
    SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,WVar9,
                 CONCAT22(*(undefined2 *)(param_3 + 5),*(undefined2 *)(param_3 + 4)));
    return local_110;
  }
  if (iVar2 == -0x209) {
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      return (int *)0x0;
    }
    SetWindowPos((HWND)*param_3,*(HWND *)(param_1 + 8),0,0,0,0,0x13);
    SetWindowPos(*(HWND *)(param_1 + 8),(HWND)*param_3,0,0,0,0,0x13);
    return local_110;
  }
  if (iVar2 != -0x208) {
    return (int *)0x0;
  }
  switch(param_2) {
  case 0xce:
    pHVar12 = *(HWND *)(param_1 + 0x254);
    BVar7 = IsWindowEnabled(pHVar12);
    if (BVar7 == 0) {
      return local_110;
    }
    LVar8 = SendMessageA(pHVar12,0x147,0,0);
    if (LVar8 == 0) {
      return local_110;
    }
    GetWindowTextA(pHVar12,(LPSTR)(param_3 + 4),0x50);
    return local_110;
  default:
    goto switchD_0041c778_default;
  case 400:
    uVar15 = 0x83;
    break;
  case 0x191:
    uVar15 = 0x84;
    break;
  case 0x192:
    EVar5 = Mixer_GetMixerType((ISFMixer *)0x0);
    if (EVar5 != 1) {
      if ((int)EVar5 < 2) {
        return local_110;
      }
      if (4 < (int)EVar5) {
        return local_110;
      }
      uVar15 = 0x50ce;
      break;
    }
    lpString2_00 = (char *)_SfGetString_8(DAT_00647204,0x50cd);
    lVar6 = Mixer_GetFXBusAssignment(*(ulong *)(param_1 + 0x88),&local_108);
    if (lVar6 == 0) {
      Mixer_GetValidFXPortAssigmentName(local_104,0x104,local_108,(ISFMixer *)0x0);
      lpString2_00 = local_104;
    }
    goto LAB_0041ddbe;
  case 0x193:
    uVar15 = 0x50c9;
    break;
  case 0x194:
    uVar15 = 0x85;
    break;
  case 0x195:
    uVar15 = 0x86;
    break;
  case 0x196:
    uVar15 = 0x50ca;
    break;
  case 0x198:
    iVar2 = Transport_IsPreviewPlaying();
    if (iVar2 == 0) {
      lpString2_00 = "Preview";
    }
    else {
      lpString2_00 = "Stop Preview";
    }
    goto LAB_0041ddbe;
  case 0x19a:
    lpString2_00 = "Loop Preview";
    goto LAB_0041ddbe;
  case 0x19b:
    lpString2_00 = "Remove Selected Plug-In";
    goto LAB_0041ddbe;
  }
  lpString2_00 = (char *)_SfGetString_8(DAT_00647204,uVar15);
LAB_0041ddbe:
  if (lpString2_00 != (LPCSTR)0x0) {
    lstrcpynA((LPSTR)(param_3 + 4),lpString2_00,0x50);
    *(undefined1 *)((int)param_3 + 0x5f) = 0;
  }
switchD_0041c778_default:
  return local_110;
switchD_0041c778_caseD_3:
  iVar2 = param_3[2];
  if (iVar2 == 0x1003) {
LAB_0041d2e6:
    FUN_0044ed00(param_3[3],param_3[4],0,0x800);
    return (int *)0x1;
  }
  if (iVar2 == 0x1000) {
    bVar10 = true;
    FUN_0041aa30(param_1,param_3[3],&local_114);
    if (local_114 != (int *)0x0) {
      iVar2 = (**(code **)(*local_114 + 0x50))(local_114);
      bVar10 = iVar2 == 0;
      (**(code **)(*local_118 + 8))(local_118);
    }
    iVar2 = FUN_0041e280(param_1,param_3[3],bVar10);
    if (iVar2 == 0) {
      return local_110;
    }
    uVar4 = FUN_00404830(*(undefined4 *)(param_1 + 8),iVar2,0,2);
    if (0xa1c2 < uVar4) {
      if (uVar4 != 0xa1c3) {
        if (uVar4 != 0xa1c4) goto LAB_0041d663;
        local_118 = (int *)0x0;
        FUN_0041aa30(param_1,param_3[3],&local_118);
        if (local_118 != (int *)0x0) {
          FUN_005b8630(*(undefined4 *)(param_1 + 700));
          if (*(int *)(param_1 + 0x8c) == 4) {
            FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                         *(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0xca,0);
            uVar15 = *(undefined4 *)(param_1 + 0x88);
            uVar14 = 1;
LAB_0041d7b9:
            FUN_004ea590(*(undefined4 *)(param_1 + 700),uVar14,uVar15,0x1d);
          }
          else if (*(int *)(param_1 + 0x8c) == 3) {
            FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                         *(undefined4 *)(param_1 + 0x80));
            FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x198,0);
            uVar15 = *(undefined4 *)(param_1 + 0x88);
            uVar14 = 4;
            goto LAB_0041d7b9;
          }
          Transport_Suspend();
          (**(code **)(**(int **)(param_1 + 0x90) + 0x90))(*(int **)(param_1 + 0x90),local_118);
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          Transport_Resume(0);
          FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
          FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
        }
        iVar2 = FUN_00418e90(*(undefined4 *)(param_1 + 0x90));
        if (iVar2 == 0) {
          uVar15 = *(undefined4 *)(param_1 + 0x88);
          *(uint *)**(undefined4 **)(param_1 + 700) =
               *(uint *)**(undefined4 **)(param_1 + 700) | 0x8000;
          if (*(int *)(param_1 + 0x8c) == 3) {
            FUN_00422ed0(*(undefined4 *)(param_1 + 700),uVar15,1);
            return local_110;
          }
LAB_0041cab4:
          DestroyWindow(*(HWND *)(param_1 + 8));
          return local_110;
        }
        FUN_00419310(param_1);
        if ((int)param_3[3] < 1) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)(param_3[3] + -1);
        }
        SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,(WPARAM)piVar1,0);
        goto LAB_0041c989;
      }
      local_118 = (int *)0x0;
      FUN_0041aa30(param_1,param_3[3],&local_118);
      if (local_118 == (int *)0x0) goto LAB_0041d99a;
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      if (*(int *)(param_1 + 0x8c) == 4) {
        FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0xca,0);
        uVar15 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = 1;
LAB_0041d94a:
        FUN_004ea590(*(undefined4 *)(param_1 + 700),uVar14,uVar15,0x1d);
      }
      else if (*(int *)(param_1 + 0x8c) == 3) {
        FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x198,0);
        uVar15 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = 4;
        goto LAB_0041d94a;
      }
      Transport_Suspend();
      (**(code **)(**(int **)(param_1 + 0x90) + 0x98))(*(int **)(param_1 + 0x90),local_118,1);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      Transport_Resume(0);
      FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
LAB_0041d99a:
      FUN_00419310(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[3] + 1,0);
      FUN_0041a890(param_1,param_3[3] + 1);
      return local_110;
    }
    if (uVar4 != 0xa1c2) {
      if (uVar4 == 0) {
        return local_110;
      }
      if (uVar4 != 0xa1c1) {
LAB_0041d663:
        if (uVar4 < 0x206c) {
          return local_110;
        }
        if (0x2133 < uVar4) {
          return local_110;
        }
        FUN_005b8630(*(undefined4 *)(param_1 + 700));
        if (*(int *)(param_1 + 0x8c) == 4) {
          uVar15 = *(undefined4 *)(param_1 + 0x80);
          uVar14 = *(undefined4 *)(param_1 + 0x1bc);
          uVar11 = *(undefined4 *)(param_1 + 0x88);
          uVar13 = 1;
LAB_0041d6c9:
          FUN_005b4320(uVar13,uVar11,uVar14,0,uVar15);
        }
        else if (*(int *)(param_1 + 0x8c) == 3) {
          uVar15 = *(undefined4 *)(param_1 + 0x80);
          uVar14 = *(undefined4 *)(param_1 + 0x1bc);
          uVar11 = *(undefined4 *)(param_1 + 0x88);
          uVar13 = 4;
          goto LAB_0041d6c9;
        }
        SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,uVar4 - 0x206c,0);
        piVar1 = (int *)(uVar4 - 0x206c);
        goto LAB_0041c989;
      }
      FUN_0041aa30(param_1,param_3[3],&local_118);
      if (local_118 == (int *)0x0) {
        return local_110;
      }
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      if (*(int *)(param_1 + 0x8c) == 4) {
        FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x11b,0);
        uVar15 = param_3[3];
        uVar14 = *(undefined4 *)(param_1 + 0x88);
        uVar11 = *(undefined4 *)(param_1 + 700);
        uVar13 = 1;
LAB_0041d471:
        FUN_004ea900(uVar11,uVar13,uVar14,uVar15,0x1c);
      }
      else if (*(int *)(param_1 + 0x8c) == 3) {
        FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x1f8,0);
        uVar15 = param_3[3];
        uVar14 = *(undefined4 *)(param_1 + 0x88);
        uVar11 = *(undefined4 *)(param_1 + 700);
        uVar13 = 4;
        goto LAB_0041d471;
      }
      iVar2 = *local_118;
      iVar3 = (**(code **)(iVar2 + 0x50))(local_118);
      (**(code **)(iVar2 + 0x4c))(unaff_EBX,iVar3 != 0);
      FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
      if (*(int *)(param_1 + 0x8c) == 4) {
        uVar15 = *(undefined4 *)(param_1 + 0x1bc);
        uVar14 = *(undefined4 *)(param_1 + 0x88);
        uVar11 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x8c) != 3) goto LAB_0041d4e3;
        uVar15 = *(undefined4 *)(param_1 + 0x1bc);
        uVar14 = *(undefined4 *)(param_1 + 0x88);
        uVar11 = 4;
      }
      FUN_005b41d0(uVar11,uVar14,uVar15,0);
LAB_0041d4e3:
      FUN_00419310(param_1);
      InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      return unaff_EBP;
    }
    local_118 = (int *)0x0;
    FUN_0041aa30(param_1,param_3[3],&local_118);
    if (local_118 != (int *)0x0) {
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      if (*(int *)(param_1 + 0x8c) == 4) {
        FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0xca,0);
        uVar15 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = 1;
LAB_0041d5d7:
        FUN_004ea590(*(undefined4 *)(param_1 + 700),uVar14,uVar15,0x1d);
      }
      else if (*(int *)(param_1 + 0x8c) == 3) {
        FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                     *(undefined4 *)(param_1 + 0x80));
        FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x198,0);
        uVar15 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = 4;
        goto LAB_0041d5d7;
      }
      Transport_Suspend();
      (**(code **)(**(int **)(param_1 + 0x90) + 0x98))
                (*(int **)(param_1 + 0x90),local_118,0xffffffff);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      Transport_Resume(0);
      FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
    }
    FUN_00419310(param_1);
    SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,param_3[3] - 1,0);
    piVar1 = (int *)(param_3[3] + -1);
LAB_0041c989:
    FUN_0041a890(param_1,piVar1);
    return local_110;
  }
  if (iVar2 == 0x1001) {
    local_118 = (int *)0x0;
    FUN_0041aa30(param_1,param_3[3],&local_118);
    if (local_118 == (int *)0x0) goto LAB_0041daf9;
    FUN_005b8630(*(undefined4 *)(param_1 + 700));
    if (*(int *)(param_1 + 0x8c) == 4) {
      FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                   *(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0xca,0);
      uVar15 = *(undefined4 *)(param_1 + 0x88);
      uVar14 = 1;
LAB_0041daa2:
      FUN_004ea590(*(undefined4 *)(param_1 + 700),uVar14,uVar15,0x1d);
    }
    else if (*(int *)(param_1 + 0x8c) == 3) {
      FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                   *(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x198,0);
      uVar15 = *(undefined4 *)(param_1 + 0x88);
      uVar14 = 4;
      goto LAB_0041daa2;
    }
    Transport_Suspend();
    (**(code **)(**(int **)(param_1 + 0x90) + 0x98))
              (*(int **)(param_1 + 0x90),local_118,param_3[4] - param_3[3]);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    goto LAB_0041dada;
  }
  if (iVar2 != 0x1002) {
    return (int *)0x0;
  }
  FUN_0041aa30(param_1,param_3[3],&local_118);
  if (local_118 == (int *)0x0) {
    return local_110;
  }
  FUN_005b8630(*(undefined4 *)(param_1 + 700));
  if (*(int *)(param_1 + 0x8c) == 4) {
    FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                 *(undefined4 *)(param_1 + 0x80));
    FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x11b,0);
    uVar15 = param_3[3];
    uVar14 = *(undefined4 *)(param_1 + 0x88);
    uVar11 = *(undefined4 *)(param_1 + 700);
    uVar13 = 1;
LAB_0041dc1d:
    FUN_004ea900(uVar11,uVar13,uVar14,uVar15,0x1c);
  }
  else if (*(int *)(param_1 + 0x8c) == 3) {
    FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                 *(undefined4 *)(param_1 + 0x80));
    FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x1f8,0);
    uVar15 = param_3[3];
    uVar14 = *(undefined4 *)(param_1 + 0x88);
    uVar11 = *(undefined4 *)(param_1 + 700);
    uVar13 = 4;
    goto LAB_0041dc1d;
  }
  (**(code **)(*local_118 + 0x4c))(local_118,param_3[4] == 0);
  FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
  FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
  if (*(int *)(param_1 + 0x8c) == 4) {
    uVar15 = *(undefined4 *)(param_1 + 0x1bc);
    uVar14 = *(undefined4 *)(param_1 + 0x88);
    uVar11 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x8c) != 3) goto LAB_0041dc89;
    uVar15 = *(undefined4 *)(param_1 + 0x1bc);
    uVar14 = *(undefined4 *)(param_1 + 0x88);
    uVar11 = 4;
  }
  FUN_005b41d0(uVar11,uVar14,uVar15,0);
LAB_0041dc89:
  FUN_00419310(param_1);
  InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  return unaff_EBX;
}


