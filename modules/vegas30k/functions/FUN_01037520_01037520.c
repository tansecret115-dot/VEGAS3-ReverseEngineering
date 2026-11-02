/* Module: vegas30k.dll
   Function: FUN_01037520
   Address: 01037520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01037520(HWND param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  int *piVar4;
  tagRECT local_10;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (param_2 < 0x4f) {
    if (param_2 == 0x4e) {
      if (param_4[1] == 0x3e9) {
        if ((code *)piVar1[6] != (code *)0x0) {
          iVar2 = (*(code *)piVar1[6])(param_4,piVar1[3],piVar1[1],piVar1[2],piVar1[7]);
          SetWindowLongA(param_1,0,iVar2);
          if (iVar2 != 0) {
            return 1;
          }
        }
        if (param_4[2] == 4) {
          SendMessageA((HWND)*param_4,0x42f,0,0);
          return 0;
        }
      }
    }
    else if (param_2 == 2) {
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
        free(piVar1);
        return 0;
      }
    }
    else if (param_2 == 0x10) {
      SendMessageA(param_1,0x111,2,0);
      return 0;
    }
  }
  else if (param_2 == 0x110) {
    SetWindowLongA(param_1,8,(LONG)param_4);
    _SfWndCenter_16(param_1,0,0,0x8001);
    if ((LPCSTR)param_4[5] != (LPCSTR)0x0) {
      SetDlgItemTextA(param_1,0x3ea,(LPCSTR)param_4[5]);
    }
    piVar1 = param_4;
    if (*param_4 != 0) {
      SetWindowLongA(param_1,8,0);
      piVar1 = calloc(1,0x20);
      if (piVar1 == (int *)0x0) {
        DestroyWindow(param_1);
      }
      piVar4 = piVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *param_4;
        param_4 = param_4 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar1[5] = 0;
      SetWindowLongA(param_1,8,(LONG)piVar1);
    }
    pHVar3 = GetDlgItem(param_1,0x3e9);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_10);
      MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
      DestroyWindow(pHVar3);
      pHVar3 = (HWND)_SfViewField_CreateSpread_28
                               (param_1,&local_10,0x3e9,piVar1[3],piVar1[4],piVar1[1],piVar1[2]);
      SendMessageA(pHVar3,0x40f,0,1);
      SetFocus(pHVar3);
    }
  }
  else if (param_2 == 0x111) {
    param_3 = param_3 & 0xffff;
    if (param_3 == 1) {
      pHVar3 = GetDlgItem(param_1,0x3e9);
      if (pHVar3 != (HWND)0x0) {
        SendMessageA(pHVar3,0x430,0,0);
      }
    }
    else if (param_3 != 2) {
      return 0;
    }
    if (*piVar1 == 0) {
      EndDialog(param_1,param_3);
      return 0;
    }
    DestroyWindow(param_1);
    return 0;
  }
  return 0;
}


