/* Module: sfpaplug.dll
   Function: FUN_0044a110
   Address: 0044a110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044a110(HWND param_1,int param_2,undefined4 param_3,uint param_4)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x131) {
    if (param_2 == 0x130) {
      if (*(uint *)(LVar1 + 0x7c) != param_4) {
        FUN_004489e0(LVar1,param_4);
        return 1;
      }
    }
    else if (param_2 == 1) {
      iVar2 = FUN_00444450();
      if ((iVar2 == 0) && (iVar2 = FUN_004493e0(LVar1), iVar2 != 0)) {
        EndDialog(param_1,1);
        return 1;
      }
    }
    else if (param_2 == 2) {
      iVar2 = FUN_00444450();
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
        FUN_00448830(LVar1);
        return 1;
      }
    }
  }
  else {
    if (param_2 != 0x133) {
      if (param_2 != 0x134) {
        return 0;
      }
      FUN_00449160(LVar1);
      FUN_004483f0(LVar1);
      return 1;
    }
    FUN_00448b10(LVar1);
    FUN_004483f0(LVar1);
  }
  return 1;
}


