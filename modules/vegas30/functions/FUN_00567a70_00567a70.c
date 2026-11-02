/* Module: vegas30.exe
   Function: FUN_00567a70
   Address: 00567a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567a70(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  CHAR local_104 [260];
  
  _SfNanoTimeToTextEx_20(local_104,&DAT_0064b110,param_2,param_3,0);
  SetWindowTextA(param_1,local_104);
  return;
}


