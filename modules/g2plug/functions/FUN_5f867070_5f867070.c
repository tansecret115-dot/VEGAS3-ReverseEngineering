/* Module: g2plug.dll
   Function: FUN_5f867070
   Address: 5f867070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f867070(HWND param_1,int param_2,undefined4 param_3,uint param_4)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x131) {
    if (param_2 == 0x130) {
      if (*(uint *)(LVar1 + 0x7c) != param_4) {
        FUN_5f865940(LVar1,param_4);
        return 1;
      }
    }
    else if (param_2 == 1) {
      iVar2 = FUN_5f82c580();
      if ((iVar2 == 0) && (iVar2 = FUN_5f866340(LVar1), iVar2 != 0)) {
        EndDialog(param_1,1);
        return 1;
      }
    }
    else if (param_2 == 2) {
      iVar2 = FUN_5f82c580();
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
        FUN_5f865790(LVar1);
        return 1;
      }
    }
  }
  else {
    if (param_2 != 0x133) {
      if (param_2 != 0x134) {
        return 0;
      }
      FUN_5f8660c0(LVar1);
      FUN_5f865350(LVar1);
      return 1;
    }
    FUN_5f865a70(LVar1);
    FUN_5f865350(LVar1);
  }
  return 1;
}


