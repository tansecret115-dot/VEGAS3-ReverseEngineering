/* Module: vegas30.exe
   Function: FUN_005553a0
   Address: 005553a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005553a0(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  LONG LVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      LVar1 = param_4[7].unused;
      SetWindowLongA(param_1,8,LVar1);
      _SfSetEditCtrlFont_8(param_1,0);
      FUN_00553e70(param_1,LVar1);
      return 1;
    }
    if (param_2 == 2) {
      if (LVar1 != 0) {
        FUN_00555280(param_1,LVar1);
        SetWindowLongA(param_1,8,0);
      }
      return 1;
    }
    if (param_2 == 0x4e) {
      if (LVar1 != 0) {
        uVar3 = FUN_00554d60(param_1,LVar1,param_4);
        return uVar3;
      }
    }
    else if ((param_2 == 0x53) && (LVar1 != 0)) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_00645218,0);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    if (LVar1 != 0) {
      uVar3 = FUN_00554650(param_1,param_3 & 0xffff,param_4,param_3 >> 0x10,LVar1);
    }
  }
  else if (param_2 == 0x114) {
    iVar2 = GetDlgCtrlID(param_4);
    if (iVar2 == 0x435) {
      FUN_00554530(param_1,LVar1,param_3,param_4);
      return 0;
    }
  }
  else if ((param_2 == 0x115) && (LVar1 != 0)) {
    uVar3 = FUN_005550d0(param_1,param_3,param_4,LVar1);
    return uVar3;
  }
  return uVar3;
}


