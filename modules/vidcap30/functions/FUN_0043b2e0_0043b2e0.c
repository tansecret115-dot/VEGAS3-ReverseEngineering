/* Module: vidcap30.exe
   Function: FUN_0043b2e0
   Address: 0043b2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043b3da) */

int FUN_0043b2e0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  HWND pHVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  longlong lVar12;
  UINT Msg;
  uint wParam;
  char *pcVar13;
  int local_30;
  int local_28;
  undefined4 uStack_24;
  double local_20;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar3 = param_1;
  iVar7 = DAT_005bb838;
  local_18 = DAT_005bb838;
  FUN_0042f0a0(DAT_005bb838);
  iVar4 = FUN_0042f360(iVar7);
  if (iVar4 != 0) {
    FUN_0043aea0(param_1);
  }
  uVar9 = *(int *)(param_1 + 0x1c4c) + *(int *)(param_1 + 0x1c48);
  *(uint *)(param_1 + 0x1c4c) = uVar9;
  param_1 = 0;
  local_30 = 0;
  bVar10 = DAT_005bb45c <= uVar9;
  iVar1 = iVar3 + 0xa48;
  if (bVar10) {
    *(undefined4 *)(iVar3 + 0x1c4c) = 0;
  }
  local_c = *(undefined4 *)(iVar3 + 0x1ab8);
  local_8 = *(undefined4 *)(iVar3 + 0x1abc);
  local_4 = *(uint *)(iVar3 + 0x1ac0);
  if (iVar4 == 0) {
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    if ((*(uint *)(iVar3 + 0x1ac4) & 1) != 0) {
      if ((*(uint *)(iVar3 + 0x1ac4) & 2) == 0) {
        param_1 = FUN_004289c0(iVar1,&local_14,0);
      }
      else if (((((local_4 & 1) != 0) && ((local_4 & 2) != 0)) &&
               (param_1 = FUN_004289c0(iVar1,&local_14,0), -1 < param_1)) &&
              (((*(uint *)(iVar3 + 0x1c34) & 0x100) != 0 &&
               (lVar12 = FUN_0042ec60(iVar7), lVar12 <= CONCAT44(local_10,local_14))))) {
        *(uint *)(iVar3 + 0x1c34) = *(uint *)(iVar3 + 0x1c34) & 0xfffffeff;
        SendMessageA(*(HWND *)(iVar3 + 8),0x111,0x1d7,0);
      }
    }
    FUN_0042e9c0(iVar7,local_14,local_10);
    FUN_0043adc0(iVar3);
    iVar5 = lstrcmpiA((LPCSTR)(iVar3 + 0x17ac),"No Capture Device");
    if ((iVar5 != 0) && (param_1 = FUN_00421a80(iVar1), -1 < param_1)) {
      fVar11 = (float10)FUN_0042ee90(iVar7);
      local_20 = (double)fVar11;
      param_1 = FUN_00421a20(iVar1,&local_28);
      if ((-1 < param_1) && (local_20 != (double)CONCAT44(uStack_24,local_28))) {
        **(uint **)(iVar7 + 4) = **(uint **)(iVar7 + 4) | 2;
      }
    }
  }
  if (!bVar10) goto LAB_0043b770;
  FUN_00426b50(iVar1,iVar3 + 0x1ac4);
  iVar7 = iVar3 + 0xd8;
  FUN_004251c0(iVar7,iVar3 + 0x1bf4);
  uVar6 = FUN_00425e00(iVar1);
  local_20 = (double)CONCAT44(local_20._4_4_,uVar6);
  local_28 = FUN_00428e00(iVar1);
  bVar2 = 1;
  if (iVar4 == 0) {
    iVar7 = lstrcmpiA((LPCSTR)(iVar3 + 0x17ac),"No Capture Device");
    if (iVar7 == 0) {
      FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Please connect a device");
    }
    else if ((local_28 == 0) && ((local_4 & 0x100) != 0)) {
      FUN_00425230(iVar1,0);
      if ((*(byte *)(iVar3 + 0x1c34) & 0x10) == 0) {
        pcVar13 = "Device stopped";
        goto LAB_0043b5da;
      }
      FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Capture Tape: stopping device");
    }
    else if (((local_4 & 1) == 0) || ((local_4 & 2) != 0)) {
      if (local_28 == 0) {
        if ((local_4 & 0x2000) == 0) {
          if ((local_4 & 0x4000) != 0) {
            FUN_00425230(iVar1,0);
            if ((*(byte *)(iVar3 + 0x1c34) & 0x10) != 0) {
              pcVar13 = "Capture Tape: rewinding device";
              goto LAB_0043b5da;
            }
            FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Device rewind");
            goto LAB_0043b67e;
          }
          goto LAB_0043b5af;
        }
        FUN_00425230(iVar1,0);
        pcVar13 = "Device fast-forward";
      }
      else {
LAB_0043b5af:
        if (local_20._0_4_ != 0) {
          FUN_00425230(iVar1,DAT_005bb560 != 0);
          uVar6 = *(undefined4 *)(iVar3 + 0xd4);
          goto LAB_0043b677;
        }
        if (local_28 != 0) {
          pcVar13 = "Preview suspended during capture";
          goto LAB_0043b5da;
        }
        pcVar13 = "Preview is turned off";
      }
      FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,pcVar13);
    }
    else {
      FUN_00425230(iVar1,0);
      FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Please insert a tape");
    }
  }
  else {
    iVar4 = FUN_00441a60();
    if (iVar4 == 0) {
      pcVar13 = "No file loaded";
LAB_0043b5da:
      FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,pcVar13);
    }
    else {
      iVar4 = FUN_0042b3b0(iVar7);
      if (iVar4 == 0) {
        iVar7 = FUN_0042b380(iVar7);
        if (iVar7 == 0) {
          uVar6 = *(undefined4 *)(iVar3 + 0xd4);
LAB_0043b677:
          FUN_00460850(uVar6,0xc,0,&DAT_00586c70);
          bVar2 = 0;
        }
        else {
          FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Preview on external monitor");
        }
      }
      else {
        FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Printing to tape");
      }
    }
  }
