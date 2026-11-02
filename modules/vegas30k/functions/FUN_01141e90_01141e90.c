/* Module: vegas30k.dll
   Function: FUN_01141e90
   Address: 01141e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01141e90(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x131) {
    if (param_2 == 0x130) {
      if (*(int *)(LVar1 + 0x7c) != param_4) {
        FUN_01140760(LVar1,param_4);
        return 1;
      }
    }
    else if (param_2 == 1) {
      iVar2 = _SfDlgUndropComboBox_4(param_1);
      if ((iVar2 == 0) && (iVar2 = FUN_01141160(LVar1), iVar2 != 0)) {
        EndDialog(param_1,1);
        return 1;
      }
    }
    else if (param_2 == 2) {
      iVar2 = _SfDlgUndropComboBox_4(param_1);
      if (iVar2 == 0) {
        EndDialog(param_1,0);
        return 1;
      }
    }
    else {
      if (param_2 != 0x12e) {
        return 0;
      }
      if (param_4 == 1) {
        FUN_011405b0(LVar1);
        return 1;
      }
    }
  }
  else {
    if (param_2 != 0x133) {
      if (param_2 != 0x134) {
        return 0;
      }
      FUN_01140ee0(LVar1);
      FUN_01140170(LVar1);
      return 1;
    }
    FUN_01140890(LVar1);
    FUN_01140170(LVar1);
  }
  return 1;
}


