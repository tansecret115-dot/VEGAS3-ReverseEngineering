/* Module: g2plug.dll
   Function: FUN_5f80d370
   Address: 5f80d370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80d370(HWND param_1,int param_2,undefined4 param_3,uint param_4)

{
  int nIDCheckButton;
  
  CheckDlgButton(param_1,0x7fa,(uint)(param_2 != 0));
  FUN_5f80d350(param_1,param_2);
  nIDCheckButton = 0x843;
  switch(param_3) {
  case 0:
    nIDCheckButton = 0x843;
    break;
  case 1:
    nIDCheckButton = 0x844;
    break;
  case 2:
    nIDCheckButton = 0x845;
    break;
  case 3:
    nIDCheckButton = 0x846;
  }
  CheckRadioButton(param_1,0x843,0x846,nIDCheckButton);
  FUN_5f80ccc0(param_1,param_4);
  return;
}


