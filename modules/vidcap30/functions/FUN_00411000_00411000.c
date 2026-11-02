/* Module: vidcap30.exe
   Function: FUN_00411000
   Address: 00411000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411000(int param_1,int param_2,int param_3)

{
  LRESULT LVar1;
  CHAR local_40 [64];
  
  LVar1 = SendMessageA(DAT_005bbfe4,0x60a,0,0);
  if (LVar1 != param_1) {
    SendMessageA(DAT_005bbfe4,0x60c,0,param_1);
  }
  if (param_3 < 2) {
    SfPrintF(local_40,"$d %%",param_1);
  }
  else {
    SfPrintF(local_40,"$d %% ($d of $d)",param_1,param_2 + 1,param_3);
  }
  SetWindowTextA(DAT_005bbfe4,local_40);
  return;
}


