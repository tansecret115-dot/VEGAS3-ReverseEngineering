/* Module: vegas30.exe
   Function: FUN_00552ee0
   Address: 00552ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552ee0(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  LONG LVar1;
  int iVar2;
  undefined4 uVar3;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      LVar1 = param_4[7].unused;
      SetWindowLongA(param_1,8,LVar1);
      _SfSetEditCtrlFont_8(param_1,0);
      FUN_00552780(param_1,LVar1);
      return 1;
    }
    if (param_2 == 2) {
      FUN_00552d60(param_1,LVar1);
      return 1;
    }
    if (param_2 == 0x4e) {
      FUN_00552e50(param_1,LVar1,param_4);
      return 0;
    }
    if ((param_2 == 0x53) && (LVar1 != 0)) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_006451e8,0);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    FUN_00552ad0(param_1,LVar1,param_3 & 0xffff,param_4,param_3 >> 0x10);
  }
  else if (param_2 == 0x114) {
    iVar2 = GetDlgCtrlID(param_4);
    if ((LVar1 != 0) && (iVar2 == 0x435)) {
      uVar3 = _Trackbar_DefScrollProc_20(0x114,param_3,param_4,1,8);
      SfSetDlgItemText(param_1,0x435,&DAT_00619b28,uVar3);
      FUN_00552900(param_1,LVar1);
      return 0;
    }
  }
  return 0;
}