LAB_0043b67e:
  ShowWindow(*(HWND *)(iVar3 + 0xd0),-(uint)bVar2 & 5);
  iVar7 = 0;
  *(undefined4 *)(iVar3 + 0x1ac0) = 0;
  if ((*(byte *)(iVar3 + 0x1ac4) & 2) != 0) {
    local_30 = FUN_00426500(iVar1,iVar3 + 0x1ab8);
    uVar9 = *(uint *)(iVar3 + 0x1ac0);
    if ((uVar9 & 1) != 0) {
      if (((*(uint *)(iVar3 + 0x1c34) & 0x10) == 0) || ((uVar9 & 2) == 0)) {
        if ((*(int *)(iVar3 + 0x1abc) == 0) && (((uVar9 ^ local_4) & 2) != 0)) {
          uVar9 = uVar9 >> 1 & 1;
          wParam = local_4 >> 1 & 1;
          pHVar8 = *(HWND *)(iVar3 + 8);
          Msg = 0x415;
LAB_0043b755:
          PostMessageA(pHVar8,Msg,wParam,uVar9);
        }
      }
      else {
        if ((uVar9 & 0x100) != 0) {
          if ((uint)(5000 / (ulonglong)DAT_005bb45c) <= *(uint *)(iVar3 + 0x1ad0)) {
            uVar9 = 0;
            *(uint *)(iVar3 + 0x1c34) = *(uint *)(iVar3 + 0x1c34) & 0xffffffef;
            pHVar8 = *(HWND *)(iVar3 + 8);
            wParam = 0x1ce;
            Msg = 0x111;
            *(undefined4 *)(iVar3 + 0x1ad0) = 0;
            *(undefined4 *)(iVar3 + 0x1bfc) = 0x1cf;
            goto LAB_0043b755;
          }
          iVar7 = *(uint *)(iVar3 + 0x1ad0) + 1;
        }
        *(int *)(iVar3 + 0x1ad0) = iVar7;
      }
    }
  }
  FUN_0043fe90(iVar3,iVar3 + 0x1ae8);
  iVar7 = local_18;
LAB_0043b770:
  iVar7 = FUN_0043b030(iVar3,iVar1,iVar7,bVar10);
  if (iVar7 == 0) {
    if (!bVar10) {
      return param_1;
    }
    FUN_00411120(1);
    *(uint *)(iVar3 + 0x1c34) = *(uint *)(iVar3 + 0x1c34) & 0xfffffbff;
    if ((*(byte *)(iVar3 + 0x1ac4) & 2) != 0) {
      if (local_30 < 0) {
        if ((DAT_005baae0 == 0) &&
           (uVar9 = *(int *)(iVar3 + 0x1ad8) + 1, *(uint *)(iVar3 + 0x1ad8) = uVar9,
           DAT_005baae4 <= uVar9)) {
          *(undefined4 *)(iVar3 + 0x1ad8) = 0;
          FUN_00425230(iVar1,0);
          FUN_00460850(*(undefined4 *)(iVar3 + 0xd4),0xc,0,"Device communication error");
          KillTimer(*(HWND *)(iVar3 + 8),3);
          pHVar8 = GetFocus();
          SfMsgBox_CustomEx(DAT_005ba4bc,0x1030,0,"&Do not show this message again",&DAT_005baae0,
                            &DAT_00586f0c,"The current device has had a communication failure.\n\n",
                            "Please dismiss this dialog box, and then cycle the power on the device."
                           );
          SetFocus(pHVar8);
          *(uint *)(iVar3 + 0x1c34) = *(uint *)(iVar3 + 0x1c34) | 0x400;
        }
      }
      else {
        FUN_0043af10(iVar3,iVar1,iVar3 + 0x1ab8);
        *(undefined4 *)(iVar3 + 0x1ad8) = 0;
      }
    }
  }
  if (bVar10) {
    FUN_00440040(iVar3,iVar3 + 0x1ae8,iVar3 + 0x1aec);
    if (((DAT_005ba4c0 != 0) && (*(int *)(DAT_005ba4c0 + 0x70) != 0)) &&
       (pHVar8 = *(HWND *)(*(int *)(DAT_005ba4c0 + 0x70) + 8), pHVar8 != (HWND)0x0)) {
      PostMessageA(pHVar8,0x414,0,0);
    }
    FUN_0043efc0(iVar3);
  }
  return param_1;
}


