/* Module: vidcap30.exe
   Function: FUN_004d2f80
   Address: 004d2f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d2f80(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x131) {
    if (param_2 == 0x130) {
      if (*(int *)(LVar1 + 0x7c) != param_4) {
        FUN_004d1850(LVar1,param_4);
        return 1;
      }
    }
    else if (param_2 == 1) {
      iVar2 = _SfDlgUndropComboBox_4(param_1);
      if ((iVar2 == 0) && (iVar2 = FUN_004d2250(LVar1), iVar2 != 0)) {
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
        FUN_004d16a0(LVar1);
        return 1;
      }
    }
  }
  else {
    if (param_2 != 0x133) {
      if (param_2 != 0x134) {
        return 0;
      }
      FUN_004d1fd0(LVar1);
      FUN_004d1260(LVar1);
      return 1;
    }
    FUN_004d1980(LVar1);
    FUN_004d1260(LVar1);
  }
  return 1;
}


