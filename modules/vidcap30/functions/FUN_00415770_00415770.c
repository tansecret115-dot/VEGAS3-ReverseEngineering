/* Module: vidcap30.exe
   Function: FUN_00415770
   Address: 00415770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415770(HWND param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 1) {
    FUN_00415ac0(param_1,param_3);
    EndDialog(param_1,1);
  }
  else if (param_2 == 2) {
    EndDialog(param_1,2);
    return;
  }
  return;
}


