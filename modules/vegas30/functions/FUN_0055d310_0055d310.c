/* Module: vegas30.exe
   Function: FUN_0055d310
   Address: 0055d310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055d310(HWND param_1,int param_2,HWND param_3,int param_4)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM wParam;
  DWORD DVar3;
  HWND hWnd;
  HWND hWnd_00;
  int iVar4;
  LRESULT LVar5;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int iVar6;
  UINT Msg;
  LPSTR lpString;
  int iVar7;
  CHAR *lpString_00;
  LPARAM lParam;
  undefined4 local_10c;
  undefined4 *local_108;
  CHAR local_104 [260];
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (param_2 < 0x470) {
    if (param_2 == 0x46f) {
      if (((param_4 == 0) && (piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
        LVar5 = SendMessageA(param_3,0xf0,0,0);
        *(uint *)(*piVar1 + 0x2c) = (uint)(LVar5 == 1);
        return;
      }
    }
    else if (param_2 < 0x40f) {
      if ((((param_2 != 0x40e) && (param_2 != 9)) && (param_2 == 1000)) && (param_4 == 1)) {
        pHVar2 = GetDlgItem(param_1,1000);
        wParam = SendMessageA(pHVar2,0x147,0,0);
        if (wParam != 0xffffffff) {
          local_104[0] = '\0';
          SendMessageA(pHVar2,0x148,wParam,(LPARAM)local_104);
          DVar3 = GetFileAttributesA(local_104);
          if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) {
            iVar7 = 0x104;
            lpString = &DAT_0065941c;
            iVar6 = 0x480;
            pHVar2 = GetParent(param_1);
            GetDlgItemTextA(pHVar2,iVar6,lpString,iVar7);
            lpString_00 = local_104;
            DAT_00659520 = 1;
            iVar6 = 0x480;
            pHVar2 = GetParent(param_1);
            SetDlgItemTextA(pHVar2,iVar6,lpString_00);
            iVar6 = 0x480;
            pHVar2 = GetParent(param_1);
            hWnd = GetDlgItem(pHVar2,iVar6);
            lParam = 1;
            Msg = 0x28;
            pHVar2 = hWnd;
            hWnd_00 = GetParent(param_1);
            PostMessageA(hWnd_00,Msg,(WPARAM)pHVar2,lParam);
            PostMessageA(hWnd,0x100,0xd,0);
            return;
          }
        }
      }
    }
    else if (((param_2 == 0x438) && (param_4 == 0x200)) &&
            ((piVar1 != (int *)0x0 && (*piVar1 != 0)))) {
      GetDlgItemTextA(param_1,0x438,local_104,0x104);
      iVar4 = _SfTextToLongToken_8(local_104,0);
      iVar6 = *piVar1;
      iVar7 = *(int *)(iVar6 + 0x34);
      if ((iVar4 <= iVar7) || (*(int *)(iVar6 + 0x3c) + iVar7 <= iVar4)) {
        _SfLongToText_12(*(int *)(iVar6 + 0x3c) + -1 + iVar7,local_104,0);
        SetDlgItemTextA(param_1,0x438,local_104);
        return;
      }
    }
  }
  else if (param_2 == 0x470) {
    if (((param_4 == 0) && (piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
      LVar5 = SendMessageA(param_3,0xf0,0,0);
      *(uint *)(*piVar1 + 0x30) = (uint)(LVar5 == 1);
    }
  }
  else if (param_2 == 0x62d) {
    local_108 = (undefined4 *)0x0;
    iVar6 = FUN_0055c190(param_1,piVar1,&local_108);
    if ((iVar6 == 0) && (local_108 != (undefined4 *)0x0)) {
      local_10c = 0;
      iVar6 = (**(code **)*local_108)(local_108,&DAT_0060f158,&local_10c);
      if ((-1 < iVar6) && (unaff_ESI != (int *)0x0)) {
        iVar6 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI);
        if (iVar6 == 0) {
          (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,param_1);
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      return;
    }
  }
  else if (param_2 == 0x62e) {
    local_108 = (undefined4 *)0x0;
    iVar6 = FUN_0055c190(param_1,piVar1,&local_108);
    if ((iVar6 == 0) && (local_108 != (undefined4 *)0x0)) {
      local_10c = 0;
      iVar6 = (**(code **)*local_108)(local_108,&DAT_0060f158,&local_10c);
      if ((-1 < iVar6) && (unaff_ESI != (int *)0x0)) {
        iVar6 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI);
        if (iVar6 == 0) {
          (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,param_1);
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      return;
    }
  }
  return;
}


