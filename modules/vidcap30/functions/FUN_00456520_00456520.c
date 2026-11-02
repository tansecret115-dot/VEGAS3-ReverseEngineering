/* Module: vidcap30.exe
   Function: FUN_00456520
   Address: 00456520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00456520(HWND param_1,uint param_2,undefined4 param_3,HWND param_4,int param_5)

{
  SHORT SVar1;
  HWND pHVar2;
  uint uVar3;
  LRESULT LVar4;
  int iVar5;
  uchar *_Source;
  WPARAM *pWVar6;
  undefined4 local_a8;
  WPARAM local_a4 [7];
  int local_88;
  CHAR local_80 [127];
  undefined1 local_1;
  
  pHVar2 = GetDlgItem(param_1,0x9c80);
  local_a8 = 4;
  pWVar6 = local_a4;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pWVar6 = 0;
    pWVar6 = pWVar6 + 1;
  }
  if (param_2 < 0x4ee) {
    if (param_2 == 0x4ed) {
switchD_0045666b_caseD_9cc4:
      if ((*(int *)(param_5 + 0xc) != 0) &&
         (((DAT_005bb7c4 != 0 || (SVar1 = GetKeyState(0x10), SVar1 < 0)) ||
          (iVar5 = SfMsgBox_CustomEx(param_1,0x1134,0,"&Do not show this message again",
                                     &DAT_005bb7c4,
                                     "Are you sure you want to delete the selected clips?"),
          iVar5 == 6)))) {
        for (local_a4[0] = SendMessageA(pHVar2,0x100c,0xffffffff,2); local_a4[0] != 0xffffffff;
            local_a4[0] = SendMessageA(pHVar2,0x100c,local_a4[0],2)) {
          SendMessageA(pHVar2,0x1005,0,(LPARAM)&local_a8);
          *(undefined4 *)(local_88 + 0x2b8) = 1;
        }
        FUN_00458000(param_1,param_5);
        return 0;
      }
    }
    else {
      if (0x4ea < param_2) {
        if (param_2 == 0x4eb) goto switchD_0045666b_caseD_9d80;
        if (param_2 != 0x4ec) {
          return 0;
        }
        goto switchD_0045666b_caseD_9cc5;
      }
      if (param_2 != 0x4ea) {
        if (param_2 == 1) {
          pHVar2 = GetDlgItem(param_1,1);
          if (param_4 != pHVar2) {
            return 0;
          }
          FUN_004577e0(param_1,param_5);
          EndDialog(param_1,1);
          return 0;
        }
        if (param_2 != 2) {
          if (param_2 != 0x4e2) {
            return 0;
          }
          FUN_00457f70(param_1,param_5,DAT_005bb214 == 0);
          return 0;
        }
        pHVar2 = GetDlgItem(param_1,2);
        if (param_4 != pHVar2) {
          return 0;
        }
        FUN_00457a40(param_1,param_5);
        EndDialog(param_1,2);
        return 0;
      }
switchD_0045666b_caseD_9d81:
      if (*(int *)(param_5 + 0xc) != 0) {
        _Source = (uchar *)(param_5 + 0x10);
        lstrcpynA(local_80,(LPCSTR)_Source,0x80);
        local_1 = 0;
        FUN_004569e0(param_1,_Source,0x7b);
        iVar5 = lstrcmpiA(local_80,(LPCSTR)_Source);
        if (iVar5 != 0) {
          FUN_00456c20(param_1,_Source);
          _mbscpy(&DAT_005bba9c,_Source);
          return 0;
        }
      }
    }
switchD_0045666b_caseD_9cc6:
    return 0;
  }
  switch(param_2) {
  case 0x9cc4:
    goto switchD_0045666b_caseD_9cc4;
  case 0x9cc5:
switchD_0045666b_caseD_9cc5:
    if (*(int *)(param_5 + 0xc) == 0) {
      return 0;
    }
    FUN_0041fa70(pHVar2);
    return 0;
  default:
    goto switchD_0045666b_caseD_9cc6;
  case 0x9cc9:
    uVar3 = GetWindowLongA(pHVar2,-0x10);
    SetWindowLongA(pHVar2,-0x10,uVar3 | 1);
    DAT_005bb21c = 1;
    FUN_00458000(param_1,param_5);
    return 0;
  case 0x9ccb:
    uVar3 = GetWindowLongA(pHVar2,-0x10);
    SetWindowLongA(pHVar2,-0x10,uVar3 & 0xfffffffe);
    DAT_005bb21c = 0;
    FUN_00458000(param_1,param_5);
    return 0;
  case 0x9d80:
switchD_0045666b_caseD_9d80:
    if (*(int *)(param_5 + 0xc) == 0) {
      return 0;
    }
    if (((DAT_005bb7c4 == 0) && (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
       (iVar5 = SfMsgBox_CustomEx(param_1,0x1134,0,"&Do not show this message again",&DAT_005bb7c4,
                                  "Are you sure you want to delete all of the captured clips?"),
       iVar5 != 6)) {
      return 0;
    }
    LVar4 = SendMessageA(pHVar2,0x1004,0,0);
    local_a4[0] = 0;
    if (0 < LVar4) {
      do {
        SendMessageA(pHVar2,0x1005,0,(LPARAM)&local_a8);
        *(undefined4 *)(local_88 + 0x2b8) = 1;
        local_a4[0] = local_a4[0] + 1;
      } while ((int)local_a4[0] < LVar4);
    }
    FUN_00458000(param_1,param_5);
    return 0;
  case 0x9d81:
    goto switchD_0045666b_caseD_9d81;
  }
}


