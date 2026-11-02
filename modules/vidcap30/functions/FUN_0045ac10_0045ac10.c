/* Module: vidcap30.exe
   Function: FUN_0045ac10
   Address: 0045ac10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ac10(HWND param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = FUN_0045ac50(param_1,param_3);
    if (iVar1 != 0) {
      EndDialog(param_1,1);
    }
  }
  else if (param_2 == 2) {
    EndDialog(param_1,2);
    return;
  }
  return;
}


