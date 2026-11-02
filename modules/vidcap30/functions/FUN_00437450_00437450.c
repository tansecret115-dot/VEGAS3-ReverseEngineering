/* Module: vidcap30.exe
   Function: FUN_00437450
   Address: 00437450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00437450(int param_1,uint param_2,int param_3,LPARAM param_4)

{
  HWND pHVar1;
  int iVar2;
  HCURSOR pHVar3;
  LPCSTR lpMultiByteStr;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  HWND pHVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  HWND local_32c;
  undefined8 local_328;
  HWND local_320;
  undefined8 local_31c;
  undefined8 local_314;
  CHAR local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  iVar2 = DAT_005bb838;
  local_32c = *(HWND *)(param_1 + 8);
  uVar12 = FUN_0042ea80(DAT_005bb838);
  local_314 = __alldiv(uVar12,10,0);
  pHVar8 = (HWND)0x0;
  iVar9 = 0;
  local_320 = (HWND)0x0;
  fVar11 = (float10)FUN_0042ed90(iVar2);
  local_31c = (double)fVar11;
  if (((0x9d2c < param_2) && (param_2 < 0x9d3c)) || ((0x9d65 < param_2 && (param_2 < 0x9d75)))) {
    iVar9 = FUN_0043a930(param_1,param_2);
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    goto switchD_00437891_caseD_1d3;
  }
  if (((0x9d12 < param_2) && (param_2 < 0x9d1d)) || ((0x9d22 < param_2 && (param_2 < 0x9d2d)))) {
    iVar9 = FUN_0043a9a0(param_1,param_2);
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    goto switchD_00437891_caseD_1d3;
  }
  if ((0x9d76 < param_2) && (param_2 < 0x9d7e)) {
    iVar7 = 0;
    puVar6 = &DAT_0058ada4;
    do {
      if (*puVar6 == param_2) {
        *(undefined4 *)(iVar2 + 0x3f0) = (&DAT_0058ada0)[iVar7 * 2];
        DAT_005bb810 = (&DAT_0058ada0)[iVar7 * 2];
        **(uint **)(iVar2 + 4) = **(uint **)(iVar2 + 4) | 1;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        break;
      }
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 1;
      uVar12 = local_328;
    } while (puVar6 < (uint *)0x58addc);
    goto switchD_00437891_caseD_1d3;
  }
  if (0x220 < param_2) {
    if (param_2 < 0x9d20) {
      if (param_2 == 0x9d1f) {
        iVar9 = FUN_0043f770(param_1);
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        goto switchD_00437891_caseD_1d3;
      }
      if (0x22c < param_2) {
        if (param_2 < 0x9cde) {
          if (param_2 == 0x9cdd) {
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            if ((*(byte *)(param_1 + 0x1ae8) & 4) == 0) {
              iVar9 = FUN_0043b8d0(param_1,3,1);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            }
          }
          else if (param_2 == 0x43e) {
            SendMessageA(DAT_005ba4bc,0x111,param_3 << 0x10 | 0x43e,param_4);
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          }
          else {
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            if ((param_2 == 0x9cdc) &&
               (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
               (*(byte *)(param_1 + 0x1ae8) & 2) == 0)) {
              iVar9 = FUN_0043b8d0(param_1,0,1);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            }
          }
        }
        else {
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          if ((param_2 == 0x9cde) &&
             (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
             (*(uint *)(param_1 + 0x1ae8) & 6) != 0)) {
            if ((*(int *)(param_1 + 0x1c0c) == 0) || ((*(uint *)(param_1 + 0x1ae8) & 0x40) == 0)) {
              iVar9 = FUN_0043b8d0(param_1,1,1);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            }
            else {
              iVar9 = FUN_0043b8d0(param_1,2,1);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            }
          }
        }
        goto switchD_00437891_caseD_1d3;
      }
      if (param_2 == 0x22c) {
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (DAT_005bba94 == 0) {
          iVar9 = FUN_00442ad0(param_1,1);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
        goto switchD_00437891_caseD_1d3;
      }
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      switch(param_2) {
      case 0x222:
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (((*(uint *)(param_1 + 0x1aec) & 0x800) == 0) ||
           (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), param_3 != 0x200)) break;
        GetWindowTextA(*(HWND *)(param_1 + 0x14f0),local_30c,0x104);
        local_328 = FUN_0045ae30(local_30c,(int)local_31c,local_31c._4_4_);
        goto LAB_00437f8f;
      case 0x224:
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) &&
           (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), param_3 == 0x200)) {
          GetWindowTextA(*(HWND *)(param_1 + 0x14f4),local_30c,0x104);
          local_328 = FUN_0045ae30(local_30c,(int)local_31c,local_31c._4_4_);
          FUN_0042eca0(iVar2,local_328);
          FUN_00441b30(param_1);
          uVar12 = local_328;
        }
        break;
      case 0x229:
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (DAT_005bba94 == 0) {
          iVar9 = FUN_004428c0(param_1);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
        break;
      case 0x22a:
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (DAT_005bba94 == 0) {
          FUN_00442a40(param_1);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
        break;
      case 0x22b:
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (DAT_005bba94 == 0) {
          iVar9 = FUN_00442ad0(param_1,0xffffffff);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
      }
      goto switchD_00437891_caseD_1d3;
    }
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    switch(param_2) {
    case 0x9d20:
      DAT_005bb530 = (uint)(DAT_005bb530 == 0);
      iVar9 = FUN_0043c6a0(param_1);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d21:
      FUN_004413a0(param_1,0,0x3fe00000);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d22:
      FUN_004413a0(param_1,0,0x3ff00000);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d43:
      if ((*(byte *)(param_1 + 0x1ae8) & 1) == 0) {
        DAT_005ba50c = DAT_005ba50c | 0x20;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      }
      else {
        DAT_005ba50c = DAT_005ba50c | 0x40;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      }
      break;
    case 0x9d64:
switchD_00437e9d_caseD_1f6:
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      if (((*(uint *)(param_1 + 0x1aec) & 0x400) == 0) ||
         (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), DAT_005bba94 != 0)) break;
      local_328 = FUN_0042ea00(iVar2);
      iVar2 = FUN_00460400(*(undefined4 *)(param_1 + 8),&local_328,"Go To Timecode",
                           "&Timecode to seek to$:");
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1bfc) = 0;
        *(undefined4 *)(param_1 + 0x1c00) = 0;
        *(undefined4 *)(param_1 + 0x1c04) = 0;
        *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffeff;
        iVar9 = FUN_0043a6c0(param_1,local_328);
      }
      goto LAB_00437f35;
    case 0x9d65:
      DAT_005bb564 = (uint)(DAT_005bb564 == 0);
      DAT_005ba50c = DAT_005ba50c | 0x10;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d8c:
      uVar5 = GetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10);
      SetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10,uVar5 | 3);
      DAT_005bb558 = 2;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d8d:
      uVar5 = GetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10);
      SetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10,uVar5 & 0xfffffffd | 1);
      DAT_005bb558 = 1;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    case 0x9d8e:
      uVar5 = GetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10);
      SetWindowLongA(*(HWND *)(param_1 + 0x1668),-0x10,uVar5 & 0xfffffffc);
      DAT_005bb558 = 0;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    }
    goto switchD_00437891_caseD_1d3;
  }
  if (param_2 == 0x220) {
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if (((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) &&
       (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), param_3 == 0x200)) {
      GetWindowTextA(*(HWND *)(param_1 + 0x14ec),local_30c,0x104);
      local_328 = FUN_0045ae30(local_30c,(int)local_31c,local_31c._4_4_);
      FUN_0042eb40(iVar2,local_328);
      FUN_00441b30(param_1);
      uVar12 = local_328;
    }
    goto switchD_00437891_caseD_1d3;
  }
  if (param_2 < 0x1db) {
    if (param_2 < 0x1d9) {
      if (param_2 < 0x1d2) {
        if (param_2 == 0x1d1) {
          if ((*(uint *)(param_1 + 0x1aec) & 0x200) != 0) {
            *(undefined4 *)(param_1 + 0x1c10) = 1;
            FUN_004041c0(0);
            pHVar3 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
            pHVar3 = SetCursor(pHVar3);
            iVar9 = FUN_0042b6d0(param_1 + 0xd8,~*(uint *)(param_1 + 0x1ae8) >> 0xc & 1);
            SetCursor(pHVar3);
            if (iVar9 < 0) {
              if (iVar9 == -0x7ffbfb50) {
                pcVar14 = 
                "An error occurred while previewing a file on the device.\n\nThe file format is not correct for the current device."
                ;
              }
              else {
                pcVar14 = 
                "An error occurred while previewing a file on the device.\n\nPlease ensure that your device can accept input (hr = 0x%08x)."
                ;
              }
              SfMsgBox(*(undefined4 *)(param_1 + 8),0x30,pcVar14,iVar9);
              InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
              UpdateWindow(*(HWND *)(param_1 + 8));
              iVar9 = 1;
            }
            *(undefined4 *)(param_1 + 0x1bfc) = 0;
            *(undefined4 *)(param_1 + 0x1c04) = 0;
            *(undefined4 *)(param_1 + 0x1c00) = 0;
            *(undefined4 *)(param_1 + 0x1c10) = 0;
          }
          pHVar8 = (HWND)0x26;
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
        else if (param_2 < 0x1cf) {
          if (param_2 == 0x1ce) {
            uVar5 = *(uint *)(param_1 + 0x1c34);
            if ((((uVar5 & 0x200) != 0) || ((uVar5 & 0x80) != 0)) ||
               ((((*(byte *)(param_1 + 0x1aec) & 0x20) != 0 || ((uVar5 & 0x20) != 0)) &&
                ((*(uint *)(param_1 + 0x1ae8) & 0x400) == 0)))) {
              iVar2 = FUN_004264b0(param_1 + 0xa48);
              if (iVar2 == 0) {
                *(int *)(param_1 + 0x1acc) = DAT_005bb4a4;
                SendMessageA(local_32c,0x111,0x1d6,0);
              }
              else if ((DAT_005bb4a4 == 0) || (DAT_005bb4ac == 0)) {
                *(undefined4 *)(param_1 + 0x1acc) = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x1acc) = 1;
              }
              SetTimer(*(HWND *)(param_1 + 8),5,
                       -(uint)(*(int *)(param_1 + 0x1acc) != 0) & DAT_005bb4a8,(TIMERPROC)0x0);
              if ((*(uint *)(param_1 + 0x1c34) & 0x20) == 0) {
                if ((*(uint *)(param_1 + 0x1c34) & 0x80) == 0) {
                  *(undefined4 *)(param_1 + 0x1bfc) = 0x1ce;
                }
                else {
                  *(undefined4 *)(param_1 + 0x1bfc) = 0x216;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x1bfc) = 0x1cf;
              }
              FUN_00409c30(DAT_005ba4c0,1);
            }
            pHVar8 = (HWND)0x24;
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          }
          else if (param_2 == 1) {
            pHVar1 = GetFocus();
            if (*(HWND *)(param_1 + 8) != pHVar1) {
              iVar2 = FUN_00434a00(param_1);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
              if (iVar2 == 0) goto switchD_00437891_caseD_1d3;
            }
            SendMessageA(*(HWND *)(param_1 + 8),0x100,0xd,0);
            SendMessageA(*(HWND *)(param_1 + 8),0x101,0xd,0);
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          }
          else {
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            if (param_2 == 2) {
              SendMessageA(*(HWND *)(param_1 + 8),0x100,0x1b,0);
              SendMessageA(*(HWND *)(param_1 + 8),0x101,0x1b,0);
              uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            }
          }
        }
        else if (param_2 == 0x1cf) {
          if (((*(byte *)(param_1 + 0x1aec) & 0x40) != 0) &&
             ((*(byte *)(param_1 + 0x1c34) & 0x20) == 0)) {
            if ((*(uint *)(param_1 + 0x1ac0) & 0x100) == 0) {
              SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d8,0);
              Sleep(3000);
            }
            *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 0x30;
            SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1db,0);
            *(undefined4 *)(param_1 + 0x1bfc) = 0x1cf;
            FUN_00409c30(DAT_005ba4c0,1);
          }
          pHVar8 = (HWND)0x24;
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
        else {
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          if (param_2 == 0x1d0) {
            if ((*(byte *)(param_1 + 0x1aec) & 0x80) != 0) {
              if (DAT_005bb210 != 0) {
                SendMessageA(*(HWND *)(param_1 + 8),0x111,0x1d7,0);
              }
              iVar9 = FUN_0042b280(param_1 + 0xa48);
            }
            pHVar8 = (HWND)0x24;
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          }
        }
        goto switchD_00437891_caseD_1d3;
      }
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      switch(param_2) {
      case 0x1d2:
        if ((*(uint *)(param_1 + 0x1aec) & 0x100) != 0) {
          *(undefined4 *)(param_1 + 0x1c10) = 1;
          FUN_004041c0(0);
          if ((*(byte *)(param_1 + 0x1ac0) & 4) == 0) {
            if ((DAT_005bb7b8 == 0) && (DAT_005bb570 == 0)) {
              local_32c = (HWND)SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 8),0x1134,0,
                                                  "&Do not show this message again",&DAT_005bb7b8,
                                                  "Print to tape is a destructive operation that will overwrite video on your tape.\n\nPlease make sure that you are using the correct tape and\nthat it is cued to the correct location.\n\nDo you want to continue?"
                                                 );
              InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
              UpdateWindow(*(HWND *)(param_1 + 8));
              if (local_32c != (HWND)0x6) goto LAB_00437dfd;
            }
            FUN_00409c30(DAT_005ba4c0,1);
            iVar9 = FUN_0042b720(param_1 + 0xd8,1);
            if (iVar9 < 0) {
              if (iVar9 == -0x7ffbfb50) {
                pcVar14 = 
                "An error occurred while printing a file to the device.\n\nThe file format is not correct for the current device."
                ;
              }
              else {
                pcVar14 = 
                "An error occurred while printing a file to the device.\n\nPlease ensure that your device can accept input (hr = 0x%08x)."
                ;
              }
              SfMsgBox(*(undefined4 *)(param_1 + 8),0x30,pcVar14,iVar9);
              InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
              UpdateWindow(*(HWND *)(param_1 + 8));
              iVar9 = 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x1bfc) = 0x1d2;
            }
          }
          else {
            SfMsgBox(*(undefined4 *)(param_1 + 8),0x30,
                     "An error occurred while printing a file to the device.\n\nThe tape is write protected. Please check the write protect tab on your tape."
                    );
          }
LAB_00437dfd:
          *(undefined4 *)(param_1 + 0x1c10) = 0;
        }
        uVar4 = FUN_0042b3b0(param_1 + 0xd8);
        FUN_00409c30(DAT_005ba4c0,uVar4);
        pHVar8 = (HWND)0x27;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      default:
        goto switchD_00437891_caseD_1d3;
      case 0x1d6:
        if ((((*(byte *)(param_1 + 0x1aec) & 4) == 0) && ((*(uint *)(param_1 + 0x1c34) & 0xa0) == 0)
            ) && (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
                 (*(uint *)(param_1 + 0x1c34) & 0x200) == 0)) goto switchD_00437891_caseD_1d3;
        *(undefined4 *)(param_1 + 0x1c00) = 0x1d6;
        *(undefined4 *)(param_1 + 0x1c04) = 0;
        *(undefined4 *)(param_1 + 0x1bf8) = 0;
        if ((*(uint *)(param_1 + 0x1ae8) & 1) == 0) {
          iVar2 = FUN_004264b0(param_1 + 0xa48);
          if (((iVar2 != 0) && (uVar5 = *(uint *)(param_1 + 0x1c34), (uVar5 & 0x100) != 0)) &&
             ((uVar5 & 0x80) == 0)) {
            *(undefined4 *)(param_1 + 0x1bfc) = 0;
            *(uint *)(param_1 + 0x1c34) = uVar5 & 0xfffffeff;
          }
          iVar9 = FUN_004263b0(param_1 + 0xa48);
          if (-1 < iVar9) {
            _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,0);
            *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffb;
          }
          pHVar8 = (HWND)((-(uint)(DAT_005bb7ac != 0) & 0xffffffdc) + 0x23);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          goto switchD_00437891_caseD_1d3;
        }
        iVar7 = param_1 + 0xd8;
        if ((*(uint *)(param_1 + 0x1ae8) & 0x200) == 0) {
          if ((*(byte *)(param_1 + 0x1c34) & 2) == 0) {
            iVar9 = FUN_00424fa0(iVar7,0,0);
            if (-1 < iVar9) {
              uVar12 = FUN_0042ea80(iVar2);
              iVar9 = FUN_00425150(iVar7,uVar12);
              if (-1 < iVar9) goto LAB_0043790e;
            }
          }
          else {
LAB_0043790e:
            iVar9 = FUN_00424c00(iVar7);
            if (-1 < iVar9) {
              *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffd;
            }
          }
        }
        pHVar8 = (HWND)0xb;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        goto switchD_00437891_caseD_1d3;
      case 0x1d7:
        *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffeff;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if ((*(byte *)(param_1 + 0x1aec) & 8) == 0) goto switchD_00437891_caseD_1d3;
        *(undefined4 *)(param_1 + 0x1c00) = 0x1d7;
        *(undefined4 *)(param_1 + 0x1c04) = 0;
        *(undefined4 *)(param_1 + 0x1bfc) = 0;
        *(undefined4 *)(param_1 + 0x1bf8) = 0;
        uVar5 = *(uint *)(param_1 + 0x1ae8);
        if ((uVar5 & 1) != 0) {
          if ((uVar5 & 0x200) != 0) {
            iVar9 = FUN_00424cd0(param_1 + 0xd8);
            if (-1 < iVar9) {
              *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 2;
              iVar9 = FUN_0043aea0(param_1);
            }
          }
          pHVar8 = (HWND)0xb;
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
          goto switchD_00437891_caseD_1d3;
        }
        if (((uVar5 & 0x80) != 0) && ((*(uint *)(param_1 + 0x1ac0) & 0x6100) == 0)) {
          iVar9 = FUN_00426c30(param_1 + 0xa48);
          if (-1 < iVar9) {
            _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,0);
            *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 4;
          }
        }
        break;
      case 0x1d8:
        *(undefined4 *)(param_1 + 0x1c00) = 0;
        *(undefined4 *)(param_1 + 0x1c04) = 0;
        *(undefined4 *)(param_1 + 0x1bfc) = 0;
        *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffecf;
        _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,0);
        uVar5 = *(uint *)(param_1 + 0x1ae8);
        *(undefined4 *)(param_1 + 0x1bf8) = 0;
        if ((uVar5 & 0x400) == 0) {
          if ((uVar5 & 0x800) == 0) {
            pHVar8 = (HWND)((-(uint)(DAT_005bb7ac != 0) & 0xffffffda) + 0x25);
          }
          else {
            pHVar8 = (HWND)0x27;
          }
        }
        else {
          pHVar8 = (HWND)0x24;
        }
        if ((uVar5 & 1) == 0) {
          iVar9 = FUN_00437100(param_1,uVar5 >> 7 & 1);
        }
        else {
          iVar2 = param_1 + 0xd8;
          iVar7 = FUN_0042b3b0(iVar2);
          if (iVar7 == 0) {
            iVar7 = FUN_00424c80(iVar2);
            if ((iVar7 != 0) || ((*(byte *)(param_1 + 0x1c34) & 2) != 0)) {
              iVar9 = FUN_00424fe0(iVar2);
              if (-1 < iVar9) {
                *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffd;
                iVar9 = FUN_0043aea0(param_1);
              }
            }
          }
          else {
            local_32c = (HWND)FUN_00441a60();
            bVar10 = DAT_005bb7bc == 0;
            local_320 = (HWND)0x0;
            iVar9 = FUN_0042b720(iVar2,0);
            if (-1 < iVar9) {
              *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffd;
              iVar9 = FUN_0043aea0(param_1);
            }
            local_31c = (double)((ulonglong)local_31c & 0xffffffff00000000);
            if (0 < (int)local_32c) {
              do {
                lpMultiByteStr = (LPCSTR)FUN_00441ab0((int)local_31c);
                if ((lpMultiByteStr[0x118] & 1U) != 0) {
                  MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_208,0x104);
                  local_2 = 0;
                  FUN_0045b7b0(0x665,local_208,0x208);
                  if (bVar10) {
                    bVar10 = false;
                    iVar2 = SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 8),0x1144,0,
                                              "&Do not show this message again",&DAT_005bb7bc,
                                              "Print to tape has completed.\n\nWould you like to delete the rendered files?\nYour original media files will not be affected."
                                             );
                    local_320 = (HWND)(uint)(iVar2 == 6);
                    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
                    UpdateWindow(*(HWND *)(param_1 + 8));
                  }
                  if (local_320 != (HWND)0x0) {
                    FUN_00441970(lpMultiByteStr);
                    FUN_0045b8c0(lpMultiByteStr);
                  }
                }
                iVar2 = (int)local_31c + 1;
                local_31c = (double)CONCAT44(local_31c._4_4_,iVar2);
              } while (iVar2 < (int)local_32c);
            }
            if (bVar10) {
              SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 8),0x1040,0,
                                "&Do not show this message again",&DAT_005bb7bc,
                                "Print to tape has completed.");
              InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
              UpdateWindow(*(HWND *)(param_1 + 8));
              pHVar8 = (HWND)0xb;
              goto LAB_00437cb9;
            }
          }
          pHVar8 = (HWND)0xb;
        }
LAB_00437cb9:
        iVar2 = FUN_00434f90(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_0042b3b0(param_1 + 0xd8);
          if (iVar2 == 0) {
            FUN_00409c30(DAT_005ba4c0,0);
            uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
            goto switchD_00437891_caseD_1d3;
          }
        }
        FUN_00409c30(DAT_005ba4c0,1);
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        goto switchD_00437891_caseD_1d3;
      }
    }
    else {
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      if ((*(byte *)(param_1 + 0x1aec) & 2) == 0) goto switchD_00437891_caseD_1d3;
      if ((*(uint *)(param_1 + 0x1ae8) & 1) != 0) {
        iVar9 = FUN_0043fd80(param_1,param_1 + 0xd8,param_2,param_3);
        pHVar8 = (HWND)0xb;
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        goto switchD_00437891_caseD_1d3;
      }
      iVar9 = FUN_0043fcb0(param_1,param_1 + 0xa48,param_2,param_3,
                           *(uint *)(param_1 + 0x1ae8) >> 7 & 1);
    }
LAB_00437f35:
    pHVar8 = (HWND)((-(uint)(DAT_005bb7ac != 0) & 0xffffffda) + 0x25);
    uVar12 = local_328;
    goto switchD_00437891_caseD_1d3;
  }
  uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
  switch(param_2) {
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(byte *)(param_1 + 0x1aec) & 1) == 0) break;
    if ((*(uint *)(param_1 + 0x1ae8) & 1) != 0) {
      iVar9 = FUN_0043fb80(param_1,param_1 + 0xd8,param_2,param_3,local_314);
      pHVar8 = (HWND)0xb;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      break;
    }
    iVar9 = FUN_0043f990(param_1,param_1 + 0xa48,param_2,param_3,
                         *(uint *)(param_1 + 0x1ae8) >> 7 & 1);
    goto LAB_00437f35;
  case 0x1df:
    uVar5 = *(uint *)(param_1 + 0x1ae8);
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if (((uVar5 & 0x800) == 0) &&
       (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), (uVar5 & 0x40) != 0)) {
      FUN_0043b8d0(param_1,((uVar5 & 1) != 0) + '\x01',1);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    }
    break;
  case 0x1f6:
    goto switchD_00437e9d_caseD_1f6;
  case 0x205:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) {
      local_328 = FUN_0042ea00(iVar2);
      FUN_0042eb40(iVar2,local_328);
      FUN_00441b30(param_1);
      uVar12 = local_328;
    }
    break;
  case 0x206:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0) break;
    local_328 = FUN_0042ea00(iVar2);
LAB_00437f8f:
    FUN_0042ebf0(iVar2,local_328);
    FUN_00441b30(param_1);
    uVar12 = local_328;
    break;
  case 0x207:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(byte *)(param_1 + 0x1aec) & 1) == 0) break;
    local_328 = FUN_0042ebb0(iVar2);
    goto LAB_00437fd2;
  case 0x208:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(byte *)(param_1 + 0x1aec) & 1) == 0) break;
    local_328 = FUN_0042ec60(iVar2);
LAB_00437fd2:
    FUN_0043a6c0(param_1,local_328);
    uVar12 = local_328;
    break;
  case 0x215:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) &&
        (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
        (*(uint *)(param_1 + 0x1aec) & 1) != 0)) &&
       (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
       (*(uint *)(param_1 + 0x1c34) & 0x100) == 0)) {
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 0x100;
      *(undefined4 *)(param_1 + 0x1bfc) = 0x215;
      uVar12 = FUN_0042ebb0(iVar2);
      uVar13 = FUN_0042ec60(iVar2);
      local_314 = uVar13;
      uVar13 = FUN_0042ed00(iVar2);
      iVar9 = FUN_00427660(param_1 + 0xa48,uVar12,local_314,uVar13);
      pHVar8 = local_320;
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    }
    break;
  case 0x216:
    uVar5 = *(uint *)(param_1 + 0x1c34);
    *(uint *)(param_1 + 0x1c34) = uVar5 & 0xfffffeff;
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) &&
        (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328),
        (*(uint *)(param_1 + 0x1aec) & 1) != 0)) &&
       (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), (uVar5 & 0x80) == 0)) {
      local_32c = (HWND)0x0;
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x1c6c),0,0xffffffff,0);
      iVar9 = FUN_00441fd0(param_1,&local_32c,0);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
      if ((iVar9 == 0) &&
         (uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328), local_32c != (HWND)0x0)) {
        local_320 = local_32c;
        iVar9 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x1c6c),0xffffffff,&local_320,1);
        uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        if (-1 < iVar9) {
          *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 0x80;
          *(undefined4 *)(param_1 + 0x1bfc) = 0x216;
          PostMessageA(*(HWND *)(param_1 + 8),0x410,1,0);
          FUN_00409c30(DAT_005ba4c0,1);
          FUN_0043fe90(param_1,param_1 + 0x1ae8);
          FUN_00440040(param_1,param_1 + 0x1ae8,param_1 + 0x1aec);
          FUN_0043efc0(param_1);
          uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
        }
      }
    }
    break;
  case 0x217:
    uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    if ((*(uint *)(param_1 + 0x1aec) & 0x800) != 0) {
      FUN_00441fd0(param_1,0,DAT_005bb500);
      uVar12 = CONCAT44(local_328._4_4_,(undefined4)local_328);
    }
  }
switchD_00437891_caseD_1d3:
  local_328 = uVar12;
  FUN_0043efc0(param_1);
  if (pHVar8 != (HWND)0xffffffff) {
    FUN_00404910(iVar9,pHVar8);
  }
  return 0;
}


