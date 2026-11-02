/* Module: vegas30.exe
   Function: FUN_00411fd0
   Address: 00411fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411fd0(int param_1,undefined4 param_2)

{
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  WINDOWPLACEMENT local_2c;
  
  local_2c.length = 0x2c;
  local_34 = *(undefined4 *)(param_1 + 0x44);
  local_30 = *(undefined4 *)(param_1 + 0x48);
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  GetWindowPlacement(*(HWND *)(param_1 + 8),&local_2c);
  _SfSetMetricBinary_16(DAT_00647200,param_2,local_40,0x40);
  return;
}


