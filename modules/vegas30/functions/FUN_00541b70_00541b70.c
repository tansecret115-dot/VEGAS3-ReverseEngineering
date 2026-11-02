/* Module: vegas30.exe
   Function: FUN_00541b70
   Address: 00541b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00541b70(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  CheckRadioButton(param_1,0x46e,0x5ee,0x46e);
  *param_3 = 0x46e;
  return 1;
}


