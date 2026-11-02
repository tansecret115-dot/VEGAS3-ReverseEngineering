/* Module: vegas30.exe
   Function: FUN_00567d80
   Address: 00567d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00567d80(HWND param_1,uint *param_2)

{
  FUN_00567b80(param_1,param_2,1);
  CheckRadioButton(param_1,0x623,0x624,((*param_2 & 2) != 0) + 0x623);
  SetTimer(param_1,100,0x5dc,(TIMERPROC)0x0);
  return 1;
}


