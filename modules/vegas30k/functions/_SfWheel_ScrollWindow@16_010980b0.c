/* Module: vegas30k.dll
   Function: _SfWheel_ScrollWindow@16
   Address: 010980b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
_SfWheel_ScrollWindow_16(int param_1,HWND param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  SHORT SVar3;
  uint uVar4;
  WPARAM wParam;
  int iVar5;
  int local_4;
  
                    /* 0x980b0  1300  _SfWheel_ScrollWindow@16 */
  if (param_5 == 0) {
    return;
  }
  iVar5 = param_3;
  local_4 = param_1;
  if (param_3 == 0x23e7) {
    bVar1 = false;
    bVar2 = false;
    uVar4 = GetWindowLongA(param_2,-0x10);
    if (((uVar4 & 0x200000) != 0) &&
       (GetScrollRange(param_2,1,&param_3,&local_4), param_3 != local_4)) {
      bVar1 = true;
    }
    if (((uVar4 & 0x100000) == 0) ||
       (GetScrollRange(param_2,0,&param_3,&local_4), param_3 == local_4)) {
LAB_01098157:
      if (!bVar1) {
        if (!bVar2) {
          return;
        }
        goto LAB_0109816a;
      }
      iVar5 = 2;
    }
    else {
      bVar2 = true;
      if (bVar1) {
        SVar3 = GetKeyState(0x10);
        if (-1 < SVar3) goto LAB_01098157;
        bVar1 = false;
      }
LAB_0109816a:
      iVar5 = 1;
    }
    if ((!bVar1) && (!bVar2)) {
      return;
    }
  }
  if (param_5 == 0x23e7) {
    if ((DAT_0120e8c8 != param_2) || (DAT_0120e8c4 == 0)) {
      SystemParametersInfoA(0x68,0,&DAT_0120e8c4,0);
      if (DAT_0120e8c4 == 0) {
        DAT_0120e8c4 = 3;
      }
      DAT_0120e8c8 = param_2;
    }
    param_5 = DAT_0120e8c4;
    if (iVar5 != 1) goto LAB_0109822f;
    param_5 = 1;
  }
  else {
    if (5 < param_5) {
      param_5 = 5;
    }
LAB_0109822f:
    if ((iVar5 == 2) && (param_5 == 0xffffffff)) {
      param_5 = 1;
      wParam = (param_4 != 1) + 2;
      goto LAB_010981e2;
    }
  }
  wParam = (WPARAM)(param_4 != 1);
LAB_010981e2:
  if (0 < (int)param_5) {
    uVar4 = param_5;
    do {
      SendMessageA(param_2,(iVar5 != 1) + 0x114,wParam,0);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


