/* Module: vegas30.exe
   Function: FUN_004e9290
   Address: 004e9290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e9290(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  LONG LVar1;
  int iVar2;
  uint uVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  HWND hWnd;
  undefined4 uVar6;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x111) {
    if (param_2 != 0x110) {
      if (param_2 == 6) {
        FUN_00404790(-(uint)((short)param_3 != 0) & (uint)param_1);
        return 1;
      }
      if (param_2 != 0x53) {
        return 0;
      }
      _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_0063eea8,0);
      return 1;
    }
    SetWindowLongA(param_1,-0x15,(LONG)param_4);
    iVar2 = FUN_004e9500(param_1,param_4);
    if (iVar2 < 0) {
      FUN_004043e0(param_1,2);
      DestroyWindow(param_1);
      return 1;
    }
  }
  else {
    if (param_2 != 0x111) {
      if (param_2 != 0x20a) {
        return 0;
      }
      iVar2 = _SfWheel_GetControlWindow_12(param_3,param_4,0);
      if (iVar2 == 0) {
        return 0;
      }
      _SfWheel_ScrollWindow_16(iVar2,0x23e7,((int)param_3 < 0) + '\x01',0x23e7);
      return 0x69;
    }
    uVar3 = param_3 & 0xffff;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        FUN_004043e0(param_1,2);
        return 1;
      }
      if (uVar3 != 0x435) {
        return 0;
      }
      if ((short)(param_3 >> 0x10) == 1) {
        SendMessageA(param_4,0xb,0,0);
        LVar4 = SendMessageA(param_4,0x18b,0,0);
        LVar5 = SendMessageA(param_4,0x19f,0,0);
        SendMessageA(param_4,0x19b,0,(LVar4 + -1) * 0x10000 | LVar5 + 1U & 0xffff);
        SendMessageA(param_4,0x19b,1,LVar5 << 0x10);
        SendMessageA(param_4,0xb,1,0);
        iVar2 = LVar5 + 1;
        if (*(int *)(LVar1 + 4) == 0x9d08) {
          if (iVar2 < 2) {
            uVar6 = 0x10e;
          }
          else {
            uVar6 = 0x10f;
          }
        }
        else if (iVar2 < 2) {
          uVar6 = 0x110;
        }
        else {
          uVar6 = 0x111;
        }
        uVar6 = _SfGetString_8(DAT_00647204,uVar6);
        SfSetDlgItemText(param_1,0x475,uVar6,iVar2);
      }
      return 1;
    }
    hWnd = GetDlgItem(param_1,0x435);
    LVar4 = SendMessageA(hWnd,0x19f,0,0);
    FUN_004043e0(param_1,(LVar4 + 1) * 0x10000 | (uint)*(ushort *)(LVar1 + 4));
  }
  return 1;
}


