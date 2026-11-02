/* Module: vegas30.exe
   Function: FUN_0041eb90
   Address: 0041eb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041eb90(undefined4 param_1,HWND param_2)

{
  CHAR local_104 [260];
  
  _SfLoadString_16(DAT_00647204,0x50cf,local_104,0x104);
  SetWindowTextA(param_2,local_104);
  return;
}


