/* Module: g2plug.dll
   Function: FUN_5f80cd50
   Address: 5f80cd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80cd50(HWND param_1,int param_2,undefined4 param_3)

{
  CheckDlgButton(param_1,0x7f9,(uint)(param_2 != 0));
  FUN_5f80cca0(param_1,param_2);
  switch(param_3) {
  case 0:
    param_2 = 0x83f;
    break;
  case 1:
    param_2 = 0x840;
    break;
  case 2:
    param_2 = 0x841;
    break;
  case 3:
    param_2 = 0x842;
  }
  CheckRadioButton(param_1,0x83f,0x842,param_2);
  return;
}


