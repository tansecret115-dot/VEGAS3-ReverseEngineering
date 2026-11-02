/* Module: vidcap30.exe
   Function: FUN_00460590
   Address: 00460590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460590(HWND param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 1) {
    FUN_00460610(param_1,param_4);
    EndDialog(param_1,1);
  }
  else {
    if (param_2 == 2) {
      EndDialog(param_1,2);
      return;
    }
    if (param_2 == 0x9c44) {
      if (param_3 == 0x100) {
        FUN_00460660(param_1,param_4);
        return;
      }
      if (param_3 == 0x200) {
        FUN_004606b0(param_1,param_4);
        return;
      }
    }
  }
  return;
}


